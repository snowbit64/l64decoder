// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findConnectingPolys
// Entry Point: 00dced60
// Size: 756 bytes
// Signature: undefined __cdecl findConnectingPolys(float * param_1, float * param_2, dtMeshTile * param_3, int param_4, uint * param_5, float * param_6, int param_7)


/* dtNavMesh::findConnectingPolys(float const*, float const*, dtMeshTile const*, int, unsigned int*,
   float*, int) const */

int dtNavMesh::findConnectingPolys
              (float *param_1,float *param_2,dtMeshTile *param_3,int param_4,uint *param_5,
              float *param_6,int param_7)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  float *pfVar13;
  float *pfVar14;
  int in_w7;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float in_s0;
  float in_s1;
  float fVar23;
  float in_s3;
  float fVar24;
  float in_s6;
  undefined4 uVar25;
  float in_s7;
  float in_s16;
  float in_s17;
  float in_s18;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  
  piVar12 = (int *)(ulong)(uint)param_4;
  if (piVar12 == (int *)0x0) {
    return 0;
  }
  uVar2 = (uint)param_5 & 0xfffffffb;
  pfVar14 = param_2;
  if (uVar2 == 2) {
    fVar23 = *(float *)param_3;
    pfVar13 = (float *)param_3;
    in_s0 = *param_2;
    if (fVar23 <= *param_2) {
      pfVar14 = (float *)param_3;
      pfVar13 = param_2;
      param_3 = (dtMeshTile *)param_2;
      in_s0 = fVar23;
    }
LAB_00dcedd4:
    in_s6 = pfVar14[1];
    in_s1 = *pfVar13;
    in_s3 = *(float *)((long)param_3 + 4);
  }
  else if (((ulong)param_5 & 0xfffffffb) == 0) {
    in_s0 = param_2[2];
    fVar23 = *(float *)(param_3 + 8);
    pfVar13 = (float *)(param_3 + 8);
    if (fVar23 <= in_s0) {
      pfVar14 = (float *)param_3;
      pfVar13 = param_2 + 2;
      param_3 = (dtMeshTile *)param_2;
      in_s0 = fVar23;
    }
    goto LAB_00dcedd4;
  }
  if (((ulong)param_5 & 0xfffffffb) != 0) {
    fVar23 = 0.0;
    if (uVar2 != 2) goto LAB_00dcedf8;
    param_2 = param_2 + 2;
  }
  fVar23 = *param_2;
LAB_00dcedf8:
  lVar15 = *(long *)(piVar12 + 2);
  iVar17 = *(int *)(lVar15 + 0x18);
  if (iVar17 < 1) {
    return 0;
  }
  lVar18 = *(long *)(param_1 + 0x14);
  fVar4 = param_1[0x17];
  fVar5 = param_1[0x18];
  fVar24 = (in_s3 - in_s6) / (in_s1 - in_s0);
  iVar6 = *piVar12;
  lVar16 = 0;
  iVar9 = 0;
  lVar19 = *(long *)(piVar12 + 4);
  uVar25 = NEON_fmsub(fVar24,in_s0,in_s6);
  do {
    uVar10 = (ulong)*(byte *)(lVar19 + lVar16 * 0x20 + 0x1e);
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        lVar1 = lVar19 + lVar16 * 0x20;
        if (((uint)param_5 & 0x7fff | 0x8000) == (uint)*(ushort *)(lVar1 + uVar11 * 2 + 0x10)) {
          lVar1 = lVar1 + 4;
          uVar3 = 0;
          if (uVar11 + 1 != uVar10) {
            uVar3 = uVar11 + 1 & 0xffffffff;
          }
          pfVar13 = (float *)(*(long *)(piVar12 + 6) + (ulong)*(ushort *)(lVar1 + uVar11 * 2) * 0xc)
          ;
          pfVar14 = pfVar13;
          if (((ulong)param_5 & 0xfffffffb) == 0) {
LAB_00dcef0c:
            fVar26 = *pfVar14;
          }
          else {
            fVar26 = 0.0;
            if (uVar2 == 2) {
              pfVar14 = pfVar13 + 2;
              goto LAB_00dcef0c;
            }
          }
          fVar26 = fVar23 - fVar26;
          fVar27 = -fVar26;
          if (0.0 <= fVar26) {
            fVar27 = fVar26;
          }
          if (fVar27 <= 0.01) {
            pfVar20 = (float *)(*(long *)(piVar12 + 6) + (ulong)*(ushort *)(lVar1 + uVar3 * 2) * 0xc
                               );
            pfVar14 = pfVar20;
            pfVar21 = pfVar13;
            if (uVar2 == 2) {
              pfVar22 = pfVar20;
              in_s7 = *pfVar13;
              if (*pfVar20 <= *pfVar13) {
                pfVar14 = pfVar13;
                pfVar21 = pfVar20;
                pfVar22 = pfVar13;
                in_s7 = *pfVar20;
              }
LAB_00dcef84:
              in_s17 = pfVar21[1];
              in_s16 = *pfVar22;
              in_s18 = pfVar14[1];
            }
            else if (((ulong)param_5 & 0xfffffffb) == 0) {
              in_s7 = pfVar13[2];
              fVar26 = pfVar20[2];
              pfVar22 = pfVar20 + 2;
              if (fVar26 <= in_s7) {
                pfVar14 = pfVar13;
                pfVar21 = pfVar20;
                pfVar22 = pfVar13 + 2;
                in_s7 = fVar26;
              }
              goto LAB_00dcef84;
            }
            fVar26 = in_s0 + 0.01;
            if (in_s0 + 0.01 <= in_s7 + 0.01) {
              fVar26 = in_s7 + 0.01;
            }
            fVar27 = in_s1 + -0.01;
            if (in_s16 + -0.01 <= in_s1 + -0.01) {
              fVar27 = in_s16 + -0.01;
            }
            if (fVar26 <= fVar27) {
              fVar30 = (float)NEON_fmadd(fVar24,fVar26,uVar25);
              fVar31 = (float)NEON_fmadd(fVar24,fVar27,uVar25);
              fVar28 = (in_s18 - in_s17) / (in_s16 - in_s7);
              uVar29 = NEON_fmsub(fVar28,in_s7,in_s17);
              fVar26 = (float)NEON_fmadd(fVar28,fVar26,uVar29);
              fVar28 = (float)NEON_fmadd(fVar28,fVar27,uVar29);
              fVar26 = fVar26 - fVar30;
              fVar28 = fVar28 - fVar31;
              fVar30 = *(float *)(lVar15 + 0x44) + *(float *)(lVar15 + 0x44);
              fVar27 = fVar26 * fVar26;
              fVar30 = fVar30 * fVar30;
              bVar8 = fVar26 * fVar28 < 0.0;
              if ((((bVar8 || fVar27 < fVar30) || !bVar8 && fVar27 == fVar30) ||
                  fVar28 * fVar28 < fVar30) ||
                  ((!bVar8 && fVar27 >= fVar30) && (bVar8 || fVar27 != fVar30)) &&
                  fVar28 * fVar28 == fVar30) {
                if (iVar9 < in_w7) {
                  iVar7 = iVar9 << 1;
                  lVar1 = (long)iVar9;
                  param_6[iVar9] =
                       (float)((int)((ulong)((long)piVar12 - lVar18) >> 3) * -0x3b13b13b <<
                               (ulong)((uint)fVar5 & 0x1f) |
                               iVar6 << (ulong)((int)fVar4 + (int)fVar5 & 0x1f) | (uint)lVar16);
                  iVar9 = iVar9 + 1;
                  fVar26 = in_s0;
                  if (in_s0 <= in_s7) {
                    fVar26 = in_s7;
                  }
                  iVar17 = *(int *)(lVar15 + 0x18);
                  fVar27 = in_s1;
                  if (in_s16 <= in_s1) {
                    fVar27 = in_s16;
                  }
                  *(float *)((ulong)(uint)param_7 + (long)iVar7 * 4) = fVar26;
                  *(float *)((ulong)(uint)param_7 + lVar1 * 8 + 4) = fVar27;
                }
                break;
              }
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
    lVar16 = lVar16 + 1;
    if (iVar17 <= lVar16) {
      return iVar9;
    }
  } while( true );
}


