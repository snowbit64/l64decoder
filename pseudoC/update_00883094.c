// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00883094
// Size: 80 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTAnimationPlay::update() */

undefined8 BTAnimationPlay::update(void)

{
  long in_x0;
  ulong uVar1;
  float fVar2;
  
  uVar1 = AnimalAnimationSystem::isMoveActive();
  fVar2 = 0.0;
  if ((uVar1 & 1) != 0) {
    fVar2 = *(float *)(*(long *)(in_x0 + 0x28) + 0xc4);
  }
  AnimalAnimationSystem::setState
            (*(AnimalAnimationSystem **)(in_x0 + 0x30),*(uint *)(in_x0 + 0x38),0xffffffff,false,
             fVar2);
  return 1;
}


