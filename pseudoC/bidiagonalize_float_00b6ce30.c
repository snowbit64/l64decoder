// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bidiagonalize<float>
// Entry Point: 00b6ce30
// Size: 1188 bytes
// Signature: void __cdecl bidiagonalize<float>(float * param_1, int param_2, int param_3, float * param_4, float * param_5, float * param_6)


/* void SVDUtilDetails::bidiagonalize<float>(float const*, int, int, float*, float*, float*) */

void SVDUtilDetails::bidiagonalize<float>
               (float *param_1,int param_2,int param_3,float *param_4,float *param_5,float *param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float *__ptr;
  float *pfVar5;
  float *__s;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  ulong uVar22;
  size_t __size;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar3 = param_2;
  if (param_2 <= param_3) {
    uVar3 = param_3;
  }
  __ptr = (float *)malloc((ulong)uVar3 << 2);
  uVar3 = param_2;
  if (param_3 <= param_2) {
    uVar3 = param_3;
  }
  uVar22 = (ulong)uVar3;
  pfVar5 = param_4;
  if (param_3 < param_2) {
    pfVar5 = (float *)malloc((ulong)(uint)(param_2 * param_2) << 2);
  }
  __size = (ulong)(uint)(param_3 * param_3) << 2;
  __s = param_6;
  if (param_2 < param_3) {
    __s = (float *)malloc(__size);
  }
  memset(pfVar5,0,(ulong)(uint)(param_2 * param_2) << 2);
  memset(__s,0,__size);
  if (0 < param_2) {
    uVar14 = (ulong)(uint)param_2;
    if (param_2 == 1) {
      uVar12 = 0;
    }
    else {
      uVar17 = -param_2;
      if (-1 < param_2) {
        uVar17 = param_2;
      }
      uVar12 = 0;
      uVar18 = (uVar14 - 1 & 0xffffffff) * (ulong)uVar17;
      uVar17 = (uint)uVar18;
      bVar4 = 0x80000000 < uVar17;
      if (-1 < param_2) {
        bVar4 = (int)uVar17 < 0;
      }
      if (((!bVar4) && ((uVar18 & 0xffffffff00000000) == 0)) && (uVar14 - 1 >> 0x20 == 0)) {
        uVar12 = uVar14 & 0xfffffffe;
        lVar15 = 0;
        lVar13 = 1;
        iVar16 = 0;
        uVar18 = uVar12;
        iVar20 = param_2;
        do {
          lVar8 = lVar13 + iVar20;
          lVar1 = lVar15 + iVar16;
          lVar15 = lVar15 + 2;
          lVar13 = lVar13 + 2;
          iVar20 = iVar20 + param_2 * 2;
          iVar16 = iVar16 + param_2 * 2;
          uVar18 = uVar18 - 2;
          pfVar5[lVar1] = 1.0;
          pfVar5[lVar8] = 1.0;
        } while (uVar18 != 0);
        if (uVar12 == uVar14) goto LAB_00b6cfb4;
      }
    }
    iVar20 = param_2 * (int)uVar12;
    lVar15 = uVar14 - uVar12;
    do {
      lVar13 = uVar12 + (long)iVar20;
      uVar12 = uVar12 + 1;
      iVar20 = iVar20 + param_2;
      lVar15 = lVar15 + -1;
      pfVar5[lVar13] = 1.0;
    } while (lVar15 != 0);
  }
LAB_00b6cfb4:
  if (0 < param_3) {
    uVar14 = (ulong)(uint)param_3;
    if (param_3 == 1) {
      uVar12 = 0;
    }
    else {
      uVar17 = -param_3;
      if (-1 < param_3) {
        uVar17 = param_3;
      }
      uVar12 = 0;
      uVar18 = (uVar14 - 1 & 0xffffffff) * (ulong)uVar17;
      uVar17 = (uint)uVar18;
      bVar4 = 0x80000000 < uVar17;
      if (-1 < param_3) {
        bVar4 = (int)uVar17 < 0;
      }
      if (((!bVar4) && ((uVar18 & 0xffffffff00000000) == 0)) && (uVar14 - 1 >> 0x20 == 0)) {
        uVar12 = uVar14 & 0xfffffffe;
        lVar15 = 0;
        lVar13 = 1;
        iVar16 = 0;
        uVar18 = uVar12;
        iVar20 = param_3;
        do {
          lVar8 = lVar13 + iVar20;
          lVar1 = lVar15 + iVar16;
          lVar15 = lVar15 + 2;
          lVar13 = lVar13 + 2;
          iVar20 = iVar20 + param_3 * 2;
          iVar16 = iVar16 + param_3 * 2;
          uVar18 = uVar18 - 2;
          __s[lVar1] = 1.0;
          __s[lVar8] = 1.0;
        } while (uVar18 != 0);
        if (uVar12 == uVar14) goto LAB_00b6d088;
      }
    }
    iVar20 = param_3 * (int)uVar12;
    lVar15 = uVar14 - uVar12;
    do {
      lVar13 = uVar12 + (long)iVar20;
      uVar12 = uVar12 + 1;
      iVar20 = iVar20 + param_3;
      lVar15 = lVar15 + -1;
      __s[lVar13] = 1.0;
    } while (lVar15 != 0);
  }
LAB_00b6d088:
  if (param_5 != param_1) {
    memcpy(param_5,param_1,(long)(param_2 * param_3 * 4));
  }
  if (0 < (int)uVar3) {
    uVar17 = 0;
    do {
      householder_zero_col<float>(param_5,pfVar5,uVar17,uVar17,param_2,param_3,__ptr);
      uVar2 = uVar17 + 1;
      householder_zero_row<float>(param_5,__s,uVar17,uVar2,param_2,param_3,__ptr);
      uVar17 = uVar2;
    } while (uVar3 != uVar2);
  }
  if (param_2 < param_3) {
    clr_bot_supdiag_elt<float>(param_5,0,uVar3,__s,param_2,param_3,param_3);
  }
  if (param_3 < param_2) {
    if (0 < param_2) {
      uVar12 = (ulong)(uint)param_2;
      lVar13 = 0;
      lVar15 = 0;
      uVar14 = 0;
      uVar18 = uVar22 & 0xfffffff8;
      puVar19 = (undefined8 *)(pfVar5 + 4);
      puVar21 = (undefined8 *)(param_4 + 4);
      do {
        if (0 < (int)uVar3) {
          if (uVar3 < 8) {
LAB_00b6d1e0:
            uVar7 = 0;
          }
          else {
            lVar8 = uVar14 * (long)(int)uVar3;
            uVar7 = uVar18;
            puVar10 = puVar21;
            puVar11 = puVar19;
            if ((param_4 + lVar8 < pfVar5 + uVar14 * uVar12 + uVar22) &&
               (pfVar5 + uVar14 * uVar12 < param_4 + lVar8 + uVar22)) goto LAB_00b6d1e0;
            do {
              uVar23 = puVar11[-2];
              uVar25 = puVar11[1];
              uVar24 = *puVar11;
              uVar7 = uVar7 - 8;
              puVar10[-1] = puVar11[-1];
              puVar10[-2] = uVar23;
              puVar10[1] = uVar25;
              *puVar10 = uVar24;
              puVar10 = puVar10 + 4;
              puVar11 = puVar11 + 4;
            } while (uVar7 != 0);
            uVar7 = uVar18;
            if (uVar18 == uVar22) goto LAB_00b6d184;
          }
          lVar8 = uVar22 - uVar7;
          pfVar6 = param_4 + uVar7 + lVar15;
          pfVar9 = pfVar5 + uVar7 + lVar13;
          do {
            lVar8 = lVar8 + -1;
            *pfVar6 = *pfVar9;
            pfVar6 = pfVar6 + 1;
            pfVar9 = pfVar9 + 1;
          } while (lVar8 != 0);
        }
LAB_00b6d184:
        uVar14 = uVar14 + 1;
        puVar19 = (undefined8 *)((long)puVar19 + uVar12 * 4);
        puVar21 = (undefined8 *)
                  ((long)puVar21 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar22 << 2));
        lVar15 = lVar15 + (int)uVar3;
        lVar13 = lVar13 + uVar12;
      } while (uVar14 != uVar12);
    }
    free(pfVar5);
  }
  if (param_2 < param_3) {
    if (0 < param_3) {
      uVar14 = 0;
      pfVar5 = __s;
      do {
        if (0 < (int)uVar3) {
          lVar15 = 0;
          uVar12 = uVar22;
          do {
            uVar12 = uVar12 - 1;
            *(undefined4 *)((long)param_6 + lVar15) = *(undefined4 *)((long)pfVar5 + lVar15);
            lVar15 = lVar15 + (ulong)(uint)param_3 * 4;
          } while (uVar12 != 0);
        }
        uVar14 = uVar14 + 1;
        pfVar5 = pfVar5 + 1;
        param_6 = param_6 + 1;
      } while (uVar14 != (uint)param_3);
    }
    free(__s);
  }
  free(__ptr);
  return;
}


