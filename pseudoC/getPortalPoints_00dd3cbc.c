// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPortalPoints
// Entry Point: 00dd3cbc
// Size: 636 bytes
// Signature: undefined __thiscall getPortalPoints(dtNavMeshQuery * this, uint param_1, dtPoly * param_2, dtMeshTile * param_3, uint param_4, dtPoly * param_5, dtMeshTile * param_6, float * param_7, float * param_8)


/* dtNavMeshQuery::getPortalPoints(unsigned int, dtPoly const*, dtMeshTile const*, unsigned int,
   dtPoly const*, dtMeshTile const*, float*, float*) const */

undefined8 __thiscall
dtNavMeshQuery::getPortalPoints
          (dtNavMeshQuery *this,uint param_1,dtPoly *param_2,dtMeshTile *param_3,uint param_4,
          dtPoly *param_5,dtMeshTile *param_6,float *param_7,float *param_8)

{
  uint uVar1;
  dtPoly dVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  long lVar7;
  dtPoly *pdVar8;
  float *pfVar9;
  uint uVar10;
  long lVar11;
  float *pfVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  
  uVar13 = *(uint *)param_2;
  uVar6 = 0x80000008;
  if (uVar13 == 0xffffffff) {
    return uVar6;
  }
  lVar7 = *(long *)(param_3 + 0x20);
  uVar1 = uVar13;
  while (uVar14 = (ulong)uVar1, *(uint *)(lVar7 + uVar14 * 0xc) != param_4) {
    uVar1 = *(uint *)(lVar7 + uVar14 * 0xc + 4);
    if (uVar1 == 0xffffffff) {
      return uVar6;
    }
  }
  if (((byte)param_2[0x1f] & 0xc0) == 0x40) {
    while (*(uint *)(lVar7 + (ulong)uVar13 * 0xc) != param_4) {
      uVar13 = *(uint *)(lVar7 + (ulong)uVar13 * 0xc + 4);
      if (uVar13 == 0xffffffff) {
        return uVar6;
      }
    }
    lVar11 = *(long *)(param_3 + 0x18);
    pdVar8 = param_2 + (ulong)*(byte *)(lVar7 + (ulong)uVar13 * 0xc + 8) * 2;
  }
  else {
    if (((byte)param_5[0x1f] & 0xc0) != 0x40) {
      dVar2 = param_2[0x1e];
      lVar11 = *(long *)(param_3 + 0x18);
      lVar15 = lVar7 + uVar14 * 0xc;
      cVar3 = *(char *)(lVar15 + 9);
      uVar10 = (uint)*(byte *)(lVar15 + 8);
      uVar13 = uVar10 + 1;
      uVar1 = 0;
      if ((byte)dVar2 != 0) {
        uVar1 = uVar13 / (byte)dVar2;
      }
      pfVar9 = (float *)(lVar11 + (ulong)*(ushort *)(param_2 + (ulong)uVar10 * 2 + 4) * 0xc);
      *param_7 = *pfVar9;
      uVar5 = *(ushort *)(param_2 + (ulong)(uVar13 - uVar1 * (byte)dVar2) * 2 + 4);
      param_7[1] = pfVar9[1];
      pfVar12 = (float *)(lVar11 + (ulong)uVar5 * 0xc);
      param_7[2] = pfVar9[2];
      *param_8 = *pfVar12;
      param_8[1] = pfVar12[1];
      param_8[2] = pfVar12[2];
      if (cVar3 != -1) {
        lVar7 = lVar7 + uVar14 * 0xc;
        bVar4 = *(byte *)(lVar7 + 0xb);
        uVar13 = (uint)*(byte *)(lVar7 + 10);
        if ((uVar13 != 0) || (bVar4 != 0xff)) {
          fVar16 = (float)(ulong)uVar13 * 0.003921569;
          fVar17 = (float)NEON_fmadd(*pfVar12 - *pfVar9,fVar16,*pfVar9);
          *param_7 = fVar17;
          fVar17 = (float)NEON_fmadd(pfVar12[1] - pfVar9[1],fVar16,pfVar9[1]);
          param_7[1] = fVar17;
          fVar16 = (float)NEON_fmadd(pfVar12[2] - pfVar9[2],fVar16,pfVar9[2]);
          param_7[2] = fVar16;
          fVar16 = (float)(ulong)bVar4 * 0.003921569;
          fVar17 = (float)NEON_fmadd(*pfVar12 - *pfVar9,fVar16,*pfVar9);
          *param_8 = fVar17;
          fVar17 = (float)NEON_fmadd(pfVar12[1] - pfVar9[1],fVar16,pfVar9[1]);
          param_8[1] = fVar17;
          fVar16 = (float)NEON_fmadd(pfVar12[2] - pfVar9[2],fVar16,pfVar9[2]);
          param_8[2] = fVar16;
          return 0x40000000;
        }
      }
      return 0x40000000;
    }
    uVar13 = *(uint *)param_5;
    if (uVar13 == 0xffffffff) {
      return uVar6;
    }
    lVar7 = *(long *)(param_6 + 0x20);
    while (*(uint *)(lVar7 + (ulong)uVar13 * 0xc) != param_1) {
      uVar13 = *(uint *)(lVar7 + (ulong)uVar13 * 0xc + 4);
      if (uVar13 == 0xffffffff) {
        return uVar6;
      }
    }
    lVar11 = *(long *)(param_6 + 0x18);
    pdVar8 = param_5 + (ulong)*(byte *)(lVar7 + (ulong)uVar13 * 0xc + 8) * 2;
  }
  pfVar9 = (float *)(lVar11 + (ulong)*(ushort *)(pdVar8 + 4) * 0xc);
  *param_7 = *pfVar9;
  param_7[1] = pfVar9[1];
  param_7[2] = pfVar9[2];
  *param_8 = *pfVar9;
  param_8[1] = pfVar9[1];
  param_8[2] = pfVar9[2];
  return 0x40000000;
}


