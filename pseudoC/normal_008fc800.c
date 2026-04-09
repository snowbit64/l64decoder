// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: normal
// Entry Point: 008fc800
// Size: 312 bytes
// Signature: undefined __thiscall normal(HeightMap * this, int param_1, int param_2)


/* HeightMap::normal(int, int) const */

float __thiscall HeightMap::normal(HeightMap *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  
  iVar2 = *(int *)(this + 8);
  lVar12 = *(long *)this;
  fVar22 = (float)param_2;
  fVar15 = *(float *)(this + 0x10);
  uVar19 = *(undefined4 *)(this + 0x14);
  iVar4 = iVar2 + -1;
  iVar5 = *(int *)(this + 0xc) + -1;
  iVar3 = iVar2 * param_2;
  if (param_1 + 1 <= iVar4) {
    iVar4 = param_1 + 1;
  }
  iVar1 = param_1;
  if (param_1 < 2) {
    iVar1 = 1;
  }
  if (param_2 + 1 <= iVar5) {
    iVar5 = param_2 + 1;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  uVar20 = *(undefined4 *)(this + 0x18);
  uVar14 = NEON_ucvtf((uint)*(ushort *)(lVar12 + (long)(iVar4 + iVar3) * 2));
  uVar6 = NEON_ucvtf((uint)*(ushort *)(lVar12 + (long)(iVar3 + iVar1 + -1) * 2));
  uVar8 = NEON_ucvtf((uint)*(ushort *)(lVar12 + (long)(param_1 + iVar5 * iVar2) * 2));
  uVar10 = NEON_ucvtf((uint)*(ushort *)(lVar12 + (long)(param_1 + iVar2 * (param_2 + -1)) * 2));
  fVar13 = fVar15 * (float)iVar4 - fVar15 * (float)(iVar1 + -1);
  fVar17 = (float)NEON_fmadd(uVar14,uVar19,uVar20);
  fVar7 = (float)NEON_fmadd(uVar6,uVar19,uVar20);
  fVar9 = (float)NEON_fmadd(uVar8,uVar19,uVar20);
  fVar11 = (float)NEON_fmadd(uVar10,uVar19,uVar20);
  fVar18 = fVar15 * fVar22 - fVar15 * fVar22;
  fVar21 = fVar15 * (float)param_1 - fVar15 * (float)param_1;
  fVar16 = fVar15 * (float)iVar5 - fVar15 * (float)(param_2 + -1);
  fVar22 = (float)NEON_fmadd(fVar17 - fVar7,fVar21,(fVar9 - fVar11) * -fVar13);
  fVar15 = (float)NEON_fmadd(fVar18,fVar9 - fVar11,fVar16 * -(fVar17 - fVar7));
  uVar14 = NEON_fmadd(fVar13,fVar16,fVar21 * -fVar18);
  uVar19 = NEON_fmadd(fVar15,fVar15,fVar22 * fVar22);
  fVar17 = (float)NEON_fmadd(uVar14,uVar14,uVar19);
  fVar22 = 1.0;
  if (1e-06 < fVar17) {
    fVar22 = 1.0 / SQRT(fVar17);
  }
  return fVar15 * fVar22;
}


