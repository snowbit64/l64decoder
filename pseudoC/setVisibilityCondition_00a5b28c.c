// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVisibilityCondition
// Entry Point: 00a5b28c
// Size: 404 bytes
// Signature: undefined __thiscall setVisibilityCondition(RawTransformGroup * this, VisibilityCondition * param_1, bool param_2)


/* RawTransformGroup::setVisibilityCondition(VisibilityCondition const*, bool) */

void __thiscall
RawTransformGroup::setVisibilityCondition
          (RawTransformGroup *this,VisibilityCondition *param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  VisibilityCondition *pVVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == (VisibilityCondition *)0x0) {
    uVar1 = *(uint *)(this + 0x40);
    if (!param_2) {
      lVar4 = *(long *)(this + 0x20);
      *(uint *)(this + 0x40) = uVar1 & 0xfffffdff;
      if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x10) >> 4 & 1) == 0)) {
        param_1 = (VisibilityCondition *)0x0;
      }
      else {
        param_1 = *(VisibilityCondition **)(lVar4 + 0xf8);
      }
      goto LAB_00a5b334;
    }
    param_1 = (VisibilityCondition *)0x0;
  }
  else {
    uVar5 = NEON_cmtst(*(undefined8 *)param_1,*(undefined8 *)param_1,2);
    if ((((((((uint)uVar5 & 1 | ((ushort)((ulong)uVar5 >> 0x10) & 1) << 1 |
              ((ushort)((ulong)uVar5 >> 0x20) & 1) << 2 | ((ushort)((ulong)uVar5 >> 0x30) & 1) << 3)
             == 0 && *(int *)(param_1 + 8) == 0) && *(int *)(param_1 + 0xc) == 0) &&
          *(int *)(param_1 + 0x10) == 0) && *(int *)(param_1 + 0x14) == 0) &&
         param_1[0x18] == (VisibilityCondition)0x0) && (*(float *)(param_1 + 0x1c) == 1.0)) {
      param_1 = (VisibilityCondition *)0x0;
    }
    uVar1 = *(uint *)(this + 0x40);
  }
  *(uint *)(this + 0x40) = uVar1 | 0x200;
LAB_00a5b334:
  pVVar3 = *(VisibilityCondition **)(this + 0xf8);
  if (param_1 != pVVar3) {
    if (param_1 != (VisibilityCondition *)0x0) {
      FUN_00f276d0(1,param_1 + 0x24);
      pVVar3 = *(VisibilityCondition **)(this + 0xf8);
    }
    if (pVVar3 != (VisibilityCondition *)0x0) {
      if (((VisibilityConditionManager::getInstance()::instance & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&VisibilityConditionManager::getInstance()::instance),
         iVar2 != 0)) {
                    /* try { // try from 00a5b3e8 to 00a5b3f3 has its CatchHandler @ 00a5b420 */
        VisibilityConditionManager::VisibilityConditionManager
                  ((VisibilityConditionManager *)
                   &VisibilityConditionManager::getInstance()::instance);
        __cxa_atexit(VisibilityConditionManager::~VisibilityConditionManager,
                     &VisibilityConditionManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
        __cxa_guard_release(&VisibilityConditionManager::getInstance()::instance);
      }
      VisibilityConditionManager::releaseVisibilityCondition
                ((VisibilityConditionManager *)&VisibilityConditionManager::getInstance()::instance,
                 *(VisibilityCondition **)(this + 0xf8));
    }
    *(VisibilityCondition **)(this + 0xf8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00a5b39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x28))(this,0xc0,0);
    return;
  }
  return;
}


