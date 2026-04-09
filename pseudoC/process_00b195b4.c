// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 00b195b4
// Size: 1016 bytes
// Signature: undefined __thiscall process(VoiceActivityDetector * this, short * param_1, uint param_2)


/* VoiceActivityDetector::process(short const*, unsigned int) */

bool __thiscall
VoiceActivityDetector::process(VoiceActivityDetector *this,short *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined (*pauVar13) [16];
  short *psVar14;
  int iVar15;
  ulong uVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  float fVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  short sVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  
  if (param_2 == 0) {
    dVar18 = 0.0;
  }
  else {
    uVar10 = (ulong)param_2;
    if (param_2 < 0x10) {
      dVar18 = 0.0;
      uVar12 = 0;
    }
    else {
      uVar12 = uVar10 & 0xfffffff0;
      dVar18 = 0.0;
      pauVar13 = (undefined (*) [16])(param_1 + 8);
      uVar16 = uVar12;
      do {
        auVar20 = pauVar13[-1];
        uVar16 = uVar16 - 0x10;
        uVar7 = *(undefined8 *)*pauVar13;
        sVar28 = (short)((ulong)uVar7 >> 0x30);
        auVar21 = NEON_ext(auVar20,auVar20,8,1);
        auVar29 = NEON_ext(*pauVar13,*pauVar13,8,1);
        auVar24._0_8_ = (long)(int)auVar21._0_2_;
        auVar24._8_8_ = (long)(int)auVar21._2_2_;
        auVar22._0_8_ = (long)(int)auVar21._4_2_;
        auVar22._8_8_ = (long)(int)auVar21._6_2_;
        auVar26._0_8_ = (long)(int)auVar20._0_2_;
        auVar26._8_8_ = (long)(int)auVar20._2_2_;
        auVar24 = NEON_scvtf(auVar24,8);
        auVar22 = NEON_scvtf(auVar22,8);
        auVar26 = NEON_scvtf(auVar26,8);
        auVar21._0_8_ = (long)(int)auVar20._4_2_;
        auVar21._8_8_ = (long)(int)auVar20._6_2_;
        auVar20 = NEON_scvtf(auVar21,8);
        auVar31._0_8_ = (long)(int)(short)uVar7;
        auVar31._8_8_ = (long)(int)(short)((ulong)uVar7 >> 0x10);
        auVar30._0_8_ = (long)(int)auVar29._0_2_;
        auVar30._8_8_ = (long)(int)auVar29._2_2_;
        auVar31 = NEON_scvtf(auVar31,8);
        auVar30 = NEON_scvtf(auVar30,8);
        iVar15 = (int)(short)((ulong)uVar7 >> 0x20);
        auVar27._0_8_ = (long)iVar15;
        auVar27._8_8_ = (long)(int)(CONCAT26(sVar28 >> 0xf,CONCAT24(sVar28,iVar15)) >> 0x20);
        auVar27 = NEON_scvtf(auVar27,8);
        auVar25._0_8_ = (long)(int)auVar29._4_2_;
        auVar25._8_8_ = (long)(int)auVar29._6_2_;
        auVar21 = NEON_scvtf(auVar25,8);
        dVar18 = dVar18 + ABS(auVar26._0_8_ / 32767.0) + ABS(auVar26._8_8_ / 32767.0) +
                 ABS(auVar20._0_8_ / 32767.0) + ABS(auVar20._8_8_ / 32767.0) +
                 ABS(auVar24._0_8_ / 32767.0) + ABS(auVar24._8_8_ / 32767.0) +
                 ABS(auVar22._0_8_ / 32767.0) + ABS(auVar22._8_8_ / 32767.0) +
                 ABS(auVar31._0_8_ / 32767.0) + ABS(auVar31._8_8_ / 32767.0) +
                 ABS(auVar27._0_8_ / 32767.0) + ABS(auVar27._8_8_ / 32767.0) +
                 ABS(auVar30._0_8_ / 32767.0) + ABS(auVar30._8_8_ / 32767.0) +
                 ABS(auVar21._0_8_ / 32767.0) + ABS(auVar21._8_8_ / 32767.0);
        pauVar13 = pauVar13 + 2;
      } while (uVar16 != 0);
      if (uVar12 == uVar10) goto LAB_00b197f4;
    }
    lVar11 = uVar10 - uVar12;
    psVar14 = param_1 + uVar12;
    do {
      lVar11 = lVar11 + -1;
      dVar18 = dVar18 + ABS((double)(int)*psVar14 / 32767.0);
      psVar14 = psVar14 + 1;
    } while (lVar11 != 0);
  }
LAB_00b197f4:
  if (dVar18 / (double)(ulong)param_2 <= 0.0) {
    bVar9 = false;
  }
  else {
    dVar18 = log10(dVar18 / (double)(ulong)param_2);
    fVar23 = 0.0;
    iVar2 = (*(int *)(this + 200) + 1) % 0x32;
    cVar8 = (char)iVar2;
    uVar3 = (char)(cVar8 + '0') * 0x29;
    uVar4 = (char)(cVar8 + '/') * 0x29;
    uVar5 = (char)(cVar8 + '.') * 0x29;
    uVar6 = (char)(cVar8 + '-') * 0x29;
    fVar17 = (float)(120.0 - ABS(dVar18 * 20.0));
    *(float *)(this + (long)*(int *)(this + 200) * 4) = fVar17;
    *(int *)(this + 200) = iVar2;
    iVar15 = 0;
    do {
      iVar1 = iVar2 + iVar15;
      iVar15 = iVar15 + 1;
      fVar23 = fVar23 + *(float *)(this + (long)(iVar1 % 0x32) * 4);
    } while (iVar15 != 0x2d);
    fVar19 = (*(float *)(this + (long)(char)(cVar8 + '-' +
                                            (((byte)(uVar6 >> 0xf) & 1) +
                                            (char)((uint)((int)uVar6 >> 8) >> 3)) * -0x32) * 4) +
             *(float *)(this + (long)(char)(cVar8 + '.' +
                                           (((byte)(uVar5 >> 0xf) & 1) +
                                           (char)((uint)((int)uVar5 >> 8) >> 3)) * -0x32) * 4) +
             *(float *)(this + (long)(char)(cVar8 + '/' +
                                           (((byte)(uVar4 >> 0xf) & 1) +
                                           (char)((uint)((int)uVar4 >> 8) >> 3)) * -0x32) * 4) +
             *(float *)(this + (long)(char)(cVar8 + '0' +
                                           (((byte)(uVar3 >> 0xf) & 1) +
                                           (char)((uint)((int)uVar3 >> 8) >> 3)) * -0x32) * 4) +
             *(float *)(this + ((ulong)(iVar2 + 0x31U +
                                       ((iVar2 + 0x31U & 0xff) * 0x29 >> 0xb) * -0x32) & 0xff) * 4)
             + 0.0) / 5.0;
    if (fVar19 - fVar23 / 45.0 <= 40.0) {
      fVar23 = *(float *)(this + 0xd0);
    }
    else {
      fVar23 = (fVar19 + fVar23 / 45.0) * 0.5;
      *(float *)(this + 0xd0) = fVar23;
    }
    bVar9 = fVar23 < fVar17;
  }
  return bVar9;
}


