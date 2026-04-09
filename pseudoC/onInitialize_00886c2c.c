// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00886c2c
// Size: 100 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTAnimationPlayDuration::onInitialize() */

undefined8 BTAnimationPlayDuration::onInitialize(void)

{
  undefined4 uVar1;
  long in_x0;
  ulong uVar2;
  float fVar3;
  
  uVar1 = BehaviorContext::addTimer
                    (*(BehaviorContext **)(in_x0 + 0x28),
                     *(float *)(*(BehaviorContext **)(in_x0 + 0x28) + 0xc0));
  *(undefined4 *)(in_x0 + 0x3c) = uVar1;
  uVar2 = AnimalAnimationSystem::isMoveActive();
  fVar3 = 0.0;
  if ((uVar2 & 1) != 0) {
    fVar3 = *(float *)(*(long *)(in_x0 + 0x28) + 0xc4);
  }
  AnimalAnimationSystem::setState
            (*(AnimalAnimationSystem **)(in_x0 + 0x30),*(uint *)(in_x0 + 0x38),0xffffffff,false,
             fVar3);
  return 1;
}


