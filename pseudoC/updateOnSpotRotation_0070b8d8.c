// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateOnSpotRotation
// Entry Point: 0070b8d8
// Size: 124 bytes
// Signature: undefined updateOnSpotRotation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalLocomotionSystem::updateOnSpotRotation() */

void AnimalLocomotionSystem::updateOnSpotRotation(void)

{
  long in_x0;
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float local_8;
  float fStack_4;
  
  sincosf(*(float *)(in_x0 + 100) * (1.0 - *(float *)(in_x0 + 0x28) / *(float *)(in_x0 + 0x30)),
          &fStack_4,&local_8);
  fVar2 = *(float *)(in_x0 + 0x60);
  uVar3 = *(undefined4 *)(in_x0 + 0x58);
  lVar1 = *(long *)(in_x0 + 0x3b8);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  uVar3 = NEON_fmadd(uVar3,local_8,fStack_4 * -fVar2);
  *(undefined4 *)(lVar1 + 0xc) = uVar3;
  uVar3 = NEON_fmadd(*(undefined4 *)(in_x0 + 0x58),fStack_4,local_8 * *(float *)(in_x0 + 0x60));
  *(undefined4 *)(lVar1 + 0x14) = uVar3;
  return;
}


