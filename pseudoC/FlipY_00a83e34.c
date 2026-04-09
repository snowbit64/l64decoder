// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FlipY
// Entry Point: 00a83e34
// Size: 760 bytes
// Signature: undefined __thiscall FlipY(D3DX_BC7 * this, bool * param_1)


/* BC6BC7Util::D3DX_BC7::FlipY(bool&) */

void __thiscall BC6BC7Util::D3DX_BC7::FlipY(D3DX_BC7 *this,bool *param_1)

{
  long lVar1;
  D3DX_BC7 DVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  uchar local_1c8 [64];
  undefined4 local_188 [64];
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  DVar2 = *this;
  if (((byte)DVar2 & 0x1f) == 0x10) {
    BC7FlipUtil::FlipYMode4((uchar *)this);
  }
  else if (((byte)DVar2 & 0x3f) == 0x20) {
    BC7FlipUtil::FlipYMode5((uchar *)this);
  }
  else {
    if (((byte)DVar2 & 0xf) == 8) {
      uVar4 = BC7FlipUtil::FlipYMode3((uchar *)this);
    }
    else {
      if (((byte)DVar2 & 0x7f) == 0x40) {
        BC7FlipUtil::FlipYMode6((uchar *)this);
        goto LAB_00a840b4;
      }
      if (((byte)DVar2 & 3) == 2) {
        uVar4 = BC7FlipUtil::FlipYMode1((uchar *)this);
      }
      else if (DVar2 == (D3DX_BC7)0x80) {
        uVar4 = BC7FlipUtil::FlipYMode7((uchar *)this);
      }
      else {
        uVar4 = FlipYMode02Slow();
      }
    }
    if ((uVar4 & 1) == 0) {
      Decode(this,(HDRColorA *)(local_1c8 + 0x40),true);
      auVar7 = NEON_fmov(0x3f800000,4);
      lVar5 = 0;
      puVar6 = (undefined4 *)(local_1c8 + 0x40);
      do {
        auVar25._0_4_ = *puVar6;
        auVar20._0_4_ = puVar6[1];
        auVar28._0_4_ = puVar6[2];
        auVar36._0_4_ = puVar6[3];
        auVar25._4_4_ = puVar6[4];
        auVar20._4_4_ = puVar6[5];
        auVar28._4_4_ = puVar6[6];
        auVar36._4_4_ = puVar6[7];
        auVar25._8_4_ = puVar6[8];
        auVar20._8_4_ = puVar6[9];
        auVar28._8_4_ = puVar6[10];
        auVar36._8_4_ = puVar6[0xb];
        auVar25._12_4_ = puVar6[0xc];
        auVar20._12_4_ = puVar6[0xd];
        auVar28._12_4_ = puVar6[0xe];
        auVar36._12_4_ = puVar6[0xf];
        auVar32._0_4_ = puVar6[0x20];
        auVar39._0_4_ = puVar6[0x21];
        auVar15._0_4_ = puVar6[0x22];
        auVar18._0_4_ = puVar6[0x23];
        auVar32._4_4_ = puVar6[0x24];
        auVar39._4_4_ = puVar6[0x25];
        auVar15._4_4_ = puVar6[0x26];
        auVar18._4_4_ = puVar6[0x27];
        auVar32._8_4_ = puVar6[0x28];
        auVar39._8_4_ = puVar6[0x29];
        auVar15._8_4_ = puVar6[0x2a];
        auVar18._8_4_ = puVar6[0x2b];
        auVar32._12_4_ = puVar6[0x2c];
        auVar39._12_4_ = puVar6[0x2d];
        auVar15._12_4_ = puVar6[0x2e];
        auVar18._12_4_ = puVar6[0x2f];
        auVar22._0_4_ = puVar6[0x30];
        auVar24._0_4_ = puVar6[0x31];
        auVar26._0_4_ = puVar6[0x32];
        auVar29._0_4_ = puVar6[0x33];
        auVar22._4_4_ = puVar6[0x34];
        auVar24._4_4_ = puVar6[0x35];
        auVar26._4_4_ = puVar6[0x36];
        auVar29._4_4_ = puVar6[0x37];
        auVar22._8_4_ = puVar6[0x38];
        auVar24._8_4_ = puVar6[0x39];
        auVar26._8_4_ = puVar6[0x3a];
        auVar29._8_4_ = puVar6[0x3b];
        auVar22._12_4_ = puVar6[0x3c];
        auVar24._12_4_ = puVar6[0x3d];
        auVar26._12_4_ = puVar6[0x3e];
        auVar29._12_4_ = puVar6[0x3f];
        auVar9 = NEON_fmaxnm(auVar32,ZEXT816(0),4);
        auVar13 = NEON_fmaxnm(auVar18,ZEXT816(0),4);
        auVar19 = NEON_fmaxnm(auVar20,ZEXT816(0),4);
        auVar10 = NEON_fminnm(auVar9,auVar7,4);
        auVar31._0_4_ = puVar6[0x10];
        auVar34._0_4_ = puVar6[0x11];
        auVar38._0_4_ = puVar6[0x12];
        auVar41._0_4_ = puVar6[0x13];
        auVar31._4_4_ = puVar6[0x14];
        auVar34._4_4_ = puVar6[0x15];
        auVar38._4_4_ = puVar6[0x16];
        auVar41._4_4_ = puVar6[0x17];
        auVar31._8_4_ = puVar6[0x18];
        auVar34._8_4_ = puVar6[0x19];
        auVar38._8_4_ = puVar6[0x1a];
        auVar41._8_4_ = puVar6[0x1b];
        auVar31._12_4_ = puVar6[0x1c];
        auVar34._12_4_ = puVar6[0x1d];
        auVar38._12_4_ = puVar6[0x1e];
        auVar41._12_4_ = puVar6[0x1f];
        auVar20 = NEON_fminnm(auVar19,auVar7,4);
        lVar1 = lVar5 + 0x40;
        auVar9 = NEON_fmaxnm(auVar22,ZEXT816(0),4);
        auVar11 = NEON_fmaxnm(auVar24,ZEXT816(0),4);
        auVar23 = NEON_fmaxnm(auVar29,ZEXT816(0),4);
        auVar19 = NEON_fmaxnm(auVar25,ZEXT816(0),4);
        auVar12 = NEON_fmaxnm(auVar26,ZEXT816(0),4);
        auVar27 = NEON_fmaxnm(auVar39,ZEXT816(0),4);
        auVar30 = NEON_fmaxnm(auVar15,ZEXT816(0),4);
        auVar16 = NEON_fminnm(auVar19,auVar7,4);
        auVar19 = NEON_fmaxnm(auVar31,ZEXT816(0),4);
        auVar14 = NEON_fmaxnm(auVar34,ZEXT816(0),4);
        auVar32 = NEON_fmaxnm(auVar41,ZEXT816(0),4);
        auVar35 = NEON_fmaxnm(auVar28,ZEXT816(0),4);
        auVar25 = NEON_fminnm(auVar27,auVar7,4);
        auVar28 = NEON_fminnm(auVar11,auVar7,4);
        auVar27 = NEON_fmaxnm(auVar36,ZEXT816(0),4);
        auVar11 = NEON_fmaxnm(auVar38,ZEXT816(0),4);
        auVar8 = NEON_fminnm(auVar9,auVar7,4);
        auVar14 = NEON_fminnm(auVar14,auVar7,4);
        auVar36 = NEON_fminnm(auVar35,auVar7,4);
        auVar42 = NEON_fminnm(auVar12,auVar7,4);
        auVar13 = NEON_fminnm(auVar13,auVar7,4);
        auVar9 = NEON_fminnm(auVar19,auVar7,4);
        auVar12 = NEON_fminnm(auVar30,auVar7,4);
        auVar19 = NEON_fminnm(auVar27,auVar7,4);
        auVar39 = NEON_fminnm(auVar11,auVar7,4);
        auVar11 = NEON_fminnm(auVar23,auVar7,4);
        auVar27 = NEON_fminnm(auVar32,auVar7,4);
        auVar23._0_4_ = (int)(auVar16._0_4_ * 255.0 + 0.001);
        auVar23._4_4_ = (int)(auVar16._4_4_ * 255.0 + 0.001);
        auVar23._8_4_ = (int)(auVar16._8_4_ * 255.0 + 0.001);
        auVar23._12_4_ = (int)(auVar16._12_4_ * 255.0 + 0.001);
        auVar35._0_4_ = (int)(auVar36._0_4_ * 255.0 + 0.001);
        auVar35._4_4_ = (int)(auVar36._4_4_ * 255.0 + 0.001);
        auVar35._8_4_ = (int)(auVar36._8_4_ * 255.0 + 0.001);
        auVar35._12_4_ = (int)(auVar36._12_4_ * 255.0 + 0.001);
        auVar21._0_4_ = (int)(auVar42._0_4_ * 255.0 + 0.001);
        auVar21._4_4_ = (int)(auVar42._4_4_ * 255.0 + 0.001);
        auVar21._8_4_ = (int)(auVar42._8_4_ * 255.0 + 0.001);
        auVar21._12_4_ = (int)(auVar42._12_4_ * 255.0 + 0.001);
        auVar30._0_4_ = (int)(auVar9._0_4_ * 255.0 + 0.001);
        auVar30._4_4_ = (int)(auVar9._4_4_ * 255.0 + 0.001);
        auVar30._8_4_ = (int)(auVar9._8_4_ * 255.0 + 0.001);
        auVar30._12_4_ = (int)(auVar9._12_4_ * 255.0 + 0.001);
        auVar33._0_4_ = (int)(auVar19._0_4_ * 255.0 + 0.001);
        auVar33._4_4_ = (int)(auVar19._4_4_ * 255.0 + 0.001);
        auVar33._8_4_ = (int)(auVar19._8_4_ * 255.0 + 0.001);
        auVar33._12_4_ = (int)(auVar19._12_4_ * 255.0 + 0.001);
        auVar17._0_4_ = (int)(auVar12._0_4_ * 255.0 + 0.001);
        auVar17._4_4_ = (int)(auVar12._4_4_ * 255.0 + 0.001);
        auVar17._8_4_ = (int)(auVar12._8_4_ * 255.0 + 0.001);
        auVar17._12_4_ = (int)(auVar12._12_4_ * 255.0 + 0.001);
        auVar43._0_4_ = (int)(auVar11._0_4_ * 255.0 + 0.001);
        auVar43._4_4_ = (int)(auVar11._4_4_ * 255.0 + 0.001);
        auVar43._8_4_ = (int)(auVar11._8_4_ * 255.0 + 0.001);
        auVar43._12_4_ = (int)(auVar11._12_4_ * 255.0 + 0.001);
        auVar42._0_4_ = (int)(auVar39._0_4_ * 255.0 + 0.001);
        auVar42._4_4_ = (int)(auVar39._4_4_ * 255.0 + 0.001);
        auVar42._8_4_ = (int)(auVar39._8_4_ * 255.0 + 0.001);
        auVar42._12_4_ = (int)(auVar39._12_4_ * 255.0 + 0.001);
        auVar12._8_4_ = 0x2c282420;
        auVar12._0_8_ = 0x1c1814100c080400;
        auVar11._8_4_ = 0x2c282420;
        auVar11._0_8_ = 0x1c1814100c080400;
        auVar19._8_4_ = 0x2c282420;
        auVar19._0_8_ = 0x1c1814100c080400;
        auVar9._8_4_ = 0x2c282420;
        auVar9._0_8_ = 0x1c1814100c080400;
        auVar40._0_4_ = (int)(auVar13._0_4_ * 255.0 + 0.001);
        auVar40._4_4_ = (int)(auVar13._4_4_ * 255.0 + 0.001);
        auVar40._8_4_ = (int)(auVar13._8_4_ * 255.0 + 0.001);
        auVar40._12_4_ = (int)(auVar13._12_4_ * 255.0 + 0.001);
        auVar37._0_4_ = (int)(auVar27._0_4_ * 255.0 + 0.001);
        auVar37._4_4_ = (int)(auVar27._4_4_ * 255.0 + 0.001);
        auVar37._8_4_ = (int)(auVar27._8_4_ * 255.0 + 0.001);
        auVar37._12_4_ = (int)(auVar27._12_4_ * 255.0 + 0.001);
        auVar9._12_4_ = 0x3c383430;
        auVar27._4_4_ = (int)(auVar10._4_4_ * 255.0 + 0.001);
        auVar27._0_4_ = (int)(auVar10._0_4_ * 255.0 + 0.001);
        auVar27._8_4_ = (int)(auVar10._8_4_ * 255.0 + 0.001);
        auVar27._12_4_ = (int)(auVar10._12_4_ * 255.0 + 0.001);
        auVar10._4_4_ = (int)(auVar8._4_4_ * 255.0 + 0.001);
        auVar10._0_4_ = (int)(auVar8._0_4_ * 255.0 + 0.001);
        auVar10._8_4_ = (int)(auVar8._8_4_ * 255.0 + 0.001);
        auVar10._12_4_ = (int)(auVar8._12_4_ * 255.0 + 0.001);
        auVar9 = a64_TBL(ZEXT816(0),auVar23,auVar30,auVar27,auVar10,auVar9);
        auVar19._12_4_ = 0x3c383430;
        auVar8._4_4_ = (int)(auVar20._4_4_ * 255.0 + 0.001);
        auVar8._0_4_ = (int)(auVar20._0_4_ * 255.0 + 0.001);
        auVar8._8_4_ = (int)(auVar20._8_4_ * 255.0 + 0.001);
        auVar8._12_4_ = (int)(auVar20._12_4_ * 255.0 + 0.001);
        auVar13._4_4_ = (int)(auVar14._4_4_ * 255.0 + 0.001);
        auVar13._0_4_ = (int)(auVar14._0_4_ * 255.0 + 0.001);
        auVar13._8_4_ = (int)(auVar14._8_4_ * 255.0 + 0.001);
        auVar13._12_4_ = (int)(auVar14._12_4_ * 255.0 + 0.001);
        auVar14._4_4_ = (int)(auVar25._4_4_ * 255.0 + 0.001);
        auVar14._0_4_ = (int)(auVar25._0_4_ * 255.0 + 0.001);
        auVar14._8_4_ = (int)(auVar25._8_4_ * 255.0 + 0.001);
        auVar14._12_4_ = (int)(auVar25._12_4_ * 255.0 + 0.001);
        auVar16._4_4_ = (int)(auVar28._4_4_ * 255.0 + 0.001);
        auVar16._0_4_ = (int)(auVar28._0_4_ * 255.0 + 0.001);
        auVar16._8_4_ = (int)(auVar28._8_4_ * 255.0 + 0.001);
        auVar16._12_4_ = (int)(auVar28._12_4_ * 255.0 + 0.001);
        auVar19 = a64_TBL(ZEXT816(0),auVar8,auVar13,auVar14,auVar16,auVar19);
        auVar11._12_4_ = 0x3c383430;
        auVar11 = a64_TBL(ZEXT816(0),auVar35,auVar42,auVar17,auVar21,auVar11);
        auVar12._12_4_ = 0x3c383430;
        auVar12 = a64_TBL(ZEXT816(0),auVar33,auVar37,auVar40,auVar43,auVar12);
        local_1c8[lVar5] = auVar9[0];
        local_1c8[lVar5 + 1] = auVar19[0];
        local_1c8[lVar5 + 2] = auVar11[0];
        local_1c8[lVar5 + 3] = auVar12[0];
        local_1c8[lVar5 + 4] = auVar9[1];
        local_1c8[lVar5 + 5] = auVar19[1];
        local_1c8[lVar5 + 6] = auVar11[1];
        local_1c8[lVar5 + 7] = auVar12[1];
        local_1c8[lVar5 + 8] = auVar9[2];
        local_1c8[lVar5 + 9] = auVar19[2];
        local_1c8[lVar5 + 10] = auVar11[2];
        local_1c8[lVar5 + 0xb] = auVar12[2];
        local_1c8[lVar5 + 0xc] = auVar9[3];
        local_1c8[lVar5 + 0xd] = auVar19[3];
        local_1c8[lVar5 + 0xe] = auVar11[3];
        local_1c8[lVar5 + 0xf] = auVar12[3];
        local_1c8[lVar5 + 0x10] = auVar9[4];
        local_1c8[lVar5 + 0x11] = auVar19[4];
        local_1c8[lVar5 + 0x12] = auVar11[4];
        local_1c8[lVar5 + 0x13] = auVar12[4];
        local_1c8[lVar5 + 0x14] = auVar9[5];
        local_1c8[lVar5 + 0x15] = auVar19[5];
        local_1c8[lVar5 + 0x16] = auVar11[5];
        local_1c8[lVar5 + 0x17] = auVar12[5];
        local_1c8[lVar5 + 0x18] = auVar9[6];
        local_1c8[lVar5 + 0x19] = auVar19[6];
        local_1c8[lVar5 + 0x1a] = auVar11[6];
        local_1c8[lVar5 + 0x1b] = auVar12[6];
        local_1c8[lVar5 + 0x1c] = auVar9[7];
        local_1c8[lVar5 + 0x1d] = auVar19[7];
        local_1c8[lVar5 + 0x1e] = auVar11[7];
        local_1c8[lVar5 + 0x1f] = auVar12[7];
        local_1c8[lVar5 + 0x20] = auVar9[8];
        local_1c8[lVar5 + 0x21] = auVar19[8];
        local_1c8[lVar5 + 0x22] = auVar11[8];
        local_1c8[lVar5 + 0x23] = auVar12[8];
        local_1c8[lVar5 + 0x24] = auVar9[9];
        local_1c8[lVar5 + 0x25] = auVar19[9];
        local_1c8[lVar5 + 0x26] = auVar11[9];
        local_1c8[lVar5 + 0x27] = auVar12[9];
        local_1c8[lVar5 + 0x28] = auVar9[10];
        local_1c8[lVar5 + 0x29] = auVar19[10];
        local_1c8[lVar5 + 0x2a] = auVar11[10];
        local_1c8[lVar5 + 0x2b] = auVar12[10];
        local_1c8[lVar5 + 0x2c] = auVar9[11];
        local_1c8[lVar5 + 0x2d] = auVar19[11];
        local_1c8[lVar5 + 0x2e] = auVar11[11];
        local_1c8[lVar5 + 0x2f] = auVar12[11];
        local_1c8[lVar5 + 0x30] = auVar9[12];
        local_1c8[lVar5 + 0x31] = auVar19[12];
        local_1c8[lVar5 + 0x32] = auVar11[12];
        local_1c8[lVar5 + 0x33] = auVar12[12];
        local_1c8[lVar5 + 0x34] = auVar9[13];
        local_1c8[lVar5 + 0x35] = auVar19[13];
        local_1c8[lVar5 + 0x36] = auVar11[13];
        local_1c8[lVar5 + 0x37] = auVar12[13];
        local_1c8[lVar5 + 0x38] = auVar9[14];
        local_1c8[lVar5 + 0x39] = auVar19[14];
        local_1c8[lVar5 + 0x3a] = auVar11[14];
        local_1c8[lVar5 + 0x3b] = auVar12[14];
        local_1c8[lVar5 + 0x3c] = auVar9[15];
        local_1c8[lVar5 + 0x3d] = auVar19[15];
        local_1c8[lVar5 + 0x3e] = auVar11[15];
        local_1c8[lVar5 + 0x3f] = auVar12[15];
        lVar5 = lVar1;
        puVar6 = puVar6 + 0x40;
      } while (lVar1 != 0x40);
      BC7EncodeUtil::encode(local_1c8,(uchar *)this);
      *param_1 = true;
    }
  }
LAB_00a840b4:
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


