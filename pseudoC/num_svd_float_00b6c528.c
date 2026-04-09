// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: num_svd<float>
// Entry Point: 00b6c528
// Size: 1528 bytes
// Signature: void __cdecl num_svd<float>(float * param_1, int param_2, int param_3, float * param_4, float * param_5, float * param_6)


/* void SVDUtil::num_svd<float>(float const*, int, int, float*, float*, float*) */

void SVDUtil::num_svd<float>
               (float *param_1,int param_2,int param_3,float *param_4,float *param_5,float *param_6)

{
  bool bVar1;
  uint uVar2;
  float *__ptr;
  long lVar3;
  float *pfVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  float *pfVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  float *pfVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  float *pfVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  
  uVar28 = (ulong)(uint)param_3;
  uVar29 = (ulong)(uint)param_2;
  uVar2 = param_2;
  if (param_3 <= param_2) {
    uVar2 = param_3;
  }
  uVar33 = (ulong)uVar2;
  __ptr = (float *)malloc((ulong)(uint)(param_3 * param_2) << 2);
  SVDUtilDetails::bidiagonalize<float>(param_1,param_2,param_3,param_4,__ptr,param_6);
  SVDUtilDetails::bidiagonal_svd<float>(__ptr,param_2,param_3,param_4,param_6);
  if ((int)uVar2 < 1) goto LAB_00b6cafc;
  if (uVar2 == 1) {
    uVar8 = 0;
LAB_00b6c678:
    iVar31 = param_3 * (int)uVar8;
    lVar22 = uVar33 - uVar8;
    pfVar19 = param_5 + uVar8;
    do {
      lVar23 = uVar8 + (long)iVar31;
      uVar8 = uVar8 + 1;
      iVar31 = iVar31 + param_3;
      lVar22 = lVar22 + -1;
      *pfVar19 = __ptr[lVar23];
      pfVar19 = pfVar19 + 1;
    } while (lVar22 != 0);
  }
  else {
    uVar21 = -param_3;
    if (-1 < param_3) {
      uVar21 = param_3;
    }
    uVar8 = 0;
    uVar6 = (uVar33 - 1 & 0xffffffff) * (ulong)uVar21;
    uVar21 = (uint)uVar6;
    bVar1 = 0x80000000 < uVar21;
    if (-1 < param_3) {
      bVar1 = (int)uVar21 < 0;
    }
    if (((bVar1) || ((uVar6 & 0xffffffff00000000) != 0)) ||
       (uVar33 - 1 >> 0x20 != 0 && param_3 != 0)) goto LAB_00b6c678;
    uVar8 = uVar33 & 0xfffffffe;
    iVar31 = 0;
    lVar22 = 0;
    lVar23 = 1;
    pfVar19 = param_5 + 1;
    uVar6 = uVar8;
    uVar9 = uVar28;
    do {
      lVar3 = lVar22 + iVar31;
      lVar20 = lVar23 + (int)uVar9;
      lVar22 = lVar22 + 2;
      lVar23 = lVar23 + 2;
      uVar9 = (ulong)(uint)((int)uVar9 + param_3 * 2);
      iVar31 = iVar31 + param_3 * 2;
      uVar6 = uVar6 - 2;
      fVar35 = __ptr[lVar20];
      pfVar19[-1] = __ptr[lVar3];
      *pfVar19 = fVar35;
      pfVar19 = pfVar19 + 2;
    } while (uVar6 != 0);
    if (uVar8 != uVar33) goto LAB_00b6c678;
  }
  if (1 < (int)uVar2) {
    lVar20 = (long)param_3;
    uVar9 = uVar29 & 0xfffffffe;
    uVar6 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | uVar28 << 2;
    lVar3 = 0;
    lVar22 = 0;
    pfVar19 = __ptr + uVar9;
    uVar8 = 1;
    uVar10 = uVar28 & 0xfffffff8;
    puVar24 = (undefined8 *)((long)param_6 + uVar6 + 0x10);
    puVar5 = (undefined8 *)(param_6 + 4);
    lVar23 = lVar20;
    pfVar30 = param_4;
    do {
      pfVar30 = pfVar30 + 1;
      fVar35 = param_5[uVar8];
      if ((param_5 + uVar8)[-1] < fVar35) {
        pfVar4 = __ptr;
        if (0 < param_2) {
          pfVar4 = pfVar30;
          pfVar12 = __ptr + 1;
          uVar32 = uVar9;
          if (param_2 == 1) {
            pfVar12 = __ptr;
            uVar32 = 0;
          }
          else {
            do {
              fVar39 = pfVar4[uVar33];
              uVar32 = uVar32 - 2;
              pfVar12[-1] = *pfVar4;
              *pfVar12 = fVar39;
              pfVar4 = pfVar4 + uVar33 * 2;
              pfVar12 = pfVar12 + 2;
            } while (uVar32 != 0);
            pfVar4 = pfVar19;
            pfVar12 = pfVar19;
            uVar32 = uVar9;
            if (uVar9 == uVar29) goto LAB_00b6c7d4;
          }
          lVar25 = uVar33 * 4 * uVar32;
          lVar14 = uVar29 - uVar32;
          do {
            pfVar4 = (float *)((long)pfVar30 + lVar25);
            lVar25 = lVar25 + uVar33 * 4;
            lVar14 = lVar14 + -1;
            *pfVar12 = *pfVar4;
            pfVar4 = pfVar12 + 1;
            pfVar12 = pfVar12 + 1;
          } while (lVar14 != 0);
        }
LAB_00b6c7d4:
        lVar14 = lVar22 * lVar20;
        lVar25 = lVar20 + uVar28 + lVar14;
        if (0 < param_3) {
          if (((uint)param_3 < 8) ||
             ((pfVar4 < param_6 + lVar25 && (param_6 + lVar14 + lVar20 < pfVar4 + uVar28)))) {
            uVar32 = 0;
            pfVar12 = pfVar4;
          }
          else {
            pfVar12 = pfVar4 + uVar10;
            puVar13 = (undefined8 *)(pfVar4 + 4);
            uVar32 = uVar10;
            puVar7 = puVar24;
            do {
              puVar18 = puVar7 + -1;
              uVar36 = puVar7[-2];
              uVar38 = puVar7[1];
              uVar37 = *puVar7;
              puVar7 = puVar7 + 4;
              uVar32 = uVar32 - 8;
              puVar13[-1] = *puVar18;
              puVar13[-2] = uVar36;
              puVar13[1] = uVar38;
              *puVar13 = uVar37;
              puVar13 = puVar13 + 4;
            } while (uVar32 != 0);
            uVar32 = uVar10;
            if (uVar10 == uVar28) goto LAB_00b6c844;
          }
          lVar15 = uVar28 - uVar32;
          pfVar4 = param_6 + uVar32 + lVar23;
          do {
            lVar15 = lVar15 + -1;
            *pfVar12 = *pfVar4;
            pfVar4 = pfVar4 + 1;
            pfVar12 = pfVar12 + 1;
          } while (lVar15 != 0);
        }
LAB_00b6c844:
        lVar15 = 0;
        pfVar4 = pfVar30;
        puVar7 = puVar24;
        lVar11 = lVar3;
        uVar32 = uVar8;
        puVar13 = puVar5;
        lVar34 = lVar23;
        do {
          if (fVar35 <= param_5[uVar32 - 1 & 0xffffffff]) goto LAB_00b6c980;
          param_5[uVar32 & 0xffffffff] = param_5[uVar32 - 1 & 0xffffffff];
          uVar16 = uVar29;
          pfVar12 = pfVar4;
          if (0 < param_2) {
            do {
              uVar16 = uVar16 - 1;
              *pfVar12 = pfVar12[-1];
              pfVar12 = pfVar12 + uVar33;
            } while (uVar16 != 0);
          }
          if (0 < param_3) {
            if (((uint)param_3 < 8) ||
               ((lVar17 = lVar15 * lVar20, puVar18 = puVar7, puVar27 = puVar13, uVar16 = uVar10,
                param_6 + ((lVar14 + lVar20) - lVar17) < param_6 + ((lVar14 + uVar28) - lVar17) &&
                (param_6 + (lVar14 - lVar17) < param_6 + (lVar25 - lVar17))))) {
              uVar16 = 0;
            }
            else {
              do {
                uVar36 = puVar27[-2];
                uVar38 = puVar27[1];
                uVar37 = *puVar27;
                uVar16 = uVar16 - 8;
                puVar18[-1] = puVar27[-1];
                puVar18[-2] = uVar36;
                puVar18[1] = uVar38;
                *puVar18 = uVar37;
                puVar18 = puVar18 + 4;
                puVar27 = puVar27 + 4;
              } while (uVar16 != 0);
              uVar16 = uVar10;
              if (uVar10 == uVar28) goto LAB_00b6c86c;
            }
            lVar17 = uVar28 - uVar16;
            pfVar12 = param_6 + uVar16 + lVar11;
            pfVar26 = param_6 + uVar16 + lVar34;
            do {
              lVar17 = lVar17 + -1;
              *pfVar26 = *pfVar12;
              pfVar12 = pfVar12 + 1;
              pfVar26 = pfVar26 + 1;
            } while (lVar17 != 0);
          }
LAB_00b6c86c:
          lVar15 = lVar15 + 1;
          pfVar4 = pfVar4 + -1;
          puVar13 = (undefined8 *)((long)puVar13 + -uVar6);
          puVar7 = (undefined8 *)((long)puVar7 + -uVar6);
          lVar34 = lVar34 - lVar20;
          lVar11 = lVar11 - lVar20;
          bVar1 = 1 < (long)uVar32;
          uVar32 = uVar32 - 1;
        } while (bVar1);
        uVar32 = 0;
LAB_00b6c980:
        iVar31 = (int)uVar32;
        param_5[iVar31] = fVar35;
        pfVar4 = __ptr;
        if (0 < param_2) {
          if (param_2 == 1) {
            uVar32 = 0;
            pfVar12 = __ptr;
          }
          else {
            uVar32 = uVar9;
            pfVar12 = param_4;
            pfVar4 = __ptr + 1;
            do {
              pfVar26 = pfVar4 + -1;
              fVar35 = *pfVar4;
              pfVar4 = pfVar4 + 2;
              uVar32 = uVar32 - 2;
              pfVar12[iVar31] = *pfVar26;
              pfVar12[uVar33 + (long)iVar31] = fVar35;
              pfVar12 = pfVar12 + uVar33 * 2;
            } while (uVar32 != 0);
            uVar32 = uVar9;
            pfVar4 = pfVar19;
            pfVar12 = pfVar19;
            if (uVar9 == uVar29) goto LAB_00b6ca1c;
          }
          lVar25 = uVar29 - uVar32;
          pfVar26 = param_4 + (long)iVar31 + uVar33 * uVar32;
          do {
            lVar25 = lVar25 + -1;
            *pfVar26 = *pfVar12;
            pfVar26 = pfVar26 + uVar33;
            pfVar4 = pfVar12 + 1;
            pfVar12 = pfVar12 + 1;
          } while (lVar25 != 0);
        }
LAB_00b6ca1c:
        if (0 < param_3) {
          lVar25 = (long)(iVar31 * param_3);
          if (((uint)param_3 < 8) ||
             ((param_6 + lVar25 < pfVar4 + uVar28 && (pfVar4 < param_6 + uVar28 + lVar25)))) {
            pfVar12 = pfVar4;
            uVar32 = 0;
          }
          else {
            pfVar12 = pfVar4 + uVar10;
            puVar13 = (undefined8 *)(pfVar4 + 4);
            puVar7 = (undefined8 *)((long)(param_6 + 4) + lVar25 * 4);
            uVar32 = uVar10;
            do {
              puVar18 = puVar13 + -1;
              uVar36 = puVar13[-2];
              uVar38 = puVar13[1];
              uVar37 = *puVar13;
              puVar13 = puVar13 + 4;
              uVar32 = uVar32 - 8;
              puVar7[-1] = *puVar18;
              puVar7[-2] = uVar36;
              puVar7[1] = uVar38;
              *puVar7 = uVar37;
              puVar7 = puVar7 + 4;
            } while (uVar32 != 0);
            uVar32 = uVar10;
            if (uVar10 == uVar28) goto LAB_00b6c724;
          }
          lVar14 = uVar28 - uVar32;
          pfVar4 = param_6 + uVar32 + lVar25;
          do {
            lVar14 = lVar14 + -1;
            *pfVar4 = *pfVar12;
            pfVar12 = pfVar12 + 1;
            pfVar4 = pfVar4 + 1;
          } while (lVar14 != 0);
        }
      }
LAB_00b6c724:
      uVar8 = uVar8 + 1;
      lVar22 = lVar22 + 1;
      puVar24 = (undefined8 *)((long)puVar24 + uVar6);
      lVar23 = lVar23 + lVar20;
      puVar5 = (undefined8 *)((long)puVar5 + uVar6);
      lVar3 = lVar3 + lVar20;
    } while (uVar8 != uVar33);
  }
LAB_00b6cafc:
  free(__ptr);
  return;
}


