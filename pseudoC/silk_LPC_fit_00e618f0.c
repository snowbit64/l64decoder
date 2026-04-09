// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_LPC_fit
// Entry Point: 00e618f0
// Size: 1068 bytes
// Signature: undefined silk_LPC_fit(void)


void silk_LPC_fit(undefined8 *param_1,undefined (*param_2) [16],int param_3,int param_4,uint param_5
                 )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  uint6 uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined2 *puVar15;
  short *psVar16;
  undefined (*pauVar17) [16];
  uint *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  uint5 uVar27;
  int iVar33;
  int iVar34;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  int iVar35;
  undefined auVar32 [16];
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  undefined uVar40;
  undefined uVar41;
  undefined uVar42;
  undefined uVar43;
  undefined uVar44;
  uint5 uVar45;
  uint5 uVar46;
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  
  if ((int)param_5 < 1) {
    return;
  }
  uVar5 = param_4 - param_3;
  iVar22 = 0;
  iVar23 = 0;
  uVar4 = uVar5 - 1;
  uVar21 = (ulong)param_5;
  while( true ) {
    uVar14 = 0;
    uVar11 = 0;
    do {
      uVar3 = *(uint *)(*param_2 + uVar14 * 4);
      uVar2 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      iVar1 = (int)uVar14;
      if ((int)uVar2 <= (int)uVar11) {
        uVar2 = uVar11;
        iVar1 = iVar23;
      }
      iVar23 = iVar1;
      uVar14 = uVar14 + 1;
      uVar11 = uVar2;
    } while (uVar21 != uVar14);
    uVar11 = (uVar2 & 1) + (uVar2 >> 1);
    if (uVar5 != 1) {
      uVar11 = (uVar2 >> (ulong)(uVar4 & 0x1f)) + 1 >> 1;
    }
    if (uVar11 < 0x8000) break;
    if (0x27ffd < uVar11) {
      uVar11 = 0x27ffe;
    }
    iVar1 = (int)(uVar11 + uVar11 * iVar23) >> 2;
    iVar33 = 0;
    if (iVar1 != 0) {
      iVar33 = (int)(uVar11 * 0x4000 + -0x1fffc000) / iVar1;
    }
    silk_bwexpander_32(param_2,param_5,0xffbe - iVar33);
    iVar22 = iVar22 + 1;
    if (iVar22 == 10) {
LAB_00e619dc:
      if ((int)param_5 < 1) {
        return;
      }
      if (uVar5 == 1) {
        if (param_5 < 8) {
          uVar12 = 0;
        }
        else {
          uVar12 = uVar21 & 0xfffffff8;
          auVar47._8_4_ = 0x7fff;
          auVar47._0_8_ = 0x7fff00007fff;
          auVar47._12_4_ = 0x7fff;
          uVar14 = uVar12;
          puVar19 = param_1;
          pauVar17 = param_2;
          do {
            auVar24 = *pauVar17;
            auVar25 = pauVar17[1];
            uVar14 = uVar14 - 8;
            uVar27 = CONCAT14(auVar24[4],(uint)(auVar24[0] & 1)) & 0x100ffffff;
            auVar28._0_8_ =
                 CONCAT44((uint)(byte)(uVar27 >> 0x20) + (auVar24._4_4_ >> 1),
                          (int)uVar27 + (auVar24._0_4_ >> 1));
            auVar28._8_4_ = (uint)(auVar24[8] & 1) + (auVar24._8_4_ >> 1);
            auVar28._12_4_ = (uint)(auVar24[12] & 1) + (auVar24._12_4_ >> 1);
            iVar22 = (uint)(auVar25[0] & 1) + (auVar25._0_4_ >> 1);
            iVar23 = (uint)(auVar25[4] & 1) + (auVar25._4_4_ >> 1);
            uVar36 = (undefined)((uint)iVar23 >> 8);
            uVar37 = (undefined)((uint)iVar23 >> 0x10);
            uVar38 = (undefined)((uint)iVar23 >> 0x18);
            iVar1 = (uint)(auVar25[8] & 1) + (auVar25._8_4_ >> 1);
            uVar39 = (undefined)((uint)iVar1 >> 8);
            uVar40 = (undefined)((uint)iVar1 >> 0x10);
            uVar41 = (undefined)((uint)iVar1 >> 0x18);
            iVar33 = (uint)(auVar25[12] & 1) + (auVar25._12_4_ >> 1);
            uVar42 = (undefined)((uint)iVar33 >> 8);
            uVar43 = (undefined)((uint)iVar33 >> 0x10);
            uVar44 = (undefined)((uint)iVar33 >> 0x18);
            auVar52[9] = 0x80;
            auVar52._0_9_ = (unkuint9)0xffff8000ffff8000;
            auVar52[10] = 0xff;
            auVar52[11] = 0xff;
            auVar52[12] = 0;
            auVar52[13] = 0x80;
            auVar52[14] = 0xff;
            auVar52[15] = 0xff;
            auVar24 = NEON_smax(auVar28,auVar52,4);
            auVar29._8_8_ = auVar28._8_8_;
            auVar29._0_8_ = NEON_sqxtn(auVar28._0_8_,auVar28,4);
            auVar53[9] = 0x80;
            auVar53._0_9_ = (unkuint9)0xffff8000ffff8000;
            auVar53[10] = 0xff;
            auVar53[11] = 0xff;
            auVar53[12] = 0;
            auVar53[13] = 0x80;
            auVar53[14] = 0xff;
            auVar53[15] = 0xff;
            auVar8[4] = (char)iVar23;
            auVar8._0_4_ = iVar22;
            auVar8[5] = uVar36;
            auVar8[6] = uVar37;
            auVar8[7] = uVar38;
            auVar8[8] = (char)iVar1;
            auVar8[9] = uVar39;
            auVar8[10] = uVar40;
            auVar8[11] = uVar41;
            auVar8[12] = (char)iVar33;
            auVar8[13] = uVar42;
            auVar8[14] = uVar43;
            auVar8[15] = uVar44;
            auVar25 = NEON_smax(auVar8,auVar53,4);
            auVar24 = NEON_smin(auVar24,auVar47,4);
            auVar9[4] = (char)iVar23;
            auVar9._0_4_ = iVar22;
            auVar9[5] = uVar36;
            auVar9[6] = uVar37;
            auVar9[7] = uVar38;
            auVar9[8] = (char)iVar1;
            auVar9[9] = uVar39;
            auVar9[10] = uVar40;
            auVar9[11] = uVar41;
            auVar9[12] = (char)iVar33;
            auVar9[13] = uVar42;
            auVar9[14] = uVar43;
            auVar9[15] = uVar44;
            auVar30 = NEON_sqxtn2(auVar29,auVar9,4);
            auVar25 = NEON_smin(auVar25,auVar47,4);
            puVar19[1] = auVar30._8_8_;
            *puVar19 = auVar30._0_8_;
            *(int *)pauVar17[1] = auVar24._8_4_ << 1;
            *(int *)(pauVar17[1] + 4) = auVar24._12_4_ << 1;
            *(int *)*pauVar17 = auVar24._0_4_ << 1;
            *(int *)(*pauVar17 + 4) = auVar24._4_4_ << 1;
            *(int *)pauVar17[2] = auVar25._8_4_ << 1;
            *(int *)(pauVar17[2] + 4) = auVar25._12_4_ << 1;
            *(int *)pauVar17[1] = auVar25._0_4_ << 1;
            *(int *)(pauVar17[1] + 4) = auVar25._4_4_ << 1;
            puVar19 = puVar19 + 2;
            pauVar17 = pauVar17 + 2;
          } while (uVar14 != 0);
          if (uVar12 == uVar21) {
            return;
          }
        }
        lVar13 = uVar21 - uVar12;
        puVar15 = (undefined2 *)((long)param_1 + uVar12 * 2);
        puVar18 = (uint *)(*param_2 + uVar12 * 4);
        do {
          iVar22 = (*puVar18 & 1) + ((int)*puVar18 >> 1);
          if (iVar22 == -0x8000 || iVar22 + 0x8000 < 0 != SCARRY4(iVar22,0x8000)) {
            iVar22 = -0x8000;
          }
          if (0x7ffe < iVar22) {
            iVar22 = 0x7fff;
          }
          lVar13 = lVar13 + -1;
          *puVar15 = (short)iVar22;
          *puVar18 = iVar22 << 1;
          puVar15 = puVar15 + 1;
          puVar18 = puVar18 + 1;
        } while (lVar13 != 0);
        return;
      }
      if (param_5 < 8) {
        uVar12 = 0;
      }
      else {
        auVar30._4_4_ = uVar4;
        auVar30._0_4_ = uVar4;
        auVar30._8_4_ = uVar4;
        auVar30._12_4_ = uVar4;
        uVar12 = uVar21 & 0xfffffff8;
        auVar25._8_4_ = 0xfffeffff;
        auVar25._0_8_ = 0xfffefffffffeffff;
        auVar25._12_4_ = 0xfffeffff;
        auVar24 = NEON_neg(auVar30,4);
        auVar26._8_4_ = 0x7fff;
        auVar26._0_8_ = 0x7fff00007fff;
        auVar26._12_4_ = 0x7fff;
        auVar32._8_4_ = 0xffff8000;
        auVar32._0_8_ = 0xffff8000ffff8000;
        auVar32._12_4_ = 0xffff8000;
        auVar31._4_4_ = uVar5;
        auVar31._0_4_ = uVar5;
        auVar31._8_4_ = uVar5;
        auVar31._12_4_ = uVar5;
        uVar14 = uVar12;
        puVar19 = param_1;
        pauVar17 = param_2;
        do {
          uVar14 = uVar14 - 8;
          auVar30 = NEON_sshl(*pauVar17,auVar24,4);
          auVar47 = NEON_sshl(pauVar17[1],auVar24,4);
          auVar48[8] = 0xfe;
          auVar48._0_8_ = 0xfffe0000fffe;
          auVar48[9] = 0xff;
          auVar48._10_2_ = 0;
          auVar48[12] = 0xfe;
          auVar48[13] = 0xff;
          auVar48._14_2_ = 0;
          auVar52 = NEON_cmgt(auVar30,auVar48,4);
          auVar50[8] = 0xfe;
          auVar50._0_8_ = 0xfffe0000fffe;
          auVar50[9] = 0xff;
          auVar50._10_2_ = 0;
          auVar50[12] = 0xfe;
          auVar50[13] = 0xff;
          auVar50._14_2_ = 0;
          auVar53 = NEON_cmgt(auVar47,auVar50,4);
          auVar49._0_4_ = auVar30._0_4_ + 1 >> 1;
          auVar49._4_4_ = auVar30._4_4_ + 1 >> 1;
          auVar49._8_4_ = auVar30._8_4_ + 1 >> 1;
          auVar49._12_4_ = auVar30._12_4_ + 1 >> 1;
          auVar48 = NEON_cmgt(auVar25,auVar47,4);
          auVar51._0_4_ = auVar47._0_4_ + 1 >> 1;
          auVar51._4_4_ = auVar47._4_4_ + 1 >> 1;
          auVar51._8_4_ = auVar47._8_4_ + 1 >> 1;
          auVar51._12_4_ = auVar47._12_4_ + 1 >> 1;
          auVar30 = NEON_cmgt(auVar25,auVar30,4);
          auVar50 = NEON_bit(auVar49,auVar26,auVar52,1);
          auVar47 = NEON_bit(auVar51,auVar26,auVar53,1);
          auVar30 = NEON_bsl(auVar30,auVar32,auVar50,1);
          auVar48 = NEON_bsl(auVar48,auVar32,auVar47,1);
          auVar50 = NEON_ushl(auVar30,auVar31,4);
          auVar47 = NEON_ushl(auVar48,auVar31,4);
          *(long *)(*pauVar17 + 8) = auVar50._8_8_;
          *(long *)*pauVar17 = auVar50._0_8_;
          *(long *)(pauVar17[1] + 8) = auVar47._8_8_;
          *(long *)pauVar17[1] = auVar47._0_8_;
          *(short *)(puVar19 + 2) = auVar48._0_2_;
          *(short *)((long)puVar19 + 0x12) = auVar48._4_2_;
          *(short *)((long)puVar19 + 0x14) = auVar48._8_2_;
          *(short *)((long)puVar19 + 0x16) = auVar48._12_2_;
          *(short *)puVar19 = auVar30._0_2_;
          *(short *)((long)puVar19 + 2) = auVar30._4_2_;
          *(short *)((long)puVar19 + 4) = auVar30._8_2_;
          *(short *)((long)puVar19 + 6) = auVar30._12_2_;
          puVar19 = puVar19 + 2;
          pauVar17 = pauVar17 + 2;
        } while (uVar14 != 0);
        if (uVar12 == uVar21) {
          return;
        }
      }
      lVar13 = uVar21 - uVar12;
      puVar15 = (undefined2 *)((long)param_1 + uVar12 * 2);
      piVar20 = (int *)(*param_2 + uVar12 * 4);
      do {
        iVar22 = *piVar20 >> (uVar4 & 0x1f);
        if (iVar22 < 0xffff) {
          if (iVar22 < -0x10001) {
            iVar22 = -0x8000;
          }
          else {
            iVar22 = iVar22 + 1 >> 1;
          }
        }
        else {
          iVar22 = 0x7fff;
        }
        lVar13 = lVar13 + -1;
        *puVar15 = (short)iVar22;
        *piVar20 = iVar22 << (ulong)(uVar5 & 0x1f);
        puVar15 = puVar15 + 1;
        piVar20 = piVar20 + 1;
      } while (lVar13 != 0);
      return;
    }
  }
  if (iVar22 != 10) {
    if ((int)param_5 < 1) {
      return;
    }
    if (uVar5 != 1) {
      if (param_5 < 0x10) {
        uVar14 = 0;
      }
      else {
        auVar24._4_4_ = uVar4;
        auVar24._0_4_ = uVar4;
        auVar24._8_4_ = uVar4;
        auVar24._12_4_ = uVar4;
        uVar14 = uVar21 & 0xfffffff0;
        auVar24 = NEON_neg(auVar24,4);
        puVar19 = param_1 + 2;
        pauVar17 = param_2 + 2;
        uVar12 = uVar14;
        do {
          uVar12 = uVar12 - 0x10;
          auVar30 = NEON_sshl(pauVar17[-2],auVar24,4);
          auVar25 = NEON_sshl(pauVar17[-1],auVar24,4);
          auVar26 = NEON_sshl(*pauVar17,auVar24,4);
          auVar32 = NEON_sshl(pauVar17[1],auVar24,4);
          puVar19[-1] = CONCAT26((short)(auVar25._12_4_ + 1U >> 1),
                                 CONCAT24((short)(auVar25._8_4_ + 1U >> 1),
                                          CONCAT22((short)(auVar25._4_4_ + 1U >> 1),
                                                   (short)(auVar25._0_4_ + 1U >> 1))));
          puVar19[-2] = CONCAT26((short)(auVar30._12_4_ + 1U >> 1),
                                 CONCAT24((short)(auVar30._8_4_ + 1U >> 1),
                                          CONCAT22((short)(auVar30._4_4_ + 1U >> 1),
                                                   (short)(auVar30._0_4_ + 1U >> 1))));
          puVar19[1] = CONCAT26((short)(auVar32._12_4_ + 1U >> 1),
                                CONCAT24((short)(auVar32._8_4_ + 1U >> 1),
                                         CONCAT22((short)(auVar32._4_4_ + 1U >> 1),
                                                  (short)(auVar32._0_4_ + 1U >> 1))));
          *puVar19 = CONCAT26((short)(auVar26._12_4_ + 1U >> 1),
                              CONCAT24((short)(auVar26._8_4_ + 1U >> 1),
                                       CONCAT22((short)(auVar26._4_4_ + 1U >> 1),
                                                (short)(auVar26._0_4_ + 1U >> 1))));
          puVar19 = puVar19 + 4;
          pauVar17 = pauVar17 + 4;
        } while (uVar12 != 0);
        if (uVar14 == uVar21) {
          return;
        }
      }
      lVar13 = uVar21 - uVar14;
      puVar15 = (undefined2 *)((long)param_1 + uVar14 * 2);
      piVar20 = (int *)(*param_2 + uVar14 * 4);
      do {
        lVar13 = lVar13 + -1;
        *puVar15 = (short)((*piVar20 >> (uVar4 & 0x1f)) + 1U >> 1);
        puVar15 = puVar15 + 1;
        piVar20 = piVar20 + 1;
      } while (lVar13 != 0);
      return;
    }
    if (param_5 < 0x10) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar21 & 0xfffffff0;
      puVar19 = param_1 + 2;
      pauVar17 = param_2 + 2;
      uVar12 = uVar14;
      do {
        auVar24 = pauVar17[-2];
        uVar7 = *(undefined8 *)(pauVar17[-1] + 8);
        uVar6 = *(undefined8 *)pauVar17[-1];
        uVar12 = uVar12 - 0x10;
        auVar30 = *pauVar17;
        auVar25 = pauVar17[1];
        uVar27 = CONCAT14((char)((ulong)uVar6 >> 0x20),(uint)((byte)uVar6 & 1)) & 0x1ffffffff;
        iVar22 = (uint)(auVar24[4] & 1) + (auVar24._4_4_ >> 1);
        iVar23 = (uint)(auVar24[8] & 1) + (auVar24._8_4_ >> 1);
        iVar1 = (uint)(auVar24[12] & 1) + (auVar24._12_4_ >> 1);
        uVar46 = CONCAT14(auVar30[4],(uint)(auVar30[0] & 1)) & 0x1ffffffff;
        uVar45 = CONCAT14(auVar25[4],(uint)(auVar25[0] & 1)) & 0x1ffffffff;
        iVar33 = (uint)(byte)(uVar27 >> 0x20) + (uint)((ulong)uVar6 >> 0x21);
        iVar34 = (uint)((byte)uVar7 & 1) + ((uint)uVar7 >> 1);
        iVar35 = (uint)((byte)((ulong)uVar7 >> 0x20) & 1) + (uint)((ulong)uVar7 >> 0x21);
        uVar10 = CONCAT15((char)((uint)iVar22 >> 8),
                          CONCAT14((char)iVar22,(uint)(auVar24[0] & 1) + (auVar24._0_4_ >> 1))) &
                 0xffff0000ffff;
        puVar19[-1] = CONCAT17((char)((uint)iVar35 >> 8),
                               CONCAT16((char)iVar35,
                                        CONCAT15((char)((uint)iVar34 >> 8),
                                                 CONCAT14((char)iVar34,
                                                          CONCAT13((char)((uint)iVar33 >> 8),
                                                                   CONCAT12((char)iVar33,
                                                                            (short)uVar27 +
                                                                            (short)((uint)uVar6 >> 1
                                                                                   )))))));
        puVar19[-2] = CONCAT17((char)((uint)iVar1 >> 8),
                               CONCAT16((char)iVar1,
                                        CONCAT15((char)((uint)iVar23 >> 8),
                                                 CONCAT14((char)iVar23,
                                                          CONCAT13((char)(uVar10 >> 0x28),
                                                                   CONCAT12((char)(uVar10 >> 0x20),
                                                                            (short)uVar10))))));
        *(short *)(puVar19 + 2) = (short)uVar45 + (short)(auVar25._0_4_ >> 1);
        *(ushort *)((long)puVar19 + 0x12) =
             (ushort)(byte)(uVar45 >> 0x20) + (short)(auVar25._4_4_ >> 1);
        *(ushort *)((long)puVar19 + 0x14) = (ushort)(auVar25[8] & 1) + (short)(auVar25._8_4_ >> 1);
        *(ushort *)((long)puVar19 + 0x16) = (ushort)(auVar25[12] & 1) + (short)(auVar25._12_4_ >> 1)
        ;
        *(short *)puVar19 = (short)uVar46 + (short)(auVar30._0_4_ >> 1);
        *(ushort *)((long)puVar19 + 2) =
             (ushort)(byte)(uVar46 >> 0x20) + (short)(auVar30._4_4_ >> 1);
        *(ushort *)((long)puVar19 + 4) = (ushort)(auVar30[8] & 1) + (short)(auVar30._8_4_ >> 1);
        *(ushort *)((long)puVar19 + 6) = (ushort)(auVar30[12] & 1) + (short)(auVar30._12_4_ >> 1);
        puVar19 = puVar19 + 4;
        pauVar17 = pauVar17 + 4;
      } while (uVar12 != 0);
      if (uVar14 == uVar21) {
        return;
      }
    }
    lVar13 = uVar21 - uVar14;
    psVar16 = (short *)((long)param_1 + uVar14 * 2);
    puVar18 = (uint *)(*param_2 + uVar14 * 4);
    do {
      lVar13 = lVar13 + -1;
      *psVar16 = ((ushort)*puVar18 & 1) + (short)(*puVar18 >> 1);
      psVar16 = psVar16 + 1;
      puVar18 = puVar18 + 1;
    } while (lVar13 != 0);
    return;
  }
  goto LAB_00e619dc;
}


