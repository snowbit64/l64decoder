// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: floor1_encode
// Entry Point: 00e13838
// Size: 2028 bytes
// Signature: undefined floor1_encode(void)


void floor1_encode(undefined8 param_1,long param_2,long param_3,uint *param_4,void *param_5)

{
  undefined (*pauVar1) [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint *puVar20;
  ulong uVar21;
  undefined4 *puVar22;
  undefined (*pauVar23) [16];
  int *piVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  undefined4 uVar29;
  long extraout_x16;
  long extraout_x16_00;
  long extraout_x16_01;
  uint uVar30;
  long extraout_x17;
  long lVar31;
  long extraout_x17_00;
  long extraout_x17_01;
  long lVar32;
  ulong uVar33;
  undefined8 *puVar34;
  int *piVar35;
  long lVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined auVar53 [16];
  undefined auVar54 [16];
  int iVar55;
  int iVar56;
  int iVar57;
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint local_174 [65];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  if (param_4 == (uint *)0x0) {
    oggpack_write(param_1,0,1);
    iVar8 = *(int *)(param_2 + 0x48);
    if (iVar8 < 0) {
      iVar8 = iVar8 + 1;
    }
    memset(param_5,0,
           -(ulong)((uint)(iVar8 >> 1) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)(iVar8 >> 1) << 2);
    uVar10 = 0;
    goto LAB_00e13ff0;
  }
  piVar35 = *(int **)(param_3 + 0x510);
  lVar14 = *(long *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x30);
  iVar8 = *(int *)(param_3 + 0x504);
  lVar36 = *(long *)(lVar14 + 0x1328);
  if (iVar8 < 1) {
    local_174[0] = *param_4;
    local_174[1] = param_4[1];
  }
  else {
    lVar15 = 0;
    do {
      uVar25 = param_4[lVar15] & 0x7fff;
      switch(piVar35[0xd0]) {
      case 1:
        uVar25 = uVar25 >> 2;
        break;
      case 2:
        uVar25 = uVar25 >> 3;
        break;
      case 3:
        uVar25 = uVar25 / 0xc;
        break;
      case 4:
        uVar25 = uVar25 >> 4;
      }
      param_4[lVar15] = uVar25 | param_4[lVar15] & 0x8000;
      lVar15 = lVar15 + 1;
    } while (iVar8 != lVar15);
    local_174[0] = *param_4;
    local_174[1] = param_4[1];
    if (2 < iVar8) {
      lVar15 = (long)iVar8 + -2;
      piVar11 = piVar35 + 0xd3;
      piVar24 = (int *)(param_3 + 0x408);
      puVar16 = param_4 + 2;
      puVar20 = local_174 + 2;
      do {
        while( true ) {
          lVar27 = (long)*piVar24;
          lVar28 = (long)piVar24[-0x3f];
          uVar25 = param_4[lVar27] & 0x7fff;
          iVar55 = (param_4[lVar28] & 0x7fff) - uVar25;
          iVar56 = piVar35[lVar28 + 0xd1] - piVar35[lVar27 + 0xd1];
          iVar8 = -iVar55;
          if (-1 < iVar55) {
            iVar8 = iVar55;
          }
          uVar13 = *puVar16;
          iVar57 = 0;
          if (iVar56 != 0) {
            iVar57 = (iVar8 * (*piVar11 - piVar35[lVar27 + 0xd1])) / iVar56;
          }
          iVar8 = -iVar57;
          if (-1 < iVar55) {
            iVar8 = iVar57;
          }
          uVar30 = iVar8 + uVar25;
          if (((uVar13 >> 0xf & 1) != 0) || (uVar13 == uVar30)) break;
          uVar19 = *(int *)(param_3 + 0x50c) - uVar30;
          if ((int)uVar30 <= (int)uVar19) {
            uVar19 = uVar30;
          }
          uVar13 = uVar13 - uVar30;
          if ((int)uVar13 < 0) {
            uVar30 = uVar13 * 2 ^ 0xffffffff;
            if ((int)(uVar13 + uVar19) < 0 != SBORROW4(uVar13,-uVar19)) {
              uVar30 = uVar19 + ~uVar13;
            }
          }
          else {
            uVar30 = uVar13 * 2;
            if ((int)uVar19 <= (int)uVar13) {
              uVar30 = uVar19 + uVar13;
            }
          }
          param_4[lVar27] = uVar25;
          uVar25 = param_4[lVar28];
          *puVar20 = uVar30;
          param_4[lVar28] = uVar25 & 0x7fff;
          lVar15 = lVar15 + -1;
          piVar11 = piVar11 + 1;
          piVar24 = piVar24 + 1;
          puVar16 = puVar16 + 1;
          puVar20 = puVar20 + 1;
          if (lVar15 == 0) goto LAB_00e13a7c;
        }
        *puVar20 = 0;
        *puVar16 = uVar30 | 0x8000;
        lVar15 = lVar15 + -1;
        piVar11 = piVar11 + 1;
        piVar24 = piVar24 + 1;
        puVar16 = puVar16 + 1;
        puVar20 = puVar20 + 1;
      } while (lVar15 != 0);
    }
  }
LAB_00e13a7c:
  uVar13 = local_174[1];
  uVar25 = local_174[0];
  oggpack_write(param_1,1,1);
  *(long *)(param_3 + 0x528) = *(long *)(param_3 + 0x528) + 1;
  iVar8 = ov_ilog(*(int *)(param_3 + 0x50c) + -1);
  *(long *)(param_3 + 0x520) = *(long *)(param_3 + 0x520) + (long)(iVar8 << 1);
  uVar9 = ov_ilog(*(int *)(param_3 + 0x50c) + -1);
  oggpack_write(param_1,(long)(int)uVar25,uVar9);
  uVar9 = ov_ilog(*(int *)(param_3 + 0x50c) + -1);
  uVar10 = oggpack_write(param_1,(long)(int)uVar13,uVar9);
  if (0 < *piVar35) {
    lVar15 = 0;
    lVar27 = 2;
    lVar28 = extraout_x16;
    lVar31 = extraout_x17;
    do {
      lVar32 = (long)piVar35[lVar15 + 1];
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uVar25 = piVar35[lVar32 + 0x20];
      uVar33 = (ulong)uVar25;
      uVar13 = piVar35[lVar32 + 0x30];
      if (uVar13 != 0) {
        uStack_1b8 = 0;
        local_1c0 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        if (uVar13 == 0x1f) {
          if ((int)uVar25 < 1) {
LAB_00e13cc8:
            uVar30 = 0;
          }
          else {
LAB_00e13cb0:
            if (uVar25 < 8) {
              uVar18 = 0;
              uVar13 = 0;
              uVar30 = 0;
            }
            else {
              uVar18 = uVar33 & 0xfffffff8;
              bVar37 = 0;
              bVar38 = 0;
              bVar39 = 0;
              bVar40 = 0;
              bVar41 = 0;
              bVar42 = 0;
              bVar43 = 0;
              bVar44 = 0;
              bVar45 = 0;
              bVar46 = 0;
              bVar47 = 0;
              bVar48 = 0;
              bVar49 = 0;
              bVar50 = 0;
              bVar51 = 0;
              bVar52 = 0;
              uVar13 = -(int)uVar18;
              iVar56 = 0x3e;
              iVar57 = 0x5d;
              iVar8 = 0;
              iVar55 = 0x1f;
              uVar17 = uVar18;
              pauVar23 = (undefined (*) [16])&uStack_190;
              auVar54 = ZEXT816(0);
              do {
                pauVar1 = pauVar23 + -1;
                auVar53 = *pauVar23;
                auVar58._0_4_ = iVar8 + 0x7c;
                auVar58._4_4_ = iVar55 + 0x7c;
                auVar58._8_4_ = iVar56 + 0x7c;
                auVar58._12_4_ = iVar57 + 0x7c;
                pauVar23 = pauVar23 + 2;
                uVar17 = uVar17 - 8;
                auVar59._4_4_ = iVar55;
                auVar59._0_4_ = iVar8;
                auVar59._8_4_ = iVar56;
                auVar59._12_4_ = iVar57;
                auVar60 = NEON_ushl(*pauVar1,auVar59,4);
                iVar8 = iVar8 + 0xf8;
                iVar55 = iVar55 + 0xf8;
                iVar56 = iVar56 + 0xf8;
                iVar57 = iVar57 + 0xf8;
                auVar59 = NEON_ushl(auVar53,auVar58,4);
                bVar37 = auVar60[0] | bVar37;
                bVar38 = auVar60[1] | bVar38;
                bVar39 = auVar60[2] | bVar39;
                bVar40 = auVar60[3] | bVar40;
                bVar41 = auVar60[4] | bVar41;
                bVar42 = auVar60[5] | bVar42;
                bVar43 = auVar60[6] | bVar43;
                bVar44 = auVar60[7] | bVar44;
                bVar45 = auVar60[8] | bVar45;
                bVar46 = auVar60[9] | bVar46;
                bVar47 = auVar60[10] | bVar47;
                bVar48 = auVar60[11] | bVar48;
                bVar49 = auVar60[12] | bVar49;
                bVar50 = auVar60[13] | bVar50;
                bVar51 = auVar60[14] | bVar51;
                bVar52 = auVar60[15] | bVar52;
                auVar53[0] = auVar59[0] | auVar54[0];
                auVar53[1] = auVar59[1] | auVar54[1];
                auVar53[2] = auVar59[2] | auVar54[2];
                auVar53[3] = auVar59[3] | auVar54[3];
                auVar53[4] = auVar59[4] | auVar54[4];
                auVar53[5] = auVar59[5] | auVar54[5];
                auVar53[6] = auVar59[6] | auVar54[6];
                auVar53[7] = auVar59[7] | auVar54[7];
                auVar53[8] = auVar59[8] | auVar54[8];
                auVar53[9] = auVar59[9] | auVar54[9];
                auVar53[10] = auVar59[10] | auVar54[10];
                auVar53[11] = auVar59[11] | auVar54[11];
                auVar53[12] = auVar59[12] | auVar54[12];
                auVar53[13] = auVar59[13] | auVar54[13];
                auVar53[14] = auVar59[14] | auVar54[14];
                auVar53[15] = auVar59[15] | auVar54[15];
                auVar54 = auVar53;
              } while (uVar17 != 0);
              bVar37 = auVar53[0] | bVar37;
              bVar38 = auVar53[1] | bVar38;
              bVar39 = auVar53[2] | bVar39;
              bVar40 = auVar53[3] | bVar40;
              bVar41 = auVar53[4] | bVar41;
              bVar42 = auVar53[5] | bVar42;
              bVar43 = auVar53[6] | bVar43;
              bVar44 = auVar53[7] | bVar44;
              auVar54[1] = bVar38;
              auVar54[0] = bVar37;
              auVar54[2] = bVar39;
              auVar54[3] = bVar40;
              auVar54[4] = bVar41;
              auVar54[5] = bVar42;
              auVar54[6] = bVar43;
              auVar54[7] = bVar44;
              auVar54[8] = auVar53[8] | bVar45;
              auVar54[9] = auVar53[9] | bVar46;
              auVar54[10] = auVar53[10] | bVar47;
              auVar54[11] = auVar53[11] | bVar48;
              auVar54[12] = auVar53[12] | bVar49;
              auVar54[13] = auVar53[13] | bVar50;
              auVar54[14] = auVar53[14] | bVar51;
              auVar54[15] = auVar53[15] | bVar52;
              auVar60[1] = bVar38;
              auVar60[0] = bVar37;
              auVar60[2] = bVar39;
              auVar60[3] = bVar40;
              auVar60[4] = bVar41;
              auVar60[5] = bVar42;
              auVar60[6] = bVar43;
              auVar60[7] = bVar44;
              auVar60[8] = auVar53[8] | bVar45;
              auVar60[9] = auVar53[9] | bVar46;
              auVar60[10] = auVar53[10] | bVar47;
              auVar60[11] = auVar53[11] | bVar48;
              auVar60[12] = auVar53[12] | bVar49;
              auVar60[13] = auVar53[13] | bVar50;
              auVar60[14] = auVar53[14] | bVar51;
              auVar60[15] = auVar53[15] | bVar52;
              auVar54 = NEON_ext(auVar54,auVar60,8,1);
              uVar30 = CONCAT13(bVar40 | auVar54[3],
                                CONCAT12(bVar39 | auVar54[2],
                                         CONCAT11(bVar38 | auVar54[1],bVar37 | auVar54[0]))) |
                       CONCAT13(bVar44 | auVar54[7],
                                CONCAT12(bVar43 | auVar54[6],
                                         CONCAT11(bVar42 | auVar54[5],bVar41 | auVar54[4])));
              if (uVar18 == uVar33) goto LAB_00e13d58;
            }
            lVar28 = uVar33 - uVar18;
            piVar11 = (int *)((long)&local_1a0 + uVar18 * 4);
            do {
              lVar28 = lVar28 + -1;
              uVar19 = uVar13 & 0x1f;
              uVar13 = uVar13 + 0x1f;
              uVar30 = *piVar11 << (ulong)uVar19 | uVar30;
              piVar11 = piVar11 + 1;
            } while (lVar28 != 0);
          }
        }
        else {
          uVar30 = 1 << (ulong)(uVar13 & 0x1f);
          if ((int)uVar30 < 2) {
            uVar30 = 1;
          }
          uVar17 = (ulong)uVar30;
          if (uVar30 < 2) {
            uVar21 = 0;
LAB_00e13c50:
            lVar28 = uVar17 - uVar21;
            puVar16 = (uint *)(piVar35 + uVar21 + lVar32 * 8 + 0x50);
            puVar22 = (undefined4 *)((long)&local_1c0 + uVar21 * 4);
            do {
              while (uVar30 = *puVar16, (int)uVar30 < 0) {
                puVar16 = puVar16 + 1;
                lVar28 = lVar28 + -1;
                *puVar22 = 1;
                puVar22 = puVar22 + 1;
                if (lVar28 == 0) goto LAB_00e13ca0;
              }
              puVar16 = puVar16 + 1;
              lVar28 = lVar28 + -1;
              *puVar22 = *(undefined4 *)(*(long *)(lVar14 + (ulong)uVar30 * 8 + 0xb28) + 8);
              puVar22 = puVar22 + 1;
            } while (lVar28 != 0);
          }
          else {
            uVar21 = uVar17 & 0x7ffffffe;
            puVar16 = (uint *)(piVar35 + lVar32 * 8 + 0x51);
            puVar22 = (undefined4 *)((long)&local_1c0 + 4);
            uVar18 = uVar21;
            do {
              uVar30 = puVar16[-1];
              if (-1 < (int)uVar30) {
                lVar28 = *(long *)(lVar14 + (ulong)uVar30 * 8 + 0xb28);
              }
              uVar19 = *puVar16;
              if (-1 < (int)uVar19) {
                lVar31 = *(long *)(lVar14 + (ulong)uVar19 * 8 + 0xb28);
              }
              if (-1 < (int)uVar30) {
                uVar10 = *(undefined8 *)(lVar28 + 8);
              }
              if (-1 < (int)uVar19) {
                lVar28 = *(long *)(lVar31 + 8);
              }
              puVar16 = puVar16 + 2;
              uVar9 = (undefined4)uVar10;
              if ((int)uVar30 < 0) {
                uVar9 = 1;
              }
              uVar29 = (undefined4)lVar28;
              if ((int)uVar19 < 0) {
                uVar29 = 1;
              }
              uVar18 = uVar18 - 2;
              puVar22[-1] = uVar9;
              *puVar22 = uVar29;
              puVar22 = puVar22 + 2;
            } while (uVar18 != 0);
            if (uVar21 != uVar17) goto LAB_00e13c50;
          }
LAB_00e13ca0:
          if ((int)uVar25 < 1) goto LAB_00e13cc8;
          if (uVar13 == 0x1f) goto LAB_00e13cb0;
          uVar18 = 0;
          uVar19 = 0;
          uVar30 = 0;
          do {
            uVar21 = 0;
            do {
              if ((int)local_174[lVar27 + uVar18] < *(int *)((long)&local_1c0 + uVar21 * 4)) {
                *(int *)((long)&local_1a0 + uVar18 * 4) = (int)uVar21;
                uVar4 = (int)uVar21 << (ulong)(uVar19 & 0x1f);
                goto joined_r0x00e13e28;
              }
              uVar21 = uVar21 + 1;
            } while (uVar17 != uVar21);
            uVar4 = *(int *)((long)&local_1a0 + uVar18 * 4) << (ulong)(uVar19 & 0x1f);
joined_r0x00e13e28:
            uVar18 = uVar18 + 1;
            uVar30 = uVar4 | uVar30;
            uVar19 = uVar19 + uVar13;
          } while (uVar18 != uVar33);
        }
LAB_00e13d58:
        uVar10 = vorbis_book_encode(lVar36 + (long)piVar35[lVar32 + 0x40] * 0x60,uVar30,param_1);
        *(long *)(param_3 + 0x518) = *(long *)(param_3 + 0x518) + (long)(int)uVar10;
        lVar28 = extraout_x16_00;
        lVar31 = extraout_x17_00;
      }
      if (0 < (int)uVar25) {
        puVar16 = local_174 + lVar27;
        puVar34 = &local_1a0;
        do {
          uVar13 = piVar35[lVar32 * 8 + (long)*(int *)puVar34 + 0x50];
          if ((-1 < (int)uVar13) &&
             ((long)(int)*puVar16 < *(long *)(lVar36 + (ulong)uVar13 * 0x60 + 8))) {
            uVar10 = vorbis_book_encode(lVar36 + (ulong)uVar13 * 0x60,(long)(int)*puVar16,param_1);
            *(long *)(param_3 + 0x520) = *(long *)(param_3 + 0x520) + (long)(int)uVar10;
            lVar28 = extraout_x16_01;
            lVar31 = extraout_x17_01;
          }
          puVar16 = puVar16 + 1;
          puVar34 = (undefined8 *)((long)puVar34 + 4);
          uVar33 = uVar33 - 1;
        } while (uVar33 != 0);
      }
      lVar27 = lVar27 + (int)uVar25;
      lVar15 = lVar15 + 1;
    } while (lVar15 < *piVar35);
  }
  uVar33 = *(ulong *)(lVar14 + *(long *)(param_2 + 0x38) * 8);
  iVar8 = piVar35[0xd0] * *param_4;
  if ((long)uVar33 < 0) {
    uVar33 = uVar33 + 1;
  }
  if (*(int *)(param_3 + 0x504) < 2) {
    uVar25 = 0;
    iVar55 = *(int *)(param_2 + 0x48);
    if (iVar55 < 0) {
      iVar55 = iVar55 + 1;
    }
    if (0 < iVar55 >> 1) goto LAB_00e13fc8;
  }
  else {
    uVar25 = 0;
    lVar14 = 1;
    uVar13 = 0;
    do {
      while( true ) {
        lVar36 = (long)*(int *)(param_3 + lVar14 * 4 + 0x104);
        if (param_4[lVar36] >> 0xf != 0) break;
        uVar25 = piVar35[lVar36 + 0xd1];
        iVar56 = piVar35[0xd0] * param_4[lVar36];
        iVar6 = iVar56 - iVar8;
        iVar57 = uVar25 - uVar13;
        iVar55 = -iVar6;
        if (-1 < iVar6) {
          iVar55 = iVar6;
        }
        iVar5 = 0;
        if (iVar57 != 0) {
          iVar5 = iVar6 / iVar57;
        }
        iVar26 = iVar5 * iVar57;
        iVar2 = -iVar26;
        if (-1 < iVar26) {
          iVar2 = iVar26;
        }
        uVar19 = (uint)(uVar33 >> 1);
        uVar30 = uVar25;
        if ((int)uVar19 <= (int)uVar25) {
          uVar30 = uVar19;
        }
        if ((int)uVar13 < (int)uVar30) {
          *(int *)((long)param_5 + (long)(int)uVar13 * 4) = iVar8;
        }
        if ((int)(uVar13 + 1) < (int)uVar30) {
          iVar12 = 0;
          iVar26 = ~uVar13 + uVar30;
          piVar11 = (int *)((long)param_5 + (long)(int)(uVar13 + 1) * 4);
          do {
            iVar12 = iVar12 + (iVar55 - iVar2);
            uVar13 = 0;
            if (iVar57 <= iVar12) {
              uVar13 = iVar6 >> 0x1f | 1;
            }
            iVar3 = 0;
            if (iVar57 <= iVar12) {
              iVar3 = iVar57;
            }
            iVar8 = iVar8 + iVar5 + uVar13;
            iVar12 = iVar12 - iVar3;
            iVar26 = iVar26 + -1;
            *piVar11 = iVar8;
            piVar11 = piVar11 + 1;
          } while (iVar26 != 0);
        }
        lVar14 = lVar14 + 1;
        iVar8 = iVar56;
        uVar13 = uVar25;
        if (*(int *)(param_3 + 0x504) <= lVar14) goto LAB_00e13f94;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_3 + 0x504));
LAB_00e13f94:
    iVar55 = *(int *)(param_2 + 0x48);
    if (iVar55 < 0) {
      iVar55 = iVar55 + 1;
    }
    if ((int)uVar25 < iVar55 >> 1) {
LAB_00e13fc8:
      lVar14 = (long)(int)uVar25;
      do {
        *(int *)((long)param_5 + lVar14 * 4) = iVar8;
        lVar14 = lVar14 + 1;
        iVar55 = *(int *)(param_2 + 0x48);
        if (iVar55 < 0) {
          iVar55 = iVar55 + 1;
        }
      } while (lVar14 < iVar55 >> 1);
    }
  }
  uVar10 = 1;
LAB_00e13ff0:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


