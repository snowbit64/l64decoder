// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: aabbInFrustumNonVirtual
// Entry Point: 00b55d0c
// Size: 216 bytes
// Signature: undefined __thiscall aabbInFrustumNonVirtual(Frustum * this, Vector3 * param_1, Vector3 * param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Frustum::aabbInFrustumNonVirtual(Vector3 const&, Vector3 const&) const */

bool __thiscall Frustum::aabbInFrustumNonVirtual(Frustum *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  ulong uVar4;
  undefined auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  auVar2 = *(undefined (*) [16])(this + 0x70);
  uVar7 = *(ulong *)(this + 0x88);
  uVar6 = *(ulong *)(this + 0x80);
  uVar9 = *(ulong *)(this + 0x98);
  uVar8 = *(ulong *)(this + 0x90);
  uVar11 = *(ulong *)(this + 0xa8);
  uVar10 = *(ulong *)(this + 0xa0);
  uVar13 = *(ulong *)(this + 0xb8);
  uVar12 = *(ulong *)(this + 0xb0);
  uVar15 = *(ulong *)(this + 200);
  uVar14 = *(ulong *)(this + 0xc0);
  fVar1 = (float)*(undefined8 *)param_1;
  fVar16 = (float)*(undefined8 *)(param_1 + 4);
  uVar4 = auVar2._0_8_ & 0x7fffffff7fffffff;
  fVar19 = *(float *)(param_1 + 8);
  fVar20 = (float)*(undefined8 *)(param_2 + 4);
  fVar17 = (float)*(undefined8 *)param_2;
  fVar18 = *(float *)(param_2 + 8);
  auVar5._0_4_ = (float)*(undefined8 *)(this + 0xd0) +
                 auVar2._0_4_ * fVar1 + (float)uVar8 * fVar16 + (float)uVar12 * fVar19 +
                 (float)uVar4 * fVar17 + (float)(uVar8 & 0x7fffffff7fffffff) * fVar20 +
                 (float)(uVar12 & 0x7fffffff7fffffff) * fVar18;
  auVar5._4_4_ = (float)((ulong)*(undefined8 *)(this + 0xd0) >> 0x20) +
                 auVar2._4_4_ * fVar1 + (float)(uVar8 >> 0x20) * fVar16 +
                 (float)(uVar12 >> 0x20) * fVar19 +
                 (float)(uVar4 >> 0x20) * fVar17 +
                 (float)((uVar8 & 0x7fffffff7fffffff) >> 0x20) * fVar20 +
                 (float)((uVar12 & 0x7fffffff7fffffff) >> 0x20) * fVar18;
  auVar5._8_4_ = (float)*(undefined8 *)(this + 0xd8) +
                 auVar2._8_4_ * fVar1 + (float)uVar9 * fVar16 + (float)uVar13 * fVar19 +
                 (float)((uint)auVar2._8_4_ & 0x7fffffff) * fVar17 +
                 (float)(uVar9 & 0x7fffffff7fffffff) * fVar20 +
                 (float)(uVar13 & 0x7fffffff7fffffff) * fVar18;
  auVar5._12_4_ =
       (float)((ulong)*(undefined8 *)(this + 0xd8) >> 0x20) +
       auVar2._12_4_ * fVar1 + (float)(uVar9 >> 0x20) * fVar16 + (float)(uVar13 >> 0x20) * fVar19 +
       (float)((uint)auVar2._12_4_ & 0x7fffffff) * fVar17 +
       (float)((uVar9 & 0x7fffffff7fffffff) >> 0x20) * fVar20 +
       (float)((uVar13 & 0x7fffffff7fffffff) >> 0x20) * fVar18;
  auVar2._0_4_ = (float)*(undefined8 *)(this + 0xe0) +
                 (float)uVar6 * fVar1 + (float)uVar10 * fVar16 + (float)uVar14 * fVar19 +
                 (float)(uVar6 & 0x7fffffff7fffffff) * fVar17 +
                 (float)(uVar10 & 0x7fffffff7fffffff) * fVar20 +
                 (float)(uVar14 & 0x7fffffff7fffffff) * fVar18;
  auVar2._4_4_ = (float)((ulong)*(undefined8 *)(this + 0xe0) >> 0x20) +
                 (float)(uVar6 >> 0x20) * fVar1 + (float)(uVar10 >> 0x20) * fVar16 +
                 (float)(uVar14 >> 0x20) * fVar19 +
                 (float)((uVar6 & 0x7fffffff7fffffff) >> 0x20) * fVar17 +
                 (float)((uVar10 & 0x7fffffff7fffffff) >> 0x20) * fVar20 +
                 (float)((uVar14 & 0x7fffffff7fffffff) >> 0x20) * fVar18;
  auVar2._8_4_ = (float)*(undefined8 *)(this + 0xe8) +
                 (float)uVar7 * fVar1 + (float)uVar11 * fVar16 + (float)uVar15 * fVar19 +
                 (float)(uVar7 & 0x7fffffff7fffffff) * fVar17 +
                 (float)(uVar11 & 0x7fffffff7fffffff) * fVar20 +
                 (float)(uVar15 & 0x7fffffff7fffffff) * fVar18;
  auVar2._12_4_ =
       (float)((ulong)*(undefined8 *)(this + 0xe8) >> 0x20) +
       (float)(uVar7 >> 0x20) * fVar1 + (float)(uVar11 >> 0x20) * fVar16 +
       (float)(uVar15 >> 0x20) * fVar19 +
       (float)((uVar7 & 0x7fffffff7fffffff) >> 0x20) * fVar17 +
       (float)((uVar11 & 0x7fffffff7fffffff) >> 0x20) * fVar20 +
       (float)((uVar15 & 0x7fffffff7fffffff) >> 0x20) * fVar18;
  auVar5 = NEON_fcmgt(auVar5,0,4);
  auVar2 = NEON_fcmgt(auVar2,0,4);
  auVar3[0] = auVar2[0] & auVar5[0] & SUB161(_DAT_004c4480,0);
  auVar3[1] = auVar2[1] & auVar5[1] & SUB161(_DAT_004c4480,1);
  auVar3[2] = auVar2[2] & auVar5[2] & SUB161(_DAT_004c4480,2);
  auVar3[3] = auVar2[3] & auVar5[3] & SUB161(_DAT_004c4480,3);
  auVar3[4] = auVar2[4] & auVar5[4] & SUB161(_DAT_004c4480,4);
  auVar3[5] = auVar2[5] & auVar5[5] & SUB161(_DAT_004c4480,5);
  auVar3[6] = auVar2[6] & auVar5[6] & SUB161(_DAT_004c4480,6);
  auVar3[7] = auVar2[7] & auVar5[7] & SUB161(_DAT_004c4480,7);
  auVar3[8] = auVar2[8] & auVar5[8] & SUB161(_DAT_004c4480,8);
  auVar3[9] = auVar2[9] & auVar5[9] & SUB161(_DAT_004c4480,9);
  auVar3[10] = auVar2[10] & auVar5[10] & SUB161(_DAT_004c4480,10);
  auVar3[11] = auVar2[11] & auVar5[11] & SUB161(_DAT_004c4480,0xb);
  auVar3[12] = auVar2[12] & auVar5[12] & SUB161(_DAT_004c4480,0xc);
  auVar3[13] = auVar2[13] & auVar5[13] & SUB161(_DAT_004c4480,0xd);
  auVar3[14] = auVar2[14] & auVar5[14] & SUB161(_DAT_004c4480,0xe);
  auVar3[15] = auVar2[15] & auVar5[15] & SUB161(_DAT_004c4480,0xf);
  auVar2 = NEON_ext(auVar3,auVar3,8,1);
  return CONCAT13(auVar2[3] | auVar3[3] | auVar2[7] | auVar3[7],
                  CONCAT12(auVar2[2] | auVar3[2] | auVar2[6] | auVar3[6],
                           CONCAT11(auVar2[1] | auVar3[1] | auVar2[5] | auVar3[5],
                                    auVar2[0] | auVar3[0] | auVar2[4] | auVar3[4]))) == 0xf;
}


