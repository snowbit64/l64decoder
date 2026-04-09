// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateEulerFromMatrix
// Entry Point: 006ffa9c
// Size: 292 bytes
// Signature: undefined updateEulerFromMatrix(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TransformGroup::updateEulerFromMatrix() */

void TransformGroup::updateEulerFromMatrix(void)

{
  long in_x0;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(undefined4 *)(in_x0 + 0x78);
  *(undefined4 *)(in_x0 + 0x138) = *(undefined4 *)(in_x0 + 0xb0);
  uVar1 = NEON_fmadd(uVar1,uVar1,*(float *)(in_x0 + 0x7c) * *(float *)(in_x0 + 0x7c));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(in_x0 + 0x80),*(undefined4 *)(in_x0 + 0x80),uVar1);
  fVar2 = SQRT(fVar2);
  uVar1 = NEON_fmadd(*(undefined4 *)(in_x0 + 0x88),*(undefined4 *)(in_x0 + 0x88),
                     *(float *)(in_x0 + 0x8c) * *(float *)(in_x0 + 0x8c));
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(in_x0 + 0x90),*(undefined4 *)(in_x0 + 0x90),uVar1);
  fVar3 = SQRT(fVar3);
  uVar1 = NEON_fmadd(*(undefined4 *)(in_x0 + 0x98),*(undefined4 *)(in_x0 + 0x98),
                     *(float *)(in_x0 + 0x9c) * *(float *)(in_x0 + 0x9c));
  fVar4 = (float)NEON_fmadd(*(undefined4 *)(in_x0 + 0xa0),*(undefined4 *)(in_x0 + 0xa0),uVar1);
  *(undefined8 *)(in_x0 + 0x130) = *(undefined8 *)(in_x0 + 0xa8);
  *(float *)(in_x0 + 0x148) = fVar2;
  *(float *)(in_x0 + 0x14c) = fVar3;
  fVar4 = SQRT(fVar4);
  *(float *)(in_x0 + 0x150) = fVar4;
  if ((fVar2 < 1.00001) && (0.99999 < fVar2)) {
    *(undefined4 *)(in_x0 + 0x148) = 0x3f800000;
  }
  if ((fVar3 < 1.00001) && (0.99999 < fVar3)) {
    *(undefined4 *)(in_x0 + 0x14c) = 0x3f800000;
  }
  if ((fVar4 < 1.00001) && (0.99999 < fVar4)) {
    *(undefined4 *)(in_x0 + 0x150) = 0x3f800000;
  }
  Matrix4x4::getEulerAngles
            ((Matrix4x4 *)(undefined4 *)(in_x0 + 0x78),(Vector3 *)(in_x0 + 0x13c),
             (Vector3 *)(undefined4 *)(in_x0 + 0x148));
  *(uint *)(in_x0 + 0x40) = *(uint *)(in_x0 + 0x40) & 0xfffff7ff;
  return;
}


