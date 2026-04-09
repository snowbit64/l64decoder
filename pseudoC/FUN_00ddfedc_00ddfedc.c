// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ddfedc
// Entry Point: 00ddfedc
// Size: 4836 bytes
// Signature: undefined FUN_00ddfedc(void)


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00ddfedc(rcLogCategory param_1,long *param_2,ushort param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined (*pauVar10) [16];
  bool bVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *__s;
  void *pvVar21;
  void *pvVar22;
  ulong uVar23;
  undefined2 *puVar24;
  ulong uVar25;
  size_t __n;
  undefined2 *puVar26;
  long lVar27;
  int *piVar28;
  uint uVar29;
  uint *puVar30;
  undefined (*pauVar31) [16];
  uint uVar32;
  long lVar33;
  ushort *puVar34;
  ulong uVar35;
  undefined (*pauVar36) [16];
  long lVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  undefined8 *puVar41;
  int iVar42;
  undefined4 uVar43;
  ulong uVar44;
  ulong uVar45;
  int iVar46;
  uint uVar47;
  long lVar48;
  int *piVar49;
  void *pvVar50;
  void *pvVar51;
  uint3 uVar52;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined8 uVar53;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar67;
  uint3 uVar63;
  byte bVar66;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined8 uVar64;
  byte bVar72;
  undefined8 uVar65;
  undefined8 uVar73;
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  uint5 uVar82;
  undefined auVar83 [16];
  uint5 uVar84;
  undefined auVar85 [16];
  ulong local_c0;
  ulong local_a8;
  undefined4 local_78;
  undefined4 local_74;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  uVar4 = *(uint *)((long)param_2 + 0x34);
  uVar45 = (ulong)uVar4;
  iVar6 = uVar4 * 2;
  if ((int)*(uint *)((long)param_2 + 0x2c) < 1) {
    uVar12 = 0;
  }
  else {
    lVar27 = param_2[1];
    uVar35 = 0;
    uVar25 = 0;
    uVar12 = 0;
    auVar74._2_2_ = param_3;
    auVar74._0_2_ = param_3;
    auVar74._4_2_ = param_3;
    auVar74._6_2_ = param_3;
    auVar74._8_2_ = param_3;
    auVar74._10_2_ = param_3;
    auVar74._12_2_ = param_3;
    auVar74._14_2_ = param_3;
    do {
      if (0 < (int)uVar4) {
        uVar38 = -(uVar35 >> 0x1f) & 0xfffffffe00000000 | uVar35 << 1;
        uVar40 = 0;
        pauVar36 = (undefined (*) [16])(lVar27 + 0x10 + uVar38);
        do {
          uVar23 = uVar40;
          if (*(short *)(lVar27 + uVar38 + uVar40 * 2) == -1) break;
          uVar40 = uVar40 + 1;
          uVar23 = uVar45;
        } while (uVar45 != uVar40);
        if (0 < (int)(uint)uVar23) {
          if ((uint)uVar23 < 0x10) {
            uVar38 = 0;
          }
          else {
            uVar38 = uVar23 & 0xfffffff0;
            uVar40 = uVar38;
            auVar75 = ZEXT416(uVar12);
            auVar76 = ZEXT816(0);
            auVar78 = ZEXT816(0);
            auVar79 = ZEXT816(0);
            do {
              pauVar31 = pauVar36 + -1;
              auVar81 = *pauVar36;
              pauVar36 = pauVar36 + 2;
              uVar40 = uVar40 - 0x10;
              auVar83 = NEON_cmeq(*pauVar31,auVar74,2);
              auVar85 = NEON_cmeq(auVar81,auVar74,2);
              uVar82 = CONCAT14(auVar83[2],(uint)(auVar83[0] & 1)) & 0x1ffffffff;
              uVar84 = CONCAT14(auVar85[2],(uint)(auVar85[0] & 1)) & 0x1ffffffff;
              auVar77._0_4_ = auVar76._0_4_ + (uint)(auVar83[8] & 1);
              auVar77._4_4_ = auVar76._4_4_ + (uint)(auVar83[10] & 1);
              auVar77._8_4_ = auVar76._8_4_ + (uint)(auVar83[12] & 1);
              auVar77._12_4_ = auVar76._12_4_ + (uint)(auVar83[14] & 1);
              auVar81._0_4_ = auVar75._0_4_ + (int)uVar82;
              auVar81._4_4_ = auVar75._4_4_ + (uint)(byte)(uVar82 >> 0x20);
              auVar81._8_4_ = auVar75._8_4_ + (uint)(auVar83[4] & 1);
              auVar81._12_4_ = auVar75._12_4_ + (uint)(auVar83[6] & 1);
              auVar80._0_4_ = auVar79._0_4_ + (uint)(auVar85[8] & 1);
              auVar80._4_4_ = auVar79._4_4_ + (uint)(auVar85[10] & 1);
              auVar80._8_4_ = auVar79._8_4_ + (uint)(auVar85[12] & 1);
              auVar80._12_4_ = auVar79._12_4_ + (uint)(auVar85[14] & 1);
              auVar83._0_4_ = auVar78._0_4_ + (int)uVar84;
              auVar83._4_4_ = auVar78._4_4_ + (uint)(byte)(uVar84 >> 0x20);
              auVar83._8_4_ = auVar78._8_4_ + (uint)(auVar85[4] & 1);
              auVar83._12_4_ = auVar78._12_4_ + (uint)(auVar85[6] & 1);
              auVar75 = auVar81;
              auVar76 = auVar77;
              auVar78 = auVar83;
              auVar79 = auVar80;
            } while (uVar40 != 0);
            uVar12 = auVar83._0_4_ + auVar81._0_4_ + auVar80._0_4_ + auVar77._0_4_ +
                     auVar83._4_4_ + auVar81._4_4_ + auVar80._4_4_ + auVar77._4_4_ +
                     auVar83._8_4_ + auVar81._8_4_ + auVar80._8_4_ + auVar77._8_4_ +
                     auVar83._12_4_ + auVar81._12_4_ + auVar80._12_4_ + auVar77._12_4_;
            if (uVar38 == (uVar23 & 0xffffffff)) goto LAB_00ddff48;
          }
          lVar39 = (uVar23 & 0xffffffff) - uVar38;
          puVar34 = (ushort *)(lVar27 + (uVar38 + (long)(int)uVar35) * 2);
          do {
            if (*puVar34 == param_3) {
              uVar12 = uVar12 + 1;
            }
            lVar39 = lVar39 + -1;
            puVar34 = puVar34 + 1;
          } while (lVar39 != 0);
        }
      }
LAB_00ddff48:
      uVar25 = uVar25 + 1;
      uVar35 = (ulong)(uint)((int)uVar35 + iVar6);
    } while (uVar25 != *(uint *)((long)param_2 + 0x2c));
  }
  piVar14 = (int *)rcAlloc(uVar12 * uVar4 * 0x10,1);
  if (piVar14 == (int *)0x0) {
    rcContext::log(param_1,(char *)0x2,"removeVertex: Out of memory \'edges\' (%d).",
                   (ulong)(uVar12 * uVar4 * 4));
    uVar43 = 0;
    goto LAB_00de1180;
  }
  iVar46 = uVar12 * uVar4 * 4;
  piVar15 = (int *)rcAlloc(iVar46,1);
  if (piVar15 == (int *)0x0) {
    rcContext::log(param_1,(char *)0x2,"removeVertex: Out of memory \'hole\' (%d).",
                   (ulong)(uVar12 * uVar4));
    uVar43 = 0;
  }
  else {
    piVar16 = (int *)rcAlloc(iVar46,1);
    if (piVar16 == (int *)0x0) {
      rcContext::log(param_1,(char *)0x2,"removeVertex: Out of memory \'hreg\' (%d).",
                     (ulong)(uVar12 * uVar4));
      uVar43 = 0;
    }
    else {
      piVar17 = (int *)rcAlloc(iVar46,1);
      if (piVar17 == (int *)0x0) {
        rcContext::log(param_1,(char *)0x2,"removeVertex: Out of memory \'harea\' (%d).",
                       (ulong)(uVar12 * uVar4));
        uVar43 = 0;
      }
      else {
        lVar27 = (long)(int)uVar4;
        uVar12 = *(uint *)((long)param_2 + 0x2c);
        __n = lVar27 * 2;
        if ((int)uVar12 < 1) {
          uVar47 = 0;
        }
        else {
          uVar47 = 0;
          iVar46 = 0;
          uVar73 = CONCAT26(param_3,CONCAT24(param_3,CONCAT22(param_3,param_3)));
          auVar75._8_2_ = param_3;
          auVar75._0_8_ = uVar73;
          auVar75._10_2_ = param_3;
          auVar75._12_2_ = param_3;
          auVar75._14_2_ = param_3;
          uVar65 = auVar75._8_8_;
          do {
            if (0 < (int)uVar4) {
              lVar39 = param_2[1];
              uVar25 = 0;
              lVar33 = (long)(iVar6 * iVar46);
              pvVar18 = (void *)(lVar39 + (long)(iVar6 * iVar46) * 2);
              do {
                if (*(short *)((long)pvVar18 + uVar25 * 2) == -1) goto LAB_00de01a4;
                uVar25 = uVar25 + 1;
              } while (uVar45 != uVar25);
              uVar25 = (ulong)uVar4;
LAB_00de01a4:
              uVar29 = (uint)uVar25;
              iVar13 = uVar29 - 1;
              if (0 < (int)uVar29) {
                uVar35 = uVar25 & 0xffffffff;
                if (uVar29 < 8) {
                  uVar38 = 0;
                  bVar11 = false;
LAB_00de038c:
                  lVar37 = uVar35 - uVar38;
                  puVar34 = (ushort *)(lVar39 + (uVar38 + lVar33) * 2);
                  do {
                    lVar37 = lVar37 + -1;
                    bVar11 = (bool)(*puVar34 == param_3 | bVar11);
                    puVar34 = puVar34 + 1;
                  } while (lVar37 != 0);
                }
                else if (uVar29 < 0x20) {
                  bVar11 = false;
                  uVar40 = 0;
LAB_00de02f4:
                  uVar38 = uVar25 & 0xfffffff8;
                  uVar53 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(
                                                  bVar11,CONCAT12(bVar11,CONCAT11(bVar11,bVar11)))))
                                                  ));
                  lVar37 = uVar40 - uVar38;
                  pauVar36 = (undefined (*) [16])(lVar39 + (uVar40 + lVar33) * 2);
                  do {
                    lVar37 = lVar37 + 8;
                    auVar74 = NEON_cmeq(*pauVar36,auVar75,2);
                    bVar54 = auVar74[4] | (byte)((ulong)uVar53 >> 0x10);
                    uVar52 = CONCAT12(bVar54,CONCAT11(auVar74[2] | (byte)((ulong)uVar53 >> 8),
                                                      auVar74[0] | (byte)uVar53));
                    bVar55 = auVar74[6] | (byte)((ulong)uVar53 >> 0x18);
                    bVar56 = auVar74[8] | (byte)((ulong)uVar53 >> 0x20);
                    bVar57 = auVar74[10] | (byte)((ulong)uVar53 >> 0x28);
                    bVar59 = auVar74[12] | (byte)((ulong)uVar53 >> 0x30);
                    bVar61 = auVar74[14] | (byte)((ulong)uVar53 >> 0x38);
                    uVar53 = CONCAT17(bVar61,CONCAT16(bVar59,CONCAT15(bVar57,CONCAT14(bVar56,
                                                  CONCAT13(bVar55,uVar52)))));
                    pauVar36 = pauVar36 + 1;
                  } while (lVar37 != 0);
                  bVar11 = (uVar52 & 1 | ((uVar52 & 0xff00) >> 8 & 1) << 1 | (bVar54 & 1) << 2 |
                            (bVar55 & 1) << 3 | (bVar56 & 1) << 4 | (bVar57 & 1) << 5 |
                            (bVar59 & 1) << 6 | (bVar61 & 1) << 7) != 0;
                  if (uVar38 != uVar35) goto LAB_00de038c;
                }
                else {
                  uVar38 = uVar25 & 0xffffffe0;
                  uVar53 = 0;
                  uVar64 = 0;
                  pauVar36 = (undefined (*) [16])(lVar39 + lVar33 * 2 + 0x20);
                  uVar40 = uVar38;
                  auVar74 = ZEXT816(0);
                  do {
                    uVar40 = uVar40 - 0x20;
                    auVar76 = NEON_cmeq(pauVar36[-2],auVar75,2);
                    auVar78 = NEON_cmeq(pauVar36[-1],auVar75,2);
                    auVar79 = NEON_cmeq(*pauVar36,auVar75,2);
                    auVar81 = NEON_cmeq(pauVar36[1],auVar75,2);
                    bVar54 = auVar76[0] | (byte)uVar53;
                    bVar55 = auVar76[2] | (byte)((ulong)uVar53 >> 8);
                    bVar56 = auVar76[4] | (byte)((ulong)uVar53 >> 0x10);
                    bVar57 = auVar76[6] | (byte)((ulong)uVar53 >> 0x18);
                    bVar59 = auVar76[8] | (byte)((ulong)uVar53 >> 0x20);
                    bVar61 = auVar76[10] | (byte)((ulong)uVar53 >> 0x28);
                    bVar58 = auVar76[12] | (byte)((ulong)uVar53 >> 0x30);
                    bVar60 = auVar76[14] | (byte)((ulong)uVar53 >> 0x38);
                    uVar53 = CONCAT17(bVar60,CONCAT16(bVar58,CONCAT15(bVar61,CONCAT14(bVar59,
                                                  CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,
                                                  bVar54)))))));
                    bVar62 = auVar78[0] | (byte)uVar64;
                    bVar66 = auVar78[2] | (byte)((ulong)uVar64 >> 8);
                    bVar67 = auVar78[4] | (byte)((ulong)uVar64 >> 0x10);
                    bVar68 = auVar78[6] | (byte)((ulong)uVar64 >> 0x18);
                    bVar69 = auVar78[8] | (byte)((ulong)uVar64 >> 0x20);
                    bVar70 = auVar78[10] | (byte)((ulong)uVar64 >> 0x28);
                    bVar71 = auVar78[12] | (byte)((ulong)uVar64 >> 0x30);
                    bVar72 = auVar78[14] | (byte)((ulong)uVar64 >> 0x38);
                    uVar64 = CONCAT17(bVar72,CONCAT16(bVar71,CONCAT15(bVar70,CONCAT14(bVar69,
                                                  CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,
                                                  bVar62)))))));
                    auVar76[0] = auVar79[0] | auVar74[0];
                    auVar76[1] = auVar79[2] | auVar74[1];
                    auVar76[2] = auVar79[4] | auVar74[2];
                    auVar76[3] = auVar79[6] | auVar74[3];
                    auVar76[4] = auVar79[8] | auVar74[4];
                    auVar76[5] = auVar79[10] | auVar74[5];
                    auVar76[6] = auVar79[12] | auVar74[6];
                    auVar76[7] = auVar79[14] | auVar74[7];
                    auVar76[8] = auVar81[0] | auVar74[8];
                    auVar76[9] = auVar81[2] | auVar74[9];
                    auVar76[10] = auVar81[4] | auVar74[10];
                    auVar76[11] = auVar81[6] | auVar74[11];
                    auVar76[12] = auVar81[8] | auVar74[12];
                    auVar76[13] = auVar81[10] | auVar74[13];
                    auVar76[14] = auVar81[12] | auVar74[14];
                    auVar76[15] = auVar81[14] | auVar74[15];
                    pauVar36 = pauVar36 + 4;
                    auVar74 = auVar76;
                  } while (uVar40 != 0);
                  bVar56 = bVar56 | auVar76[2];
                  uVar52 = CONCAT12(bVar56,CONCAT11(bVar55 | auVar76[1],bVar54 | auVar76[0]));
                  bVar67 = bVar67 | auVar76[10];
                  uVar63 = CONCAT12(bVar67,CONCAT11(bVar66 | auVar76[9],bVar62 | auVar76[8]));
                  bVar11 = (uVar52 & 1 | ((uVar52 & 0xff00) >> 8 & 1) << 1 | (bVar56 & 1) << 2 |
                            ((bVar57 | auVar76[3]) & 1) << 3 | ((bVar59 | auVar76[4]) & 1) << 4 |
                            ((bVar61 | auVar76[5]) & 1) << 5 | ((bVar58 | auVar76[6]) & 1) << 6 |
                            ((bVar60 | auVar76[7]) & 1) << 7 | (uVar63 & 1) << 8 |
                            ((uVar63 & 0xff00) >> 8 & 1) << 9 | (bVar67 & 1) << 10 |
                            ((bVar68 | auVar76[11]) & 1) << 0xb |
                            ((bVar69 | auVar76[12]) & 1) << 0xc |
                            ((bVar70 | auVar76[13]) & 1) << 0xd |
                            ((bVar71 | auVar76[14]) & 1) << 0xe |
                           ((bVar72 | auVar76[15]) & 1) << 0xf) != 0;
                  if (uVar38 != uVar35) {
                    uVar40 = uVar38;
                    if ((uVar25 & 0x18) == 0) goto LAB_00de038c;
                    goto LAB_00de02f4;
                  }
                }
                if (bVar11) {
                  lVar33 = param_2[2];
                  lVar48 = (long)iVar46;
                  lVar37 = param_2[4];
                  uVar25 = 0;
                  do {
                    uVar12 = (uint)*(ushort *)((long)pvVar18 + uVar25 * 2);
                    if ((uVar12 != param_3) &&
                       (uVar29 = (uint)*(ushort *)((long)pvVar18 + (long)iVar13 * 2),
                       uVar29 != param_3)) {
                      iVar13 = uVar47 << 2;
                      uVar47 = uVar47 + 1;
                      puVar30 = (uint *)(piVar14 + iVar13);
                      *puVar30 = uVar29;
                      puVar30[1] = uVar12;
                      puVar30[2] = (uint)*(ushort *)(lVar33 + lVar48 * 2);
                      puVar30[3] = (uint)*(byte *)(lVar37 + lVar48);
                    }
                    uVar40 = uVar25 + 1;
                    iVar13 = (int)uVar25;
                    uVar25 = uVar40;
                  } while (uVar35 != uVar40);
                  memcpy(pvVar18,(void *)(lVar39 + (long)(iVar6 * (*(int *)((long)param_2 + 0x2c) +
                                                                  -1)) * 2),__n);
                  memset((void *)((long)pvVar18 + lVar27 * 2),0xff,__n);
                  iVar46 = iVar46 + -1;
                  auVar75._8_8_ = uVar65;
                  lVar39 = (long)*(int *)((long)param_2 + 0x2c) + -1;
                  *(undefined2 *)(param_2[2] + lVar48 * 2) =
                       *(undefined2 *)(param_2[2] + lVar39 * 2);
                  *(undefined *)(param_2[4] + lVar48) = *(undefined *)(param_2[4] + lVar39);
                  uVar12 = *(int *)((long)param_2 + 0x2c) - 1;
                  *(uint *)((long)param_2 + 0x2c) = uVar12;
                }
              }
            }
            iVar46 = iVar46 + 1;
          } while (iVar46 < (int)uVar12);
        }
        uVar32 = *(uint *)(param_2 + 5);
        uVar29 = (uint)param_3;
        if ((int)uVar29 < (int)uVar32) {
          uVar25 = (ulong)param_3;
          lVar39 = *param_2;
          uVar35 = uVar32 - uVar25;
          if (7 < uVar35) {
            uVar38 = uVar35 & 0xfffffffffffffff8;
            puVar41 = (undefined8 *)(lVar39 + uVar25 * 6);
            uVar25 = uVar38 + uVar25;
            uVar40 = uVar38;
            do {
              uVar40 = uVar40 - 8;
              puVar41[1] = *(undefined8 *)((long)puVar41 + 0xe);
              *puVar41 = *(undefined8 *)((long)puVar41 + 6);
              puVar41[3] = SUB168(*(undefined (*) [16])((long)puVar41 + 0x16),8);
              puVar41[2] = SUB168(*(undefined (*) [16])((long)puVar41 + 0x16),0);
              puVar41[5] = SUB168(*(undefined (*) [16])((long)puVar41 + 0x26),8);
              puVar41[4] = SUB168(*(undefined (*) [16])((long)puVar41 + 0x26),0);
              puVar41 = puVar41 + 6;
            } while (uVar40 != 0);
            if (uVar35 == uVar38) goto LAB_00de0534;
          }
          lVar33 = uVar32 - uVar25;
          puVar24 = (undefined2 *)(lVar39 + uVar25 * 6);
          do {
            lVar33 = lVar33 + -1;
            *puVar24 = puVar24[3];
            *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar24 + 4);
            puVar24 = puVar24 + 3;
          } while (lVar33 != 0);
        }
LAB_00de0534:
        *(uint *)(param_2 + 5) = uVar32 - 1;
        if (0 < (int)uVar12) {
          iVar46 = 0;
          uVar25 = 0;
          lVar39 = param_2[1];
          do {
            if (0 < (int)uVar4) {
              uVar35 = 0;
              puVar41 = (undefined8 *)(lVar39 + (long)iVar46 * 2);
              do {
                uVar40 = uVar35;
                if (*(short *)((long)puVar41 + uVar35 * 2) == -1) break;
                uVar35 = uVar35 + 1;
                uVar40 = uVar45;
              } while (uVar45 != uVar35);
              if (0 < (int)(uint)uVar40) {
                if ((uint)uVar40 < 4) {
                  uVar38 = 0;
                }
                else {
                  uVar38 = uVar40 & 0xfffffffc;
                  uVar35 = uVar38;
                  do {
                    uVar73 = *puVar41;
                    uVar23 = NEON_cmhi(uVar73,CONCAT26(param_3,CONCAT24(param_3,CONCAT22(param_3,
                                                  param_3))),2);
                    if ((uVar23 & 1) != 0) {
                      *(short *)puVar41 = (short)uVar73 + -1;
                    }
                    if ((uVar23 & 0x10000) != 0) {
                      *(short *)((long)puVar41 + 2) = (short)((ulong)uVar73 >> 0x10) + -1;
                    }
                    if ((uVar23 & 0x100000000) != 0) {
                      *(short *)((long)puVar41 + 4) = (short)((ulong)uVar73 >> 0x20) + -1;
                    }
                    if ((uVar23 & 0x1000000000000) != 0) {
                      *(short *)((long)puVar41 + 6) = (short)((ulong)uVar73 >> 0x30) + -1;
                    }
                    uVar35 = uVar35 - 4;
                    puVar41 = puVar41 + 1;
                  } while (uVar35 != 0);
                  if (uVar38 == (uVar40 & 0xffffffff)) goto LAB_00de055c;
                }
                lVar33 = (uVar40 & 0xffffffff) - uVar38;
                puVar34 = (ushort *)(lVar39 + (uVar38 + (long)iVar46) * 2);
                do {
                  if (param_3 < *puVar34) {
                    *puVar34 = *puVar34 - 1;
                  }
                  puVar34 = puVar34 + 1;
                  lVar33 = lVar33 + -1;
                } while (lVar33 != 0);
              }
            }
LAB_00de055c:
            uVar25 = uVar25 + 1;
            iVar46 = iVar46 + iVar6;
          } while (uVar25 != uVar12);
        }
        if (0 < (int)uVar47) {
          uVar25 = (ulong)uVar47;
          piVar28 = piVar14 + 1;
          do {
            if ((int)uVar29 < piVar28[-1]) {
              piVar28[-1] = piVar28[-1] + -1;
              iVar46 = *piVar28;
            }
            else {
              iVar46 = *piVar28;
            }
            if ((int)uVar29 < iVar46) {
              *piVar28 = iVar46 + -1;
            }
            piVar28 = piVar28 + 4;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        if (uVar47 == 0) {
          uVar43 = 1;
        }
        else {
          uVar32 = 1;
          piVar28 = piVar17 + 1;
          piVar1 = piVar16 + 1;
          *piVar15 = *piVar14;
          piVar2 = piVar15 + 1;
          uVar29 = 1;
          uVar12 = 1;
          *piVar16 = piVar14[2];
          *piVar17 = piVar14[3];
          do {
            if ((int)uVar47 < 1) break;
            uVar25 = 0;
            bVar54 = 0;
            do {
              iVar42 = (int)uVar25;
              iVar46 = (int)(uVar25 << 2);
              uVar35 = (ulong)iVar46;
              uVar25 = (long)iVar42 << 2 | 1;
              iVar46 = piVar14[iVar46];
              iVar13 = piVar14[uVar35 | 2];
              iVar5 = piVar14[uVar35 | 3];
              if (*piVar15 == piVar14[uVar25]) {
                uVar7 = uVar12 - 1;
                if (0 < (int)uVar12) {
                  uVar40 = (ulong)uVar12;
                  if (7 < uVar12) {
                    uVar38 = uVar40 - 1;
                    bVar11 = uVar38 >> 0x3e == 0;
                    if (((((uint)uVar38 <= uVar7) && (uVar38 >> 0x20 == 0)) &&
                        (piVar15 + uVar40 + -uVar38 <= piVar15 + uVar40)) &&
                       (((bVar11 && (piVar15 + uVar7 + -uVar38 <= piVar15 + uVar7)) &&
                        ((bVar11 &&
                         ((piVar2 + uVar7 <= piVar2 ||
                          (piVar2 + uVar40 <= piVar2 + (uVar7 - uVar40))))))))) {
                      uVar38 = uVar40 + 0xffffffff;
                      puVar41 = (undefined8 *)(piVar15 + (uVar40 - 3));
                      uVar23 = uVar40 & 0xfffffff8;
                      do {
                        uVar3 = uVar38 & 0xffffffff;
                        uVar23 = uVar23 - 8;
                        uVar38 = uVar38 - 8;
                        uVar65 = *(undefined8 *)(piVar15 + (uVar3 - 1));
                        uVar73 = *(undefined8 *)(piVar15 + (uVar3 - 3));
                        auVar74 = *(undefined (*) [16])(piVar15 + (uVar3 - 7));
                        puVar41[-1] = auVar74._8_8_;
                        puVar41[-2] = auVar74._0_8_;
                        puVar41[1] = uVar65;
                        *puVar41 = uVar73;
                        puVar41 = puVar41 + -4;
                      } while (uVar23 != 0);
                      bVar11 = (uVar40 & 0xfffffff8) == uVar40;
                      uVar40 = uVar40 & 7;
                      if (bVar11) goto LAB_00de0818;
                    }
                  }
                  do {
                    bVar11 = uVar40 != 0;
                    uVar38 = uVar40 - 1;
                    piVar15[uVar40] = piVar15[uVar38 & 0xffffffff];
                    uVar40 = uVar38;
                  } while (bVar11 && uVar38 != 0);
                }
LAB_00de0818:
                uVar7 = uVar29 - 1;
                *piVar15 = iVar46;
                if (0 < (int)uVar29) {
                  uVar40 = (ulong)uVar29;
                  if (7 < uVar29) {
                    uVar38 = uVar40 - 1;
                    bVar11 = uVar38 >> 0x3e == 0;
                    if (((((((uint)uVar38 <= uVar7) && (uVar38 >> 0x20 == 0)) &&
                          (piVar16 + uVar40 + -uVar38 <= piVar16 + uVar40)) &&
                         ((bVar11 && (piVar16 + uVar7 + -uVar38 <= piVar16 + uVar7)))) && (bVar11))
                       && ((piVar1 + uVar7 <= piVar1 ||
                           (piVar1 + uVar40 <= piVar1 + (uVar7 - uVar40))))) {
                      uVar38 = uVar40 + 0xffffffff;
                      puVar41 = (undefined8 *)(piVar16 + (uVar40 - 3));
                      uVar23 = uVar40 & 0xfffffff8;
                      do {
                        uVar3 = uVar38 & 0xffffffff;
                        uVar23 = uVar23 - 8;
                        uVar38 = uVar38 - 8;
                        uVar65 = *(undefined8 *)(piVar16 + (uVar3 - 1));
                        uVar73 = *(undefined8 *)(piVar16 + (uVar3 - 3));
                        auVar74 = *(undefined (*) [16])(piVar16 + (uVar3 - 7));
                        puVar41[-1] = auVar74._8_8_;
                        puVar41[-2] = auVar74._0_8_;
                        puVar41[1] = uVar65;
                        *puVar41 = uVar73;
                        puVar41 = puVar41 + -4;
                      } while (uVar23 != 0);
                      bVar11 = (uVar40 & 0xfffffff8) == uVar40;
                      uVar40 = uVar40 & 7;
                      if (bVar11) goto LAB_00de0848;
                    }
                  }
                  do {
                    bVar11 = uVar40 != 0;
                    uVar38 = uVar40 - 1;
                    piVar16[uVar40] = piVar16[uVar38 & 0xffffffff];
                    uVar40 = uVar38;
                  } while (bVar11 && uVar38 != 0);
                }
LAB_00de0848:
                uVar7 = uVar32 - 1;
                *piVar16 = iVar13;
                piVar49 = piVar17;
                if (0 < (int)uVar32) {
                  uVar40 = (ulong)uVar32;
                  if (7 < uVar32) {
                    uVar38 = uVar40 - 1;
                    bVar11 = uVar38 >> 0x3e == 0;
                    if (((((uint)uVar38 <= uVar7) && (uVar38 >> 0x20 == 0)) &&
                        (piVar17 + uVar40 + -uVar38 <= piVar17 + uVar40)) &&
                       (((bVar11 && (piVar17 + uVar7 + -uVar38 <= piVar17 + uVar7)) &&
                        ((bVar11 &&
                         ((piVar28 + uVar7 <= piVar28 ||
                          (piVar28 + uVar40 <= piVar28 + (uVar7 - uVar40))))))))) {
                      uVar38 = uVar40 + 0xffffffff;
                      puVar41 = (undefined8 *)(piVar17 + (uVar40 - 3));
                      uVar23 = uVar40 & 0xfffffff8;
                      do {
                        uVar3 = uVar38 & 0xffffffff;
                        uVar23 = uVar23 - 8;
                        uVar38 = uVar38 - 8;
                        uVar65 = *(undefined8 *)(piVar17 + (uVar3 - 1));
                        uVar73 = *(undefined8 *)(piVar17 + (uVar3 - 3));
                        auVar74 = *(undefined (*) [16])(piVar17 + (uVar3 - 7));
                        puVar41[-1] = auVar74._8_8_;
                        puVar41[-2] = auVar74._0_8_;
                        puVar41[1] = uVar65;
                        *puVar41 = uVar73;
                        puVar41 = puVar41 + -4;
                      } while (uVar23 != 0);
                      bVar11 = (uVar40 & 0xfffffff8) == uVar40;
                      uVar40 = uVar40 & 7;
                      if (bVar11) goto LAB_00de0758;
                    }
                  }
                  do {
                    bVar11 = uVar40 != 0;
                    uVar38 = uVar40 - 1;
                    piVar17[uVar40] = piVar17[uVar38 & 0xffffffff];
                    uVar40 = uVar38;
                  } while (bVar11 && uVar38 != 0);
                }
LAB_00de0758:
                iVar13 = uVar47 * 4;
                *piVar49 = iVar5;
                uVar12 = uVar12 + 1;
                uVar29 = uVar29 + 1;
                uVar32 = uVar32 + 1;
                uVar47 = uVar47 - 1;
                iVar42 = iVar42 + -1;
                iVar46 = piVar14[iVar13 + -3];
                bVar54 = 1;
                piVar14[uVar35] = piVar14[iVar13 + -4];
                piVar14[uVar25] = iVar46;
                piVar14[uVar35 | 2] = piVar14[iVar13 + -2];
                piVar14[uVar35 | 3] = piVar14[iVar13 + -1];
              }
              else if (piVar15[(long)(int)uVar12 + -1] == iVar46) {
                piVar15[(int)uVar12] = piVar14[uVar25];
                piVar16[(int)uVar29] = iVar13;
                piVar49 = piVar17 + (int)uVar32;
                goto LAB_00de0758;
              }
              uVar25 = (ulong)(iVar42 + 1U);
            } while ((int)(iVar42 + 1U) < (int)uVar47);
          } while ((bool)(bVar54 & uVar47 != 0));
          pvVar18 = (void *)rcAlloc(uVar12 * 0xc,1);
          if (pvVar18 == (void *)0x0) {
            rcContext::log(param_1,(char *)0x2,"removeVertex: Out of memory \'tris\' (%d).",
                           (ulong)(uVar12 * 3));
            uVar43 = 0;
          }
          else {
            pvVar19 = (void *)rcAlloc(uVar12 << 4,1);
            if (pvVar19 == (void *)0x0) {
              rcContext::log(param_1,(char *)0x2,"removeVertex: Out of memory \'tverts\' (%d).");
              uVar43 = 0;
            }
            else {
              pvVar20 = (void *)rcAlloc(uVar12 << 2,1);
              if (0 < (int)uVar12) {
                uVar25 = 0;
                lVar39 = *param_2;
                puVar30 = (uint *)((long)pvVar19 + 8);
                do {
                  lVar33 = lVar39 + (long)(piVar15[uVar25] * 3) * 2;
                  puVar30[-2] = (uint)*(ushort *)(lVar39 + (long)piVar15[uVar25] * 6);
                  puVar30[-1] = (uint)*(ushort *)(lVar33 + 2);
                  *puVar30 = (uint)*(ushort *)(lVar33 + 4);
                  puVar30[1] = 0;
                  *(int *)((long)pvVar20 + uVar25 * 4) = (int)uVar25;
                  uVar25 = uVar25 + 1;
                  puVar30 = puVar30 + 4;
                } while (uVar12 != uVar25);
              }
              uVar12 = FUN_00ddf7f8(uVar12,pvVar19,pvVar20,pvVar18);
              if ((int)uVar12 < 0) {
                uVar12 = -uVar12;
                rcContext::log(param_1,(char *)0x2,
                               "removeVertex: triangulate() returned bad results.");
              }
              __s = (void *)rcAlloc(iVar6 * (uVar12 + 1),1);
              if (__s == (void *)0x0) {
                rcContext::log(param_1,(char *)0x3,"removeVertex: Out of memory \'polys\' (%d).",
                               (ulong)((uVar12 + 1) * uVar4));
                uVar43 = 0;
              }
              else {
                pvVar21 = (void *)rcAlloc(uVar12 << 1,1);
                if (pvVar21 == (void *)0x0) {
                  rcContext::log(param_1,(char *)0x3,"removeVertex: Out of memory \'pregs\' (%d).",
                                 (ulong)uVar12);
                  uVar43 = 0;
                }
                else {
                  uVar43 = 1;
                  pvVar22 = (void *)rcAlloc(uVar12,1);
                  uVar25 = -(ulong)(uVar12 * uVar4 >> 0x1f) & 0xfffffffe00000000 |
                           (ulong)(uVar12 * uVar4) << 1;
                  memset(__s,0xff,uVar25);
                  if (uVar12 != 0) {
                    uVar47 = 0;
                    piVar28 = (int *)((long)pvVar18 + 8);
                    uVar35 = (ulong)uVar12;
                    do {
                      iVar46 = piVar28[-2];
                      iVar13 = *piVar28;
                      if (((iVar46 != iVar13) && (iVar5 = *piVar28, iVar46 != iVar5)) &&
                         (iVar13 != iVar5)) {
                        puVar24 = (undefined2 *)
                                  ((long)__s + (long)(int)uVar4 * (long)(int)uVar47 * 2);
                        *puVar24 = (short)piVar15[iVar46];
                        puVar24[1] = (short)piVar15[iVar13];
                        puVar24[2] = (short)piVar15[iVar5];
                        *(short *)((long)pvVar21 + (long)(int)uVar47 * 2) = (short)piVar16[iVar46];
                        lVar39 = (long)(int)uVar47;
                        uVar47 = uVar47 + 1;
                        *(char *)((long)pvVar22 + lVar39) = (char)piVar17[iVar46];
                      }
                      piVar28 = piVar28 + 3;
                      uVar35 = uVar35 - 1;
                    } while (uVar35 != 0);
                    if (uVar47 != 0) {
                      if (3 < (int)uVar4) {
                        uVar35 = (ulong)(int)uVar47;
                        if (1 < (int)uVar47) {
                          do {
                            uVar23 = uVar35 - 1;
                            iVar46 = 0;
                            uVar40 = 1;
                            uVar9 = 0;
                            uVar43 = 0;
                            local_a8 = 0;
                            local_c0 = 0;
                            uVar38 = 0;
                            pvVar50 = __s;
                            do {
                              pvVar50 = (void *)((long)pvVar50 + __n);
                              uVar3 = uVar38 + 1;
                              if ((long)uVar3 < (long)uVar35) {
                                uVar44 = uVar40;
                                pvVar51 = pvVar50;
                                do {
                                  iVar13 = FUN_00ddfb10((void *)((long)__s + uVar38 * lVar27 * 2),
                                                        pvVar51,*param_2,&local_74,&local_78,uVar4);
                                  if (iVar46 < iVar13) {
                                    local_c0 = uVar38 & 0xffffffff;
                                    local_a8 = uVar44 & 0xffffffff;
                                    iVar46 = iVar13;
                                    uVar43 = local_74;
                                    uVar9 = local_78;
                                  }
                                  uVar44 = uVar44 + 1;
                                  pvVar51 = (void *)((long)pvVar51 + __n);
                                } while ((long)uVar44 < (long)uVar35);
                              }
                              uVar40 = uVar40 + 1;
                              uVar38 = uVar3;
                            } while (uVar3 != (uVar23 & 0xffffffff));
                            if (iVar46 < 1) break;
                            iVar46 = (int)local_a8;
                            pvVar50 = (void *)((long)__s + (long)(int)(iVar46 * uVar4) * 2);
                            FUN_00ddfdac((void *)((long)__s + (long)(int)((int)local_c0 * uVar4) * 2
                                                 ),pvVar50,uVar43,uVar9,(long)__s + uVar25,uVar4);
                            memcpy(pvVar50,(void *)((long)__s + uVar23 * lVar27 * 2),__n);
                            *(undefined2 *)((long)pvVar21 + (long)iVar46 * 2) =
                                 *(undefined2 *)((long)pvVar21 + uVar23 * 2);
                            *(undefined *)((long)pvVar22 + (long)iVar46) =
                                 *(undefined *)((long)pvVar22 + uVar23);
                            uVar35 = uVar23;
                          } while (1 < (long)uVar23);
                        }
                        uVar47 = (uint)uVar35;
                      }
                      if (0 < (int)uVar47) {
                        lVar39 = 0;
                        uVar25 = 0;
                        iVar46 = *(int *)((long)param_2 + 0x2c);
                        uVar35 = uVar45 & 0xfffffff0;
                        pauVar36 = (undefined (*) [16])((long)__s + 0x10);
                        do {
                          if (param_4 <= iVar46) break;
                          lVar33 = param_2[1];
                          pvVar50 = (void *)(lVar33 + (long)(iVar6 * iVar46) * 2);
                          memset(pvVar50,0xff,lVar27 << 2);
                          if (0 < (int)uVar4) {
                            lVar37 = (long)(iVar6 * iVar46);
                            if ((uVar4 < 0x10) ||
                               ((pvVar50 < (void *)((long)__s + uVar45 * 2 + __n * uVar25) &&
                                ((void *)((long)__s + __n * uVar25) <
                                 (void *)(lVar33 + uVar45 * 2 + lVar37 * 2))))) {
                              uVar40 = 0;
                            }
                            else {
                              puVar41 = (undefined8 *)(lVar33 + lVar37 * 2 + 0x10);
                              uVar40 = uVar35;
                              pauVar31 = pauVar36;
                              do {
                                pauVar10 = pauVar31 + -1;
                                uVar73 = *(undefined8 *)pauVar31[-1];
                                auVar74 = *pauVar31;
                                pauVar31 = pauVar31 + 2;
                                uVar40 = uVar40 - 0x10;
                                puVar41[-1] = *(undefined8 *)(*pauVar10 + 8);
                                puVar41[-2] = uVar73;
                                puVar41[1] = auVar74._8_8_;
                                *puVar41 = auVar74._0_8_;
                                puVar41 = puVar41 + 4;
                              } while (uVar40 != 0);
                              uVar40 = uVar35;
                              if (uVar35 == uVar45) goto LAB_00de1038;
                            }
                            lVar48 = uVar45 - uVar40;
                            puVar24 = (undefined2 *)((long)__s + (uVar40 + lVar39) * 2);
                            puVar26 = (undefined2 *)(lVar33 + (uVar40 + lVar37) * 2);
                            do {
                              lVar48 = lVar48 + -1;
                              *puVar26 = *puVar24;
                              puVar24 = puVar24 + 1;
                              puVar26 = puVar26 + 1;
                            } while (lVar48 != 0);
                          }
LAB_00de1038:
                          iVar46 = *(int *)((long)param_2 + 0x2c);
                          *(undefined2 *)(param_2[2] + (long)iVar46 * 2) =
                               *(undefined2 *)((long)pvVar21 + uVar25 * 2);
                          *(undefined *)(param_2[4] + (long)iVar46) =
                               *(undefined *)((long)pvVar22 + uVar25);
                          iVar13 = *(int *)((long)param_2 + 0x2c);
                          iVar46 = iVar13 + 1;
                          *(int *)((long)param_2 + 0x2c) = iVar46;
                          if (param_4 <= iVar13) {
                            rcContext::log(param_1,(char *)0x3,
                                           "removeVertex: Too many polygons %d (max:%d).");
                            uVar43 = 0;
                            goto LAB_00de1134;
                          }
                          uVar25 = uVar25 + 1;
                          pauVar36 = (undefined (*) [16])(*pauVar36 + __n);
                          lVar39 = lVar39 + lVar27;
                        } while (uVar25 != uVar47);
                        uVar43 = 1;
                        goto LAB_00de1134;
                      }
                    }
                    uVar43 = 1;
                  }
LAB_00de1134:
                  rcFree(pvVar22);
                }
                rcFree(pvVar21);
              }
              rcFree(__s);
              rcFree(pvVar20);
            }
            rcFree(pvVar19);
          }
          rcFree(pvVar18);
        }
      }
      rcFree(piVar17);
    }
    rcFree(piVar16);
  }
  rcFree(piVar15);
LAB_00de1180:
  rcFree(piVar14);
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar43;
}


