// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bidiagonal_svd<float>
// Entry Point: 00b6d2d4
// Size: 888 bytes
// Signature: void __cdecl bidiagonal_svd<float>(float * param_1, int param_2, int param_3, float * param_4, float * param_5)


/* void SVDUtilDetails::bidiagonal_svd<float>(float*, int, int, float*, float*) */

void SVDUtilDetails::bidiagonal_svd<float>
               (float *param_1,int param_2,int param_3,float *param_4,float *param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  undefined8 *local_b0;
  ulong local_a8;
  long local_88;
  long local_80;
  long local_78;
  
  uVar21 = (ulong)(uint)param_3;
  uVar3 = param_2;
  if (param_3 <= param_2) {
    uVar3 = param_3;
  }
  uVar17 = (ulong)uVar3;
  fVar22 = *param_1;
  if (1 < (int)uVar3) {
    iVar6 = 0;
    lVar9 = uVar17 - 1;
    lVar11 = 1;
    uVar15 = uVar21;
    do {
      lVar13 = lVar11 + (int)uVar15;
      lVar2 = lVar11 + iVar6;
      lVar11 = lVar11 + 1;
      iVar6 = iVar6 + param_3;
      uVar15 = (ulong)(uint)((int)uVar15 + param_3);
      fVar4 = ABS(param_1[lVar13]) + ABS(param_1[lVar2]);
      if (ABS(param_1[lVar13]) + ABS(param_1[lVar2]) <= fVar22) {
        fVar4 = fVar22;
      }
      fVar22 = fVar4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if ((int)uVar3 < 1) {
    return;
  }
  uVar12 = (ulong)param_3;
  uVar16 = uVar21 & 0xfffffff8;
  local_78 = uVar17 << 0x20;
  local_a8 = (uVar17 - 1) * uVar12;
  local_80 = local_a8 + uVar17;
  local_88 = (uVar17 - 2) * uVar12 * 4 + uVar17 * 4 + -4;
  uVar15 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2;
  lVar11 = -4 - uVar15;
  local_b0 = (undefined8 *)(param_5 + local_a8 + 4);
LAB_00b6d438:
  local_78 = local_78 + -0x100000000;
  iVar6 = 0;
  uVar20 = uVar17 - 1;
  lVar9 = local_80;
  lVar13 = local_88;
  lVar2 = local_78;
  uVar18 = uVar17;
LAB_00b6d4c0:
  do {
    lVar7 = lVar2;
    uVar18 = uVar18 - 1;
    if (0 < (long)uVar18) {
      pfVar8 = (float *)((long)param_1 + lVar13);
      lVar9 = lVar9 + ~uVar12;
      lVar13 = lVar13 + lVar11;
      lVar2 = lVar7 + -0x100000000;
      if (fVar22 + *pfVar8 != fVar22) goto LAB_00b6d4c0;
      param_1[lVar9] = 0.0;
    }
    iVar19 = (int)uVar20;
    if (uVar20 == (uVar18 & 0xffffffff)) {
      lVar9 = uVar20 + (long)(iVar19 * param_3);
      if ((param_1[lVar9] < 0.0) && (param_1[lVar9] = -param_1[lVar9], 0 < param_3)) {
        uVar18 = uVar16;
        puVar10 = local_b0;
        if (7 < (uint)param_3) break;
        uVar18 = 0;
        goto LAB_00b6d5f8;
      }
      goto LAB_00b6d3ec;
    }
    lVar7 = lVar7 >> 0x20;
    if (lVar7 < (long)uVar17) {
      lVar9 = 0;
      uVar14 = local_a8;
      do {
        if (fVar22 + param_1[uVar17 + lVar9 + (long)(int)uVar14 + -1] == fVar22) {
          uVar14 = (uVar17 + lVar9) - 1;
          iVar5 = (int)uVar14;
          if (-1 < iVar5) {
            if (uVar20 == (uVar14 & 0xffffffff)) {
              clr_bot_supdiag_elt<float>(param_1,0,iVar5,param_5,param_2,param_3,uVar3);
            }
            else {
              clr_top_supdiag_elt<float>(param_1,iVar5,iVar19,param_4,param_2,param_3,uVar3);
            }
            goto LAB_00b6d4a8;
          }
          break;
        }
        lVar9 = lVar9 + -1;
        uVar14 = (ulong)(uint)((int)uVar14 - param_3);
      } while (lVar7 < (long)(uVar17 + lVar9));
    }
    golub_kahn_svd_rot<float>(param_1,(int)uVar18,iVar19,param_5,param_2,param_3,uVar3);
    clr_top_subdiag_elt<float>(param_1,(int)uVar18,iVar19,param_4,param_5,param_2,param_3,uVar3);
LAB_00b6d4a8:
    iVar6 = iVar6 + 1;
    lVar9 = local_80;
    lVar13 = local_88;
    lVar2 = local_78;
    uVar18 = uVar17;
    if (iVar6 == 0x1e) goto LAB_00b6d3ec;
  } while( true );
  do {
    uVar18 = uVar18 - 8;
    puVar10[-1] = CONCAT44(-(float)((ulong)puVar10[-1] >> 0x20),-(float)puVar10[-1]);
    puVar10[-2] = CONCAT44(-(float)((ulong)puVar10[-2] >> 0x20),-(float)puVar10[-2]);
    puVar10[1] = CONCAT44(-(float)((ulong)puVar10[1] >> 0x20),-(float)puVar10[1]);
    *puVar10 = CONCAT44(-(float)((ulong)*puVar10 >> 0x20),-(float)*puVar10);
    puVar10 = puVar10 + 4;
  } while (uVar18 != 0);
  uVar18 = uVar16;
  if (uVar16 != uVar21) {
LAB_00b6d5f8:
    lVar9 = uVar21 - uVar18;
    pfVar8 = param_5 + uVar18 + local_a8;
    do {
      lVar9 = lVar9 + -1;
      *pfVar8 = -*pfVar8;
      pfVar8 = pfVar8 + 1;
    } while (lVar9 != 0);
  }
LAB_00b6d3ec:
  local_80 = local_80 + ~uVar12;
  local_88 = local_88 + lVar11;
  local_a8 = local_a8 - uVar12;
  local_b0 = (undefined8 *)((long)local_b0 - uVar15);
  bVar1 = (long)uVar17 < 2;
  uVar17 = uVar20;
  if (bVar1) {
    return;
  }
  goto LAB_00b6d438;
}


