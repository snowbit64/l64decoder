// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b97f4
// Entry Point: 007b97f4
// Size: 240 bytes
// Signature: undefined FUN_007b97f4(void)


void FUN_007b97f4(VehicleNavigationMapGenerator *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = *(long *)(param_1 + 0x110);
  fVar7 = *param_2;
  fVar8 = param_2[4];
  fVar9 = param_2[8];
  fVar10 = param_2[0xc];
  RawTransformGroup::updateWorldTransformation();
  fVar11 = 0.0 - *(float *)(lVar1 + 0xec);
  fVar2 = (fVar8 - fVar7) * 0.5;
  fVar8 = (fVar7 + fVar8) * 0.5 - *(float *)(lVar1 + 0xe8);
  fVar7 = (fVar10 - fVar9) * 0.5;
  uVar4 = NEON_fmadd(fVar8,*(float *)(lVar1 + 0xb8),*(float *)(lVar1 + 0xbc) * fVar11);
  uVar6 = NEON_fmadd(fVar2,ABS(*(float *)(lVar1 + 0xb8)),ABS(*(float *)(lVar1 + 0xbc)) * 0.0);
  fVar9 = (fVar9 + fVar10) * 0.5 - *(float *)(lVar1 + 0xf0);
  uVar5 = NEON_fmadd(fVar8,*(float *)(lVar1 + 0xd8),*(float *)(lVar1 + 0xdc) * fVar11);
  uVar3 = NEON_fmadd(fVar2,ABS(*(float *)(lVar1 + 0xd8)),ABS(*(float *)(lVar1 + 0xdc)) * 0.0);
  fVar2 = (float)NEON_fmadd(fVar7,ABS(*(float *)(lVar1 + 0xc0)),uVar6);
  fVar8 = (float)NEON_fmadd(fVar9,*(float *)(lVar1 + 0xc0),uVar4);
  fVar9 = (float)NEON_fmadd(fVar9,*(float *)(lVar1 + 0xe0),uVar5);
  fVar7 = (float)NEON_fmadd(fVar7,ABS(*(float *)(lVar1 + 0xe0)),uVar3);
  VehicleNavigationMapGenerator::updateMap
            (param_1,fVar8 - fVar2,fVar2 + fVar8,fVar9 - fVar7,fVar7 + fVar9);
  return;
}


