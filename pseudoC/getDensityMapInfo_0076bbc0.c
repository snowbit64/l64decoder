// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityMapInfo
// Entry Point: 0076bbc0
// Size: 240 bytes
// Signature: undefined __thiscall getDensityMapInfo(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getDensityMapInfo(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getDensityMapInfo
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long **pplVar4;
  Logger *this_00;
  long lVar5;
  
  pplVar4 = (long **)FoliageSystemDesc::getMultiLayer
                               ((FoliageSystemDesc *)this,*(uint *)param_1,true);
  if (pplVar4 != (long **)0x0) {
    if (*pplVar4 == (long *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 0076bc70 to 0076bc77 has its CatchHandler @ 0076bcc0 */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0076bc7c to 0076bc7f has its CatchHandler @ 0076bcb0 */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: FoliageSystemDesc: no density map set\n");
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    else {
      uVar1 = (**(code **)(**pplVar4 + 0x58))();
      *(undefined4 *)(param_1 + 0x100) = uVar1;
      uVar1 = 1;
      lVar5 = **pplVar4;
      *(undefined4 *)(param_1 + 0x108) = 1;
      uVar2 = (**(code **)(lVar5 + 0x60))();
      *(undefined4 *)(param_1 + 0x110) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x118) = uVar1;
  }
  return;
}


