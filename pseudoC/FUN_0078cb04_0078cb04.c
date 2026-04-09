// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078cb04
// Entry Point: 0078cb04
// Size: 160 bytes
// Signature: undefined FUN_0078cb04(void)


void FUN_0078cb04(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  fVar1 = param_1[0x10];
  fVar2 = param_1[0x14];
  fVar4 = param_1[0x18];
  fVar5 = param_1[4];
  param_1[0x42] = 5.605194e-45;
  fVar6 = param_1[8];
  param_1[0x46] = 5.605194e-45;
  fVar7 = *param_1;
  param_1[0x4a] = 5.605194e-45;
  fVar10 = param_1[0xc];
  uVar8 = NEON_fmadd(fVar10,fVar1,fVar4 * fVar5);
  uVar11 = NEON_fmadd(fVar10,fVar2,fVar1 * fVar6);
  uVar12 = NEON_fmadd(fVar10,fVar4,fVar2 * fVar7);
  fVar3 = (float)NEON_fmsub(fVar6,fVar2,uVar8);
  uVar8 = NEON_fmsub(fVar7,fVar1,fVar2 * -fVar5);
  fVar9 = (float)NEON_fmsub(fVar7,fVar4,uVar11);
  fVar1 = (float)NEON_fmsub(fVar5,fVar1,uVar12);
  uVar8 = NEON_fmsub(fVar6,fVar4,uVar8);
  uVar11 = NEON_fmsub(uVar8,fVar7,fVar10 * fVar3);
  uVar12 = NEON_fmsub(uVar8,fVar5,fVar10 * fVar9);
  uVar8 = NEON_fmsub(uVar8,fVar6,fVar10 * fVar1);
  uVar11 = NEON_fmsub(fVar9,fVar6,uVar11);
  uVar12 = NEON_fmsub(fVar1,fVar7,uVar12);
  uVar8 = NEON_fmsub(fVar3,fVar5,uVar8);
  fVar1 = (float)NEON_fmadd(fVar5,fVar1,uVar11);
  fVar2 = (float)NEON_fmadd(fVar6,fVar3,uVar12);
  fVar3 = (float)NEON_fmadd(fVar7,fVar9,uVar8);
  param_1[0x40] = fVar1;
  param_1[0x44] = fVar2;
  param_1[0x48] = fVar3;
  return;
}


