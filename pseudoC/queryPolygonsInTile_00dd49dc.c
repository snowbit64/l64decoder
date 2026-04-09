// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queryPolygonsInTile
// Entry Point: 00dd49dc
// Size: 1124 bytes
// Signature: undefined __thiscall queryPolygonsInTile(dtNavMeshQuery * this, dtMeshTile * param_1, float * param_2, float * param_3, dtQueryFilter * param_4, uint * param_5, int param_6)


/* dtNavMeshQuery::queryPolygonsInTile(dtMeshTile const*, float const*, float const*, dtQueryFilter
   const*, unsigned int*, int) const */

int __thiscall
dtNavMeshQuery::queryPolygonsInTile
          (dtNavMeshQuery *this,dtMeshTile *param_1,float *param_2,float *param_3,
          dtQueryFilter *param_4,uint *param_5,int param_6)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  ushort *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int local_ac;
  
  puVar15 = *(ushort **)(param_1 + 0x40);
  if (puVar15 == (ushort *)0x0) {
    uVar8 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,param_1);
    if (0 < *(int *)(*(long *)(param_1 + 8) + 0x18)) {
      lVar10 = 0;
      local_ac = 0;
      do {
        lVar14 = *(long *)(param_1 + 0x10);
        if ((*(byte *)(lVar14 + lVar10 * 0x20 + 0x1f) & 0xc0) != 0x40) {
          uVar2 = uVar8 | (uint)lVar10;
          uVar9 = (***(code ***)param_4)(param_4,uVar2,param_1);
          if ((uVar9 & 1) != 0) {
            lVar14 = lVar14 + lVar10 * 0x20;
            pfVar13 = (float *)(*(long *)(param_1 + 0x18) + (ulong)*(ushort *)(lVar14 + 4) * 0xc);
            fVar22 = *pfVar13;
            fVar17 = pfVar13[1];
            fVar16 = pfVar13[2];
            fVar20 = fVar16;
            fVar19 = fVar17;
            if ((ulong)*(byte *)(lVar14 + 0x1e) < 2) {
              if (*param_2 <= fVar22) goto LAB_00dd4d88;
LAB_00dd4d94:
              bVar6 = 0;
              if (fVar17 < param_2[1]) goto LAB_00dd4dc4;
LAB_00dd4db8:
              if (param_3[1] < fVar19) goto LAB_00dd4dc4;
            }
            else {
              lVar12 = (ulong)*(byte *)(lVar14 + 0x1e) - 1;
              puVar15 = (ushort *)(lVar14 + 6);
              fVar24 = fVar22;
              do {
                pfVar13 = (float *)(*(long *)(param_1 + 0x18) + (ulong)*puVar15 * 0xc);
                fVar25 = *pfVar13;
                fVar26 = pfVar13[1];
                fVar27 = pfVar13[2];
                if (fVar25 <= fVar24) {
                  fVar24 = fVar25;
                }
                if (fVar26 <= fVar19) {
                  fVar19 = fVar26;
                }
                if (fVar27 <= fVar20) {
                  fVar20 = fVar27;
                }
                if (fVar22 <= fVar25) {
                  fVar22 = fVar25;
                }
                if (fVar17 <= fVar26) {
                  fVar17 = fVar26;
                }
                if (fVar16 <= fVar27) {
                  fVar16 = fVar27;
                }
                lVar12 = lVar12 + -1;
                puVar15 = puVar15 + 1;
              } while (lVar12 != 0);
              bVar7 = fVar22 < *param_2;
              fVar22 = fVar24;
              if (bVar7) goto LAB_00dd4d94;
LAB_00dd4d88:
              if (*param_3 < fVar22) goto LAB_00dd4d94;
              bVar6 = 1;
              if (param_2[1] <= fVar17) goto LAB_00dd4db8;
LAB_00dd4dc4:
              bVar6 = 0;
            }
            if (((param_2[2] <= fVar16) && (fVar20 <= param_3[2])) &&
               ((bool)(bVar6 & local_ac < param_6))) {
              param_5[local_ac] = uVar2;
              local_ac = local_ac + 1;
            }
          }
        }
        lVar10 = lVar10 + 1;
        if (*(int *)(*(long *)(param_1 + 8) + 0x18) <= lVar10) {
          return local_ac;
        }
      } while( true );
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 8);
    fVar17 = *param_2;
    fVar19 = param_2[1];
    fVar22 = param_2[2];
    fVar24 = *(float *)(lVar10 + 0x50);
    fVar16 = *(float *)(lVar10 + 0x54);
    fVar27 = *(float *)(lVar10 + 0x48);
    fVar25 = *(float *)(lVar10 + 0x4c);
    iVar5 = *(int *)(lVar10 + 0x30);
    fVar26 = *(float *)(lVar10 + 0x60);
    fVar20 = fVar16;
    if (fVar17 <= fVar16) {
      fVar20 = fVar17;
    }
    fVar18 = *(float *)(lVar10 + 0x58);
    fVar21 = *(float *)(lVar10 + 0x5c);
    fVar23 = fVar27;
    if (fVar27 <= fVar17) {
      fVar23 = fVar20;
    }
    fVar20 = fVar18;
    if (fVar19 <= fVar18) {
      fVar20 = fVar19;
    }
    fVar17 = fVar25;
    if (fVar25 <= fVar19) {
      fVar17 = fVar20;
    }
    fVar20 = fVar21;
    if (fVar22 <= fVar21) {
      fVar20 = fVar22;
    }
    fVar19 = fVar24;
    if (fVar24 <= fVar22) {
      fVar19 = fVar20;
    }
    fVar22 = *param_3;
    fVar20 = param_3[1];
    if (fVar22 <= fVar16) {
      fVar16 = fVar22;
    }
    fVar28 = fVar27;
    if (fVar27 <= fVar22) {
      fVar28 = fVar16;
    }
    if (fVar20 <= fVar18) {
      fVar18 = fVar20;
    }
    fVar22 = param_3[2];
    fVar16 = fVar25;
    if (fVar25 <= fVar20) {
      fVar16 = fVar18;
    }
    if (fVar22 <= fVar21) {
      fVar21 = fVar22;
    }
    fVar20 = fVar24;
    if (fVar24 <= fVar22) {
      fVar20 = fVar21;
    }
    uVar8 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,param_1);
    if (0 < iVar5) {
      puVar1 = puVar15 + (long)iVar5 * 8;
      local_ac = 0;
      fVar22 = (float)NEON_fmadd(fVar26,fVar28 - fVar27,0x3f800000);
      fVar16 = (float)NEON_fmadd(fVar26,fVar16 - fVar25,0x3f800000);
      fVar20 = (float)NEON_fmadd(fVar26,fVar20 - fVar24,0x3f800000);
      uVar2 = (int)(fVar26 * (fVar19 - fVar24)) & 0xfffe;
      uVar3 = (int)(fVar26 * (fVar17 - fVar25)) & 0xfffe;
      do {
        if ((uint)puVar15[3] < ((int)(fVar26 * (fVar23 - fVar27)) & 0xfffeU)) {
          bVar7 = false;
          if (uVar3 <= puVar15[4]) goto LAB_00dd4b70;
LAB_00dd4c24:
          bVar6 = 0;
          if (puVar15[5] < uVar2) goto LAB_00dd4c34;
LAB_00dd4b8c:
          uVar4 = *(uint *)(puVar15 + 6);
          bVar7 = (bool)((uint)puVar15[2] <= ((int)fVar20 | 1U) & bVar6);
          uVar11 = ~uVar4 >> 0x1f;
          if (((int)uVar4 < 0) || (!bVar7)) goto LAB_00dd4c48;
          uVar9 = (***(code ***)param_4)
                            (param_4,uVar4 | uVar8,param_1,
                             *(long *)(param_1 + 0x10) + (ulong)uVar4 * 0x20);
          if (((uVar9 & 1) == 0) || (param_6 <= local_ac)) goto LAB_00dd4b44;
          param_5[local_ac] = uVar4 | uVar8;
          lVar10 = 1;
          local_ac = local_ac + 1;
        }
        else {
          bVar7 = (uint)*puVar15 <= ((int)fVar22 | 1U);
          if (puVar15[4] < uVar3) goto LAB_00dd4c24;
LAB_00dd4b70:
          bVar6 = (uint)puVar15[1] <= ((int)fVar16 | 1U) & bVar7;
          if (uVar2 <= puVar15[5]) goto LAB_00dd4b8c;
LAB_00dd4c34:
          bVar7 = false;
          uVar11 = ~*(uint *)(puVar15 + 6) >> 0x1f;
LAB_00dd4c48:
          if ((bVar7) || (uVar11 != 0)) {
LAB_00dd4b44:
            lVar10 = 1;
          }
          else {
            lVar10 = -(long)*(int *)(puVar15 + 6);
          }
        }
        puVar15 = puVar15 + lVar10 * 8;
        if (puVar1 <= puVar15) {
          return local_ac;
        }
      } while( true );
    }
  }
  return 0;
}


