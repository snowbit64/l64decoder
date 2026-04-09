// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queryPolygonsInTile
// Entry Point: 00dcfe78
// Size: 980 bytes
// Signature: undefined __thiscall queryPolygonsInTile(dtNavMesh * this, dtMeshTile * param_1, float * param_2, float * param_3, uint * param_4, int param_5)


/* dtNavMesh::queryPolygonsInTile(dtMeshTile const*, float const*, float const*, unsigned int*, int)
   const */

int __thiscall
dtNavMesh::queryPolygonsInTile
          (dtNavMesh *this,dtMeshTile *param_1,float *param_2,float *param_3,uint *param_4,
          int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ushort *puVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  ushort *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  puVar14 = *(ushort **)(param_1 + 0x40);
  if (puVar14 == (ushort *)0x0) {
    lVar15 = *(long *)(param_1 + 8);
    iVar16 = *(int *)(lVar15 + 0x18);
    if (iVar16 < 1) {
      return 0;
    }
    lVar17 = *(long *)(this + 0x50);
    iVar4 = *(int *)(this + 0x5c);
    uVar1 = *(uint *)(this + 0x60);
    iVar5 = *(int *)param_1;
    lVar11 = 0;
    lVar13 = *(long *)(param_1 + 0x10);
    puVar14 = (ushort *)(lVar13 + 6);
    iVar10 = 0;
    do {
      lVar18 = lVar13 + lVar11 * 0x20;
      iVar9 = iVar10;
      if ((*(byte *)(lVar18 + 0x1f) & 0xc0) != 0x40) {
        pfVar19 = (float *)(*(long *)(param_1 + 0x18) + (ulong)*(ushort *)(lVar18 + 4) * 0xc);
        fVar25 = *pfVar19;
        fVar21 = pfVar19[1];
        fVar24 = pfVar19[2];
        fVar23 = fVar24;
        fVar22 = fVar21;
        if ((ulong)*(byte *)(lVar18 + 0x1e) < 2) {
          if (*param_2 <= fVar25) goto LAB_00dd01c0;
LAB_00dd01cc:
          bVar7 = 0;
          if (fVar21 < param_2[1]) goto LAB_00dd01fc;
LAB_00dd01f0:
          if (param_3[1] < fVar22) goto LAB_00dd01fc;
        }
        else {
          lVar18 = (ulong)*(byte *)(lVar18 + 0x1e) - 1;
          puVar20 = puVar14;
          fVar27 = fVar25;
          do {
            pfVar19 = (float *)(*(long *)(param_1 + 0x18) + (ulong)*puVar20 * 0xc);
            fVar29 = *pfVar19;
            fVar30 = pfVar19[1];
            fVar26 = pfVar19[2];
            if (fVar29 <= fVar27) {
              fVar27 = fVar29;
            }
            if (fVar30 <= fVar22) {
              fVar22 = fVar30;
            }
            if (fVar26 <= fVar23) {
              fVar23 = fVar26;
            }
            if (fVar25 <= fVar29) {
              fVar25 = fVar29;
            }
            if (fVar21 <= fVar30) {
              fVar21 = fVar30;
            }
            if (fVar24 <= fVar26) {
              fVar24 = fVar26;
            }
            lVar18 = lVar18 + -1;
            puVar20 = puVar20 + 1;
          } while (lVar18 != 0);
          bVar8 = fVar25 < *param_2;
          fVar25 = fVar27;
          if (bVar8) goto LAB_00dd01cc;
LAB_00dd01c0:
          if (*param_3 < fVar25) goto LAB_00dd01cc;
          bVar7 = 1;
          if (param_2[1] <= fVar21) goto LAB_00dd01f0;
LAB_00dd01fc:
          bVar7 = 0;
        }
        if (((param_2[2] <= fVar24) && (fVar23 <= param_3[2])) && ((bool)(bVar7 & iVar10 < param_5))
           ) {
          iVar9 = iVar10 + 1;
          param_4[iVar10] =
               (int)((ulong)((long)param_1 - lVar17) >> 3) * -0x3b13b13b << (ulong)(uVar1 & 0x1f) |
               iVar5 << (ulong)(iVar4 + uVar1 & 0x1f) | (uint)lVar11;
          iVar16 = *(int *)(lVar15 + 0x18);
        }
      }
      lVar11 = lVar11 + 1;
      puVar14 = puVar14 + 0x10;
      iVar10 = iVar9;
    } while (lVar11 < iVar16);
  }
  else {
    lVar15 = *(long *)(param_1 + 8);
    fVar25 = *param_2;
    fVar29 = param_2[1];
    fVar30 = param_2[2];
    fVar21 = *(float *)(lVar15 + 0x50);
    fVar24 = *(float *)(lVar15 + 0x54);
    fVar27 = *(float *)(lVar15 + 0x48);
    fVar22 = *(float *)(lVar15 + 0x4c);
    fVar23 = fVar24;
    if (fVar25 <= fVar24) {
      fVar23 = fVar25;
    }
    fVar26 = *(float *)(lVar15 + 0x58);
    fVar32 = *(float *)(lVar15 + 0x5c);
    fVar28 = fVar27;
    if (fVar27 <= fVar25) {
      fVar28 = fVar23;
    }
    fVar23 = fVar26;
    if (fVar29 <= fVar26) {
      fVar23 = fVar29;
    }
    fVar25 = fVar22;
    if (fVar22 <= fVar29) {
      fVar25 = fVar23;
    }
    fVar23 = fVar32;
    if (fVar30 <= fVar32) {
      fVar23 = fVar30;
    }
    fVar31 = *param_3;
    fVar33 = param_3[1];
    fVar29 = fVar21;
    if (fVar21 <= fVar30) {
      fVar29 = fVar23;
    }
    if (fVar31 <= fVar24) {
      fVar24 = fVar31;
    }
    fVar23 = fVar27;
    if (fVar27 <= fVar31) {
      fVar23 = fVar24;
    }
    if (fVar33 <= fVar26) {
      fVar26 = fVar33;
    }
    fVar30 = param_3[2];
    fVar24 = fVar22;
    if (fVar22 <= fVar33) {
      fVar24 = fVar26;
    }
    if (fVar30 <= fVar32) {
      fVar32 = fVar30;
    }
    fVar26 = fVar21;
    if (fVar21 <= fVar30) {
      fVar26 = fVar32;
    }
    if (*(int *)(lVar15 + 0x30) < 1) {
      return 0;
    }
    fVar32 = *(float *)(lVar15 + 0x60);
    puVar20 = puVar14 + (long)*(int *)(lVar15 + 0x30) * 8;
    lVar15 = *(long *)(this + 0x50);
    iVar16 = *(int *)(this + 0x5c);
    uVar3 = *(uint *)(this + 0x60);
    fVar30 = (float)NEON_fmadd(fVar32,fVar23 - fVar27,0x3f800000);
    fVar23 = (float)NEON_fmadd(fVar32,fVar24 - fVar22,0x3f800000);
    fVar24 = (float)NEON_fmadd(fVar32,fVar26 - fVar21,0x3f800000);
    iVar4 = *(int *)param_1;
    uVar1 = (int)(fVar32 * (fVar29 - fVar21)) & 0xfffe;
    iVar9 = 0;
    uVar2 = (int)(fVar32 * (fVar25 - fVar22)) & 0xfffe;
    do {
      if ((uint)puVar14[3] < ((int)(fVar32 * (fVar28 - fVar27)) & 0xfffeU)) {
        bVar8 = false;
        if (uVar2 <= puVar14[4]) goto LAB_00dcffe0;
LAB_00dd005c:
        bVar7 = 0;
        if (puVar14[5] < uVar1) goto LAB_00dd006c;
LAB_00dcfffc:
        uVar6 = *(uint *)(puVar14 + 6);
        bVar8 = (bool)((uint)puVar14[2] <= ((int)fVar24 | 1U) & bVar7);
        uVar12 = ~uVar6 >> 0x1f;
        if (((bVar8) && (-1 < (int)uVar6)) && (iVar9 < param_5)) {
          param_4[iVar9] =
               (int)((ulong)((long)param_1 - lVar15) >> 3) * -0x3b13b13b << (ulong)(uVar3 & 0x1f) |
               iVar4 << (ulong)(iVar16 + uVar3 & 0x1f) | uVar6;
          iVar9 = iVar9 + 1;
        }
      }
      else {
        bVar8 = (uint)*puVar14 <= ((int)fVar30 | 1U);
        if (puVar14[4] < uVar2) goto LAB_00dd005c;
LAB_00dcffe0:
        bVar7 = (uint)puVar14[1] <= ((int)fVar23 | 1U) & bVar8;
        if (uVar1 <= puVar14[5]) goto LAB_00dcfffc;
LAB_00dd006c:
        bVar8 = false;
        uVar12 = ~*(uint *)(puVar14 + 6) >> 0x1f;
      }
      if (bVar8) {
        lVar11 = 1;
      }
      else {
        lVar11 = 1;
        if (uVar12 == 0) {
          lVar11 = -(long)*(int *)(puVar14 + 6);
        }
      }
      puVar14 = puVar14 + lVar11 * 8;
    } while (puVar14 < puVar20);
  }
  return iVar9;
}


