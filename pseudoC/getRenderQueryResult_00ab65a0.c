// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderQueryResult
// Entry Point: 00ab65a0
// Size: 272 bytes
// Signature: undefined __thiscall getRenderQueryResult(VulkanRenderDevice * this, IRenderQuery * param_1, bool param_2, ulonglong * param_3)


/* VulkanRenderDevice::getRenderQueryResult(IRenderQuery*, bool, unsigned long long&) */

undefined8 __thiscall
VulkanRenderDevice::getRenderQueryResult
          (VulkanRenderDevice *this,IRenderQuery *param_1,bool param_2,ulonglong *param_3)

{
  ulong uVar1;
  IRenderQuery IVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  IVar2 = param_1[0x38];
  *param_3 = 0;
  if ((IVar2 == (IRenderQuery)0x0) || (param_1[0x39] == (IRenderQuery)0x0)) {
    if (param_2) {
      lVar5 = Watch::getCurrentTicks();
      do {
        readQueryResults();
        lVar6 = Watch::getCurrentTicks();
        dVar7 = (double)Watch::convertTicksToMs(lVar6 - lVar5);
        if (500.0 < dVar7) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar3 != 0)) {
                    /* try { // try from 00ab6678 to 00ab6683 has its CatchHandler @ 00ab66b0 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Timed out while waiting for GPU to catch up.\n");
          break;
        }
      } while ((param_1[0x38] == (IRenderQuery)0x0) || (param_1[0x39] == (IRenderQuery)0x0));
    }
    uVar4 = 0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x30);
    uVar4 = 1;
    if (*(ulong *)(param_1 + 0x28) <= uVar1) {
      uVar1 = 0;
    }
    *param_3 = *(ulong *)(param_1 + 0x28) - uVar1;
  }
  return uVar4;
}


