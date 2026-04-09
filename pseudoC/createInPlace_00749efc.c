// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createInPlace
// Entry Point: 00749efc
// Size: 204 bytes
// Signature: undefined __cdecl createInPlace(CompressedTransformationKeyFrame * param_1, float param_2, uint param_3, float * param_4, GsQuaternion * param_5, float * param_6, bool param_7)


/* CompressedTransformationKeyFrame::createInPlace(CompressedTransformationKeyFrame*, float,
   unsigned int, float const*, GsQuaternion const&, float const*, bool) */

int CompressedTransformationKeyFrame::createInPlace
              (CompressedTransformationKeyFrame *param_1,float param_2,uint param_3,float *param_4,
              GsQuaternion *param_5,float *param_6,bool param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  CompressedTransformationKeyFrame CVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  
  uVar4 = 0x8000;
  if (!param_7) {
    uVar4 = 0;
  }
  uVar2 = param_3 & 2;
  CVar3 = (CompressedTransformationKeyFrame)(-((byte)param_3 & 1) & 0xc);
  *(float *)param_1 = param_2;
  *(ushort *)(param_1 + 4) = uVar4 | (ushort)param_3;
  puVar1 = (undefined8 *)(param_1 + 8);
  param_1[6] = CVar3;
  param_1[7] = (CompressedTransformationKeyFrame)((char)CVar3 + (char)(uVar2 << 2));
  if ((param_3 & 1) != 0) {
    uVar5 = *(undefined8 *)param_4;
    *(float *)(param_1 + 0x10) = param_4[2];
    *puVar1 = uVar5;
    puVar1 = (undefined8 *)(param_1 + 0x14);
  }
  if (uVar2 != 0) {
    auVar8 = *(undefined (*) [16])param_5;
    auVar6._0_4_ = auVar8._0_4_ * 32767.0;
    auVar6._4_4_ = auVar8._4_4_ * 32767.0;
    auVar6._8_4_ = auVar8._8_4_ * 32767.0;
    auVar6._12_4_ = auVar8._12_4_ * 32767.0;
    auVar7._8_4_ = 0xbf000000;
    auVar7._0_8_ = 0xbf000000bf000000;
    auVar7._12_4_ = 0xbf000000;
    auVar6 = NEON_ext(auVar6,auVar6,4,1);
    auVar9 = NEON_fcmge(auVar6,0,4);
    auVar8._8_4_ = 0x3f000000;
    auVar8._0_8_ = 0x3f0000003f000000;
    auVar8._12_4_ = 0x3f000000;
    auVar8 = NEON_bit(auVar7,auVar8,auVar9,1);
    *puVar1 = CONCAT26((short)(int)(auVar6._12_4_ + auVar8._12_4_),
                       CONCAT24((short)(int)(auVar6._8_4_ + auVar8._8_4_),
                                CONCAT22((short)(int)(auVar6._4_4_ + auVar8._4_4_),
                                         (short)(int)(auVar6._0_4_ + auVar8._0_4_))));
    puVar1 = puVar1 + 1;
  }
  if ((param_3 & 4) != 0) {
    uVar5 = *(undefined8 *)param_6;
    *(float *)(puVar1 + 1) = param_6[2];
    *puVar1 = uVar5;
  }
  return ((param_3 & 1) + ((param_3 & 4) >> 2)) * 0xc + uVar2 * 4 + 8;
}


