#include "MyRunnable.h"
#include "Util/LogUtilLib.h"

bool FMyRunnable::Init()
{
	UE_LOG(MyLog, Log, TEXT("FMyRunnable::Init..."));
	UE_LOG(MyLog, Log, TEXT("FMyRunnable::Init DONE"));
	return true;
}

uint32 FMyRunnable::Run()
{
	UE_LOG(MyLog, Log, TEXT("FMyRunnable::Run..."));
	UE_LOG(MyLog, Log, TEXT("FMyRunnable::Run DONE"));
	return 0;
}

void FMyRunnable::Stop()
{
	UE_LOG(MyLog, Log, TEXT("FMyRunnable::Stop..."));
	UE_LOG(MyLog, Log, TEXT("FMyRunnable::Stop DONE"));
}