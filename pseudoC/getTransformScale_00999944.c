// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTransformScale
// Entry Point: 00999944
// Size: 260 bytes
// Signature: undefined __cdecl getTransformScale(TransformGroup * param_1, Vector3 * param_2)


/* Bt2PhysicsUtil::getTransformScale(TransformGroup*, Vector3&) */

void Bt2PhysicsUtil::getTransformScale(TransformGroup *param_1,Vector3 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  RawTransformGroup::updateWorldTransformation();
  uVar1 = NEON_fmadd(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xb8),
                     *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xbc));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc0),uVar1);
  fVar2 = SQRT(fVar2);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 200),
                     *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0xcc));
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd0),uVar1);
  fVar3 = SQRT(fVar3);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xd8),
                     *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xdc));
  fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe0),uVar1);
  *(float *)param_2 = fVar2;
  *(float *)(param_2 + 4) = fVar3;
  fVar4 = SQRT(fVar4);
  *(float *)(param_2 + 8) = fVar4;
  if ((fVar2 < 1.00001) && (0.99999 < fVar2)) {
    *(undefined4 *)param_2 = 0x3f800000;
  }
  if ((fVar3 < 1.00001) && (0.99999 < fVar3)) {
    *(undefined4 *)(param_2 + 4) = 0x3f800000;
  }
  if ((fVar4 < 1.00001) && (0.99999 < fVar4)) {
    *(undefined4 *)(param_2 + 8) = 0x3f800000;
  }
  return;
}


