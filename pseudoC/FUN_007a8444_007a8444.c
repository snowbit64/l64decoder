// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8444
// Entry Point: 007a8444
// Size: 396 bytes
// Signature: undefined FUN_007a8444(void)


void FUN_007a8444(RawTransformGroup *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  VisibilityCondition *pVVar3;
  undefined8 *puVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = *(undefined8 **)(param_1 + 0xf8);
  local_70 = 0;
  local_58._0_4_ = (uint)local_58 & 0xffffff00;
  local_60 = 0;
  local_58 = CONCAT44(0x3f800000,(uint)local_58);
  if (puVar4 != (undefined8 *)0x0) {
    local_70 = *puVar4;
    local_58 = puVar4[3];
    local_60 = puVar4[2];
  }
  uStack_68 = CONCAT44(param_2[4],*param_2);
  if (((VisibilityConditionManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&VisibilityConditionManager::getInstance()::instance), iVar2 != 0)
     ) {
    DAT_0107c5c0 = 0;
    DAT_0107c5b8 = 0;
    VisibilityConditionManager::getInstance()::instance = &DAT_0107c5b8;
                    /* try { // try from 007a853c to 007a8547 has its CatchHandler @ 007a85e0 */
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
                    /* try { // try from 007a8594 to 007a859f has its CatchHandler @ 007a85d0 */
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


