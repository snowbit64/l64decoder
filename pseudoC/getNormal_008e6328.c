// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNormal
// Entry Point: 008e6328
// Size: 284 bytes
// Signature: undefined __thiscall getNormal(BaseTerrain * this, uint param_1, uint param_2, float * param_3)


/* BaseTerrain::getNormal(unsigned int, unsigned int, float*) const */

void __thiscall BaseTerrain::getNormal(BaseTerrain *this,uint param_1,uint param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  
  iVar4 = *(int *)(this + 0x90);
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 - 1;
  }
  lVar14 = *(long *)(this + 0x80);
  uVar6 = iVar4 - 1;
  iVar5 = iVar4 * param_2;
  uVar3 = uVar6;
  if (param_2 < uVar6) {
    uVar3 = param_2 + 1;
  }
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = param_1 - 1;
  }
  if (param_1 < uVar6) {
    uVar6 = param_1 + 1;
  }
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar14 + (ulong)(iVar5 + param_1) * 2));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar14 + (ulong)(iVar4 * iVar1 + param_1) * 2));
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar14 + (ulong)(uVar6 + iVar4 * iVar1) * 2));
  fVar8 = fVar8 - fVar7;
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar14 + (ulong)(uVar6 + iVar5) * 2));
  fVar10 = fVar10 - fVar7;
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar14 + (ulong)(uVar3 * iVar4 + param_1) * 2));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar14 + (ulong)(uVar3 * iVar4 + iVar2) * 2));
  fVar11 = fVar11 - fVar7;
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar14 + (ulong)(uint)(iVar5 + iVar2) * 2));
  fVar13 = fVar13 - fVar7;
  *param_3 = *(float *)(this + 0xa4) *
             (fVar13 + fVar13 + ((fVar12 - fVar7) - fVar11) +
                                ((((fVar8 - (fVar9 - fVar7)) + 0.0) - fVar10) - fVar10));
  param_3[1] = *(float *)(this + 0xa8) * 6.0;
  param_3[2] = *(float *)(this + 0xa4) *
               (fVar8 + (fVar13 - (fVar12 - fVar7)) +
                        (((fVar8 + 0.0 + ((fVar9 - fVar7) - fVar10)) - fVar11) - fVar11));
  return;
}


