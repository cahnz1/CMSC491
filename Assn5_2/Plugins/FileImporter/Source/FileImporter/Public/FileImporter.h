// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"


#include "Factories/Factory.h"
#include "Engine/VolumeTexture.h"
#include "FileImporter.generated.h"



//#include "Misc/EnumClassFlags.h"



UCLASS(transient)

//the importer
class UFileImporter : public UFactory {
	GENERATED_UCLASS_BODY()

		enum class EHashOptions
	{
		None = 0,
		/** Enable the async task for verifying the hash for the file being loaded */
		EnableVerify = 1 << 0,
		/** A missing hash entry should trigger an error */
		ErrorMissingHash = 1 << 1
	};

	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename,
		const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;

	//UFileImporter::UFileImporter(class FObjectInitializer const& ObjectInitializer);

	//static void BufferToString(FString& Result, const uint8* Buffer, int32 Size);

	//static bool LoadFileToString(FString& Result, const TCHAR* Filename, EHashOptions VerifyFlags = EHashOptions::None);

	//UFileImporter(FObjectInitializer const& ObjectInitializer);  //idk about this line

};




//module interface
class FFileImporterModule : public IModuleInterface//, public UFactory
{
public:
	
	
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	

};
