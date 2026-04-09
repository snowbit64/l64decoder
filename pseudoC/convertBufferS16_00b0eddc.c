// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertBufferS16
// Entry Point: 00b0eddc
// Size: 268 bytes
// Signature: undefined __thiscall convertBufferS16(SoftAudioBuffer * this, float * param_1, short * param_2, uint param_3)


/* SoftAudioBuffer::convertBufferS16(float*, short const*, unsigned int) */

void __thiscall
SoftAudioBuffer::convertBufferS16(SoftAudioBuffer *this,float *param_1,short *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  short *psVar6;
  undefined (*pauVar7) [16];
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(this + 0x1c);
    uVar4 = (ulong)uVar2;
    uVar3 = 0;
    uVar5 = uVar4 & 0xfffffff0;
    do {
      if (uVar2 != 0) {
        if ((((uVar2 < 0x10) || (param_3 != 1)) || (CARRY4(uVar3,(uint)(uVar4 - 1)) != false)) ||
           (uVar4 - 1 >> 0x20 != 0)) {
          psVar6 = param_2;
          uVar8 = 0;
        }
        else {
          psVar6 = param_2 + uVar5;
          pauVar7 = (undefined (*) [16])(param_2 + 8);
          uVar8 = uVar5;
          uVar10 = uVar3;
          do {
            auVar11 = pauVar7[-1];
            auVar12 = *pauVar7;
            puVar1 = (undefined8 *)(param_1 + uVar10);
            pauVar7 = pauVar7 + 2;
            uVar8 = uVar8 - 0x10;
            uVar10 = uVar10 + param_3 * 0x10;
            auVar15._0_4_ = (int)auVar11._8_2_;
            auVar15._4_4_ = (int)auVar11._10_2_;
            auVar15._8_4_ = (int)auVar11._12_2_;
            auVar15._12_4_ = (int)auVar11._14_2_;
            auVar14._0_4_ = (int)auVar11._0_2_;
            auVar14._4_4_ = (int)auVar11._2_2_;
            auVar14._8_4_ = (int)auVar11._4_2_;
            auVar14._12_4_ = (int)auVar11._6_2_;
            auVar16._0_4_ = (int)auVar12._8_2_;
            auVar16._4_4_ = (int)auVar12._10_2_;
            auVar16._8_4_ = (int)auVar12._12_2_;
            auVar16._12_4_ = (int)auVar12._14_2_;
            auVar13._0_4_ = (int)auVar12._0_2_;
            auVar13._4_4_ = (int)auVar12._2_2_;
            auVar13._8_4_ = (int)auVar12._4_2_;
            auVar13._12_4_ = (int)auVar12._6_2_;
            auVar15 = NEON_scvtf(auVar15,4);
            auVar11 = NEON_scvtf(auVar14,4);
            auVar16 = NEON_scvtf(auVar16,4);
            auVar14 = NEON_scvtf(auVar13,4);
            auVar12._0_8_ = CONCAT44(auVar11._4_4_ * 3.051758e-05,auVar11._0_4_ * 3.051758e-05);
            auVar12._8_4_ = auVar11._8_4_ * 3.051758e-05;
            auVar12._12_4_ = auVar11._12_4_ * 3.051758e-05;
            puVar1[1] = auVar12._8_8_;
            *puVar1 = auVar12._0_8_;
            *(float *)(puVar1 + 4) = auVar15._8_4_ * 3.051758e-05;
            *(float *)((long)puVar1 + 0x24) = auVar15._12_4_ * 3.051758e-05;
            *(float *)(puVar1 + 2) = auVar15._0_4_ * 3.051758e-05;
            *(float *)((long)puVar1 + 0x14) = auVar15._4_4_ * 3.051758e-05;
            *(float *)(puVar1 + 6) = auVar14._8_4_ * 3.051758e-05;
            *(float *)((long)puVar1 + 0x34) = auVar14._12_4_ * 3.051758e-05;
            *(float *)(puVar1 + 4) = auVar14._0_4_ * 3.051758e-05;
            *(float *)((long)puVar1 + 0x24) = auVar14._4_4_ * 3.051758e-05;
            *(float *)(puVar1 + 8) = auVar16._8_4_ * 3.051758e-05;
            *(float *)((long)puVar1 + 0x44) = auVar16._12_4_ * 3.051758e-05;
            *(float *)(puVar1 + 6) = auVar16._0_4_ * 3.051758e-05;
            *(float *)((long)puVar1 + 0x34) = auVar16._4_4_ * 3.051758e-05;
          } while (uVar8 != 0);
          param_2 = psVar6;
          uVar8 = uVar5;
          if (uVar5 == uVar4) goto LAB_00b0ee08;
        }
        uVar10 = uVar3 + param_3 * (int)uVar8;
        lVar9 = uVar4 - uVar8;
        do {
          param_2 = psVar6 + 1;
          lVar9 = lVar9 + -1;
          param_1[uVar10] = (float)(int)*psVar6 * 3.051758e-05;
          uVar10 = uVar10 + param_3;
          psVar6 = param_2;
        } while (lVar9 != 0);
      }
LAB_00b0ee08:
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_3);
  }
  return;
}


