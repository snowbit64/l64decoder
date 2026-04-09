// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: create
// Entry Point: 00749dd8
// Size: 288 bytes
// Signature: undefined __cdecl create(float param_1, uint param_2, float * param_3, GsQuaternion * param_4, float * param_5, bool param_6)


/* CompressedTransformationKeyFrame::create(float, unsigned int, float const*, GsQuaternion const&,
   float const*, bool) */

void CompressedTransformationKeyFrame::create
               (float param_1,uint param_2,float *param_3,GsQuaternion *param_4,float *param_5,
               bool param_6)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float *pfVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  
  iVar3 = (param_2 & 2) * 4;
  pfVar5 = (float *)operator_new((ulong)(iVar3 + ((param_2 & 1) + ((param_2 & 4) >> 2)) * 0xc + 8));
  uVar6 = 0x8000;
  if (!param_6) {
    uVar6 = 0;
  }
  bVar4 = -((byte)param_2 & 1) & 0xc;
  puVar1 = (undefined8 *)(pfVar5 + 2);
  *pfVar5 = param_1;
  *(byte *)((long)pfVar5 + 6) = bVar4;
  *(ushort *)(pfVar5 + 1) = uVar6 | (ushort)param_2;
  *(byte *)((long)pfVar5 + 7) = (char)iVar3 + bVar4;
  if ((param_2 & 1) != 0) {
    fVar2 = param_3[2];
    *puVar1 = *(undefined8 *)param_3;
    pfVar5[4] = fVar2;
    puVar1 = (undefined8 *)(pfVar5 + 5);
  }
  if ((param_2 & 2) != 0) {
    auVar10 = *(undefined (*) [16])param_4;
    auVar8._0_4_ = auVar10._0_4_ * 32767.0;
    auVar8._4_4_ = auVar10._4_4_ * 32767.0;
    auVar8._8_4_ = auVar10._8_4_ * 32767.0;
    auVar8._12_4_ = auVar10._12_4_ * 32767.0;
    auVar9._8_4_ = 0xbf000000;
    auVar9._0_8_ = 0xbf000000bf000000;
    auVar9._12_4_ = 0xbf000000;
    auVar8 = NEON_ext(auVar8,auVar8,4,1);
    auVar11 = NEON_fcmge(auVar8,0,4);
    auVar10._8_4_ = 0x3f000000;
    auVar10._0_8_ = 0x3f0000003f000000;
    auVar10._12_4_ = 0x3f000000;
    auVar10 = NEON_bit(auVar9,auVar10,auVar11,1);
    *puVar1 = CONCAT26((short)(int)(auVar8._12_4_ + auVar10._12_4_),
                       CONCAT24((short)(int)(auVar8._8_4_ + auVar10._8_4_),
                                CONCAT22((short)(int)(auVar8._4_4_ + auVar10._4_4_),
                                         (short)(int)(auVar8._0_4_ + auVar10._0_4_))));
    puVar1 = puVar1 + 1;
  }
  if ((param_2 & 4) != 0) {
    uVar7 = *(undefined8 *)param_5;
    *(float *)(puVar1 + 1) = param_5[2];
    *puVar1 = uVar7;
  }
  return;
}


