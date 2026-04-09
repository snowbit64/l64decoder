// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOffMeshConnectionPolyEndPoints
// Entry Point: 00dd0f64
// Size: 392 bytes
// Signature: undefined __thiscall getOffMeshConnectionPolyEndPoints(dtNavMesh * this, uint param_1, uint param_2, float * param_3, float * param_4)


/* dtNavMesh::getOffMeshConnectionPolyEndPoints(unsigned int, unsigned int, float*, float*) const */

undefined8 __thiscall
dtNavMesh::getOffMeshConnectionPolyEndPoints
          (dtNavMesh *this,uint param_1,uint param_2,float *param_3,float *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  
  if (param_2 == 0) {
    return 0x80000000;
  }
  uVar13 = *(uint *)(this + 0x60);
  uVar3 = 0x80000008;
  uVar1 = param_2 >> ((ulong)uVar13 & 0x3f) & ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f));
  uVar7 = (ulong)uVar1;
  if ((((uVar1 < *(uint *)(this + 0x30)) &&
       (lVar8 = *(long *)(this + 0x50),
       *(uint *)(lVar8 + uVar7 * 0x68) ==
       (param_2 >> (ulong)(uVar13 + *(uint *)(this + 0x5c) & 0x1f) &
       (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU)))) &&
      (lVar4 = *(long *)(lVar8 + uVar7 * 0x68 + 8), lVar4 != 0)) &&
     (uVar13 = param_2 & (-1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU), uVar5 = (ulong)uVar13,
     uVar13 < *(uint *)(lVar4 + 0x18))) {
    lVar4 = *(long *)(lVar8 + uVar7 * 0x68 + 0x10);
    if ((*(byte *)(lVar4 + uVar5 * 0x20 + 0x1f) & 0xc0) != 0x40) {
      return 0x80000000;
    }
    uVar13 = *(uint *)(lVar4 + uVar5 * 0x20);
    if (uVar13 == 0xffffffff) {
      uVar12 = 0;
      uVar10 = 1;
    }
    else {
      lVar11 = *(long *)(lVar8 + uVar7 * 0x68 + 0x20);
      uVar10 = 1;
      do {
        if (*(char *)(lVar11 + (ulong)uVar13 * 0xc + 8) == '\0') {
          bVar2 = *(uint *)(lVar11 + (ulong)uVar13 * 0xc) == param_1;
          uVar10 = (ulong)bVar2;
          uVar12 = (ulong)!bVar2;
          goto LAB_00dd1084;
        }
        uVar13 = *(uint *)(lVar11 + (ulong)uVar13 * 0xc + 4);
      } while (uVar13 != 0xffffffff);
      uVar12 = 0;
    }
LAB_00dd1084:
    lVar4 = lVar4 + uVar5 * 0x20 + 4;
    uVar3 = 0x40000000;
    lVar8 = *(long *)(lVar8 + uVar7 * 0x68 + 0x18);
    pfVar9 = (float *)(lVar8 + (ulong)*(ushort *)(lVar4 + uVar12 * 2) * 0xc);
    pfVar6 = (float *)(lVar8 + (ulong)*(ushort *)(lVar4 + uVar10 * 2) * 0xc);
    *param_3 = *pfVar9;
    param_3[1] = pfVar9[1];
    param_3[2] = pfVar9[2];
    *param_4 = *pfVar6;
    param_4[1] = pfVar6[1];
    param_4[2] = pfVar6[2];
  }
  return uVar3;
}


