// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FileImporter.h"
#include "FileHelper.h"
#include "Containers/UnrealString.h"

#include "Engine/Texture.h"
#include "Misc/Paths.h"


#define LOCTEXT_NAMESPACE "FFileImporterModule"

UFileImporter::UFileImporter(class FObjectInitializer const & ObjectInitializer)
	: UFactory(ObjectInitializer) //usually written super not ufactory
{

	bEditorImport = true;   // binary / general file source
	
	SupportedClass = UVolumeTexture::StaticClass();

	Formats.Add(TEXT("mha;mha file type")); 
	Formats.Add(TEXT("mhd;mhd file type"));
}

void FFileImporterModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FFileImporterModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFileImporterModule, FileImporter)


UObject* UFileImporter::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename,
	const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{	
	FString file = FString("");
	bool loaded;

	//FString filepath = FString(Filename); //gets the filepath of the file being loaded ex: FString(TEXT("C:\\Users\\tzipkin\\Documents\\g4g2019\\Assn5_2\\Plugins\\FileImporter\\Source\\FileImporter\\Bucky.mhd"));
	
	TArray<FString> lineArr; //array to index the lines
	TArray<FString> spaceArr; //array to index the spaces

	loaded = FFileHelper::LoadFileToString(file, *Filename, FFileHelper::EHashOptions::None); //need to load file by giving file name //also writes the contents of the file to file
	
	FString newLine = FString("\n");  //used to index the lines into the lineArr
	FString space = FString(" "); //used to index the spaces for spaceArr
	FString search = FString(file); //load the contents of file into search  for newline


	//these variables will be overwritten with the if statements 
	FString image = FString("");
	int NDims;
	FVector DimSize;
	int ElementNumberofChannels;
	FString ElementType;
	FString ElementDataFile;

	search.ParseIntoArray(lineArr, *newLine, false); //index the lineArr with the contents of saerch
	
	//for loop to go through the lineArr and assing the variables thier values
	for (int i = 0; i < lineArr.Num(); i++) {
		lineArr[i].ParseIntoArray(spaceArr, *space, false); //load each line into 2nd array
		UE_LOG(LogTemp, Warning, TEXT("element loaded %d"), lineArr.Num());

			if (spaceArr[0] == "ObjectType") {
				image = spaceArr[2];
				UE_LOG(LogTemp, Warning, TEXT("image %s"), *image);
			}
			else if (spaceArr[0] == "NDims") {
				NDims = FCString::Atoi(*spaceArr[2]);
				UE_LOG(LogTemp, Warning, TEXT("ndims %d"), NDims);
			}
			else if (spaceArr[0] == "DimSize") {
				DimSize = FVector(FCString::Atoi(*spaceArr[2]), FCString::Atoi(*spaceArr[3]), FCString::Atoi(*spaceArr[4]));
				UE_LOG(LogTemp, Warning, TEXT("simsizes %s"), *DimSize.ToString());
			}
			else if (spaceArr[0] == "ElementNumberofChannels") {
				ElementNumberofChannels = FCString::Atoi(*spaceArr[2]);
				UE_LOG(LogTemp, Warning, TEXT("enc %d"), ElementNumberofChannels);
			}
			else if (spaceArr[0] == "ElementType") {
				ElementType = spaceArr[2];
				UE_LOG(LogTemp, Warning, TEXT("et %s"), *ElementType);
			}
			else if (spaceArr[0] == "ElementDataFile") {
				ElementDataFile = spaceArr[2];
				UE_LOG(LogTemp, Warning, TEXT("Edt %s"), *ElementDataFile);
			}
	}
	//just to check to make sure the file was loaded
	if (!loaded) {
		UE_LOG(LogTemp, Warning, TEXT("file not loaded"));
		return nullptr;
	}

	UE_LOG(LogTemp, Warning, TEXT("file loaded"));
	//UE_LOG(LogTemp, Warning, TEXT("filepath %s"), *filepath);
		
	TArray<uint8> binaryFile;
	FString fullpath = FPaths::GetPath(*Filename) + "/" + ElementDataFile;
	
	//FString fullpath = FPaths::GetPath(FPaths::ConvertRelativePathToFull(Filename) + "/" + ElementDataFile);

	//int binary;
	FFileHelper::LoadFileToArray(binaryFile, *fullpath);

	UE_LOG(LogTemp, Warning, TEXT("fullpath %s"), *fullpath);
	//check the binary is reading
	//for (int i = 0; i < binaryFile.Num(); i++) {
		//binary = binaryFile.GetData()[i];
	//	UE_LOG(LogTemp, Warning, TEXT("binaryFile= %d"), binary);
	//}

	
	UE_LOG(LogTemp, Warning, TEXT("filename %s"), *Filename);
	
	UVolumeTexture* texture  = NewObject <UVolumeTexture>(InParent, InName, Flags);

	texture->Source.Init(DimSize.X, DimSize.Y, DimSize.Z, 1, ETextureSourceFormat::TSF_G8, binaryFile.GetData());

	texture->SRGB = 0;

	texture->UpdateResource();

	return texture;
}



