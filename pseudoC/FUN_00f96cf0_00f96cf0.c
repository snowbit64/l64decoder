// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f96cf0
// Entry Point: 00f96cf0
// Size: 2432 bytes
// Signature: undefined FUN_00f96cf0(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)


uint FUN_00f96cf0(float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_68 [16];
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  fVar13 = *param_2;
  fVar11 = *param_1;
  fVar15 = -fVar13;
  bVar6 = fVar15 < fVar11;
  pfVar9 = param_3;
  if (bVar6) {
    *param_3 = fVar13;
    param_3[1] = param_2[1];
    fVar13 = *param_2;
    fVar11 = *param_1;
    fVar15 = -fVar13;
    pfVar9 = param_3 + 2;
  }
  uVar7 = (uint)bVar6;
  fVar12 = param_2[2];
  fVar14 = -fVar12;
  pfVar8 = pfVar9;
  if (fVar15 < fVar11 != fVar14 < fVar11) {
    uVar7 = uVar7 + 1;
    pfVar9[1] = param_2[1] + ((param_2[1] - param_2[3]) * (fVar11 + fVar13)) / (fVar12 - fVar13);
    pfVar8 = pfVar9 + 2;
    *pfVar9 = -*param_1;
    fVar12 = param_2[2];
    fVar11 = *param_1;
    fVar14 = -fVar12;
  }
  if (fVar14 < fVar11) {
    *pfVar8 = fVar12;
    uVar7 = uVar7 + 1;
    pfVar8[1] = param_2[3];
    fVar12 = param_2[2];
    pfVar8 = pfVar8 + 2;
    fVar11 = *param_1;
    fVar14 = -fVar12;
  }
  fVar13 = param_2[4];
  fVar15 = -fVar13;
  if (fVar14 < fVar11 != fVar15 < fVar11) {
    uVar7 = uVar7 + 1;
    pfVar8[1] = param_2[3] + ((param_2[3] - param_2[5]) * (fVar11 + fVar12)) / (fVar13 - fVar12);
    *pfVar8 = -*param_1;
    if (uVar7 >> 3 != 0) goto LAB_00f9755c;
    fVar13 = param_2[4];
    pfVar8 = pfVar8 + 2;
    fVar11 = *param_1;
    fVar15 = -fVar13;
  }
  if (fVar15 < fVar11) {
    *pfVar8 = fVar13;
    uVar7 = uVar7 + 1;
    pfVar8[1] = param_2[5];
    if ((uVar7 >> 3 & 1) != 0) goto LAB_00f9755c;
    fVar13 = param_2[4];
    pfVar8 = pfVar8 + 2;
    fVar11 = *param_1;
    fVar15 = -fVar13;
  }
  fVar12 = param_2[6];
  fVar14 = -fVar12;
  if (fVar15 < fVar11 != fVar14 < fVar11) {
    uVar7 = uVar7 + 1;
    pfVar8[1] = param_2[5] + ((param_2[5] - param_2[7]) * (fVar11 + fVar13)) / (fVar12 - fVar13);
    *pfVar8 = -*param_1;
    if ((uVar7 >> 3 & 1) != 0) goto LAB_00f9755c;
    fVar12 = param_2[6];
    pfVar8 = pfVar8 + 2;
    fVar11 = *param_1;
    fVar14 = -fVar12;
  }
  if (fVar14 < fVar11) {
    *pfVar8 = fVar12;
    uVar7 = uVar7 + 1;
    pfVar8[1] = param_2[7];
    if ((uVar7 >> 3 & 1) != 0) goto LAB_00f9755c;
    fVar12 = param_2[6];
    pfVar8 = pfVar8 + 2;
    fVar11 = *param_1;
    fVar14 = -fVar12;
  }
  if (fVar14 < fVar11 == -*param_2 < fVar11) {
    if (uVar7 != 0) goto LAB_00f96f64;
LAB_00f97640:
    uVar10 = 0;
  }
  else {
    uVar7 = uVar7 + 1;
    pfVar8[1] = param_2[7] + ((param_2[7] - param_2[1]) * (fVar11 + fVar12)) / (*param_2 - fVar12);
    *pfVar8 = -*param_1;
    if ((uVar7 >> 3 & 1) != 0) {
      uVar7 = 8;
      goto LAB_00f9755c;
    }
    fVar11 = *param_1;
LAB_00f96f64:
    fVar13 = *param_3;
    if (fVar13 < fVar11) {
      pfVar9 = param_3 + 2;
      if (uVar7 < 2) {
        pfVar9 = param_3;
      }
      uVar10 = 1;
      fVar15 = param_3[(ulong)(1 < uVar7) * 2];
      pfVar8 = local_68 + 2;
      local_68[0] = fVar13;
      local_68[1] = param_3[1];
    }
    else {
      uVar10 = 0;
      fVar15 = param_3[(ulong)(1 < uVar7) * 2];
      pfVar9 = param_3 + 2;
      if (uVar7 < 2) {
        pfVar9 = param_3;
      }
      pfVar8 = local_68;
    }
    if (fVar13 < fVar11 != fVar15 < fVar11) {
      fVar12 = param_3[1];
      fVar14 = pfVar9[1];
      *pfVar8 = fVar11;
      uVar10 = uVar10 + 1;
      pfVar8[1] = ((fVar14 - fVar12) * (fVar11 - fVar13)) / (fVar15 - fVar13) + fVar12;
      pfVar8 = pfVar8 + 2;
    }
    if (uVar7 < 2) goto LAB_00f9747c;
    fVar13 = param_3[2];
    if (fVar13 < fVar11) {
      fVar11 = param_3[3];
      uVar10 = uVar10 + 1;
      *pfVar8 = fVar13;
      pfVar8[1] = fVar11;
      fVar13 = param_3[2];
      pfVar8 = pfVar8 + 2;
      fVar11 = *param_1;
    }
    bVar6 = uVar7 - 3 < 0xfffffffe;
    pfVar9 = param_3 + 4;
    pfVar3 = pfVar9;
    if (!bVar6) {
      pfVar3 = param_3;
    }
    if (fVar13 < fVar11 == param_3[(ulong)bVar6 * 4] < fVar11) {
LAB_00f970b4:
      if (uVar7 < 3) {
LAB_00f9747c:
        if (uVar10 == 0) goto LAB_00f97640;
      }
      else {
        fVar11 = *pfVar9;
        fVar13 = *param_1;
        if (fVar11 < fVar13) {
          *pfVar8 = fVar11;
          uVar10 = uVar10 + 1;
          pfVar8[1] = param_3[5];
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          fVar11 = *pfVar9;
          pfVar8 = pfVar8 + 2;
          fVar13 = *param_1;
        }
        uVar1 = uVar7 & 0xfe;
        lVar2 = 0;
        if (uVar1 != 2) {
          lVar2 = 0x18;
        }
        pfVar9 = param_3 + 6;
        pfVar3 = param_3;
        if (uVar1 != 2) {
          pfVar3 = pfVar9;
        }
        if (fVar11 < fVar13 != *(float *)((long)param_3 + lVar2) < fVar13) {
          uVar10 = uVar10 + 1;
          pfVar8[1] = ((pfVar3[1] - param_3[5]) * (fVar13 - fVar11)) /
                      (*(float *)((long)param_3 + lVar2) - fVar11) + param_3[5];
          *pfVar8 = *param_1;
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          pfVar8 = pfVar8 + 2;
        }
        if (uVar7 < 4) goto LAB_00f9747c;
        fVar11 = *pfVar9;
        fVar13 = *param_1;
        if (fVar11 < fVar13) {
          *pfVar8 = fVar11;
          uVar10 = uVar10 + 1;
          pfVar8[1] = param_3[7];
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          fVar11 = *pfVar9;
          pfVar8 = pfVar8 + 2;
          fVar13 = *param_1;
        }
        bVar6 = uVar7 - 5 < 0xfffffffe;
        pfVar9 = param_3 + 8;
        pfVar3 = pfVar9;
        if (!bVar6) {
          pfVar3 = param_3;
        }
        if (fVar11 < fVar13 != param_3[(ulong)bVar6 * 8] < fVar13) {
          uVar10 = uVar10 + 1;
          pfVar8[1] = ((pfVar3[1] - param_3[7]) * (fVar13 - fVar11)) /
                      (param_3[(ulong)bVar6 * 8] - fVar11) + param_3[7];
          *pfVar8 = *param_1;
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          pfVar8 = pfVar8 + 2;
        }
        if (uVar7 < 5) goto LAB_00f9747c;
        fVar11 = *pfVar9;
        fVar13 = *param_1;
        if (fVar11 < fVar13) {
          *pfVar8 = fVar11;
          uVar10 = uVar10 + 1;
          pfVar8[1] = param_3[9];
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          fVar11 = *pfVar9;
          pfVar8 = pfVar8 + 2;
          fVar13 = *param_1;
        }
        lVar2 = 0;
        if (uVar1 != 4) {
          lVar2 = 0x28;
        }
        pfVar9 = param_3 + 10;
        pfVar3 = param_3;
        if (uVar1 != 4) {
          pfVar3 = pfVar9;
        }
        if (fVar11 < fVar13 != *(float *)((long)param_3 + lVar2) < fVar13) {
          uVar10 = uVar10 + 1;
          pfVar8[1] = ((pfVar3[1] - param_3[9]) * (fVar13 - fVar11)) /
                      (*(float *)((long)param_3 + lVar2) - fVar11) + param_3[9];
          *pfVar8 = *param_1;
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          pfVar8 = pfVar8 + 2;
        }
        if (uVar7 < 6) goto LAB_00f9747c;
        fVar11 = *pfVar9;
        fVar13 = *param_1;
        if (fVar11 < fVar13) {
          *pfVar8 = fVar11;
          uVar10 = uVar10 + 1;
          pfVar8[1] = param_3[0xb];
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          fVar11 = *pfVar9;
          pfVar8 = pfVar8 + 2;
          fVar13 = *param_1;
        }
        bVar6 = 0xfffffffd < uVar7 - 7;
        lVar2 = 0x30;
        if (bVar6) {
          lVar2 = 0;
        }
        pfVar9 = param_3 + 0xc;
        pfVar3 = pfVar9;
        if (bVar6) {
          pfVar3 = param_3;
        }
        if (fVar11 < fVar13 != *(float *)((long)param_3 + lVar2) < fVar13) {
          uVar10 = uVar10 + 1;
          pfVar8[1] = ((pfVar3[1] - param_3[0xb]) * (fVar13 - fVar11)) /
                      (*(float *)((long)param_3 + lVar2) - fVar11) + param_3[0xb];
          *pfVar8 = *param_1;
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          pfVar8 = pfVar8 + 2;
        }
        if (uVar7 < 7) goto LAB_00f9747c;
        fVar11 = *pfVar9;
        fVar13 = *param_1;
        if (fVar11 < fVar13) {
          *pfVar8 = fVar11;
          uVar10 = uVar10 + 1;
          pfVar8[1] = param_3[0xd];
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          fVar11 = *pfVar9;
          pfVar8 = pfVar8 + 2;
          fVar13 = *param_1;
        }
        lVar2 = 0;
        if (uVar1 != 6) {
          lVar2 = 0x38;
        }
        pfVar9 = param_3 + 0xe;
        pfVar3 = param_3;
        if (uVar1 != 6) {
          pfVar3 = pfVar9;
        }
        if (fVar11 < fVar13 != *(float *)((long)param_3 + lVar2) < fVar13) {
          uVar10 = uVar10 + 1;
          pfVar8[1] = ((pfVar3[1] - param_3[0xd]) * (fVar13 - fVar11)) /
                      (*(float *)((long)param_3 + lVar2) - fVar11) + param_3[0xd];
          *pfVar8 = *param_1;
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          pfVar8 = pfVar8 + 2;
        }
        if (uVar7 < 8) goto LAB_00f9747c;
        fVar11 = *pfVar9;
        fVar13 = *param_1;
        if (fVar11 < fVar13) {
          *pfVar8 = fVar11;
          uVar10 = uVar10 + 1;
          pfVar8[1] = param_3[0xf];
          if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
          fVar11 = *pfVar9;
          pfVar8 = pfVar8 + 2;
          fVar13 = *param_1;
        }
        fVar15 = param_3[(ulong)(uVar7 - 9 < 0xfffffffe) * 0x10];
        if (fVar11 < fVar13 == fVar15 < fVar13) goto LAB_00f9747c;
        uVar10 = uVar10 + 1;
        pfVar8[1] = (((param_3 + (ulong)(uVar7 - 9 < 0xfffffffe) * 0x10)[1] - param_3[0xf]) *
                    (fVar13 - fVar11)) / (fVar15 - fVar11) + param_3[0xf];
        *pfVar8 = *param_1;
        if ((uVar10 >> 3 & 1) != 0) goto LAB_00f97644;
      }
      uVar7 = 0;
      pfVar8 = local_68;
      pfVar9 = param_3;
      do {
        pfVar8 = pfVar8 + 2;
        fVar11 = pfVar8[-1];
        fVar13 = param_1[1];
        fVar15 = -fVar11;
        if (fVar15 < fVar13) {
          uVar7 = uVar7 + 1;
          *pfVar9 = pfVar8[-2];
          pfVar9[1] = pfVar8[-1];
          if ((uVar7 >> 3 & 1) != 0) goto LAB_00f9755c;
          fVar11 = pfVar8[-1];
          pfVar9 = pfVar9 + 2;
          fVar13 = param_1[1];
          fVar15 = -fVar11;
        }
        pfVar3 = pfVar8;
        if (uVar10 < 2) {
          pfVar3 = local_68;
        }
        if (fVar15 < fVar13 != -pfVar3[1] < fVar13) {
          pfVar4 = pfVar8;
          if (uVar10 < 2) {
            pfVar4 = local_68;
          }
          uVar7 = uVar7 + 1;
          *pfVar9 = pfVar8[-2] + ((pfVar8[-2] - *pfVar4) * (fVar13 + fVar11)) / (pfVar3[1] - fVar11)
          ;
          pfVar9[1] = -param_1[1];
          if ((uVar7 >> 3 & 1) != 0) goto LAB_00f9755c;
          pfVar9 = pfVar9 + 2;
        }
        uVar1 = uVar10 - 1;
        bVar6 = 0 < (int)uVar10;
        uVar10 = uVar1;
      } while (uVar1 != 0 && bVar6);
      if ((int)uVar7 < 1) goto LAB_00f97640;
      uVar10 = 0;
      pfVar9 = local_68;
      pfVar8 = param_3 + 2;
      do {
        fVar11 = pfVar8[-1];
        fVar13 = param_1[1];
        if (fVar11 < fVar13) {
          uVar10 = uVar10 + 1;
          *pfVar9 = pfVar8[-2];
          pfVar9[1] = pfVar8[-1];
          if ((uVar10 >> 3 & 1) != 0) break;
          fVar11 = pfVar8[-1];
          pfVar9 = pfVar9 + 2;
          fVar13 = param_1[1];
        }
        pfVar3 = pfVar8;
        if (uVar7 < 2) {
          pfVar3 = param_3;
        }
        if (fVar11 < fVar13 != pfVar3[1] < fVar13) {
          uVar10 = uVar10 + 1;
          *pfVar9 = ((*pfVar3 - pfVar8[-2]) * (fVar13 - fVar11)) / (pfVar3[1] - fVar11) + pfVar8[-2]
          ;
          pfVar9[1] = param_1[1];
          if ((uVar10 >> 3 & 1) != 0) break;
          pfVar9 = pfVar9 + 2;
        }
        uVar1 = uVar7 - 1;
        pfVar8 = pfVar8 + 2;
        bVar6 = 0 < (int)uVar7;
        uVar7 = uVar1;
      } while (uVar1 != 0 && bVar6);
    }
    else {
      uVar10 = uVar10 + 1;
      pfVar8[1] = ((pfVar3[1] - param_3[3]) * (fVar11 - fVar13)) /
                  (param_3[(ulong)bVar6 * 4] - fVar13) + param_3[3];
      *pfVar8 = *param_1;
      if (uVar10 >> 3 == 0) {
        pfVar8 = pfVar8 + 2;
        goto LAB_00f970b4;
      }
    }
  }
LAB_00f97644:
  uVar7 = uVar10;
  if (local_68 != param_3) {
    memcpy(param_3,local_68,
           -(ulong)((uVar10 << 1) >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar10 << 1) << 2);
  }
LAB_00f9755c:
  if (*(long *)(lVar5 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


