// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTriangleOppositeConvexNormal
// Entry Point: 00ba86d4
// Size: 548 bytes
// Signature: undefined __thiscall getTriangleOppositeConvexNormal(Bt2HeightfieldTerrainShape * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, int param_4, int param_5, btVector3 * param_6)


/* Bt2HeightfieldTerrainShape::getTriangleOppositeConvexNormal(btVector3 const&, btVector3 const&,
   btVector3 const&, int, int, btVector3&) const */

bool __thiscall
Bt2HeightfieldTerrainShape::getTriangleOppositeConvexNormal
          (Bt2HeightfieldTerrainShape *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3
          ,int param_4,int param_5,btVector3 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float *pfVar7;
  long lVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  bVar6 = false;
  if ((((-1 < param_4) && (-1 < param_5)) && (param_4 < *(int *)(this + 0x70))) &&
     (param_5 < *(int *)(this + 0x74))) {
    if (*(long *)(this + 0x78) == 0) {
      pfVar7 = (float *)(this + 0xac);
      fVar13 = (float)NEON_ucvtf((uint)*(ushort *)
                                        (*(long *)(this + 0x60) +
                                        (long)(param_4 + *(int *)(this + 0x40) * param_5) * 2));
      fVar15 = (float)param_5 - *(float *)(this + 0x54);
      fVar11 = ((float)param_4 - *(float *)(this + 0x50)) * *(float *)(this + 0xa4);
      fVar13 = *(float *)(this + 0x58) * fVar13 * *(float *)(this + 0xa8);
    }
    else {
      iVar1 = *(int *)(this + 0x68);
      iVar2 = *(int *)(this + 0x6c);
      iVar3 = *(int *)(this + 0x40);
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = param_4 / iVar1;
      }
      iVar5 = 0;
      if (iVar2 != 0) {
        iVar5 = param_5 / iVar2;
      }
      lVar8 = *(long *)(this + 0x60);
      fVar17 = *(float *)(this + 0x80) * (float)(ulong)(uint)(param_4 - iVar4 * iVar1);
      iVar1 = iVar3 + iVar3 * iVar5;
      fVar11 = *(float *)(this + 0x84) * (float)(ulong)(uint)(param_5 - iVar5 * iVar2);
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + (long)(iVar3 * iVar5 + iVar4 + 1) * 2));
      fVar13 = *(float *)(this + 0x58);
      if (fVar17 + fVar11 <= 1.0) {
        fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + (long)(iVar1 + iVar4) * 2));
        fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + (long)(iVar3 * iVar5 + iVar4) * 2));
        uVar12 = NEON_fmadd(fVar13 * fVar15,fVar17,fVar11 * fVar13 * fVar16);
        uVar12 = NEON_fmadd(fVar13 * fVar18,(1.0 - fVar17) - fVar11,uVar12);
        uVar9 = (undefined2)uVar12;
        uVar10 = (undefined2)((uint)uVar12 >> 0x10);
      }
      else {
        fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + (long)(iVar1 + iVar4) * 2));
        fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + (long)(iVar1 + iVar4 + 1) * 2));
        uVar12 = NEON_fmadd(fVar13 * fVar15,1.0 - fVar11,(1.0 - fVar17) * fVar13 * fVar16);
        uVar12 = NEON_fmadd(fVar13 * fVar18,fVar17 + fVar11 + -1.0,uVar12);
        uVar9 = (undefined2)uVar12;
        uVar10 = (undefined2)((uint)uVar12 >> 0x10);
      }
      pfVar7 = (float *)(this + 0x9c);
      uVar12 = NEON_ucvtf((uint)*(byte *)(*(long *)(this + 0x78) +
                                         (long)(param_4 + *(int *)(this + 0x70) * param_5)));
      fVar13 = (float)NEON_fmadd(uVar12,*(undefined4 *)(this + 0x90),CONCAT22(uVar10,uVar9));
      fVar13 = fVar13 * *(float *)(this + 0x98);
      fVar15 = (float)param_5 - *(float *)(this + 0x8c);
      fVar11 = ((float)param_4 - *(float *)(this + 0x88)) * *(float *)(this + 0x94);
    }
    fVar17 = *(float *)param_3;
    fVar21 = *(float *)(param_2 + 8);
    fVar19 = *(float *)(param_3 + 4);
    fVar16 = fVar15 * *pfVar7 - *(float *)(param_3 + 8);
    fVar20 = *(float *)param_2;
    fVar15 = *(float *)(param_2 + 4);
    *(undefined4 *)(param_6 + 0xc) = 0;
    fVar18 = (float)NEON_fmadd(fVar16,fVar20,fVar21 * -(fVar11 - fVar17));
    fVar11 = (float)NEON_fmadd(fVar11 - fVar17,fVar15,fVar20 * -(fVar13 - fVar19));
    fVar13 = (float)NEON_fmadd(fVar13 - fVar19,fVar21,fVar15 * -fVar16);
    *(float *)(param_6 + 4) = fVar18;
    *(float *)(param_6 + 8) = fVar11;
    *(float *)param_6 = fVar13;
    fVar15 = (float)NEON_fmadd(*(float *)(param_1 + 8),fVar13,fVar11 * -*(float *)param_1);
    uVar12 = NEON_fmadd(*(float *)(param_1 + 4),fVar11,fVar18 * -*(float *)(param_1 + 8));
    uVar14 = NEON_fmadd(*(float *)param_1,fVar18,fVar13 * -*(float *)(param_1 + 4));
    uVar12 = NEON_fmadd(uVar12,*(undefined4 *)param_2,fVar15 * *(float *)(param_2 + 4));
    fVar13 = (float)NEON_fmadd(uVar14,*(undefined4 *)(param_2 + 8),uVar12);
    bVar6 = 0.0 <= fVar13;
  }
  return bVar6;
}


