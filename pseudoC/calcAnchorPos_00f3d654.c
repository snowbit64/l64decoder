// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcAnchorPos
// Entry Point: 00f3d654
// Size: 96 bytes
// Signature: undefined calcAnchorPos(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btGeneric6DofConstraint::calcAnchorPos() */

void btGeneric6DofConstraint::calcAnchorPos(void)

{
  long in_x0;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 1.0;
  fVar3 = *(float *)(*(long *)(in_x0 + 0x30) + 0x19c);
  if (fVar3 != 0.0) {
    fVar2 = *(float *)(*(long *)(in_x0 + 0x28) + 0x19c);
    fVar2 = fVar2 / (fVar3 + fVar2);
  }
  fVar3 = 1.0 - fVar2;
  *(undefined4 *)(in_x0 + 0x528) = 0;
  uVar1 = NEON_fmadd(*(undefined4 *)(in_x0 + 0x4b8),fVar3,*(float *)(in_x0 + 0x478) * fVar2);
  *(ulong *)(in_x0 + 0x51c) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x470) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x4b0) >> 0x20) * fVar3,
                (float)*(undefined8 *)(in_x0 + 0x470) * fVar2 +
                (float)*(undefined8 *)(in_x0 + 0x4b0) * fVar3);
  *(undefined4 *)(in_x0 + 0x524) = uVar1;
  return;
}


