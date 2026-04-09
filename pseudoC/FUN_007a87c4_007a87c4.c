// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a87c4
// Entry Point: 007a87c4
// Size: 388 bytes
// Signature: undefined FUN_007a87c4(void)


void FUN_007a87c4(RawTransformGroup *param_1,undefined *param_2)

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
  uStack_68 = 0;
  local_60 = 0;
  local_58 = CONCAT44(0x3f800000,(undefined4)local_58);
  if (puVar4 != (undefined8 *)0x0) {
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    local_58 = puVar4[3];
    local_60 = puVar4[2];
  }
  local_58 = CONCAT71(local_58._1_7_,*param_2);
  if (((VisibilityConditionManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&VisibilityConditionManager::getInstance()::instance), iVar2 != 0)
     ) {
    DAT_0107c5c0 = 0;
    DAT_0107c5b8 = 0;
    VisibilityConditionManager::getInstance()::instance = &DAT_0107c5b8;
                    /* try { // try from 007a88b4 to 007a88bf has its CatchHandler @ 007a8958 */
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
                    /* try { // try from 007a890c to 007a8917 has its CatchHandler @ 007a8948 */
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


