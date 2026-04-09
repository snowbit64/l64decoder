// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078c980
// Entry Point: 0078c980
// Size: 388 bytes
// Signature: undefined FUN_0078c980(void)


void FUN_0078c980(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_8;
  float fStack_4;
  
  fVar4 = param_1[0xc];
  fVar1 = param_1[0x10];
  fVar2 = param_1[0x14];
  sincosf(param_1[8],&fStack_6c,&local_70);
  fVar14 = fStack_6c * -0.0;
  uVar15 = NEON_fmadd(fStack_6c,0,local_70);
  fVar5 = (float)NEON_fnmsub(local_70,0,fStack_6c);
  fVar12 = fStack_6c + local_70 * 0.0;
  uVar9 = NEON_fmadd(fStack_6c,0,local_70 * 0.0);
  fVar3 = (float)NEON_fmadd(local_70,0,fVar14);
  sincosf(param_1[4],&fStack_64,&local_68);
  uVar11 = NEON_fmadd(uVar15,fStack_64,local_68 * 0.0);
  uVar15 = NEON_fmadd(uVar15,local_68,fStack_64 * -0.0);
  uVar16 = NEON_fmadd(fVar12,fStack_64,local_68 * 0.0);
  uVar6 = NEON_fmadd(fVar12,local_68,fStack_64 * -0.0);
  uVar13 = NEON_fmadd(uVar9,fStack_64,local_68);
  uVar10 = NEON_fnmsub(uVar9,local_68,fStack_64);
  sincosf(*param_1,&fStack_4,&local_8);
  fVar8 = (float)NEON_fnmadd(local_70,0,-fVar14);
  fVar7 = (float)NEON_fnmadd(local_70,0,--fStack_6c);
  fVar5 = (float)NEON_fmadd(uVar11,fStack_4,fVar5 * local_8);
  fVar12 = (float)NEON_fmadd(uVar16,fStack_4,local_8 * (local_70 + fVar14));
  uVar16 = NEON_fmadd(uVar16,local_8,fStack_4 * -(local_70 + fVar14));
  param_1[0x42] = 5.605194e-45;
  fVar3 = (float)NEON_fmadd(uVar13,fStack_4,local_8 * fVar3);
  uVar11 = NEON_fmadd(uVar11,local_8,fStack_4 * fVar7);
  uVar9 = NEON_fmadd(uVar13,local_8,fStack_4 * fVar8);
  param_1[0x46] = 5.605194e-45;
  uVar15 = NEON_fmadd(fVar4,uVar15,fVar1 * fVar5);
  uVar10 = NEON_fmadd(fVar4,uVar10,fVar1 * fVar3);
  uVar6 = NEON_fmadd(fVar4,uVar6,fVar1 * fVar12);
  param_1[0x4a] = 5.605194e-45;
  fVar3 = (float)NEON_fmadd(fVar2,uVar11,uVar15);
  fVar1 = (float)NEON_fmadd(fVar2,uVar9,uVar10);
  fVar2 = (float)NEON_fmadd(fVar2,uVar16,uVar6);
  param_1[0x40] = fVar3;
  param_1[0x48] = fVar1;
  param_1[0x44] = fVar2;
  return;
}


