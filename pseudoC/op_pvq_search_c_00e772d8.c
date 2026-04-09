// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: op_pvq_search_c
// Entry Point: 00e772d8
// Size: 1120 bytes
// Signature: undefined op_pvq_search_c(void)


void op_pvq_search_c(short *param_1,int *param_2,int param_3,uint param_4)

{
  undefined (*pauVar1) [12];
  uint uVar2;
  uint uVar3;
  short sVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [14];
  unkbyte10 Var8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  short *psVar15;
  undefined8 *puVar16;
  int *piVar17;
  ulong *puVar18;
  unkbyte10 *pVar19;
  uint *puVar20;
  undefined8 *puVar21;
  ushort *puVar22;
  ulong uVar23;
  ulong uVar24;
  ushort *__s;
  ulong uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined2 uVar31;
  ushort uVar32;
  undefined2 uVar33;
  ushort uVar34;
  undefined2 uVar35;
  ushort uVar36;
  undefined2 uVar37;
  undefined2 uVar38;
  ushort uVar39;
  undefined2 uVar40;
  ushort uVar41;
  undefined2 uVar42;
  ushort uVar43;
  undefined2 uVar44;
  undefined2 uVar45;
  undefined2 uVar49;
  int iVar46;
  int iVar47;
  undefined2 uVar50;
  undefined8 uVar48;
  ushort uVar52;
  undefined2 uVar53;
  int iVar51;
  undefined2 uVar54;
  ushort uVar58;
  undefined2 uVar59;
  int iVar55;
  ushort uVar60;
  undefined8 uVar56;
  undefined2 uVar61;
  ushort uVar63;
  undefined2 uVar64;
  int iVar62;
  undefined8 uVar57;
  undefined auVar65 [12];
  ushort uVar68;
  ushort uVar69;
  undefined auVar66 [16];
  undefined auVar70 [16];
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  uint auStack_70 [2];
  long local_68;
  undefined auVar67 [16];
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  __s = (ushort *)
        ((long)auStack_70 -
        ((-(ulong)(param_4 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_4 << 1) + 0xf &
        0xfffffffffffffff0));
  uVar11 = (-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2) + 0xf &
           0xfffffffffffffff0;
  uVar3 = param_4;
  if ((int)param_4 < 2) {
    uVar3 = 1;
  }
  uVar25 = (ulong)uVar3;
  memset(__s,0,uVar25 << 1);
  if (uVar3 < 0x10) {
    uVar12 = 0;
LAB_00e773d0:
    lVar13 = uVar25 - uVar12;
    piVar17 = param_2 + uVar12;
    puVar20 = (uint *)((long)__s + (uVar12 * 4 - uVar11));
    puVar22 = (ushort *)(param_1 + uVar12);
    do {
      uVar34 = *puVar22;
      *piVar17 = 0;
      uVar32 = -uVar34;
      if (-1 < (short)uVar34) {
        uVar32 = uVar34;
      }
      lVar13 = lVar13 + -1;
      *puVar20 = (uint)(uVar34 >> 0xf);
      *puVar22 = uVar32;
      piVar17 = piVar17 + 1;
      puVar20 = puVar20 + 1;
      puVar22 = puVar22 + 1;
    } while (lVar13 != 0);
  }
  else {
    uVar12 = uVar25 & 0x7ffffff0;
    puVar16 = (undefined8 *)(param_1 + 8);
    puVar18 = (ulong *)((long)__s + (0x20 - uVar11));
    puVar21 = (undefined8 *)(param_2 + 8);
    uVar24 = uVar12;
    do {
      uVar73 = puVar16[-1];
      uVar39 = (ushort)((ulong)uVar73 >> 0x10);
      uVar41 = (ushort)((ulong)uVar73 >> 0x20);
      uVar43 = (ushort)((ulong)uVar73 >> 0x30);
      uVar71 = puVar16[-2];
      uVar32 = (ushort)((ulong)uVar71 >> 0x10);
      uVar34 = (ushort)((ulong)uVar71 >> 0x20);
      uVar36 = (ushort)((ulong)uVar71 >> 0x30);
      uVar56 = puVar16[1];
      uVar48 = *puVar16;
      uVar24 = uVar24 - 0x10;
      puVar21[-3] = 0;
      puVar21[-4] = 0;
      puVar21[-1] = 0;
      puVar21[-2] = 0;
      puVar21[1] = 0;
      *puVar21 = 0;
      puVar21[3] = 0;
      puVar21[2] = 0;
      uVar68 = uVar36 >> 0xf;
      uVar69 = uVar39 >> 0xf;
      uVar31 = MP_INT_ABS((ushort)uVar71);
      uVar33 = MP_INT_ABS(uVar32);
      uVar35 = MP_INT_ABS(uVar34);
      uVar37 = MP_INT_ABS(uVar36);
      uVar38 = MP_INT_ABS((ushort)uVar73);
      uVar40 = MP_INT_ABS(uVar39);
      uVar42 = MP_INT_ABS(uVar41);
      uVar44 = MP_INT_ABS(uVar43);
      uVar36 = (ushort)((ulong)uVar48 >> 0x10);
      uVar39 = (ushort)((ulong)uVar48 >> 0x20);
      uVar52 = (ushort)((ulong)uVar48 >> 0x30);
      uVar58 = (ushort)((ulong)uVar56 >> 0x10);
      uVar60 = (ushort)((ulong)uVar56 >> 0x20);
      uVar63 = (ushort)((ulong)uVar56 >> 0x30);
      uVar45 = MP_INT_ABS((ushort)uVar48);
      uVar49 = MP_INT_ABS(uVar36);
      uVar50 = MP_INT_ABS(uVar39);
      uVar53 = MP_INT_ABS(uVar52);
      uVar54 = MP_INT_ABS((ushort)uVar56);
      uVar59 = MP_INT_ABS(uVar58);
      uVar61 = MP_INT_ABS(uVar60);
      uVar64 = MP_INT_ABS(uVar63);
      uVar23 = CONCAT26(0,CONCAT24(uVar32 >> 0xf,(uint)(ushort)((ushort)uVar71 >> 0xf)));
      auVar7._8_2_ = uVar34 >> 0xf;
      auVar7._0_8_ = uVar23;
      auVar7._10_2_ = 0;
      auVar7._12_2_ = uVar68;
      puVar16[-1] = CONCAT26(uVar44,CONCAT24(uVar42,CONCAT22(uVar40,uVar38)));
      puVar16[-2] = CONCAT26(uVar37,CONCAT24(uVar35,CONCAT22(uVar33,uVar31)));
      puVar16[1] = CONCAT26(uVar64,CONCAT24(uVar61,CONCAT22(uVar59,uVar54)));
      *puVar16 = CONCAT26(uVar53,CONCAT24(uVar50,CONCAT22(uVar49,uVar45)));
      puVar16 = puVar16 + 4;
      puVar18[-3] = (ulong)auVar7._8_6_;
      puVar18[-4] = uVar23;
      puVar18[-1] = (ulong)CONCAT24(uVar43 >> 0xf,(uint)(uVar41 >> 0xf));
      puVar18[-2] = (ulong)(CONCAT24(uVar69,(int)(CONCAT24(uVar69,CONCAT22((ushort)uVar73 >> 0xf,
                                                                           uVar68)) >> 0x10)) &
                           0xffff0000ffff);
      puVar18[1] = (ulong)CONCAT24(uVar52 >> 0xf,(uint)(uVar39 >> 0xf));
      *puVar18 = (ulong)CONCAT24(uVar36 >> 0xf,(uint)(ushort)((ushort)uVar48 >> 0xf));
      puVar18[3] = (ulong)CONCAT24(uVar63 >> 0xf,(uint)(uVar60 >> 0xf));
      puVar18[2] = (ulong)CONCAT24(uVar58 >> 0xf,(uint)(ushort)((ushort)uVar56 >> 0xf));
      puVar18 = puVar18 + 8;
      puVar21 = puVar21 + 8;
    } while (uVar24 != 0);
    if (uVar12 != uVar25) goto LAB_00e773d0;
  }
  iVar10 = param_3;
  if ((int)param_4 >> 1 < param_3) {
    if (uVar3 < 0x10) {
      uVar12 = 0;
      iVar27 = 0;
LAB_00e77490:
      lVar13 = uVar25 - uVar12;
      psVar15 = param_1 + uVar12;
      do {
        lVar13 = lVar13 + -1;
        iVar27 = iVar27 + *psVar15;
        psVar15 = psVar15 + 1;
      } while (lVar13 != 0);
    }
    else {
      uVar12 = uVar25 & 0x7ffffff0;
      puVar16 = (undefined8 *)(param_1 + 8);
      iVar26 = 0;
      iVar28 = 0;
      iVar29 = 0;
      iVar30 = 0;
      iVar27 = 0;
      iVar14 = 0;
      iVar9 = 0;
      iVar47 = 0;
      iVar46 = 0;
      iVar51 = 0;
      iVar55 = 0;
      iVar62 = 0;
      uVar24 = uVar12;
      auVar66 = ZEXT816(0);
      do {
        auVar70 = *(undefined (*) [16])(puVar16 + -2);
        uVar73 = puVar16[1];
        uVar71 = *puVar16;
        puVar16 = puVar16 + 4;
        uVar24 = uVar24 - 0x10;
        iVar27 = iVar27 + auVar70._8_2_;
        iVar14 = iVar14 + auVar70._10_2_;
        iVar9 = iVar9 + auVar70._12_2_;
        iVar47 = iVar47 + auVar70._14_2_;
        iVar26 = iVar26 + auVar70._0_2_;
        iVar28 = iVar28 + auVar70._2_2_;
        iVar29 = iVar29 + auVar70._4_2_;
        iVar30 = iVar30 + auVar70._6_2_;
        auVar70._0_4_ = auVar66._0_4_ + (int)(short)uVar73;
        auVar70._4_4_ = auVar66._4_4_ + (int)(short)((ulong)uVar73 >> 0x10);
        auVar70._8_4_ = auVar66._8_4_ + (int)(short)((ulong)uVar73 >> 0x20);
        auVar70._12_4_ = auVar66._12_4_ + (int)(short)((ulong)uVar73 >> 0x30);
        iVar46 = iVar46 + (short)uVar71;
        iVar51 = iVar51 + (short)((ulong)uVar71 >> 0x10);
        iVar55 = iVar55 + (short)((ulong)uVar71 >> 0x20);
        iVar62 = iVar62 + (short)((ulong)uVar71 >> 0x30);
        auVar66 = auVar70;
      } while (uVar24 != 0);
      iVar27 = iVar46 + iVar26 + auVar70._0_4_ + iVar27 + iVar51 + iVar28 + auVar70._4_4_ + iVar14 +
               iVar55 + iVar29 + auVar70._8_4_ + iVar9 + iVar62 + iVar30 + auVar70._12_4_ + iVar47;
      if (uVar12 != uVar25) goto LAB_00e77490;
    }
    if (iVar27 <= param_3) {
      uVar2 = param_4;
      if ((int)param_4 < 3) {
        uVar2 = 2;
      }
      iVar27 = 0x4000;
      *param_1 = 0x4000;
      memset(param_1 + 1,0,(ulong)(uVar2 - 1) << 1);
    }
    iVar9 = celt_rcp(iVar27);
    iVar14 = 0;
    iVar27 = 0;
    uVar24 = uVar25;
    psVar15 = param_1;
    piVar17 = param_2;
    puVar22 = __s;
    do {
      uVar24 = uVar24 - 1;
      iVar47 = (iVar9 * (short)param_3 >> 0x10) * (int)*psVar15;
      iVar26 = iVar47 * 2 >> 0x10;
      iVar47 = iVar47 >> 0xf;
      iVar10 = iVar10 - iVar47;
      iVar14 = iVar14 + iVar26 * *psVar15;
      iVar27 = iVar26 * iVar26 + (int)(short)iVar27;
      *piVar17 = iVar47;
      *puVar22 = (ushort)(iVar47 << 1);
      psVar15 = psVar15 + 1;
      piVar17 = piVar17 + 1;
      puVar22 = puVar22 + 1;
    } while (uVar24 != 0);
  }
  else {
    iVar14 = 0;
    iVar27 = 0;
  }
  if ((int)(param_4 + 3) < iVar10) {
    iVar27 = iVar27 + (int)(short)iVar10 * (int)(short)iVar10 + (uint)*__s * iVar10;
    *param_2 = *param_2 + iVar10;
  }
  else if (0 < iVar10) {
    iVar9 = 0;
    sVar4 = *param_1;
    if ((int)param_4 < 3) {
      param_4 = 2;
    }
    do {
      iVar9 = iVar9 + 1;
      uVar12 = 0;
      iVar28 = (int)LZCOUNT((iVar9 + param_3) - iVar10);
      uVar2 = iVar14 + sVar4 >> (-iVar28 & 0x1fU);
      iVar27 = iVar27 + 1;
      uVar24 = 1;
      iVar47 = (uint)*__s + iVar27;
      iVar26 = (int)((-(uVar2 >> 0xf & 1) & 0xfffe0000 | (uVar2 & 0xffff) << 1) * (int)(short)uVar2)
               >> 0x10;
      do {
        while( true ) {
          puVar22 = __s + uVar24;
          uVar2 = iVar14 + param_1[uVar24] >> (0x20U - iVar28 & 0x1f);
          iVar29 = (int)((-(uVar2 >> 0xf & 1) & 0xfffe0000 | (uVar2 & 0xffff) << 1) *
                        (int)(short)uVar2) >> 0x10;
          if ((int)(short)iVar26 * (int)(short)((uint)*puVar22 + iVar27) < iVar29 * (short)iVar47)
          break;
          uVar24 = uVar24 + 1;
          if (param_4 == uVar24) goto LAB_00e77590;
        }
        uVar12 = uVar24 & 0xffffffff;
        uVar24 = uVar24 + 1;
        iVar47 = (uint)*puVar22 + iVar27;
        iVar26 = iVar29;
      } while (param_4 != uVar24);
LAB_00e77590:
      uVar23 = -(uVar12 >> 0x1f) & 0xfffffffe00000000 | uVar12 << 1;
      uVar24 = -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
      iVar47 = *(int *)((long)param_2 + uVar24);
      iVar14 = iVar14 + *(short *)((long)param_1 + uVar23);
      iVar27 = (uint)*(ushort *)((long)__s + uVar23) + iVar27;
      *(ushort *)((long)__s + uVar23) = *(ushort *)((long)__s + uVar23) + 2;
      *(int *)((long)param_2 + uVar24) = iVar47 + 1;
    } while (iVar9 != iVar10);
  }
  if (uVar3 < 8) {
    uVar12 = 0;
  }
  else {
    uVar12 = uVar25 & 0x7ffffff8;
    puVar16 = (undefined8 *)(param_2 + 4);
    pVar19 = (unkbyte10 *)((long)__s + (0x10 - uVar11));
    uVar24 = uVar12;
    do {
      pauVar1 = (undefined (*) [12])(pVar19 + -1);
      puVar21 = (undefined8 *)((long)pVar19 + -8);
      iVar9 = (int)((ulong)*puVar21 >> 0x20);
      uVar71 = *(undefined8 *)*pauVar1;
      uVar48 = *(undefined8 *)((long)pVar19 + 8);
      uVar73 = *(undefined8 *)pVar19;
      Var8 = *pVar19;
      pVar19 = pVar19 + 2;
      uVar24 = uVar24 - 8;
      auVar66._12_4_ = iVar9;
      auVar66._0_12_ = *pauVar1;
      auVar66 = NEON_neg(auVar66,4);
      uVar57 = puVar16[-1];
      uVar56 = puVar16[-2];
      uVar74 = puVar16[1];
      uVar72 = *puVar16;
      auVar6._10_2_ = (short)((ulong)uVar48 >> 0x10);
      auVar6._0_10_ = Var8;
      auVar6._12_2_ = (short)((ulong)uVar48 >> 0x20);
      auVar6._14_2_ = (short)((ulong)uVar48 >> 0x30);
      auVar70 = NEON_neg(auVar6,4);
      iVar47 = CONCAT13((byte)((ulong)uVar56 >> 0x18) ^ auVar66[3],
                        CONCAT12((byte)((ulong)uVar56 >> 0x10) ^ auVar66[2],
                                 CONCAT11((byte)((ulong)uVar56 >> 8) ^ auVar66[1],
                                          (byte)uVar56 ^ auVar66[0])));
      iVar26 = CONCAT13((byte)((ulong)uVar57 >> 0x18) ^ auVar66[11],
                        CONCAT12((byte)((ulong)uVar57 >> 0x10) ^ auVar66[10],
                                 CONCAT11((byte)((ulong)uVar57 >> 8) ^ auVar66[9],
                                          (byte)uVar57 ^ auVar66[8])));
      iVar28 = CONCAT13((byte)((ulong)uVar72 >> 0x18) ^ auVar70[3],
                        CONCAT12((byte)((ulong)uVar72 >> 0x10) ^ auVar70[2],
                                 CONCAT11((byte)((ulong)uVar72 >> 8) ^ auVar70[1],
                                          (byte)uVar72 ^ auVar70[0])));
      auVar65._0_8_ =
           CONCAT17((byte)((ulong)uVar72 >> 0x38) ^ auVar70[7],
                    CONCAT16((byte)((ulong)uVar72 >> 0x30) ^ auVar70[6],
                             CONCAT15((byte)((ulong)uVar72 >> 0x28) ^ auVar70[5],
                                      CONCAT14((byte)((ulong)uVar72 >> 0x20) ^ auVar70[4],iVar28))))
      ;
      auVar65[8] = (byte)uVar74 ^ auVar70[8];
      auVar65[9] = (byte)((ulong)uVar74 >> 8) ^ auVar70[9];
      auVar65[10] = (byte)((ulong)uVar74 >> 0x10) ^ auVar70[10];
      auVar65[11] = (byte)((ulong)uVar74 >> 0x18) ^ auVar70[11];
      auVar67[12] = (byte)((ulong)uVar74 >> 0x20) ^ auVar70[12];
      auVar67._0_12_ = auVar65;
      auVar67[13] = (byte)((ulong)uVar74 >> 0x28) ^ auVar70[13];
      auVar67[14] = (byte)((ulong)uVar74 >> 0x30) ^ auVar70[14];
      auVar67[15] = (byte)((ulong)uVar74 >> 0x38) ^ auVar70[15];
      iVar10 = (int)((ulong)auVar65._0_8_ >> 0x20) + (int)((ulong)uVar73 >> 0x20);
      iVar14 = auVar67._12_4_ + (int)((ulong)uVar48 >> 0x20);
      puVar16[-1] = CONCAT44((int)(CONCAT17((byte)((ulong)uVar57 >> 0x38) ^ auVar66[15],
                                            CONCAT16((byte)((ulong)uVar57 >> 0x30) ^ auVar66[14],
                                                     CONCAT15((byte)((ulong)uVar57 >> 0x28) ^
                                                              auVar66[13],
                                                              CONCAT14((byte)((ulong)uVar57 >> 0x20)
                                                                       ^ auVar66[12],iVar26)))) >>
                                  0x20) + iVar9,iVar26 + (int)*puVar21);
      puVar16[-2] = CONCAT44((int)(CONCAT17((byte)((ulong)uVar56 >> 0x38) ^ auVar66[7],
                                            CONCAT16((byte)((ulong)uVar56 >> 0x30) ^ auVar66[6],
                                                     CONCAT15((byte)((ulong)uVar56 >> 0x28) ^
                                                              auVar66[5],
                                                              CONCAT14((byte)((ulong)uVar56 >> 0x20)
                                                                       ^ auVar66[4],iVar47)))) >>
                                  0x20) + (int)((ulong)uVar71 >> 0x20),iVar47 + (int)uVar71);
      puVar16[1] = CONCAT26((short)((uint)iVar14 >> 0x10),
                            CONCAT24((short)iVar14,auVar65._8_4_ + (int)uVar48));
      *puVar16 = CONCAT26((short)((uint)iVar10 >> 0x10),CONCAT24((short)iVar10,iVar28 + (int)uVar73)
                         );
      puVar16 = puVar16 + 4;
    } while (uVar24 != 0);
    if (uVar12 == uVar25) goto LAB_00e77704;
  }
  lVar13 = uVar25 - uVar12;
  piVar17 = (int *)((long)__s + (uVar12 * 4 - uVar11));
  puVar20 = (uint *)(param_2 + uVar12);
  do {
    lVar13 = lVar13 + -1;
    *puVar20 = (*puVar20 ^ -*piVar17) + *piVar17;
    piVar17 = piVar17 + 1;
    puVar20 = puVar20 + 1;
  } while (lVar13 != 0);
LAB_00e77704:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar27);
  }
  return;
}


