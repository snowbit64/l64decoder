// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDataBlock
// Entry Point: 008b96c8
// Size: 404 bytes
// Signature: undefined __thiscall getDataBlock(StaticSoundGenerator * this, uint param_1, float * param_2)


/* StaticSoundGenerator::getDataBlock(unsigned int, float*) */

ulong __thiscall
StaticSoundGenerator::getDataBlock(StaticSoundGenerator *this,uint param_1,float *param_2)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  
  lVar3 = *(long *)this;
  if (*(int *)(lVar3 + 0x28) == 1) {
    if (*(long *)(this + 8) != 0) {
      if (0xfff < param_1) {
        param_1 = 0x1000;
      }
      if (param_1 != 0) {
        uVar2 = stb_vorbis_get_samples_float_interleaved(*(long *)(this + 8),1,param_2,param_1);
        uVar8 = (ulong)uVar2;
        uVar9 = param_1 - uVar2;
        if (uVar9 <= uVar2) {
          do {
            if (uVar9 == 0) {
              return uVar8;
            }
            uVar2 = stb_vorbis_get_samples_float_interleaved
                              (*(undefined8 *)(this + 8),1,param_2,uVar9);
            uVar9 = uVar9 - uVar2;
            uVar8 = (ulong)(uVar2 + (int)uVar8);
          } while (uVar9 <= uVar2);
        }
        stb_vorbis_seek_start(*(undefined8 *)(this + 8));
        return uVar8;
      }
    }
    uVar8 = 0;
  }
  else {
    uVar9 = *(uint *)(this + 0x10);
    uVar2 = *(int *)(lVar3 + 0x30) - uVar9;
    if (param_1 <= uVar2) {
      uVar2 = param_1;
    }
    uVar8 = (ulong)uVar2;
    if (uVar2 != 0) {
      lVar3 = *(long *)(lVar3 + 0x20);
      if (uVar2 < 0x10) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        if ((!CARRY4(uVar9,(uint)(uVar8 - 1))) && (uVar8 - 1 >> 0x20 == 0)) {
          uVar4 = uVar8 & 0xfffffff0;
          pfVar6 = param_2 + 8;
          uVar7 = uVar4;
          uVar2 = uVar9;
          do {
            pauVar1 = (undefined (*) [16])(lVar3 + (ulong)uVar2 * 2);
            uVar7 = uVar7 - 0x10;
            uVar2 = uVar2 + 0x10;
            auVar10 = *pauVar1;
            auVar12 = pauVar1[1];
            auVar13._0_4_ = (int)auVar10._8_2_;
            auVar13._4_4_ = (int)auVar10._10_2_;
            auVar13._8_4_ = (int)auVar10._12_2_;
            auVar13._12_4_ = (int)auVar10._14_2_;
            auVar15._0_4_ = (int)auVar10._0_2_;
            auVar15._4_4_ = (int)auVar10._2_2_;
            auVar15._8_4_ = (int)auVar10._4_2_;
            auVar15._12_4_ = (int)auVar10._6_2_;
            auVar14._0_4_ = (int)auVar12._8_2_;
            auVar14._4_4_ = (int)auVar12._10_2_;
            auVar14._8_4_ = (int)auVar12._12_2_;
            auVar14._12_4_ = (int)auVar12._14_2_;
            auVar11._0_4_ = (int)auVar12._0_2_;
            auVar11._4_4_ = (int)auVar12._2_2_;
            auVar11._8_4_ = (int)auVar12._4_2_;
            auVar11._12_4_ = (int)auVar12._6_2_;
            auVar13 = NEON_scvtf(auVar13,4);
            auVar10 = NEON_scvtf(auVar15,4);
            auVar15 = NEON_scvtf(auVar14,4);
            auVar12 = NEON_scvtf(auVar11,4);
            pfVar6[-4] = auVar10._8_4_ * 3.051758e-05;
            pfVar6[-3] = auVar10._12_4_ * 3.051758e-05;
            pfVar6[-8] = auVar10._0_4_ * 3.051758e-05;
            pfVar6[-7] = auVar10._4_4_ * 3.051758e-05;
            *pfVar6 = auVar13._8_4_ * 3.051758e-05;
            pfVar6[1] = auVar13._12_4_ * 3.051758e-05;
            pfVar6[-4] = auVar13._0_4_ * 3.051758e-05;
            pfVar6[-3] = auVar13._4_4_ * 3.051758e-05;
            pfVar6[4] = auVar12._8_4_ * 3.051758e-05;
            pfVar6[5] = auVar12._12_4_ * 3.051758e-05;
            *pfVar6 = auVar12._0_4_ * 3.051758e-05;
            pfVar6[1] = auVar12._4_4_ * 3.051758e-05;
            pfVar6[8] = auVar15._8_4_ * 3.051758e-05;
            pfVar6[9] = auVar15._12_4_ * 3.051758e-05;
            pfVar6[4] = auVar15._0_4_ * 3.051758e-05;
            pfVar6[5] = auVar15._4_4_ * 3.051758e-05;
            pfVar6 = pfVar6 + 0x10;
          } while (uVar7 != 0);
          if (uVar4 == uVar8) {
            return uVar8;
          }
        }
      }
      uVar9 = uVar9 + (int)uVar4;
      lVar5 = uVar8 - uVar4;
      pfVar6 = param_2 + uVar4;
      do {
        uVar4 = (ulong)uVar9;
        uVar9 = uVar9 + 1;
        lVar5 = lVar5 + -1;
        *pfVar6 = (float)(int)*(short *)(lVar3 + uVar4 * 2) * 3.051758e-05;
        pfVar6 = pfVar6 + 1;
      } while (lVar5 != 0);
    }
  }
  return uVar8;
}


