// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 0088431c
// Size: 188 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTAnimationPlayWait::onInitialize() */

void BTAnimationPlayWait::onInitialize(void)

{
  long lVar1;
  undefined4 uVar2;
  long in_x0;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0xffffffff;
  AnimalAnimationSystem::findNextAnimation
            (*(AnimalAnimationSystem **)(in_x0 + 0x30),*(uint *)(in_x0 + 0x38),&local_2c);
  if (local_2c == 0xffffffff) {
    uVar4 = 2;
  }
  else {
    fVar5 = (float)AnimalAnimationSystem::getAnimationDuration
                             (*(AnimalAnimationSystem **)(in_x0 + 0x30),local_2c);
    uVar2 = BehaviorContext::addTimer(*(BehaviorContext **)(in_x0 + 0x28),fVar5);
    *(undefined4 *)(in_x0 + 0x3c) = uVar2;
    uVar3 = AnimalAnimationSystem::isMoveActive();
    fVar5 = 0.0;
    if ((uVar3 & 1) != 0) {
      fVar5 = *(float *)(*(long *)(in_x0 + 0x28) + 0xc4);
    }
    AnimalAnimationSystem::setState
              (*(AnimalAnimationSystem **)(in_x0 + 0x30),*(uint *)(in_x0 + 0x38),local_2c,false,
               fVar5);
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


