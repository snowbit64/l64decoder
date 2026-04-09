// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1a72c
// Entry Point: 00e1a72c
// Size: 4780 bytes
// Signature: undefined FUN_00e1a72c(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined8 param_10)


void FUN_00e1a72c(uint param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5,
                 long param_6,undefined8 *param_7,undefined4 *param_8,ulong param_9,long param_10)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  undefined4 *puVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  float *pfVar26;
  float *pfVar27;
  long lVar28;
  undefined8 *puVar29;
  int iVar30;
  uint uVar31;
  long lVar32;
  undefined8 *puVar33;
  float *pfVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  undefined8 *puVar38;
  long lVar39;
  bool bVar40;
  undefined8 *puVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  undefined8 *puVar48;
  undefined4 *puVar49;
  undefined8 *puVar50;
  long lVar51;
  long lVar52;
  int iVar53;
  ulong uVar54;
  long lVar55;
  ulong uVar56;
  ulong uVar57;
  long lVar58;
  ulong uVar59;
  float *pfVar60;
  ulong uVar61;
  undefined4 *puVar62;
  float *pfVar63;
  int iVar64;
  float *pfVar65;
  float *pfVar66;
  ulong uVar67;
  long lVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined4 uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined8 uVar89;
  float fVar90;
  float fVar91;
  undefined8 uVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  double local_78;
  double adStack_70 [2];
  
  uVar59 = (ulong)param_1;
  uVar67 = (ulong)param_4;
  sincos((double)(6.283185 / (float)param_2),adStack_70,&local_78);
  uVar44 = param_1 - 1;
  iVar8 = param_2 + 1 >> 1;
  uVar9 = param_3 * param_1;
  iVar17 = (int)uVar44 >> 1;
  if (uVar44 != 0) {
    if (0 < (int)param_4) {
      if ((param_4 < 8) ||
         ((param_9 < (long)param_7 + uVar67 * 4 && (param_7 < (undefined8 *)(param_9 + uVar67 * 4)))
         )) {
        uVar35 = 0;
      }
      else {
        uVar35 = uVar67 & 0xfffffff8;
        puVar41 = param_7 + 2;
        puVar19 = (undefined8 *)(param_9 + 0x10);
        uVar14 = uVar35;
        do {
          puVar25 = puVar41 + -1;
          uVar69 = puVar41[-2];
          uVar71 = puVar41[1];
          uVar70 = *puVar41;
          puVar41 = puVar41 + 4;
          uVar14 = uVar14 - 8;
          puVar19[-1] = *puVar25;
          puVar19[-2] = uVar69;
          puVar19[1] = uVar71;
          *puVar19 = uVar70;
          puVar19 = puVar19 + 4;
        } while (uVar14 != 0);
        if (uVar35 == uVar67) goto LAB_00e1a924;
      }
      lVar32 = uVar67 - uVar35;
      puVar16 = (undefined4 *)(param_9 + uVar35 * 4);
      puVar20 = (undefined4 *)((long)param_7 + uVar35 * 4);
      do {
        lVar32 = lVar32 + -1;
        *puVar16 = *puVar20;
        puVar16 = puVar16 + 1;
        puVar20 = puVar20 + 1;
      } while (lVar32 != 0);
    }
LAB_00e1a924:
    iVar53 = param_2 + -1;
    if (iVar53 != 0 && 0 < param_2) {
      if ((int)param_3 < 1) {
        bVar40 = false;
        bVar1 = false;
        if ((int)param_3 < iVar17) {
LAB_00e1b498:
          puVar16 = param_8 + 1;
          uVar42 = param_1;
          if ((int)param_1 < 5) {
            uVar42 = 4;
          }
          uVar42 = uVar42 - 3;
          uVar14 = (ulong)((uVar42 >> 1) + 1);
          lVar32 = (ulong)(uVar42 & 0xfffffffe) * 4 + 0xc;
          uVar13 = uVar14 & 0xfffffffc;
          iVar46 = 1;
          uVar35 = 0xffffffff;
          uVar43 = uVar9;
          do {
            iVar30 = (int)uVar35;
            if ((bool)(bVar1 & 2 < (int)param_1)) {
              uVar35 = -(uVar35 >> 0x1f) & 0xfffffffc00000000 | uVar35 << 2;
              uVar45 = 0;
              pfVar26 = (float *)(param_10 + 4 + uVar35);
              uVar47 = uVar43;
              do {
                lVar51 = (long)(int)uVar47;
                if ((uVar42 < 6) ||
                   (puVar16 + lVar51 < (undefined4 *)(param_10 + lVar32 + uVar35) &&
                    pfVar26 < param_8 + (ulong)(uVar42 & 0xfffffffe) + 3 + lVar51 ||
                    puVar16 < (undefined4 *)(param_6 + lVar32) &&
                    (undefined4 *)(param_6 + 4U) < param_8 + (ulong)(uVar42 & 0xfffffffe) + 3)) {
                  lVar36 = (long)iVar30;
                  uVar31 = 2;
LAB_00e1b5e0:
                  pfVar34 = (float *)(param_10 + 8 + lVar36 * 4);
                  pfVar15 = (float *)(param_6 + 8 + lVar51 * 4);
                  puVar20 = param_8 + lVar51 + 2;
                  do {
                    uVar31 = uVar31 + 2;
                    uVar76 = NEON_fmadd(pfVar34[-1],pfVar15[-1],*pfVar34 * *pfVar15);
                    puVar20[-1] = uVar76;
                    pfVar27 = pfVar34 + -1;
                    fVar72 = *pfVar34;
                    pfVar34 = pfVar34 + 2;
                    uVar76 = NEON_fmadd(*pfVar27,*pfVar15,pfVar15[-1] * -fVar72);
                    *puVar20 = uVar76;
                    pfVar15 = pfVar15 + 2;
                    puVar20 = puVar20 + 2;
                  } while ((int)uVar31 < (int)param_1);
                }
                else {
                  uVar54 = -(ulong)(uVar47 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar47 << 2;
                  pfVar34 = (float *)((long)puVar16 + uVar54);
                  lVar51 = uVar13 * 2 + lVar51;
                  pfVar15 = (float *)((long)(undefined4 *)(param_6 + 4U) + uVar54);
                  uVar54 = uVar13;
                  pfVar27 = pfVar26;
                  do {
                    fVar72 = pfVar27[2];
                    fVar80 = pfVar27[3];
                    fVar73 = pfVar27[4];
                    fVar94 = pfVar27[5];
                    fVar75 = pfVar27[6];
                    fVar74 = pfVar27[7];
                    uVar54 = uVar54 - 4;
                    fVar77 = pfVar15[2];
                    fVar81 = pfVar15[3];
                    fVar78 = pfVar15[4];
                    fVar82 = pfVar15[5];
                    fVar79 = pfVar15[6];
                    fVar83 = pfVar15[7];
                    fVar84 = *pfVar27;
                    fVar88 = pfVar27[1];
                    fVar85 = pfVar27[2];
                    fVar90 = pfVar27[3];
                    fVar86 = pfVar27[4];
                    fVar91 = pfVar27[5];
                    fVar87 = pfVar27[6];
                    fVar93 = pfVar27[7];
                    fVar95 = *pfVar15;
                    fVar99 = pfVar15[1];
                    fVar96 = pfVar15[2];
                    fVar100 = pfVar15[3];
                    fVar97 = pfVar15[4];
                    fVar101 = pfVar15[5];
                    fVar98 = pfVar15[6];
                    fVar102 = pfVar15[7];
                    *pfVar34 = pfVar27[1] * pfVar15[1] + *pfVar15 * *pfVar27;
                    pfVar34[1] = fVar95 * -fVar88 + fVar99 * fVar84;
                    pfVar34[2] = fVar80 * fVar81 + fVar77 * fVar72;
                    pfVar34[3] = fVar96 * -fVar90 + fVar100 * fVar85;
                    pfVar34[4] = fVar94 * fVar82 + fVar78 * fVar73;
                    pfVar34[5] = fVar97 * -fVar91 + fVar101 * fVar86;
                    pfVar34[6] = fVar74 * fVar83 + fVar79 * fVar75;
                    pfVar34[7] = fVar98 * -fVar93 + fVar102 * fVar87;
                    pfVar34 = pfVar34 + 8;
                    pfVar15 = pfVar15 + 8;
                    pfVar27 = pfVar27 + 8;
                  } while (uVar54 != 0);
                  lVar36 = uVar13 * 2 + (long)iVar30;
                  uVar31 = (int)(uVar13 >> 2) << 3 | 2;
                  if (uVar13 != uVar14) goto LAB_00e1b5e0;
                }
                uVar45 = uVar45 + 1;
                uVar47 = uVar47 + param_1;
              } while (uVar45 != param_3);
            }
            uVar35 = (ulong)(iVar30 + param_1);
            iVar46 = iVar46 + 1;
            uVar43 = uVar43 + uVar9;
          } while (iVar46 != param_2);
        }
        else {
LAB_00e1b6f4:
          uVar42 = uVar9 + 2;
          iVar46 = 1;
          iVar30 = -1;
          do {
            if ((bool)(2 < (int)param_1 & bVar40)) {
              lVar32 = (long)iVar30;
              iVar64 = 2;
              uVar43 = uVar42;
              do {
                uVar35 = -(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar43 << 2;
                lVar51 = lVar32 + 1;
                lVar32 = lVar32 + 2;
                uVar45 = param_3;
                do {
                  pfVar26 = (float *)(param_6 + uVar35);
                  lVar36 = lVar51 * 4;
                  puVar16 = (undefined4 *)((long)param_8 + uVar35);
                  uVar35 = uVar35 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar59 << 2);
                  uVar45 = uVar45 - 1;
                  uVar76 = NEON_fmadd(*(undefined4 *)(param_10 + lVar36),pfVar26[-1],
                                      *(float *)(param_10 + lVar32 * 4) * *pfVar26);
                  puVar16[-1] = uVar76;
                  uVar76 = NEON_fmadd(*(undefined4 *)(param_10 + lVar36),*pfVar26,
                                      pfVar26[-1] * -*(float *)(param_10 + lVar32 * 4));
                  *puVar16 = uVar76;
                } while (uVar45 != 0);
                iVar64 = iVar64 + 2;
                uVar43 = uVar43 + 2;
              } while (iVar64 < (int)param_1);
            }
            iVar46 = iVar46 + 1;
            uVar42 = uVar42 + uVar9;
            iVar30 = iVar30 + param_1;
          } while (iVar46 != param_2);
        }
      }
      else {
        iVar46 = 1;
        uVar42 = uVar9;
        do {
          uVar35 = -(ulong)(uVar42 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar42 << 2;
          uVar43 = param_3;
          do {
            uVar43 = uVar43 - 1;
            *(undefined4 *)((long)param_8 + uVar35) = *(undefined4 *)(param_6 + uVar35);
            uVar35 = uVar35 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2)
            ;
          } while (uVar43 != 0);
          iVar46 = iVar46 + 1;
          uVar42 = uVar42 + uVar9;
        } while (iVar46 != param_2);
        if ((int)param_3 < iVar17) {
          bVar1 = 0 < (int)param_3;
          if (1 < param_2) goto LAB_00e1b498;
        }
        else {
          bVar40 = 0 < (int)param_3;
          if (1 < param_2) goto LAB_00e1b6f4;
        }
      }
    }
    if (iVar17 < (int)param_3) {
      if (2 < param_2) {
        iVar46 = 1;
        iVar64 = (iVar53 * param_3 + -1) * param_1 + 2;
        iVar53 = (param_3 - 1) * param_1 + 2;
        iVar30 = iVar8;
        if (iVar8 < 3) {
          iVar30 = 2;
        }
        do {
          if (2 < (int)param_1 && 0 < (int)param_3) {
            iVar12 = 2;
            iVar4 = iVar53;
            iVar5 = iVar64;
            do {
              lVar51 = ((long)(int)param_1 + (long)iVar4) * 4;
              lVar36 = ((long)(int)param_1 + (long)iVar5) * 4;
              lVar32 = 0;
              uVar42 = param_3;
              do {
                pfVar26 = (float *)((long)param_8 + lVar32 + lVar51 + -4);
                pfVar34 = (float *)((long)param_8 + lVar32 + lVar36 + -4);
                pfVar15 = (float *)(param_6 + -4 + lVar51 + lVar32);
                pfVar27 = (float *)(param_6 + lVar36 + lVar32);
                uVar42 = uVar42 - 1;
                lVar32 = lVar32 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)param_1 << 2);
                *pfVar15 = *pfVar26 + *pfVar34;
                pfVar27[-1] = pfVar26[1] - pfVar34[1];
                pfVar15[1] = pfVar26[1] + pfVar34[1];
                *pfVar27 = *pfVar34 - *pfVar26;
              } while (uVar42 != 0);
              iVar12 = iVar12 + 2;
              iVar5 = iVar5 + 2;
              iVar4 = iVar4 + 2;
            } while (iVar12 < (int)param_1);
          }
          iVar46 = iVar46 + 1;
          iVar64 = iVar64 - uVar9;
          iVar53 = iVar53 + uVar9;
        } while (iVar46 != iVar30);
      }
    }
    else if (((2 < param_2) && (0 < (int)param_3)) && (2 < (int)param_1)) {
      iVar46 = 1;
      uVar42 = uVar9 * iVar53;
      iVar53 = iVar8;
      if (iVar8 < 3) {
        iVar53 = 2;
      }
      uVar43 = uVar9;
      do {
        uVar45 = 0;
        lVar32 = (-(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar43 << 2) + 8;
        uVar35 = -(ulong)(uVar42 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar42 << 2;
        do {
          iVar30 = 2;
          puVar16 = param_8;
          lVar51 = param_6;
          do {
            pfVar26 = (float *)((long)puVar16 + lVar32);
            pfVar34 = (float *)(lVar51 + lVar32);
            lVar36 = lVar51 + uVar35;
            iVar30 = iVar30 + 2;
            lVar51 = lVar51 + 8;
            pfVar34[-1] = pfVar26[-1] + *(float *)((long)puVar16 + uVar35 + 4);
            *(float *)(lVar36 + 4) = *pfVar26 - *(float *)((long)puVar16 + uVar35 + 8);
            *pfVar34 = *pfVar26 + *(float *)((long)puVar16 + uVar35 + 8);
            *(float *)(lVar36 + 8) = *(float *)((long)puVar16 + uVar35 + 4) - pfVar26[-1];
            puVar16 = puVar16 + 2;
          } while (iVar30 < (int)param_1);
          uVar45 = uVar45 + 1;
          lVar32 = lVar32 + (ulong)param_1 * 4;
          uVar35 = uVar35 + (ulong)param_1 * 4;
        } while (uVar45 != param_3);
        iVar46 = iVar46 + 1;
        uVar42 = uVar42 - uVar9;
        uVar43 = uVar43 + uVar9;
      } while (iVar46 != iVar53);
    }
  }
  if (0 < (int)param_4) {
    if ((param_4 < 8) ||
       ((param_7 < (undefined8 *)(param_9 + uVar67 * 4) && (param_9 < (long)param_7 + uVar67 * 4))))
    {
      uVar35 = 0;
    }
    else {
      uVar35 = uVar67 & 0xfffffff8;
      puVar41 = (undefined8 *)(param_9 + 0x10);
      puVar19 = param_7 + 2;
      uVar14 = uVar35;
      do {
        puVar25 = puVar41 + -1;
        uVar69 = puVar41[-2];
        uVar71 = puVar41[1];
        uVar70 = *puVar41;
        puVar41 = puVar41 + 4;
        uVar14 = uVar14 - 8;
        puVar19[-1] = *puVar25;
        puVar19[-2] = uVar69;
        puVar19[1] = uVar71;
        *puVar19 = uVar70;
        puVar19 = puVar19 + 4;
      } while (uVar14 != 0);
      if (uVar35 == uVar67) goto LAB_00e1a820;
    }
    lVar32 = uVar67 - uVar35;
    puVar16 = (undefined4 *)((long)param_7 + uVar35 * 4);
    puVar20 = (undefined4 *)(param_9 + uVar35 * 4);
    do {
      lVar32 = lVar32 + -1;
      *puVar16 = *puVar20;
      puVar16 = puVar16 + 1;
      puVar20 = puVar20 + 1;
    } while (lVar32 != 0);
  }
LAB_00e1a820:
  if (param_2 + -2 != 0 && 1 < param_2) {
    uVar42 = (param_3 - 1) * param_1;
    uVar43 = ~param_3 * param_1 + param_4 * param_2;
    iVar53 = iVar8;
    if (iVar8 < 3) {
      iVar53 = 2;
    }
    iVar46 = 1;
    uVar35 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
    do {
      if (0 < (int)param_3) {
        uVar54 = -(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar43 << 2;
        uVar13 = -(ulong)(uVar42 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar42 << 2;
        uVar14 = uVar35;
        uVar45 = param_3;
        do {
          uVar45 = uVar45 - 1;
          *(float *)(param_6 + uVar13 + uVar14) =
               *(float *)((long)param_8 + uVar14 + uVar13) +
               *(float *)((long)param_8 + uVar14 + uVar54);
          *(float *)(param_6 + uVar54 + uVar14) =
               *(float *)((long)param_8 + uVar14 + uVar54) -
               *(float *)((long)param_8 + uVar14 + uVar13);
          uVar14 = uVar14 + uVar35;
        } while (uVar45 != 0);
      }
      iVar46 = iVar46 + 1;
      uVar42 = uVar42 + uVar9;
      uVar43 = uVar43 - uVar9;
    } while (iVar46 != iVar53);
    if (2 < param_2) {
      uVar35 = (ulong)(param_4 - 1) + 1;
      lVar32 = (long)(int)param_4;
      uVar42 = (param_2 + -1) * param_4;
      fVar72 = 0.0;
      uVar14 = uVar35 & 0x1fffffffc;
      iVar53 = iVar8;
      if (iVar8 < 4) {
        iVar53 = 3;
      }
      lVar51 = (long)(int)uVar42;
      iVar46 = iVar8;
      if (iVar8 < 3) {
        iVar46 = 2;
      }
      fVar73 = 1.0;
      lVar36 = uVar35 * 4;
      lVar55 = uVar67 * 4;
      uVar56 = -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar67 << 2;
      puVar41 = (undefined8 *)((long)param_7 + (lVar32 + uVar67) * 4);
      puVar19 = (undefined8 *)((long)param_7 + uVar56);
      uVar54 = uVar67 & 0xfffffffc;
      uVar57 = -(ulong)(uVar42 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar42 << 2;
      puVar25 = (undefined8 *)((long)param_7 + (lVar51 + uVar67) * 4);
      puVar23 = (undefined8 *)((long)param_7 + uVar57);
      iVar30 = 1;
      uVar13 = uVar67;
      do {
        fVar75 = -fVar72;
        lVar58 = (long)(int)uVar42;
        lVar18 = (long)(int)uVar13;
        fVar72 = (float)NEON_fmadd((float)local_78,fVar72,fVar73 * (float)adStack_70[0]);
        fVar73 = (float)NEON_fmadd((float)local_78,fVar73,(float)adStack_70[0] * fVar75);
        if (0 < (int)param_4) {
          uVar21 = -(ulong)(uVar42 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar42 << 2;
          uVar61 = -(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
          puVar6 = (undefined8 *)(param_9 + uVar21);
          puVar7 = (undefined8 *)(param_9 + uVar61);
          lVar22 = lVar18;
          lVar68 = lVar58;
          lVar28 = lVar51;
          lVar52 = lVar32;
          if (param_4 < 4) {
            uVar37 = 0;
LAB_00e1ad88:
            lVar39 = uVar67 - uVar37;
            puVar16 = (undefined4 *)(param_9 + lVar22 * 4);
            pfVar26 = (float *)(param_9 + lVar68 * 4);
            pfVar34 = (float *)((long)param_7 + lVar28 * 4);
            puVar20 = (undefined4 *)((long)param_7 + lVar52 * 4);
            puVar49 = (undefined4 *)((long)param_7 + uVar37 * 4);
            do {
              lVar39 = lVar39 + -1;
              uVar76 = NEON_fmadd(fVar73,*puVar20,*puVar49);
              *puVar16 = uVar76;
              *pfVar26 = fVar72 * *pfVar34;
              puVar16 = puVar16 + 1;
              pfVar26 = pfVar26 + 1;
              pfVar34 = pfVar34 + 1;
              puVar20 = puVar20 + 1;
              puVar49 = puVar49 + 1;
            } while (lVar39 != 0);
          }
          else {
            uVar37 = 0;
            puVar38 = (undefined8 *)(param_9 + lVar55 + uVar21);
            puVar48 = (undefined8 *)(param_9 + lVar55 + uVar61);
            if (((puVar7 < puVar38 && puVar6 < puVar48) ||
                (puVar7 < (undefined8 *)((long)param_7 + lVar55) && param_7 < puVar48)) ||
               ((puVar7 < puVar41 && puVar19 < puVar48 ||
                ((((puVar7 < puVar25 && puVar23 < puVar48 ||
                   (puVar6 < (undefined8 *)((long)param_7 + lVar55) && param_7 < puVar38)) ||
                  (puVar6 < puVar41 && puVar19 < puVar38)) ||
                 (puVar6 < puVar25 && puVar23 < puVar38)))))) goto LAB_00e1ad88;
            puVar38 = puVar6;
            puVar48 = puVar7;
            uVar37 = uVar54;
            puVar24 = param_7;
            do {
              puVar50 = (undefined8 *)((long)puVar24 + uVar56);
              uVar71 = puVar50[1];
              uVar70 = *puVar50;
              uVar37 = uVar37 - 4;
              puVar50 = (undefined8 *)((long)puVar24 + uVar57);
              uVar92 = puVar50[1];
              uVar89 = *puVar50;
              uVar69 = *puVar24;
              puVar48[1] = CONCAT44((float)((ulong)puVar24[1] >> 0x20) +
                                    (float)((ulong)uVar71 >> 0x20) * fVar73,
                                    (float)puVar24[1] + (float)uVar71 * fVar73);
              *puVar48 = CONCAT44((float)((ulong)uVar69 >> 0x20) +
                                  (float)((ulong)uVar70 >> 0x20) * fVar73,
                                  (float)uVar69 + (float)uVar70 * fVar73);
              puVar38[1] = CONCAT44((float)((ulong)uVar92 >> 0x20) * fVar72,(float)uVar92 * fVar72);
              *puVar38 = CONCAT44((float)((ulong)uVar89 >> 0x20) * fVar72,(float)uVar89 * fVar72);
              puVar38 = puVar38 + 2;
              puVar48 = puVar48 + 2;
              puVar24 = puVar24 + 2;
            } while (uVar37 != 0);
            lVar22 = uVar54 + lVar18;
            uVar37 = uVar54;
            lVar68 = uVar54 + lVar58;
            lVar28 = uVar54 + lVar51;
            lVar52 = uVar54 + lVar32;
            if (uVar54 != uVar67) goto LAB_00e1ad88;
          }
          if (0 < (int)param_4 && 4 < param_2) {
            puVar38 = (undefined8 *)(param_9 + lVar36 + uVar21);
            puVar48 = (undefined8 *)(param_9 + lVar36 + uVar61);
            iVar64 = 2;
            fVar75 = fVar73;
            fVar80 = fVar72;
            uVar45 = (param_2 + -2) * param_4;
            uVar43 = param_4 << 1;
            do {
              fVar94 = fVar72 * fVar75;
              lVar68 = (long)(int)uVar45;
              lVar22 = (long)(int)uVar43;
              fVar75 = (float)NEON_fmadd(fVar73,fVar75,fVar80 * -fVar72);
              fVar80 = (float)NEON_fmadd(fVar73,fVar80,fVar94);
              lVar28 = lVar58;
              lVar52 = lVar18;
              if (param_4 - 1 < 3) {
LAB_00e1ae50:
                iVar12 = 0;
LAB_00e1ae60:
                iVar12 = param_4 - iVar12;
                puVar16 = (undefined4 *)(param_9 + lVar52 * 4);
                puVar20 = (undefined4 *)((long)param_7 + lVar68 * 4);
                puVar49 = (undefined4 *)(param_9 + lVar28 * 4);
                puVar62 = (undefined4 *)((long)param_7 + lVar22 * 4);
                do {
                  iVar12 = iVar12 + -1;
                  uVar76 = NEON_fmadd(fVar75,*puVar62,*puVar16);
                  *puVar16 = uVar76;
                  uVar76 = NEON_fmadd(fVar80,*puVar20,*puVar49);
                  *puVar49 = uVar76;
                  puVar16 = puVar16 + 1;
                  puVar20 = puVar20 + 1;
                  puVar49 = puVar49 + 1;
                  puVar62 = puVar62 + 1;
                } while (iVar12 != 0);
              }
              else {
                uVar21 = -(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar43 << 2;
                uVar61 = -(ulong)(uVar45 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar45 << 2;
                puVar24 = (undefined8 *)((long)param_7 + uVar21 + lVar36);
                puVar50 = (undefined8 *)((long)param_7 + uVar21);
                puVar29 = (undefined8 *)((long)param_7 + uVar61 + lVar36);
                puVar33 = (undefined8 *)((long)param_7 + uVar61);
                iVar12 = 0;
                if (((puVar7 < puVar38 && puVar6 < puVar48 || puVar7 < puVar24 && puVar50 < puVar48)
                    || (puVar7 < puVar29 && puVar33 < puVar48)) ||
                   (puVar6 < puVar24 && puVar50 < puVar38)) goto LAB_00e1ae50;
                if (puVar6 < puVar29 && puVar33 < puVar38) goto LAB_00e1ae60;
                lVar22 = uVar14 + lVar22;
                lVar68 = uVar14 + lVar68;
                puVar24 = puVar7;
                puVar29 = puVar6;
                uVar21 = uVar14;
                do {
                  uVar69 = *puVar50;
                  uVar21 = uVar21 - 4;
                  uVar71 = puVar33[1];
                  uVar70 = *puVar33;
                  uVar92 = puVar29[1];
                  uVar89 = *puVar29;
                  puVar24[1] = CONCAT44((float)((ulong)puVar24[1] >> 0x20) +
                                        (float)((ulong)puVar50[1] >> 0x20) * fVar75,
                                        (float)puVar24[1] + (float)puVar50[1] * fVar75);
                  *puVar24 = CONCAT44((float)((ulong)*puVar24 >> 0x20) +
                                      (float)((ulong)uVar69 >> 0x20) * fVar75,
                                      (float)*puVar24 + (float)uVar69 * fVar75);
                  puVar29[1] = CONCAT44((float)((ulong)uVar92 >> 0x20) +
                                        (float)((ulong)uVar71 >> 0x20) * fVar80,
                                        (float)uVar92 + (float)uVar71 * fVar80);
                  *puVar29 = CONCAT44((float)((ulong)uVar89 >> 0x20) +
                                      (float)((ulong)uVar70 >> 0x20) * fVar80,
                                      (float)uVar89 + (float)uVar70 * fVar80);
                  puVar24 = puVar24 + 2;
                  puVar29 = puVar29 + 2;
                  puVar33 = puVar33 + 2;
                  puVar50 = puVar50 + 2;
                } while (uVar21 != 0);
                iVar12 = (int)uVar14;
                lVar28 = uVar14 + lVar58;
                lVar52 = uVar14 + lVar18;
                if (uVar35 != uVar14) goto LAB_00e1ae60;
              }
              iVar64 = iVar64 + 1;
              uVar45 = uVar45 - param_4;
              uVar43 = uVar43 + param_4;
            } while (iVar64 != iVar53);
          }
        }
        uVar13 = (ulong)((int)uVar13 + param_4);
        uVar42 = uVar42 - param_4;
        iVar30 = iVar30 + 1;
      } while (iVar30 != iVar46);
      if ((2 < param_2) && (0 < (int)param_4)) {
        iVar53 = 1;
        iVar46 = iVar8;
        if (iVar8 < 3) {
          iVar46 = 2;
        }
        uVar14 = uVar67 & 0xfffffff8;
        uVar35 = uVar67;
        do {
          iVar30 = (int)uVar35;
          lVar32 = (long)iVar30;
          if ((param_4 < 8) ||
             ((param_9 < (ulong)((long)param_7 + lVar32 * 4 + lVar55) &&
              ((ulong)((long)param_7 + lVar32 * 4) < param_9 + lVar55)))) {
            uVar35 = 0;
LAB_00e1b02c:
            lVar51 = uVar67 - uVar35;
            pfVar26 = (float *)((long)param_7 + lVar32 * 4);
            pfVar34 = (float *)(param_9 + uVar35 * 4);
            do {
              lVar51 = lVar51 + -1;
              *pfVar34 = *pfVar26 + *pfVar34;
              pfVar26 = pfVar26 + 1;
              pfVar34 = pfVar34 + 1;
            } while (lVar51 != 0);
          }
          else {
            puVar41 = (undefined8 *)((long)param_7 + (long)iVar30 * 4 + 0x10);
            lVar32 = uVar14 + lVar32;
            uVar35 = uVar14;
            puVar19 = (undefined8 *)(param_9 + 0x10);
            do {
              puVar25 = puVar41 + -1;
              uVar69 = puVar41[-2];
              uVar71 = puVar41[1];
              uVar70 = *puVar41;
              uVar35 = uVar35 - 8;
              puVar41 = puVar41 + 4;
              puVar19[-1] = CONCAT44((float)((ulong)*puVar25 >> 0x20) +
                                     (float)((ulong)puVar19[-1] >> 0x20),
                                     (float)*puVar25 + (float)puVar19[-1]);
              puVar19[-2] = CONCAT44((float)((ulong)uVar69 >> 0x20) +
                                     (float)((ulong)puVar19[-2] >> 0x20),
                                     (float)uVar69 + (float)puVar19[-2]);
              puVar19[1] = CONCAT44((float)((ulong)uVar71 >> 0x20) +
                                    (float)((ulong)puVar19[1] >> 0x20),
                                    (float)uVar71 + (float)puVar19[1]);
              *puVar19 = CONCAT44((float)((ulong)uVar70 >> 0x20) + (float)((ulong)*puVar19 >> 0x20),
                                  (float)uVar70 + (float)*puVar19);
              puVar19 = puVar19 + 4;
            } while (uVar35 != 0);
            uVar35 = uVar14;
            if (uVar14 != uVar67) goto LAB_00e1b02c;
          }
          iVar53 = iVar53 + 1;
          uVar35 = (ulong)(iVar30 + param_4);
        } while (iVar53 != iVar46);
      }
    }
  }
  uVar42 = param_2 * param_1;
  uVar67 = (ulong)uVar42;
  if ((int)param_1 < (int)param_3) {
    if ((0 < (int)param_1) && (0 < (int)param_3)) {
      uVar35 = 0;
      puVar20 = param_8;
      puVar16 = param_5;
      uVar44 = param_3;
      puVar49 = param_5;
      puVar62 = param_8;
      do {
        do {
          uVar44 = uVar44 - 1;
          *puVar16 = *puVar20;
          puVar20 = puVar20 + param_1;
          puVar16 = (undefined4 *)
                    ((long)puVar16 + (-(ulong)(uVar42 >> 0x1f) & 0xfffffffc00000000 | uVar67 << 2));
        } while (uVar44 != 0);
        uVar35 = uVar35 + 1;
        puVar16 = puVar49 + 1;
        puVar20 = puVar62 + 1;
        uVar44 = param_3;
        puVar49 = puVar16;
        puVar62 = puVar20;
      } while (uVar35 != param_1);
    }
  }
  else if (0 < (int)param_3) {
    uVar35 = (ulong)uVar44 + 1;
    lVar51 = 0;
    lVar32 = 0;
    uVar43 = 0;
    uVar14 = uVar35 & 0x1fffffff8;
    puVar41 = (undefined8 *)(param_8 + 4);
    puVar19 = (undefined8 *)(param_5 + 4);
    do {
      if (0 < (int)param_1) {
        if ((uVar44 < 7) ||
           ((param_5 + lVar51 < param_8 + uVar35 + lVar32 &&
            (param_8 + lVar32 < param_5 + uVar35 + lVar51)))) {
          iVar53 = 0;
          lVar55 = lVar32;
          lVar36 = lVar51;
        }
        else {
          lVar36 = lVar51 + uVar14;
          lVar55 = lVar32 + uVar14;
          puVar23 = puVar19;
          puVar25 = puVar41;
          uVar13 = uVar14;
          do {
            puVar6 = puVar25 + -1;
            uVar69 = puVar25[-2];
            uVar71 = puVar25[1];
            uVar70 = *puVar25;
            uVar13 = uVar13 - 8;
            puVar25 = puVar25 + 4;
            puVar23[-1] = *puVar6;
            puVar23[-2] = uVar69;
            puVar23[1] = uVar71;
            *puVar23 = uVar70;
            puVar23 = puVar23 + 4;
          } while (uVar13 != 0);
          iVar53 = (int)uVar14;
          if (uVar35 == uVar14) goto LAB_00e1a9f0;
        }
        iVar53 = param_1 - iVar53;
        puVar16 = param_8 + lVar55;
        puVar20 = param_5 + lVar36;
        do {
          iVar53 = iVar53 + -1;
          *puVar20 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar20 = puVar20 + 1;
        } while (iVar53 != 0);
      }
LAB_00e1a9f0:
      lVar32 = lVar32 + (int)param_1;
      lVar51 = lVar51 + (int)uVar42;
      uVar43 = uVar43 + 1;
      puVar41 = (undefined8 *)
                ((long)puVar41 +
                (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
      puVar19 = (undefined8 *)
                ((long)puVar19 + (-(ulong)(uVar42 >> 0x1f) & 0xfffffffc00000000 | uVar67 << 2));
    } while (uVar43 != param_3);
  }
  iVar46 = param_2 + -1;
  iVar53 = param_1 * 2;
  if (2 < param_2) {
    iVar12 = uVar9 * iVar46;
    iVar30 = 1;
    iVar64 = iVar8;
    if (iVar8 < 3) {
      iVar64 = 2;
    }
    iVar5 = iVar53;
    uVar44 = uVar9;
    do {
      if (0 < (int)param_3) {
        puVar16 = param_5 + iVar5;
        puVar20 = param_8;
        uVar43 = param_3;
        do {
          uVar43 = uVar43 - 1;
          puVar16[-1] = puVar20[(int)uVar44];
          puVar49 = puVar20 + iVar12;
          puVar20 = (undefined4 *)
                    ((long)puVar20 +
                    (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
          *puVar16 = *puVar49;
          puVar16 = (undefined4 *)
                    ((long)puVar16 + (-(ulong)(uVar42 >> 0x1f) & 0xfffffffc00000000 | uVar67 << 2));
        } while (uVar43 != 0);
      }
      iVar30 = iVar30 + 1;
      iVar12 = iVar12 - uVar9;
      uVar44 = uVar44 + uVar9;
      iVar5 = iVar5 + iVar53;
    } while (iVar30 != iVar64);
  }
  if (param_1 != 1) {
    if (iVar17 < (int)param_3) {
      if (2 < param_2) {
        uVar44 = uVar9 + 2;
        uVar43 = uVar9 * iVar46 + 2;
        if (iVar8 < 3) {
          iVar8 = 2;
        }
        uVar45 = iVar53 + 2;
        uVar47 = iVar53 - 2;
        iVar17 = 1;
        do {
          if (2 < (int)param_1 && 0 < (int)param_3) {
            iVar46 = 2;
            uVar10 = uVar47;
            uVar3 = uVar45;
            uVar2 = uVar44;
            uVar31 = uVar43;
            do {
              puVar20 = param_8;
              puVar16 = param_5 + -1;
              uVar11 = param_3;
              do {
                pfVar26 = (float *)((long)puVar20 +
                                   ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 |
                                    (ulong)uVar2 << 2) - 4));
                pfVar34 = (float *)((long)puVar20 +
                                   (-(ulong)(uVar31 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar31 << 2));
                pfVar15 = (float *)((long)puVar16 +
                                   (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2
                                   ));
                pfVar27 = (float *)((long)puVar16 +
                                   (-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar10 << 2));
                puVar16 = (undefined4 *)
                          ((long)puVar16 +
                          (-(ulong)(uVar42 >> 0x1f) & 0xfffffffc00000000 | uVar67 << 2));
                uVar11 = uVar11 - 1;
                puVar20 = (undefined4 *)
                          ((long)puVar20 +
                          (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
                *pfVar15 = *pfVar26 + pfVar34[-1];
                *pfVar27 = *pfVar26 - pfVar34[-1];
                pfVar15[1] = pfVar26[1] + *pfVar34;
                pfVar27[1] = *pfVar34 - pfVar26[1];
              } while (uVar11 != 0);
              iVar46 = iVar46 + 2;
              uVar31 = uVar31 + 2;
              uVar2 = uVar2 + 2;
              uVar3 = uVar3 + 2;
              uVar10 = uVar10 - 2;
            } while (iVar46 < (int)param_1);
          }
          iVar17 = iVar17 + 1;
          uVar45 = uVar45 + iVar53;
          uVar47 = uVar47 + iVar53;
          uVar43 = uVar43 - uVar9;
          uVar44 = uVar44 + uVar9;
        } while (iVar17 != iVar8);
      }
    }
    else if (2 < param_2) {
      iVar46 = uVar9 * iVar46;
      if (iVar8 < 3) {
        iVar8 = 2;
      }
      uVar67 = -(ulong)(uVar42 >> 0x1f) & 0xfffffffc00000000 | uVar67 << 2;
      uVar35 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
      iVar17 = 1;
      iVar30 = iVar53;
      uVar44 = uVar9;
      do {
        if (0 < (int)param_3 && 2 < (int)param_1) {
          uVar42 = 0;
          pfVar26 = (float *)(param_5 + (long)iVar30 + 2);
          pfVar34 = (float *)(param_8 + (long)iVar46 + 2);
          pfVar27 = (float *)(param_5 + (long)(int)param_1 + (long)(int)uVar59 + -3);
          pfVar15 = (float *)(param_8 + (long)(int)uVar44 + 2);
          do {
            lVar32 = 2;
            pfVar60 = pfVar15;
            pfVar63 = pfVar27;
            pfVar65 = pfVar34;
            pfVar66 = pfVar26;
            do {
              lVar32 = lVar32 + 2;
              pfVar66[-1] = pfVar60[-1] + pfVar65[-1];
              *pfVar63 = pfVar60[-1] - pfVar65[-1];
              *pfVar66 = *pfVar60 + *pfVar65;
              pfVar63[1] = *pfVar65 - *pfVar60;
              pfVar63 = pfVar63 + -2;
              pfVar60 = pfVar60 + 2;
              pfVar65 = pfVar65 + 2;
              pfVar66 = pfVar66 + 2;
            } while (lVar32 < (int)param_1);
            uVar42 = uVar42 + 1;
            pfVar26 = (float *)((long)pfVar26 + uVar67);
            pfVar34 = (float *)((long)pfVar34 + uVar35);
            pfVar27 = (float *)((long)pfVar27 + uVar67);
            pfVar15 = (float *)((long)pfVar15 + uVar35);
          } while (uVar42 != param_3);
        }
        iVar17 = iVar17 + 1;
        iVar46 = iVar46 - uVar9;
        uVar44 = uVar44 + uVar9;
        iVar30 = iVar30 + iVar53;
        uVar59 = (ulong)(uint)((int)uVar59 + iVar53);
      } while (iVar17 != iVar8);
    }
  }
  return;
}


