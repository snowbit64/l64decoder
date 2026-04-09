// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae9b4
// Entry Point: 007ae9b4
// Size: 164 bytes
// Signature: undefined FUN_007ae9b4(void)


void FUN_007ae9b4(TerrainDataPlane *param_1,float *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar4 = *param_2;
  fVar5 = param_2[4];
  fVar6 = param_2[8];
  RawTransformGroup::updateWorldTransformation();
  fVar5 = fVar5 - *(float *)(lVar1 + 0xec);
  fVar4 = fVar4 - *(float *)(lVar1 + 0xe8);
  fVar6 = fVar6 - *(float *)(lVar1 + 0xf0);
  uVar3 = NEON_fmadd(fVar4,*(undefined4 *)(lVar1 + 0xb8),fVar5 * *(float *)(lVar1 + 0xbc));
  uVar2 = NEON_fmadd(fVar4,*(undefined4 *)(lVar1 + 0xd8),fVar5 * *(float *)(lVar1 + 0xdc));
  fVar5 = (float)NEON_fmadd(fVar6,*(undefined4 *)(lVar1 + 0xc0),uVar3);
  fVar4 = (float)NEON_fmadd(fVar6,*(undefined4 *)(lVar1 + 0xe0),uVar2);
  fVar5 = (float)TerrainDataPlane::getDensityAtLocalPos(param_1,fVar5,fVar4);
  param_2[0x40] = fVar5;
  param_2[0x42] = 1.401298e-45;
  return;
}


