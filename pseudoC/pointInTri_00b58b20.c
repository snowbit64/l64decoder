// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointInTri
// Entry Point: 00b58b20
// Size: 176 bytes
// Signature: undefined __cdecl pointInTri(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, int param_5, int param_6)


/* MathUtil::pointInTri(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&, int, int) */

undefined8
MathUtil::pointInTri
          (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,int param_5,
          int param_6)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = -(ulong)((uint)param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_5 << 2;
  uVar2 = -(ulong)((uint)param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_6 << 2;
  fVar9 = *(float *)(param_3 + uVar1);
  fVar3 = *(float *)(param_2 + uVar1);
  fVar4 = *(float *)(param_4 + uVar1);
  fVar12 = *(float *)(param_3 + uVar2);
  fVar7 = *(float *)(param_2 + uVar2);
  fVar5 = *(float *)(param_1 + uVar2);
  fVar8 = *(float *)(param_4 + uVar2);
  uVar6 = *(undefined4 *)(param_1 + uVar1);
  fVar10 = (float)NEON_fmsub(fVar12 - fVar7,fVar3,fVar7 * (fVar9 - fVar3));
  fVar11 = (float)NEON_fmsub(fVar8 - fVar12,fVar9,fVar12 * (fVar4 - fVar9));
  fVar13 = (float)NEON_fmadd(fVar12 - fVar7,uVar6,fVar5 * -(fVar9 - fVar3));
  fVar9 = (float)NEON_fmadd(fVar8 - fVar12,uVar6,fVar5 * -(fVar4 - fVar9));
  if (0.0 < (fVar10 + fVar13) * (fVar9 + fVar11)) {
    fVar9 = (float)NEON_fmsub(fVar7 - fVar8,fVar4,fVar8 * (fVar3 - fVar4));
    fVar3 = (float)NEON_fmadd(fVar7 - fVar8,uVar6,fVar5 * -(fVar3 - fVar4));
    if (0.0 < (fVar10 + fVar13) * (fVar3 + fVar9)) {
      return 1;
    }
  }
  return 0;
}


