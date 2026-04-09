// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00881764
// Size: 520 bytes
// Signature: undefined __thiscall update(DeerBehaviorContext * this, float param_1)


/* DeerBehaviorContext::update(float) */

void __thiscall DeerBehaviorContext::update(DeerBehaviorContext *this,float param_1)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  StateMachine::update(param_1);
  BehaviorContext::updateTimers((BehaviorContext *)this,param_1);
  BehaviorTree::tick();
  if (this[0xcc] == (DeerBehaviorContext)0x0) {
    *(undefined4 *)(this + 0x134) = 0;
  }
  else {
    fVar7 = *(float *)(this + 0x134);
    *(float *)(this + 0x134) = fVar7 + param_1;
    if (((2000.0 < fVar7 + param_1) && (*(long *)(this + 0x128) != 0)) &&
       (*(long *)(this + 0x110) != 0)) {
      AnimalSteering::getPosition(*(AnimalSteering **)(this + 0xb0),(Vector3 *)&local_60);
      lVar4 = *(long *)(this + 0x120);
      RawTransformGroup::updateWorldTransformation();
      fVar7 = (float)local_60 - *(float *)(lVar4 + 0xe8);
      fVar10 = local_60._4_4_ - *(float *)(lVar4 + 0xec);
      fVar9 = local_58._0_4_ - *(float *)(lVar4 + 0xf0);
      uVar8 = NEON_fmadd(fVar10,fVar10,fVar7 * fVar7);
      fVar7 = (float)NEON_fmadd(fVar9,fVar9,uVar8);
      fVar9 = (*(float *)(this + 0x134) + -2000.0) / 1000.0;
      if (1.0 < fVar9) {
        fVar9 = 1.0;
        this[0x138] = (DeerBehaviorContext)0x1;
      }
      fVar7 = (float)NEON_fmadd(fVar9,0xc1700000,SQRT(fVar7));
      RawTransformGroup::setClipDistance(*(RawTransformGroup **)(this + 0x128),fVar7);
    }
  }
  if (**(int **)(this + 0xb0) != 0) {
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00881888 to 0088188f has its CatchHandler @ 0088196c */
    AnimalSteering::getEvents((AnimalSteering *)*(int **)(this + 0xb0),(vector *)&local_60);
    pvVar3 = local_58;
    if (local_58 != local_60) {
      uVar5 = 0;
      do {
        piVar6 = *(int **)((long)local_60 + uVar5 * 8);
        iVar1 = *piVar6;
        if (iVar1 == 3) {
          AnimalAnimationSystem::setState
                    (*(AnimalAnimationSystem **)(this + 0xa0),0,0xffffffff,false,0.0);
LAB_008818c4:
          *(undefined *)(piVar6 + 3) = 1;
        }
        else {
          if (iVar1 == 1) {
                    /* try { // try from 008818b0 to 0088192b has its CatchHandler @ 00881970 */
            AnimalAnimationSystem::setState
                      (*(AnimalAnimationSystem **)(this + 0xa0),0,0xffffffff,false,0.0);
            goto LAB_008818c4;
          }
          if (iVar1 == 0) {
            AnimalAnimationSystem::setState
                      (*(AnimalAnimationSystem **)(this + 0xa0),1,0xffffffff,false,0.0);
            goto LAB_008818c4;
          }
        }
        uVar5 = (ulong)((int)uVar5 + 1);
        pvVar3 = local_60;
      } while (uVar5 < (ulong)((long)local_58 - (long)local_60 >> 3));
    }
    if (pvVar3 != (void *)0x0) {
      local_58 = pvVar3;
      operator_delete(pvVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


