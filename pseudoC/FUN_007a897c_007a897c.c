// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a897c
// Entry Point: 007a897c
// Size: 392 bytes
// Signature: undefined FUN_007a897c(void)


void FUN_007a897c(RawTransformGroup *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  VisibilityCondition *pVVar3;
  undefined8 *puVar4;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = *(undefined8 **)(param_1 + 0xf8);
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_58 = uStack_58 & 0xffffff00;
  uStack_60 = 0;
  uStack_5c = 0;
  if (puVar4 != (undefined8 *)0x0) {
    local_70 = *puVar4;
    uStack_5c = (undefined4)*(undefined8 *)((long)puVar4 + 0x14);
    uStack_58 = (uint)((ulong)*(undefined8 *)((long)puVar4 + 0x14) >> 0x20);
    uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0xc) >> 0x20);
    uStack_68 = (undefined4)puVar4[1];
    uStack_64 = (undefined4)((ulong)puVar4[1] >> 0x20);
  }
  local_54 = *param_2;
  if (((VisibilityConditionManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&VisibilityConditionManager::getInstance()::instance), iVar2 != 0)
     ) {
    DAT_0107c5c0 = 0;
    DAT_0107c5b8 = 0;
    VisibilityConditionManager::getInstance()::instance = &DAT_0107c5b8;
                    /* try { // try from 007a8a70 to 007a8a7b has its CatchHandler @ 007a8b14 */
    Mutex::Mutex((Mutex *)&DAT_0107c5c8,true);
    __cxa_atexit(VisibilityConditionManager::~VisibilityConditionManager,
                 &VisibilityConditionManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&VisibilityConditionManager::getInstance()::instance);
  }
  pVVar3 = (VisibilityCondition *)
           VisibilityConditionManager::getVisibilityCondition
                     ((VisibilityConditionManager *)
                      &VisibilityConditionManager::getInstance()::instance,
                      (VisibilityConditionDesc *)&local_70);
  RawTransformGroup::setVisibilityCondition(param_1,pVVar3,false);
  if (((VisibilityConditionManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&VisibilityConditionManager::getInstance()::instance), iVar2 != 0)
     ) {
    DAT_0107c5c0 = 0;
    DAT_0107c5b8 = 0;
    VisibilityConditionManager::getInstance()::instance = &DAT_0107c5b8;
                    /* try { // try from 007a8ac8 to 007a8ad3 has its CatchHandler @ 007a8b04 */
    Mutex::Mutex((Mutex *)&DAT_0107c5c8,true);
    __cxa_atexit(VisibilityConditionManager::~VisibilityConditionManager,
                 &VisibilityConditionManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&VisibilityConditionManager::getInstance()::instance);
  }
  VisibilityConditionManager::releaseVisibilityCondition
            ((VisibilityConditionManager *)&VisibilityConditionManager::getInstance()::instance,
             pVVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


