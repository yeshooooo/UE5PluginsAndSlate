// Fill out your copyright notice in the Description page of Project Settings.
#include "AnotherGameInvoker.h"

#include "../../../Plugins/MyThirdLibPlugin/Source/Another/Public/AnotherInvoker.h"

void UAnotherGameInvoker::InvokeLib()
{
	UAnotherInvoker* Lib = NewObject<UAnotherInvoker>();
	Lib->InvokeLib();
}
