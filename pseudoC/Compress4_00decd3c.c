// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Compress4
// Entry Point: 00decd3c
// Size: 1000 bytes
// Signature: undefined __thiscall Compress4(RangeFit * this, void * param_1)


/* squish::RangeFit::Compress4(void*) */

void __thiscall squish::RangeFit::Compress4(RangeFit *this,void *param_1)

{
  undefined uVar1;
  undefined uVar2;
  uint uVar3;
  long lVar4;
  uint *this_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  ulong uVar39;
  undefined8 uVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined auVar41 [16];
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined auVar48 [16];
  float fVar52;
  float fVar53;
  ulong uVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined auVar55 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  uchar auStack_a8 [16];
  float local_98 [4];
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  fVar12 = *(float *)(this + 0x20);
  this_00 = *(uint **)(this + 8);
  uVar3 = *this_00;
  uVar5 = (ulong)uVar3;
  fVar13 = *(float *)(this + 0x2c);
  if ((int)uVar3 < 1) {
    fVar20 = 0.0;
    goto LAB_00decf40;
  }
  fVar14 = *(float *)(this + 0x24);
  fVar15 = *(float *)(this + 0x28);
  fVar16 = *(float *)(this + 0x30);
  fVar17 = *(float *)(this + 0x34);
  fVar20 = 0.0;
  fVar18 = fVar12 * 0.6666667 + fVar13 * 0.3333333;
  fVar19 = fVar14 * 0.6666667 + fVar16 * 0.3333333;
  fVar30 = fVar15 * 0.6666667 + fVar17 * 0.3333333;
  fVar31 = fVar12 * 0.3333333 + fVar13 * 0.6666667;
  fVar32 = fVar14 * 0.3333333 + fVar16 * 0.6666667;
  fVar33 = fVar15 * 0.3333333 + fVar17 * 0.6666667;
  fVar36 = *(float *)(this + 0x1c);
  fVar34 = *(float *)(this + 0x14);
  fVar35 = *(float *)(this + 0x18);
  if (uVar3 < 4) {
LAB_00dece3c:
    uVar7 = 0;
  }
  else {
    pfVar9 = (float *)(this_00 + 1);
    if ((local_98 < this_00 + uVar5 * 3 + 1) && (pfVar9 < (float *)((long)local_98 + uVar5)))
    goto LAB_00dece3c;
    uVar7 = uVar5 & 0xfffffffc;
    fVar20 = 0.0;
    pfVar10 = local_98;
    uVar11 = uVar7;
    do {
      fVar21 = *pfVar9;
      fVar59 = pfVar9[1];
      fVar22 = pfVar9[2];
      fVar37 = pfVar9[3];
      fVar64 = pfVar9[4];
      fVar23 = pfVar9[5];
      fVar45 = pfVar9[6];
      fVar73 = pfVar9[7];
      fVar24 = pfVar9[8];
      fVar52 = pfVar9[9];
      fVar78 = pfVar9[10];
      fVar25 = pfVar9[0xb];
      pfVar9 = pfVar9 + 0xc;
      uVar11 = uVar11 - 4;
      fVar74 = (fVar59 - fVar19) * fVar35;
      fVar75 = (fVar64 - fVar19) * fVar35;
      fVar76 = (fVar73 - fVar19) * fVar35;
      fVar77 = (fVar78 - fVar19) * fVar35;
      fVar47 = (fVar22 - fVar15) * fVar36;
      fVar49 = (fVar23 - fVar15) * fVar36;
      fVar50 = (fVar24 - (float)uStack_d8) * fVar36;
      fVar51 = (fVar25 - (float)((ulong)uStack_d8 >> 0x20)) * fVar36;
      fVar26 = (fVar59 - fVar15) * fVar35;
      fVar27 = (fVar64 - fVar15) * fVar35;
      fVar28 = (fVar73 - (float)uStack_c8) * fVar35;
      fVar29 = (fVar78 - (float)((ulong)uStack_c8 >> 0x20)) * fVar35;
      fVar53 = (fVar59 - fVar16) * fVar35;
      fVar56 = (fVar64 - fVar16) * fVar35;
      fVar57 = (fVar73 - (float)uStack_f8) * fVar35;
      fVar58 = (fVar78 - (float)((ulong)uStack_f8 >> 0x20)) * fVar35;
      fVar60 = (fVar21 - fVar16) * fVar34;
      fVar61 = (fVar37 - fVar16) * fVar34;
      fVar62 = (fVar45 - (float)uStack_e8) * fVar34;
      fVar63 = (fVar52 - (float)((ulong)uStack_e8 >> 0x20)) * fVar34;
      fVar38 = (fVar21 - fVar12) * fVar34;
      fVar42 = (fVar37 - fVar12) * fVar34;
      fVar43 = (fVar45 - (float)uStack_b8) * fVar34;
      fVar44 = (fVar52 - (float)((ulong)uStack_b8 >> 0x20)) * fVar34;
      fVar66 = (fVar22 - fVar17) * fVar36;
      fVar70 = (fVar23 - fVar17) * fVar36;
      fVar71 = (fVar24 - (float)uStack_108) * fVar36;
      fVar72 = (fVar25 - (float)((ulong)uStack_108 >> 0x20)) * fVar36;
      auVar55._0_4_ = fVar53 * fVar53 + fVar60 * fVar60 + fVar66 * fVar66;
      auVar55._4_4_ = fVar56 * fVar56 + fVar61 * fVar61 + fVar70 * fVar70;
      auVar55._8_4_ = fVar57 * fVar57 + fVar62 * fVar62 + fVar71 * fVar71;
      auVar55._12_4_ = fVar58 * fVar58 + fVar63 * fVar63 + fVar72 * fVar72;
      auVar68._8_4_ = 0x7f7fffff;
      auVar68._0_8_ = 0x7f7fffff7f7fffff;
      auVar68._12_4_ = 0x7f7fffff;
      fVar53 = (fVar21 - fVar18) * fVar34;
      fVar56 = (fVar37 - fVar18) * fVar34;
      fVar57 = (fVar45 - fVar18) * fVar34;
      fVar58 = (fVar52 - fVar18) * fVar34;
      fVar60 = (fVar22 - fVar30) * fVar36;
      fVar61 = (fVar23 - fVar30) * fVar36;
      fVar62 = (fVar24 - fVar30) * fVar36;
      fVar63 = (fVar25 - fVar30) * fVar36;
      auVar41._4_4_ = fVar27 * fVar27 + fVar42 * fVar42 + fVar49 * fVar49;
      auVar41._0_4_ = fVar26 * fVar26 + fVar38 * fVar38 + fVar47 * fVar47;
      auVar41._8_4_ = fVar28 * fVar28 + fVar43 * fVar43 + fVar50 * fVar50;
      auVar41._12_4_ = fVar29 * fVar29 + fVar44 * fVar44 + fVar51 * fVar51;
      auVar67 = NEON_fminnm(auVar41,auVar68,4);
      fVar59 = (fVar59 - fVar32) * fVar35;
      fVar64 = (fVar64 - fVar32) * fVar35;
      fVar73 = (fVar73 - fVar32) * fVar35;
      fVar78 = (fVar78 - fVar32) * fVar35;
      auVar41 = NEON_fcmgt(auVar67,auVar55,4);
      fVar21 = (fVar21 - fVar31) * fVar34;
      fVar37 = (fVar37 - fVar31) * fVar34;
      fVar45 = (fVar45 - fVar31) * fVar34;
      fVar52 = (fVar52 - fVar31) * fVar34;
      fVar26 = fVar74 * fVar74 + fVar53 * fVar53 + fVar60 * fVar60;
      fVar27 = fVar75 * fVar75 + fVar56 * fVar56 + fVar61 * fVar61;
      fVar28 = fVar76 * fVar76 + fVar57 * fVar57 + fVar62 * fVar62;
      fVar29 = fVar77 * fVar77 + fVar58 * fVar58 + fVar63 * fVar63;
      fVar22 = (fVar22 - fVar33) * fVar36;
      fVar23 = (fVar23 - fVar33) * fVar36;
      fVar24 = (fVar24 - fVar33) * fVar36;
      fVar25 = (fVar25 - fVar33) * fVar36;
      auVar55 = NEON_bif(auVar55,auVar67,auVar41,1);
      auVar67._4_4_ = fVar27;
      auVar67._0_4_ = fVar26;
      auVar67._8_4_ = fVar28;
      auVar67._12_4_ = fVar29;
      auVar68 = NEON_fcmgt(auVar55,auVar67,4);
      auVar48._0_4_ = fVar59 * fVar59 + fVar21 * fVar21 + fVar22 * fVar22;
      auVar48._4_4_ = fVar64 * fVar64 + fVar37 * fVar37 + fVar23 * fVar23;
      auVar48._8_4_ = fVar73 * fVar73 + fVar45 * fVar45 + fVar24 * fVar24;
      auVar48._12_4_ = fVar78 * fVar78 + fVar52 * fVar52 + fVar25 * fVar25;
      auVar69._4_4_ = fVar27;
      auVar69._0_4_ = fVar26;
      auVar69._8_4_ = fVar28;
      auVar69._12_4_ = fVar29;
      auVar67 = NEON_bit(auVar55,auVar69,auVar68,1);
      auVar69 = NEON_fcmgt(auVar67,auVar48,4);
      auVar67 = NEON_bif(auVar48,auVar67,auVar69,1);
      uVar39 = (ulong)CONCAT16(auVar41[12] & ~auVar68[12],
                               (uint6)CONCAT14(auVar41[8] & ~auVar68[8],
                                               (uint)CONCAT12(auVar41[4] & ~auVar68[4],
                                                              (ushort)(byte)(auVar41[0] &
                                                                            ~auVar68[0])))) &
               0x1000100010001;
      uVar54 = CONCAT26(auVar68._12_2_,CONCAT24(auVar68._8_2_,CONCAT22(auVar68._4_2_,auVar68._0_2_))
                       ) & 0x2000200020002;
      uVar40 = NEON_bit((ulong)CONCAT16((byte)(uVar54 >> 0x30) | (byte)(uVar39 >> 0x30),
                                        (uint6)CONCAT14((byte)(uVar54 >> 0x20) |
                                                        (byte)(uVar39 >> 0x20),
                                                        (uint)CONCAT12((byte)(uVar54 >> 0x10) |
                                                                       (byte)(uVar39 >> 0x10),
                                                                       (ushort)(byte)((byte)uVar54 |
                                                                                     (byte)uVar39)))
                                       ),0x3000300030003,
                        CONCAT26(auVar69._12_2_,
                                 CONCAT24(auVar69._8_2_,CONCAT22(auVar69._4_2_,auVar69._0_2_))),1);
      fVar20 = fVar20 + auVar67._0_4_ + auVar67._4_4_ + auVar67._8_4_ + auVar67._12_4_;
      *pfVar10 = (float)CONCAT13((char)((ulong)uVar40 >> 0x30),
                                 CONCAT12((char)((ulong)uVar40 >> 0x20),
                                          CONCAT11((char)((ulong)uVar40 >> 0x10),(char)uVar40)));
      pfVar10 = pfVar10 + 1;
    } while (uVar11 != 0);
    if (uVar7 == uVar5) goto LAB_00decf40;
  }
  lVar6 = uVar5 - uVar7;
  puVar8 = (undefined *)((long)local_98 + uVar7);
  pfVar9 = (float *)(this_00 + uVar7 * 3);
  do {
    fVar52 = pfVar9[1];
    fVar37 = pfVar9[2];
    fVar59 = pfVar9[3];
    fVar45 = (fVar37 - fVar14) * fVar35;
    fVar64 = (fVar52 - fVar12) * fVar34;
    fVar73 = (fVar37 - fVar16) * fVar35;
    fVar78 = (fVar59 - fVar15) * fVar36;
    fVar21 = (fVar37 - fVar19) * fVar35;
    fVar37 = (fVar37 - fVar32) * fVar35;
    uVar46 = NEON_fmadd(fVar64,fVar64,fVar45 * fVar45);
    fVar45 = (fVar52 - fVar13) * fVar34;
    uVar46 = NEON_fmadd(fVar78,fVar78,uVar46);
    fVar64 = (fVar59 - fVar17) * fVar36;
    uVar65 = NEON_fmadd(fVar45,fVar45,fVar73 * fVar73);
    fVar73 = (fVar52 - fVar18) * fVar34;
    fVar52 = (fVar52 - fVar31) * fVar34;
    fVar45 = (float)NEON_fminnm(uVar46,0x7f7fffff);
    fVar64 = (float)NEON_fmadd(fVar64,fVar64,uVar65);
    uVar65 = NEON_fmadd(fVar73,fVar73,fVar21 * fVar21);
    fVar73 = (fVar59 - fVar30) * fVar36;
    fVar21 = (fVar59 - fVar33) * fVar36;
    uVar46 = NEON_fmadd(fVar52,fVar52,fVar37 * fVar37);
    fVar37 = (float)NEON_fmadd(fVar21,fVar21,uVar46);
    fVar21 = fVar64;
    if (fVar64 >= fVar45) {
      fVar21 = fVar45;
    }
    fVar59 = (float)NEON_fmadd(fVar73,fVar73,uVar65);
    fVar52 = fVar59;
    if (fVar21 <= fVar59) {
      fVar52 = fVar21;
    }
    uVar1 = 2;
    if (fVar21 <= fVar59) {
      uVar1 = fVar64 < fVar45;
    }
    fVar21 = fVar37;
    if (fVar52 <= fVar37) {
      fVar21 = fVar52;
    }
    uVar2 = 3;
    if (fVar52 <= fVar37) {
      uVar2 = uVar1;
    }
    lVar6 = lVar6 + -1;
    *puVar8 = uVar2;
    fVar20 = fVar20 + fVar21;
    puVar8 = puVar8 + 1;
    pfVar9 = pfVar9 + 3;
  } while (lVar6 != 0);
LAB_00decf40:
  if (fVar20 < *(float *)(this + 0x38)) {
    ColourSet::RemapIndices((ColourSet *)this_00,(uchar *)local_98,auStack_a8);
    WriteColourBlock4((Vec3 *)(this + 0x20),(Vec3 *)(this + 0x2c),auStack_a8,param_1);
    *(float *)(this + 0x38) = fVar20;
  }
  if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


