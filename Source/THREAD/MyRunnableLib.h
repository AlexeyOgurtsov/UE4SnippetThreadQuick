#pragma once

#include "MyRunnable.h"
#include "MyRunnableLib.generated.h"

UCLASS()
class UMyRunnableLib : public UBlueprintFunctionLibrary
{	
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Test)
	static void TestMyRunnable();
};