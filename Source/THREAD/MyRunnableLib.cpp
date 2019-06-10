#include "MyRunnableLib.h"
#include "Util/LogUtilLib.h"

#include "HAL/RunnableThread.h"

void UMyRunnableLib::TestMyRunnable()
{
	UE_LOG(MyLog, Log, TEXT("UMyRunnableLib::TestMyRunnable..."));
	
	//
	auto MyRun = new FMyRunnable();
	FRunnableThread* TH = FRunnableThread::Create(MyRun, TEXT("MyRunnableThread"));

	if( TH == nullptr )
	{
		UE_LOG(MyLog, Log, TEXT("FRunnableThread::Create returned nullptr!"));
	}
	else
	{
		UE_LOG(MyLog, Log, TEXT("(!) WAITING for thread to complete with WaitForCompletion (!)..."));
		TH->WaitForCompletion();
		UE_LOG(MyLog, Log, TEXT("(!) WAITING DONE (!)"));

		// WARNING!!! Very important: to delete the thread after it has been use!!!
		delete TH;
	}

	delete MyRun;

	UE_LOG(MyLog, Log, TEXT("UMyRunnableLib::TestMyRunnable DONE"));
}