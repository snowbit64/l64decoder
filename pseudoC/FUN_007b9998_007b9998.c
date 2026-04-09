// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9998
// Entry Point: 007b9998
// Size: 188 bytes
// Signature: undefined FUN_007b9998(void)


void FUN_007b9998(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  lVar1 = *(long *)(param_1 + 0x110);
  RawTransformGroup::updateWorldTransformation();
  fVar2 = param_2[4] - *(float *)(lVar1 + 0xec);
  fVar4 = *param_2 - *(float *)(lVar1 + 0xe8);
  fVar6 = param_2[8] - *(float *)(lVar1 + 0xf0);
  uVar3 = NEON_fmadd(fVar4,*(undefined4 *)(lVar1 + 0xb8),fVar2 * *(float *)(lVar1 + 0xbc));
  uVar5 = NEON_fmadd(fVar4,*(undefined4 *)(lVar1 + 0xd8),fVar2 * *(float *)(lVar1 + 0xdc));
  uVar3 = NEON_fmadd(fVar6,*(undefined4 *)(lVar1 + 0xc0),uVar3);
  uVar5 = NEON_fmadd(fVar6,*(undefined4 *)(lVar1 + 0xe0),uVar5);
  fVar4 = (float)VehicleNavigationMapGenerator::getCellCost(uVar3,uVar5,param_1);
  param_2[0x46] = 4.203895e-45;
  param_2[0x42] = 5.605194e-45;
  fVar2 = 0.0;
  if (ABS(fVar4) != INFINITY) {
    fVar2 = fVar4;
  }
  *(bool *)(param_2 + 0x44) = ABS(fVar4) == INFINITY;
  param_2[0x40] = fVar2;
  return;
}


