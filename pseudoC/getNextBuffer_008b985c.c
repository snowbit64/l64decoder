// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextBuffer
// Entry Point: 008b985c
// Size: 604 bytes
// Signature: undefined __thiscall getNextBuffer(StaticSoundGenerator * this, uint param_1, float * param_2)


/* StaticSoundGenerator::getNextBuffer(unsigned int, float*) */

ulong __thiscall
StaticSoundGenerator::getNextBuffer(StaticSoundGenerator *this,uint param_1,float *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined (*pauVar5) [16];
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    memset(param_2,0,(ulong)param_1 << 2);
    return (ulong)param_1;
  }
  if (*(int *)(this + 0x14) != 0) {
    uVar9 = *(int *)(this + 0x14) - *(int *)(this + 0x10);
    if (param_1 <= uVar9) {
      uVar9 = param_1;
    }
    uVar8 = (ulong)uVar9;
    memset(param_2,0,uVar8 << 2);
    goto LAB_008b98a8;
  }
  if (*(int *)(lVar2 + 0x28) == 1) {
    if (*(long *)(this + 8) != 0) {
      if (0xfff < param_1) {
        param_1 = 0x1000;
      }
      if (param_1 != 0) {
        uVar1 = stb_vorbis_get_samples_float_interleaved(*(long *)(this + 8),1,param_2,param_1);
        uVar8 = (ulong)uVar1;
        uVar9 = param_1 - uVar1;
        if (uVar9 <= uVar1) {
          do {
            if (uVar9 == 0) goto LAB_008b9a44;
            uVar1 = stb_vorbis_get_samples_float_interleaved
                              (*(undefined8 *)(this + 8),1,param_2,uVar9);
            uVar9 = uVar9 - uVar1;
            uVar8 = (ulong)(uVar1 + (int)uVar8);
          } while (uVar9 <= uVar1);
        }
        stb_vorbis_seek_start(*(undefined8 *)(this + 8));
        goto LAB_008b9a44;
      }
    }
    uVar8 = 0;
  }
  else {
    uVar9 = *(uint *)(this + 0x10);
    uVar1 = *(int *)(lVar2 + 0x30) - uVar9;
    if (param_1 <= uVar1) {
      uVar1 = param_1;
    }
    uVar8 = (ulong)uVar1;
    if (uVar1 == 0) goto LAB_008b98a8;
    lVar2 = *(long *)(lVar2 + 0x20);
    if (uVar1 < 0x10) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if ((!CARRY4(uVar9,(uint)(uVar8 - 1))) && (uVar8 - 1 >> 0x20 == 0)) {
        uVar4 = uVar8 & 0xfffffff0;
        pfVar6 = param_2 + 8;
        uVar3 = uVar4;
        uVar1 = uVar9;
        do {
          pauVar5 = (undefined (*) [16])(lVar2 + (ulong)uVar1 * 2);
          uVar3 = uVar3 - 0x10;
          uVar1 = uVar1 + 0x10;
          auVar11 = *pauVar5;
          auVar13 = pauVar5[1];
          auVar14._0_4_ = (int)auVar11._8_2_;
          auVar14._4_4_ = (int)auVar11._10_2_;
          auVar14._8_4_ = (int)auVar11._12_2_;
          auVar14._12_4_ = (int)auVar11._14_2_;
          auVar16._0_4_ = (int)auVar11._0_2_;
          auVar16._4_4_ = (int)auVar11._2_2_;
          auVar16._8_4_ = (int)auVar11._4_2_;
          auVar16._12_4_ = (int)auVar11._6_2_;
          auVar15._0_4_ = (int)auVar13._8_2_;
          auVar15._4_4_ = (int)auVar13._10_2_;
          auVar15._8_4_ = (int)auVar13._12_2_;
          auVar15._12_4_ = (int)auVar13._14_2_;
          auVar12._0_4_ = (int)auVar13._0_2_;
          auVar12._4_4_ = (int)auVar13._2_2_;
          auVar12._8_4_ = (int)auVar13._4_2_;
          auVar12._12_4_ = (int)auVar13._6_2_;
          auVar14 = NEON_scvtf(auVar14,4);
          auVar11 = NEON_scvtf(auVar16,4);
          auVar16 = NEON_scvtf(auVar15,4);
          auVar13 = NEON_scvtf(auVar12,4);
          pfVar6[-4] = auVar11._8_4_ * 3.051758e-05;
          pfVar6[-3] = auVar11._12_4_ * 3.051758e-05;
          pfVar6[-8] = auVar11._0_4_ * 3.051758e-05;
          pfVar6[-7] = auVar11._4_4_ * 3.051758e-05;
          *pfVar6 = auVar14._8_4_ * 3.051758e-05;
          pfVar6[1] = auVar14._12_4_ * 3.051758e-05;
          pfVar6[-4] = auVar14._0_4_ * 3.051758e-05;
          pfVar6[-3] = auVar14._4_4_ * 3.051758e-05;
          pfVar6[4] = auVar13._8_4_ * 3.051758e-05;
          pfVar6[5] = auVar13._12_4_ * 3.051758e-05;
          *pfVar6 = auVar13._0_4_ * 3.051758e-05;
          pfVar6[1] = auVar13._4_4_ * 3.051758e-05;
          pfVar6[8] = auVar16._8_4_ * 3.051758e-05;
          pfVar6[9] = auVar16._12_4_ * 3.051758e-05;
          pfVar6[4] = auVar16._0_4_ * 3.051758e-05;
          pfVar6[5] = auVar16._4_4_ * 3.051758e-05;
          pfVar6 = pfVar6 + 0x10;
        } while (uVar3 != 0);
        if (uVar4 == uVar8) goto LAB_008b9a44;
      }
    }
    lVar7 = uVar8 - uVar4;
    uVar9 = uVar9 + (int)uVar4;
    pfVar6 = param_2 + uVar4;
    do {
      uVar4 = (ulong)uVar9;
      lVar7 = lVar7 + -1;
      uVar9 = uVar9 + 1;
      *pfVar6 = (float)(int)*(short *)(lVar2 + uVar4 * 2) * 3.051758e-05;
      pfVar6 = pfVar6 + 1;
    } while (lVar7 != 0);
LAB_008b9a44:
    if ((uint)uVar8 != 0) {
      fVar10 = *(float *)(*(long *)this + 0x38);
      if ((uint)uVar8 < 8) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar8 & 0xfffffff8;
        pauVar5 = (undefined (*) [16])(param_2 + 4);
        uVar4 = uVar3;
        do {
          auVar11 = pauVar5[-1];
          auVar13 = *pauVar5;
          uVar4 = uVar4 - 8;
          *(float *)*pauVar5 = fVar10 * auVar11._8_4_;
          *(float *)(*pauVar5 + 4) = fVar10 * auVar11._12_4_;
          *(float *)pauVar5[-1] = fVar10 * auVar11._0_4_;
          *(float *)(pauVar5[-1] + 4) = fVar10 * auVar11._4_4_;
          *(float *)pauVar5[1] = auVar13._8_4_ * fVar10;
          *(float *)(pauVar5[1] + 4) = auVar13._12_4_ * fVar10;
          *(float *)*pauVar5 = auVar13._0_4_ * fVar10;
          *(float *)(*pauVar5 + 4) = auVar13._4_4_ * fVar10;
          pauVar5 = pauVar5 + 2;
        } while (uVar4 != 0);
        if (uVar3 == uVar8) goto LAB_008b98a8;
      }
      lVar2 = uVar8 - uVar3;
      pfVar6 = param_2 + uVar3;
      do {
        lVar2 = lVar2 + -1;
        *pfVar6 = fVar10 * *pfVar6;
        pfVar6 = pfVar6 + 1;
      } while (lVar2 != 0);
    }
  }
LAB_008b98a8:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + (int)uVar8;
  return uVar8;
}


