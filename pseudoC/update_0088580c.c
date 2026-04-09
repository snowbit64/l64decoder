// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0088580c
// Size: 508 bytes
// Signature: undefined __thiscall update(DogBehaviorContext * this, float param_1)


/* DogBehaviorContext::update(float) */

void __thiscall DogBehaviorContext::update(DogBehaviorContext *this,float param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  AnimalAnimationSystem *this_00;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  StateMachine::update(param_1);
  BehaviorContext::updateTimers((BehaviorContext *)this,param_1);
  BehaviorTree::tick();
  piVar3 = *(int **)(this + 0xb0);
  if (*piVar3 == 0) goto LAB_008859d0;
  if ((this[0xcc] == (DogBehaviorContext)0x0) || (this[400] != (DogBehaviorContext)0x0)) {
    if ((this[0xcc] == (DogBehaviorContext)0x0) && (this[400] != (DogBehaviorContext)0x0)) {
      AnimalSteering::blockArriveEvent((AnimalSteering *)piVar3,false);
      this_00 = *(AnimalAnimationSystem **)(this + 0xa0);
      uVar8 = *(undefined4 *)(*(long *)(this + 0xb0) + 0x14);
      fVar7 = *(float *)(*(long *)(this + 0xb0) + 0x18);
      fVar7 = (float)NEON_fmadd(uVar8,uVar8,fVar7 * fVar7);
      if (fVar7 <= 3.24) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      goto LAB_00885888;
    }
  }
  else {
    AnimalSteering::blockArriveEvent((AnimalSteering *)piVar3,true);
    this_00 = *(AnimalAnimationSystem **)(this + 0xa0);
    uVar5 = 2;
LAB_00885888:
    AnimalAnimationSystem::setState(this_00,uVar5,0xffffffff,false,0.0);
  }
  this[400] = this[0xcc];
  if (this[0xcc] == (DogBehaviorContext)0x0) {
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0088591c to 00885923 has its CatchHandler @ 00885a08 */
    AnimalSteering::getEvents(*(AnimalSteering **)(this + 0xb0),(vector *)&local_60);
    pvVar4 = local_58;
    if (local_58 != local_60) {
      uVar6 = 0;
      do {
        piVar3 = *(int **)((long)local_60 + uVar6 * 8);
        iVar2 = *piVar3;
        if (iVar2 == 3) {
          AnimalAnimationSystem::setState
                    (*(AnimalAnimationSystem **)(this + 0xa0),0,0xffffffff,false,0.0);
LAB_00885958:
          *(undefined *)(piVar3 + 3) = 1;
        }
        else {
          if (iVar2 == 1) {
                    /* try { // try from 00885944 to 008859bf has its CatchHandler @ 00885a0c */
            AnimalAnimationSystem::setState
                      (*(AnimalAnimationSystem **)(this + 0xa0),0,0xffffffff,false,0.0);
            goto LAB_00885958;
          }
          if (iVar2 == 0) {
            AnimalAnimationSystem::setState
                      (*(AnimalAnimationSystem **)(this + 0xa0),1,0xffffffff,false,0.0);
            goto LAB_00885958;
          }
        }
        uVar6 = (ulong)((int)uVar6 + 1);
        pvVar4 = local_60;
      } while (uVar6 < (ulong)((long)local_58 - (long)local_60 >> 3));
    }
    if (pvVar4 != (void *)0x0) {
      local_58 = pvVar4;
      operator_delete(pvVar4);
    }
  }
  else {
    iVar2 = AnimalAnimationSystem::getState();
    if (iVar2 != 2) {
      AnimalAnimationSystem::setState
                (*(AnimalAnimationSystem **)(this + 0xa0),2,0xffffffff,false,0.0);
    }
  }
LAB_008859d0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


