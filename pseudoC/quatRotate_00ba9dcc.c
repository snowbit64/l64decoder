// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quatRotate
// Entry Point: 00ba9dcc
// Size: 128 bytes
// Signature: undefined __cdecl quatRotate(btQuaternion * param_1, btVector3 * param_2)


/* quatRotate(btQuaternion const&, btVector3 const&) */

undefined4 quatRotate(btQuaternion *param_1,btVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  fVar4 = *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)param_2;
  fVar7 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 0xc);
  uVar9 = NEON_fmadd(fVar8,fVar3,fVar6 * fVar1);
  uVar10 = NEON_fmadd(fVar8,fVar4,fVar3 * fVar2);
  uVar12 = NEON_fmadd(fVar8,fVar1,fVar4 * fVar7);
  fVar5 = (float)NEON_fmsub(fVar2,fVar4,uVar9);
  uVar9 = NEON_fmsub(fVar7,fVar3,fVar4 * -fVar6);
  fVar4 = (float)NEON_fmsub(fVar7,fVar1,uVar10);
  fVar3 = (float)NEON_fmsub(fVar6,fVar3,uVar12);
  uVar9 = NEON_fmsub(fVar2,fVar1,uVar9);
  uVar10 = NEON_fmsub(uVar9,fVar7,fVar8 * fVar5);
  uVar12 = NEON_fmsub(uVar9,fVar6,fVar8 * fVar4);
  uVar9 = NEON_fmsub(uVar9,fVar2,fVar8 * fVar3);
  uVar10 = NEON_fmsub(fVar4,fVar2,uVar10);
  uVar12 = NEON_fmsub(fVar3,fVar7,uVar12);
  uVar11 = NEON_fmsub(fVar5,fVar6,uVar9);
  uVar9 = NEON_fmadd(fVar3,fVar6,uVar10);
  NEON_fmadd(fVar5,fVar2,uVar12);
  NEON_fmadd(fVar4,fVar7,uVar11);
  return uVar9;
}


