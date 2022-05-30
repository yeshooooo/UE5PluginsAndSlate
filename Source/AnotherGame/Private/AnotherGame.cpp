#include "AnotherGame.h"


void FAnotherGameModule::StartupModule()
{
	FDefaultGameModuleImpl::StartupModule();


	
}

void FAnotherGameModule::ShutdownModule()
{
	FDefaultGameModuleImpl::ShutdownModule();
}
IMPLEMENT_MODULE(FAnotherGameModule, AnotherModule)