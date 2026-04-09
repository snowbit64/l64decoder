// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRandomIndexWeights
// Entry Point: 007b3820
// Size: 384 bytes
// Signature: undefined __cdecl addRandomIndexWeights(float * param_1, float param_2, float param_3, uint param_4, float param_5, int param_6)


/* IndexPerlinNoiseUtil::addRandomIndexWeights(float*, float, float, unsigned int, float, int) */

void IndexPerlinNoiseUtil::addRandomIndexWeights
               (float *param_1,float param_2,float param_3,uint param_4,float param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar9;
  int iVar10;
  undefined auVar6 [12];
  int iVar11;
  undefined auVar7 [16];
  undefined auVar8 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  undefined auVar12 [16];
  float fVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined auVar19 [16];
  undefined8 uVar20;
  undefined auVar21 [16];
  
  iVar2 = (int)param_2;
  iVar11 = (int)param_3 * 0x39 + param_6 * 0x61;
  fVar4 = param_3 - (float)(int)(float)(int)param_3;
  iVar5 = iVar11 + 0x39 + iVar2 + 1;
  iVar9 = iVar11 + iVar2 + 1;
  iVar10 = iVar11 + 0x39 + iVar2;
  iVar11 = iVar11 + iVar2;
  iVar2 = iVar5 * 0x2000;
  iVar13 = iVar9 * 0x2000;
  iVar14 = iVar10 * 0x2000;
  iVar15 = iVar11 * 0x2000;
  iVar2 = CONCAT13((byte)((uint)iVar2 >> 0x18) ^ (byte)((uint)iVar5 >> 0x18),
                   CONCAT12((byte)((uint)iVar2 >> 0x10) ^ (byte)((uint)iVar5 >> 0x10),
                            CONCAT11((byte)((uint)iVar2 >> 8) ^ (byte)((uint)iVar5 >> 8),(char)iVar5
                                    )));
  auVar6._0_8_ = CONCAT17((byte)((uint)iVar13 >> 0x18) ^ (byte)((uint)iVar9 >> 0x18),
                          CONCAT16((byte)((uint)iVar13 >> 0x10) ^ (byte)((uint)iVar9 >> 0x10),
                                   CONCAT15((byte)((uint)iVar13 >> 8) ^ (byte)((uint)iVar9 >> 8),
                                            CONCAT14((char)iVar9,iVar2))));
  auVar6[8] = (undefined)iVar10;
  auVar6[9] = (byte)((uint)iVar14 >> 8) ^ (byte)((uint)iVar10 >> 8);
  auVar6[10] = (byte)((uint)iVar14 >> 0x10) ^ (byte)((uint)iVar10 >> 0x10);
  auVar6[11] = (byte)((uint)iVar14 >> 0x18) ^ (byte)((uint)iVar10 >> 0x18);
  auVar7[12] = (undefined)iVar11;
  auVar7._0_12_ = auVar6;
  auVar7[13] = (byte)((uint)iVar15 >> 8) ^ (byte)((uint)iVar11 >> 8);
  auVar7[14] = (byte)((uint)iVar15 >> 0x10) ^ (byte)((uint)iVar11 >> 0x10);
  auVar7[15] = (byte)((uint)iVar15 >> 0x18) ^ (byte)((uint)iVar11 >> 0x18);
  iVar11 = (int)((ulong)auVar6._0_8_ >> 0x20);
  iVar5 = auVar6._8_4_;
  iVar9 = auVar7._12_4_;
  auVar19 = NEON_fmov(0x3f800000,4);
  auVar21._0_8_ =
       CONCAT44((iVar11 * iVar11 * 0x3d73 + 0xc0ae5) * iVar11 + 0x5208dd0d,
                (iVar2 * iVar2 * 0x3d73 + 0xc0ae5) * iVar2 + 0x5208dd0d) & 0x7fffffff7fffffff;
  auVar21._8_4_ = (iVar5 * iVar5 * 0x3d73 + 0xc0ae5) * iVar5 + 0x5208dd0dU & 0x7fffffff;
  auVar21._12_4_ = (iVar9 * iVar9 * 0x3d73 + 0xc0ae5) * iVar9 + 0x5208dd0dU & 0x7fffffff;
  auVar7 = NEON_scvtf(auVar21,4);
  fVar3 = param_2 - (float)(int)(float)(int)param_2;
  fVar16 = (float)(ulong)(param_4 + 1);
  auVar12._4_4_ = param_4;
  auVar12._0_4_ = param_4;
  auVar12._8_4_ = param_4;
  auVar12._12_4_ = param_4;
  auVar8._0_4_ = (uint)(((auVar7._0_4_ * -9.313226e-10 + auVar19._0_4_) * 0.5 + 0.5) * fVar16);
  auVar8._4_4_ = (uint)(((auVar7._4_4_ * -9.313226e-10 + auVar19._4_4_) * 0.5 + 0.5) * fVar16);
  auVar8._8_4_ = (int)(((auVar7._8_4_ * -9.313226e-10 + auVar19._8_4_) * 0.5 + 0.5) * fVar16);
  auVar8._12_4_ = (int)(((auVar7._12_4_ * -9.313226e-10 + auVar19._12_4_) * 0.5 + 0.5) * fVar16);
  auVar7 = NEON_cmhi(auVar8,auVar12,4);
  auVar21 = NEON_ext(auVar8,auVar8,8,1);
  uVar20 = NEON_rev64(auVar21._0_8_,4);
  uVar17 = NEON_cmlt(CONCAT44((uint)auVar7._8_2_ << 0x1f,(uint)auVar7._12_2_ << 0x1f),0,4);
  uVar18 = NEON_bsl(uVar17,CONCAT44(param_4,param_4),uVar20,1);
  fVar16 = (float)NEON_fmadd((1.0 - fVar3) * (1.0 - fVar4),param_5,param_1[uVar18 & 0xffffffff]);
  param_1[uVar18 & 0xffffffff] = fVar16;
  uVar1 = param_4;
  if ((auVar7 & (undefined  [16])0x100000000) == (undefined  [16])0x0) {
    uVar1 = auVar8._4_4_;
  }
  fVar16 = (float)NEON_fmadd((1.0 - fVar3) * fVar4,param_5,param_1[uVar18 >> 0x20]);
  param_1[uVar18 >> 0x20] = fVar16;
  if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    param_4 = auVar8._0_4_;
  }
  fVar16 = (float)NEON_fmadd(fVar3 * (1.0 - fVar4),param_5,param_1[uVar1]);
  param_1[uVar1] = fVar16;
  fVar3 = (float)NEON_fmadd(fVar3 * fVar4,param_5,param_1[param_4]);
  param_1[param_4] = fVar3;
  return;
}


