// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 00ba9ec8
// Size: 2752 bytes
// Signature: undefined __thiscall processTriangle(BtConnectivityProcessor * this, btVector3 * param_1, int param_2, int param_3)


/* BtConnectivityProcessor::processTriangle(btVector3*, int, int) */

undefined8 __thiscall
BtConnectivityProcessor::processTriangle
          (BtConnectivityProcessor *this,btVector3 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  BtTriangleInfo BVar9;
  long lVar10;
  uint uVar11;
  BtTriangleInfo *this_00;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  undefined8 local_1e0;
  float local_1d8;
  float fStack_1d4;
  undefined8 local_1d0;
  float local_1c8;
  undefined4 local_1c4;
  undefined **local_1c0;
  undefined4 local_1b8;
  float local_170;
  float fStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined **local_140;
  undefined4 local_138;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long local_a0;
  
  lVar7 = tpidr_el0;
  local_a0 = *(long *)(lVar7 + 0x28);
  iVar4 = *(int *)(this + 8);
  iVar5 = *(int *)(this + 0xc);
  if ((iVar4 == param_2) && (iVar5 == param_3)) goto LAB_00baa01c;
  fVar23 = *(float *)(param_1 + 0x10);
  fVar24 = *(float *)(param_1 + 0x14);
  fVar26 = *(float *)param_1;
  fVar27 = *(float *)(param_1 + 4);
  fVar18 = *(float *)(param_1 + 0x24);
  fVar17 = *(float *)(param_1 + 0x28);
  fVar25 = *(float *)(param_1 + 0x18);
  fVar28 = *(float *)(param_1 + 8);
  fVar20 = *(float *)(param_1 + 0x20);
  lVar10 = *(long *)(this + 0x18);
  local_a8 = 0xffffffff;
  local_b8 = -1;
  local_b0 = 0xffffffffffffffff;
  local_c0 = 0xffffffffffffffff;
  fVar29 = (float)NEON_fmadd(fVar25 - fVar28,fVar20 - fVar26,(fVar17 - fVar28) * -(fVar23 - fVar26))
  ;
  uVar31 = NEON_fmadd(fVar24 - fVar27,fVar17 - fVar28,(fVar18 - fVar27) * -(fVar25 - fVar28));
  uVar22 = NEON_fmadd(fVar23 - fVar26,fVar18 - fVar27,(fVar20 - fVar26) * -(fVar24 - fVar27));
  uVar31 = NEON_fmadd(uVar31,uVar31,fVar29 * fVar29);
  fVar30 = (float)NEON_fmadd(uVar22,uVar22,uVar31);
  fVar29 = *(float *)(lVar10 + 0x10);
  if (fVar30 < fVar29) goto LAB_00baa01c;
  puVar14 = *(undefined8 **)(this + 0x10);
  fVar30 = *(float *)puVar14;
  fVar32 = *(float *)((long)puVar14 + 4);
  fVar35 = *(float *)(puVar14 + 2) - fVar30;
  fVar33 = *(float *)(puVar14 + 1);
  fVar36 = *(float *)((long)puVar14 + 0x14) - fVar32;
  fVar37 = *(float *)((long)puVar14 + 0x24) - fVar32;
  fVar38 = *(float *)(puVar14 + 4) - fVar30;
  fVar34 = (float)NEON_fmadd(*(float *)(puVar14 + 3) - fVar33,fVar38,
                             (*(float *)(puVar14 + 5) - fVar33) * -fVar35);
  uVar22 = NEON_fmadd(fVar36,*(float *)(puVar14 + 5) - fVar33,
                      fVar37 * -(*(float *)(puVar14 + 3) - fVar33));
  uVar31 = NEON_fmadd(fVar35,fVar37,fVar38 * -fVar36);
  uVar22 = NEON_fmadd(uVar22,uVar22,fVar34 * fVar34);
  fVar34 = (float)NEON_fmadd(uVar31,uVar31,uVar22);
  if (fVar34 < fVar29) goto LAB_00baa01c;
  uVar22 = NEON_fmadd(fVar30 - fVar26,fVar30 - fVar26,(fVar32 - fVar27) * (fVar32 - fVar27));
  fVar34 = (float)NEON_fmadd(fVar33 - fVar28,fVar33 - fVar28,uVar22);
  if (fVar34 < fVar29) {
    local_b0 = 0xffffffff00000000;
    local_c0 = 0xffffffff00000000;
  }
  uVar11 = (uint)(fVar34 < fVar29);
  uVar22 = NEON_fmadd(fVar30 - fVar23,fVar30 - fVar23,(fVar32 - fVar24) * (fVar32 - fVar24));
  fVar34 = (float)NEON_fmadd(fVar33 - fVar25,fVar33 - fVar25,uVar22);
  if (fVar34 < fVar29) {
    uVar12 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    *(undefined4 *)((ulong)&local_b0 | uVar12 << 2) = 0;
    *(undefined4 *)((ulong)&local_c0 | uVar12 << 2) = 1;
  }
  uVar22 = NEON_fmadd(fVar30 - fVar20,fVar30 - fVar20,(fVar32 - fVar18) * (fVar32 - fVar18));
  fVar30 = (float)NEON_fmadd(fVar33 - fVar17,fVar33 - fVar17,uVar22);
  if (fVar29 <= fVar30) {
    if (2 < uVar11) goto LAB_00baa01c;
  }
  else {
    *(undefined4 *)((long)&local_b0 + (ulong)uVar11 * 4) = 0;
    *(undefined4 *)((long)&local_c0 + (ulong)uVar11 * 4) = 2;
    if (1 < uVar11) goto LAB_00baa01c;
    uVar11 = uVar11 + 1;
  }
  fVar32 = *(float *)(puVar14 + 2);
  fVar30 = *(float *)((long)puVar14 + 0x14);
  fVar33 = *(float *)(puVar14 + 3);
  uVar22 = NEON_fmadd(fVar32 - fVar26,fVar32 - fVar26,(fVar30 - fVar27) * (fVar30 - fVar27));
  fVar34 = (float)NEON_fmadd(fVar33 - fVar28,fVar33 - fVar28,uVar22);
  if (fVar34 < fVar29) {
    *(undefined4 *)((long)&local_b0 + (ulong)uVar11 * 4) = 1;
    *(undefined4 *)((long)&local_c0 + (ulong)uVar11 * 4) = 0;
    if (1 < uVar11) goto LAB_00baa01c;
    uVar11 = uVar11 + 1;
  }
  uVar22 = NEON_fmadd(fVar32 - fVar23,fVar32 - fVar23,(fVar30 - fVar24) * (fVar30 - fVar24));
  fVar34 = (float)NEON_fmadd(fVar33 - fVar25,fVar33 - fVar25,uVar22);
  if (fVar34 < fVar29) {
    *(undefined4 *)((long)&local_b0 + (ulong)uVar11 * 4) = 1;
    *(undefined4 *)((long)&local_c0 + (ulong)uVar11 * 4) = 1;
    if (1 < uVar11) goto LAB_00baa01c;
    uVar11 = uVar11 + 1;
  }
  uVar22 = NEON_fmadd(fVar32 - fVar20,fVar32 - fVar20,(fVar30 - fVar18) * (fVar30 - fVar18));
  fVar30 = (float)NEON_fmadd(fVar33 - fVar17,fVar33 - fVar17,uVar22);
  if (fVar29 <= fVar30) {
    if (2 < uVar11) goto LAB_00baa01c;
  }
  else {
    *(undefined4 *)((long)&local_b0 + (ulong)uVar11 * 4) = 1;
    *(undefined4 *)((long)&local_c0 + (ulong)uVar11 * 4) = 2;
    if (1 < uVar11) goto LAB_00baa01c;
    uVar11 = uVar11 + 1;
  }
  fVar33 = *(float *)((long)puVar14 + 0x24);
  fVar32 = *(float *)(puVar14 + 4);
  fVar30 = *(float *)(puVar14 + 5);
  uVar22 = NEON_fmadd(fVar32 - fVar26,fVar32 - fVar26,(fVar33 - fVar27) * (fVar33 - fVar27));
  fVar26 = (float)NEON_fmadd(fVar30 - fVar28,fVar30 - fVar28,uVar22);
  if (fVar26 < fVar29) {
    *(undefined4 *)((long)&local_b0 + (ulong)uVar11 * 4) = 2;
    *(undefined4 *)((long)&local_c0 + (ulong)uVar11 * 4) = 0;
    if (1 < uVar11) goto LAB_00baa01c;
    uVar11 = uVar11 + 1;
  }
  uVar22 = NEON_fmadd(fVar32 - fVar23,fVar32 - fVar23,(fVar33 - fVar24) * (fVar33 - fVar24));
  fVar23 = (float)NEON_fmadd(fVar30 - fVar25,fVar30 - fVar25,uVar22);
  if (fVar23 < fVar29) {
    *(undefined4 *)((long)&local_b0 + (ulong)uVar11 * 4) = 2;
    *(undefined4 *)((long)&local_c0 + (ulong)uVar11 * 4) = 1;
    if (1 < uVar11) goto LAB_00baa01c;
    uVar11 = uVar11 + 1;
  }
  uVar22 = NEON_fmadd(fVar32 - fVar20,fVar32 - fVar20,(fVar33 - fVar18) * (fVar33 - fVar18));
  fVar17 = (float)NEON_fmadd(fVar30 - fVar17,fVar30 - fVar17,uVar22);
  if (fVar29 <= fVar17) {
    if (2 < uVar11) goto LAB_00baa01c;
  }
  else {
    *(undefined4 *)((long)&local_b0 + (ulong)uVar11 * 4) = 2;
    *(undefined4 *)((long)&local_c0 + (ulong)uVar11 * 4) = 2;
    if (1 < uVar11) goto LAB_00baa01c;
    uVar11 = uVar11 + 1;
  }
  if (uVar11 != 2) goto LAB_00baa01c;
  iVar16 = (int)local_b0;
  iVar15 = local_b0._4_4_;
  if (((int)local_b0 == 0) && (local_b0._4_4_ == 2)) {
    iVar15 = 0;
    iVar16 = 2;
    local_c0 = NEON_rev64(local_c0,4);
    local_b0 = 2;
  }
  if (iVar4 < *(int *)(lVar10 + 0x20)) {
    iVar5 = *(int *)(*(long *)(lVar10 + 0x30) + (long)iVar4 * 4) + iVar5;
    if ((*(int *)(lVar10 + 0x24) <= iVar5) ||
       ((iVar4 + 1 < *(int *)(lVar10 + 0x20) &&
        (*(int *)(*(long *)(lVar10 + 0x30) + (long)(iVar4 + 1) * 4) <= iVar5)))) goto LAB_00baa390;
    this_00 = (BtTriangleInfo *)(*(long *)(lVar10 + 0x28) + (long)iVar5 * 8);
  }
  else {
LAB_00baa390:
    this_00 = (BtTriangleInfo *)0x0;
  }
  puVar2 = puVar14 + (long)iVar15 * 2;
  puVar1 = puVar14 + (long)iVar16 * 2;
  *this_00 = (BtTriangleInfo)((byte)*this_00 | 0x40);
  fVar23 = *(float *)puVar2;
  fVar17 = *(float *)((long)puVar2 + 4);
  fVar20 = *(float *)puVar1;
  fVar29 = *(float *)((long)puVar1 + 4);
  fVar25 = *(float *)(puVar2 + 1);
  fVar18 = *(float *)(puVar1 + 1);
  btPolyhedralConvexShape::btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_140);
  iVar4 = local_b8;
  local_138 = 1;
  uStack_e8 = puVar14[1];
  local_f0 = *puVar14;
  uStack_d8 = puVar14[3];
  local_e0 = puVar14[2];
  iVar5 = (int)local_c0;
  lVar10 = (long)(int)local_c0;
  lVar6 = (long)local_b8;
  uStack_c8 = puVar14[5];
  local_d0 = puVar14[4];
                    /* try { // try from 00baa3f8 to 00baa3ff has its CatchHandler @ 00baa9a4 */
  local_140 = &PTR__btPolyhedralConvexShape_00fe1bf8;
  btPolyhedralConvexShape::btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_1c0);
  puVar2 = (undefined8 *)(param_1 + lVar10 * 0x10);
  uVar21 = *(undefined8 *)((long)(param_1 + lVar6 * 0x10) + 8);
  uVar19 = *(undefined8 *)(param_1 + lVar6 * 0x10);
  iVar5 = 3 - (iVar5 + iVar4);
  fVar17 = fVar17 - fVar29;
  puVar14 = (undefined8 *)(param_1 + (long)iVar5 * 0x10);
  fStack_168 = (float)uVar21;
  uStack_164 = (undefined4)((ulong)uVar21 >> 0x20);
  local_170 = (float)uVar19;
  fStack_16c = (float)((ulong)uVar19 >> 0x20);
  fStack_158 = (float)puVar2[1];
  uStack_154 = (undefined4)((ulong)puVar2[1] >> 0x20);
  local_160 = (float)*puVar2;
  fStack_15c = (float)((ulong)*puVar2 >> 0x20);
  fVar23 = fVar23 - fVar20;
  fVar25 = fVar25 - fVar18;
  iVar15 = iVar15 + iVar16;
  fStack_148 = (float)puVar14[1];
  uStack_144 = (undefined4)((ulong)puVar14[1] >> 0x20);
  local_150 = (float)*puVar14;
  fStack_14c = (float)((ulong)*puVar14 >> 0x20);
  uVar22 = NEON_fmadd(fVar23,fVar23,fVar17 * fVar17);
  puVar13 = *(undefined8 **)(this + 0x10);
  fVar24 = (float)NEON_fmadd(fVar25,fVar25,uVar22);
  puVar1 = puVar13 + (3 - (long)iVar15) * 2;
  puVar3 = puVar13 + (long)iVar16 * 2;
  local_1b8 = 1;
  local_1c4 = 0;
  fVar32 = (fStack_148 - fStack_168) * -(local_160 - local_170) +
           (local_150 - local_170) * (fStack_158 - fStack_168);
  fVar33 = ((float)uStack_c8 - (float)uStack_e8) * -((float)local_e0 - (float)local_f0) +
           ((float)local_d0 - (float)local_f0) * ((float)uStack_d8 - (float)uStack_e8);
  fVar35 = (fStack_14c - fStack_16c) * -(fStack_158 - fStack_168) +
           (fStack_148 - fStack_168) * (fStack_15c - fStack_16c);
  fVar36 = (local_d0._4_4_ - local_f0._4_4_) * -((float)uStack_d8 - (float)uStack_e8) +
           ((float)uStack_c8 - (float)uStack_e8) * (local_e0._4_4_ - local_f0._4_4_);
  fVar26 = (local_150 - local_170) * -(fStack_15c - fStack_16c) +
           (fStack_14c - fStack_16c) * (local_160 - local_170);
  fVar28 = ((float)local_d0 - (float)local_f0) * -(local_e0._4_4_ - local_f0._4_4_) +
           (local_d0._4_4_ - local_f0._4_4_) * ((float)local_e0 - (float)local_f0);
  uVar21 = NEON_fmov(0x3f800000,4);
  uVar19 = NEON_fsqrt(CONCAT44(fVar33 * fVar33 + fVar36 * fVar36 + fVar28 * fVar28,
                               fVar32 * fVar32 + fVar35 * fVar35 + fVar26 * fVar26),4);
  fVar20 = (float)uVar21 / (float)uVar19;
  fVar18 = (float)((ulong)uVar21 >> 0x20);
  fVar29 = fVar18 / (float)((ulong)uVar19 >> 0x20);
  fVar34 = 1.0 / SQRT(fVar24);
  fVar26 = fVar26 * fVar20;
  fVar28 = fVar28 * fVar29;
  fVar35 = fVar35 * fVar20;
  fVar36 = fVar36 * fVar29;
  fVar32 = fVar32 * fVar20;
  fVar33 = fVar33 * fVar29;
  fVar27 = fVar26 * -(fVar23 * fVar34) + fVar35 * fVar25 * fVar34;
  fVar30 = fVar28 * -(fVar23 * fVar34) + fVar36 * fVar25 * fVar34;
  fVar24 = fVar32 * -(fVar25 * fVar34) + fVar26 * fVar17 * fVar34;
  fVar25 = fVar33 * -(fVar25 * fVar34) + fVar28 * fVar17 * fVar34;
  fVar29 = fVar35 * -(fVar17 * fVar34) + fVar32 * fVar23 * fVar34;
  fVar23 = fVar36 * -(fVar17 * fVar34) + fVar33 * fVar23 * fVar34;
  uVar19 = NEON_fsqrt(CONCAT44(fVar30 * fVar30 + fVar25 * fVar25 + fVar23 * fVar23,
                               fVar27 * fVar27 + fVar24 * fVar24 + fVar29 * fVar29),4);
  local_1d0 = CONCAT44(fVar33,fVar36);
  fVar17 = (float)uVar21 / (float)uVar19;
  fVar18 = fVar18 / (float)((ulong)uVar19 >> 0x20);
  fVar27 = fVar27 * fVar17;
  fVar30 = fVar30 * fVar18;
  fVar24 = fVar24 * fVar17;
  fVar25 = fVar25 * fVar18;
  fVar29 = fVar29 * fVar17;
  fVar23 = fVar23 * fVar18;
  uVar12 = NEON_fcmlt(CONCAT44((*(float *)((long)puVar1 + 4) - *(float *)((long)puVar3 + 4)) *
                               fVar30 + (*(float *)puVar1 - *(float *)puVar3) * fVar25 +
                               (*(float *)(puVar1 + 1) - *(float *)(puVar3 + 1)) * fVar23,
                               (*(float *)(param_1 + (long)iVar5 * 0x10 + 4) -
                               *(float *)((long)puVar2 + 4)) * fVar27 +
                               (*(float *)puVar14 - *(float *)puVar2) * fVar24 +
                               (*(float *)(param_1 + (long)iVar5 * 0x10 + 8) -
                               *(float *)(puVar2 + 1)) * fVar29),0,4);
  fVar20 = -fVar23;
  fVar17 = -fVar25;
  fVar18 = -fVar30;
  if ((uVar12 & 0x100000000) == 0) {
    fVar20 = fVar23;
    fVar17 = fVar25;
    fVar18 = fVar30;
  }
  bVar8 = (uVar12 & 1) == 0;
  fVar23 = -fVar29;
  if (bVar8) {
    fVar23 = fVar29;
  }
  fVar25 = -fVar27;
  fVar29 = -fVar24;
  if (bVar8) {
    fVar25 = fVar27;
    fVar29 = fVar24;
  }
  fVar27 = (float)NEON_fmadd(fVar20,fVar29,fVar23 * -fVar17);
  fVar24 = (float)NEON_fmadd(fVar18,fVar23,fVar25 * -fVar20);
  fVar30 = (float)NEON_fmadd(fVar17,fVar25,fVar29 * -fVar18);
  uVar22 = NEON_fmadd(fVar24,fVar24,fVar27 * fVar27);
  fVar34 = (float)NEON_fmadd(fVar30,fVar30,uVar22);
  local_1c8 = fVar28;
  local_1c0 = &PTR__btPolyhedralConvexShape_00fe1bf8;
  if (*(float *)(*(long *)(this + 0x18) + 0xc) <= fVar34) {
    fVar34 = 1.0 / SQRT(fVar34);
    fVar37 = (float)NEON_fmadd(fVar30 * fVar34,fVar17,fVar20 * -(fVar24 * fVar34));
    fVar30 = (float)NEON_fmadd(fVar27 * fVar34,fVar20,fVar18 * -(fVar30 * fVar34));
    fVar24 = (float)NEON_fmadd(fVar24 * fVar34,fVar18,fVar17 * -(fVar27 * fVar34));
    uVar22 = NEON_fmadd(fVar29,fVar17,fVar18 * fVar25);
    uVar31 = NEON_fmadd(fVar30,fVar30,fVar37 * fVar37);
    fVar17 = (float)NEON_fmadd(fVar24,fVar24,uVar31);
    fVar17 = 1.0 / SQRT(fVar17);
    uVar31 = NEON_fmadd(fVar29,fVar30 * fVar17,fVar25 * fVar37 * fVar17);
    fVar17 = (float)NEON_fmadd(fVar23,fVar24 * fVar17,uVar31);
    fVar18 = (float)NEON_fmadd(fVar23,fVar20,uVar22);
    fVar18 = atan2f(fVar17,fVar18);
    uVar22 = NEON_fmadd(fVar36,fVar29,fVar33 * fVar25);
    fVar17 = (float)NEON_fmadd(fVar28,fVar23,uVar22);
    bVar8 = fVar17 < 0.0;
    fVar17 = 3.141593 - fVar18;
    if (!bVar8) {
      fVar17 = -(3.141593 - fVar18);
    }
  }
  else {
    bVar8 = false;
    fVar17 = 0.0;
  }
  if (iVar15 == 3) {
    fVar20 = (float)puVar13[2] - (float)puVar13[4];
    fVar29 = (float)((ulong)puVar13[2] >> 0x20) - (float)((ulong)puVar13[4] >> 0x20);
    fVar23 = *(float *)(puVar13 + 3) - *(float *)(puVar13 + 5);
    fVar18 = (float)NEON_fmadd(fVar23,fVar23,fVar29 * fVar29 + fVar20 * fVar20);
    sincosf(fVar17 * -0.5,&fStack_1e4,&local_1e8);
    fStack_1e4 = fStack_1e4 / SQRT(fVar18);
    uVar19 = CONCAT44(fVar29 * fStack_1e4,fVar20 * fStack_1e4);
    local_1d8 = fVar23 * fStack_1e4;
    fStack_1d4 = local_1e8;
                    /* try { // try from 00baa860 to 00baa86b has its CatchHandler @ 00baa98c */
    local_1e0 = uVar19;
    fVar18 = (float)quatRotate((btQuaternion *)&local_1e0,(btVector3 *)&local_1d0);
    if ((float)uVar19 * fVar32 + fVar18 * fVar35 + local_1e8 * fVar26 < 0.0) {
      *this_00 = (BtTriangleInfo)((byte)*this_00 | 0x10);
    }
    BtTriangleInfo::setEdgeV1V2Angle(this_00,-fVar17);
    if (bVar8) {
      BVar9 = (BtTriangleInfo)((byte)*this_00 | 2);
LAB_00baa96c:
      *this_00 = BVar9;
    }
  }
  else if (iVar15 == 2) {
    fVar20 = (float)puVar13[4] - (float)*puVar13;
    fVar29 = (float)((ulong)puVar13[4] >> 0x20) - (float)((ulong)*puVar13 >> 0x20);
    fVar23 = *(float *)(puVar13 + 5) - *(float *)(puVar13 + 1);
    fVar18 = (float)NEON_fmadd(fVar23,fVar23,fVar29 * fVar29 + fVar20 * fVar20);
    sincosf(fVar17 * -0.5,&fStack_1ec,&local_1f0);
    fStack_1ec = fStack_1ec / SQRT(fVar18);
    uVar19 = CONCAT44(fVar29 * fStack_1ec,fVar20 * fStack_1ec);
    local_1d8 = fVar23 * fStack_1ec;
    fStack_1d4 = local_1f0;
                    /* try { // try from 00baa918 to 00baa923 has its CatchHandler @ 00baa988 */
    local_1e0 = uVar19;
    fVar18 = (float)quatRotate((btQuaternion *)&local_1e0,(btVector3 *)&local_1d0);
    if ((float)uVar19 * fVar32 + fVar18 * fVar35 + local_1f0 * fVar26 < 0.0) {
      *this_00 = (BtTriangleInfo)((byte)*this_00 | 0x20);
    }
    BtTriangleInfo::setEdgeV2V0Angle(this_00,-fVar17);
    if (bVar8) {
      BVar9 = (BtTriangleInfo)((byte)*this_00 | 4);
      goto LAB_00baa96c;
    }
  }
  else if (iVar15 == 1) {
    fVar20 = (float)*puVar13 - (float)puVar13[2];
    fVar29 = (float)((ulong)*puVar13 >> 0x20) - (float)((ulong)puVar13[2] >> 0x20);
    fVar23 = *(float *)(puVar13 + 1) - *(float *)(puVar13 + 3);
    fVar18 = (float)NEON_fmadd(fVar23,fVar23,fVar29 * fVar29 + fVar20 * fVar20);
    sincosf(fVar17 * -0.5,&fStack_1f4,&local_1f8);
    fStack_1f4 = fStack_1f4 / SQRT(fVar18);
    uVar19 = CONCAT44(fVar29 * fStack_1f4,fVar20 * fStack_1f4);
    local_1d8 = fVar23 * fStack_1f4;
    fStack_1d4 = local_1f8;
                    /* try { // try from 00baa7a8 to 00baa7b3 has its CatchHandler @ 00baa994 */
    local_1e0 = uVar19;
    fVar18 = (float)quatRotate((btQuaternion *)&local_1e0,(btVector3 *)&local_1d0);
    if ((float)uVar19 * fVar32 + fVar18 * fVar35 + local_1f8 * fVar26 < 0.0) {
      *this_00 = (BtTriangleInfo)((byte)*this_00 | 8);
    }
                    /* try { // try from 00baa7e8 to 00baa7ef has its CatchHandler @ 00baa990 */
    BtTriangleInfo::setEdgeV0V1Angle(this_00,-fVar17);
    if (bVar8) {
      BVar9 = (BtTriangleInfo)((byte)*this_00 | 1);
      goto LAB_00baa96c;
    }
  }
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_1c0);
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_140);
LAB_00baa01c:
  if (*(long *)(lVar7 + 0x28) == local_a0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


