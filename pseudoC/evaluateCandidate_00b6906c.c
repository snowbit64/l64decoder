// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: evaluateCandidate
// Entry Point: 00b6906c
// Size: 4288 bytes
// Signature: undefined __thiscall evaluateCandidate(Brep * this, uint param_1, Vector3 * param_2, Matrix4x4 * param_3, Matrix4x4 * param_4, uchar * param_5, float * param_6, float param_7, float param_8)


/* WARNING: Type propagation algorithm not settling */
/* Brep::evaluateCandidate(unsigned int, Vector3&, Matrix4x4&, Matrix4x4&, unsigned char&, float&,
   float, float) */

undefined4 __thiscall
Brep::evaluateCandidate
          (Brep *this,uint param_1,Vector3 *param_2,Matrix4x4 *param_3,Matrix4x4 *param_4,
          uchar *param_5,float *param_6,float param_7,float param_8)

{
  undefined8 *puVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  ulong uVar20;
  float **ppfVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined4 *puVar27;
  float *pfVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  float *pfVar32;
  float *pfVar33;
  long lVar34;
  undefined8 *puVar35;
  size_t sVar36;
  undefined4 uVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  uint uVar46;
  uint uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  void *local_1f8;
  ulong local_1f0;
  long local_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  undefined4 *local_1d0;
  float *local_1c8;
  float *local_1c0;
  undefined8 local_1b8;
  float *local_1b0;
  float fStack_1a8;
  float fStack_1a4;
  undefined4 local_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong local_170;
  float local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  float local_118;
  float fStack_114;
  float local_110;
  undefined8 local_108;
  float local_100 [2];
  undefined8 uStack_f8;
  float fStack_f0;
  float local_ec;
  Plane aPStack_e8 [12];
  float local_dc;
  Plane aPStack_d8 [16];
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  long local_a8;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  
  lVar6 = tpidr_el0;
  local_a8 = *(long *)(lVar6 + 0x28);
  uVar4 = param_1 + 2;
  if ((param_1 - 1 & 3) != 0) {
    uVar4 = param_1 - 1;
  }
  uVar29 = (ulong)*(ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar4 * 8);
  puVar2 = (ushort *)(*(long *)(this + 0x2f68) + (ulong)param_1 * 8);
  puVar35 = (undefined8 *)(*(long *)(this + 0x2f08) + uVar29 * 0x40);
  uVar30 = (ulong)*puVar2;
  uVar4 = *(uint *)(puVar2 + 2);
  uVar40 = puVar35[4];
  uVar41 = puVar35[7];
  uVar39 = puVar35[6];
  uVar45 = puVar35[1];
  uVar44 = *puVar35;
  uVar49 = puVar35[3];
  uVar48 = puVar35[2];
  *(undefined8 *)(param_3 + 0x28) = puVar35[5];
  *(undefined8 *)(param_3 + 0x20) = uVar40;
  *(undefined8 *)(param_3 + 0x38) = uVar41;
  *(undefined8 *)(param_3 + 0x30) = uVar39;
  *(undefined8 *)(param_3 + 8) = uVar45;
  *(undefined8 *)param_3 = uVar44;
  *(undefined8 *)(param_3 + 0x18) = uVar49;
  *(undefined8 *)(param_3 + 0x10) = uVar48;
  pfVar28 = (float *)(*(long *)(this + 0x2f08) + uVar30 * 0x40);
  *(float *)param_3 = *pfVar28 + *(float *)param_3;
  *(float *)(param_3 + 4) = pfVar28[1] + *(float *)(param_3 + 4);
  *(float *)(param_3 + 8) = pfVar28[2] + *(float *)(param_3 + 8);
  *(float *)(param_3 + 0xc) = pfVar28[3] + *(float *)(param_3 + 0xc);
  *(float *)(param_3 + 0x10) = pfVar28[4] + *(float *)(param_3 + 0x10);
  *(float *)(param_3 + 0x14) = pfVar28[5] + *(float *)(param_3 + 0x14);
  *(float *)(param_3 + 0x18) = pfVar28[6] + *(float *)(param_3 + 0x18);
  *(float *)(param_3 + 0x1c) = pfVar28[7] + *(float *)(param_3 + 0x1c);
  *(float *)(param_3 + 0x20) = pfVar28[8] + *(float *)(param_3 + 0x20);
  *(float *)(param_3 + 0x24) = pfVar28[9] + *(float *)(param_3 + 0x24);
  *(float *)(param_3 + 0x28) = pfVar28[10] + *(float *)(param_3 + 0x28);
  *(float *)(param_3 + 0x2c) = pfVar28[0xb] + *(float *)(param_3 + 0x2c);
  *(float *)(param_3 + 0x30) = pfVar28[0xc] + *(float *)(param_3 + 0x30);
  fVar38 = *(float *)(param_3 + 0x38);
  fVar42 = *(float *)(param_3 + 0x3c);
  *(float *)(param_3 + 0x34) = pfVar28[0xd] + *(float *)(param_3 + 0x34);
  *(float *)(param_3 + 0x38) = pfVar28[0xe] + fVar38;
  local_1c8 = (float *)0x0;
  local_1c0 = (float *)0x0;
  local_1b8 = 0;
  local_1e0 = (undefined4 *)0x0;
  local_1d8 = (undefined4 *)0x0;
  local_1d0 = (undefined4 *)0x0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_1e8 = 0;
  *(float *)(param_3 + 0x3c) = pfVar28[0xf] + fVar42;
                    /* try { // try from 00b6920c to 00b6921f has its CatchHandler @ 00b6a160 */
  edgeCoboundary((vector *)this,(vector *)&local_1c8,(vector *)&local_1e0,(uint)&local_1f8);
  uVar46 = (uint)uVar48;
                    /* try { // try from 00b69224 to 00b692a7 has its CatchHandler @ 00b6a180 */
  uVar37 = planeAt(this,param_1 >> 2);
  puVar27 = local_1e0;
  fVar43 = fVar38;
  uVar47 = uVar46;
  if (local_1d8 < local_1d0) {
    *local_1d8 = uVar37;
    local_1d8[1] = fVar38;
    local_1d8[2] = fVar42;
    local_1d8[3] = uVar46;
    local_1d8 = local_1d8 + 4;
  }
  else {
    sVar36 = (long)local_1d8 - (long)local_1e0;
    uVar22 = ((long)sVar36 >> 4) + 1;
    if (uVar22 >> 0x3c != 0) {
                    /* try { // try from 00b6a0f0 to 00b6a103 has its CatchHandler @ 00b6a180 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar23 = (long)local_1d0 - (long)local_1e0 >> 3;
    if (uVar22 <= uVar23) {
      uVar22 = uVar23;
    }
    if (0x7fffffffffffffef < (ulong)((long)local_1d0 - (long)local_1e0)) {
      uVar22 = 0xfffffffffffffff;
    }
    if (uVar22 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    fVar53 = fVar42;
    puVar19 = (undefined4 *)operator_new(uVar22 << 4);
    puVar3 = puVar19 + ((long)sVar36 >> 4) * 4;
    *puVar3 = uVar37;
    puVar3[1] = fVar38;
    puVar3[2] = fVar42;
    puVar3[3] = uVar46;
    fVar42 = fVar53;
    if (0 < (long)sVar36) {
      memcpy(puVar19,puVar27,sVar36);
    }
    local_1e0 = puVar19;
    local_1d8 = puVar3 + 4;
    local_1d0 = puVar19 + uVar22 * 4;
    if (puVar27 != (undefined4 *)0x0) {
      operator_delete(puVar27);
    }
  }
  sVar5 = *(short *)(*(long *)(this + 0x2f68) + (ulong)(param_1 >> 2) * 0x20);
  if (local_1f0 == local_1e8 * 0x40) {
    if ((long)(local_1f0 + 1) < 0) {
                    /* try { // try from 00b6a104 to 00b6a10b has its CatchHandler @ 00b6a15c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (local_1f0 < 0x3fffffffffffffff) {
      uVar22 = local_1f0 + 0x40 & 0xffffffffffffffc0;
      if (uVar22 <= (ulong)(local_1e8 << 7)) {
        uVar22 = local_1e8 << 7;
      }
    }
    else {
      uVar22 = 0x7fffffffffffffff;
    }
                    /* try { // try from 00b69340 to 00b69347 has its CatchHandler @ 00b6a15c */
    std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::reserve
              ((vector<bool,std::__ndk1::allocator<bool>> *)&local_1f8,uVar22);
  }
  uVar22 = local_1f0 + 1;
  uVar31 = local_1f0 >> 6;
  uVar23 = 1L << (local_1f0 & 0x3f);
  if (sVar5 < 0) {
    uVar23 = *(ulong *)((long)local_1f8 + uVar31 * 8) | uVar23;
  }
  else {
    uVar23 = *(ulong *)((long)local_1f8 + uVar31 * 8) & (uVar23 ^ 0xffffffffffffffff);
  }
  *(ulong *)((long)local_1f8 + uVar31 * 8) = uVar23;
  local_1f0 = uVar22;
  if (uVar4 != 0xffffffff) {
    uVar4 = uVar4 >> 2;
                    /* try { // try from 00b6938c to 00b6940f has its CatchHandler @ 00b6a164 */
    uVar37 = planeAt(this,uVar4);
    puVar27 = local_1e0;
    if (local_1d8 < local_1d0) {
      *local_1d8 = uVar37;
      local_1d8[1] = fVar43;
      local_1d8[2] = fVar42;
      local_1d8[3] = uVar47;
      local_1d8 = local_1d8 + 4;
    }
    else {
      sVar36 = (long)local_1d8 - (long)local_1e0;
      uVar22 = ((long)sVar36 >> 4) + 1;
      if (uVar22 >> 0x3c != 0) {
                    /* try { // try from 00b6a10c to 00b6a11f has its CatchHandler @ 00b6a164 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar23 = (long)local_1d0 - (long)local_1e0 >> 3;
      if (uVar22 <= uVar23) {
        uVar22 = uVar23;
      }
      if (0x7fffffffffffffef < (ulong)((long)local_1d0 - (long)local_1e0)) {
        uVar22 = 0xfffffffffffffff;
      }
      if (uVar22 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      puVar19 = (undefined4 *)operator_new(uVar22 << 4);
      puVar3 = puVar19 + ((long)sVar36 >> 4) * 4;
      *puVar3 = uVar37;
      puVar3[1] = fVar43;
      puVar3[2] = fVar42;
      puVar3[3] = uVar47;
      if (0 < (long)sVar36) {
        memcpy(puVar19,puVar27,sVar36);
      }
      local_1e0 = puVar19;
      local_1d8 = puVar3 + 4;
      local_1d0 = puVar19 + uVar22 * 4;
      if (puVar27 != (undefined4 *)0x0) {
        operator_delete(puVar27);
      }
    }
    sVar5 = *(short *)(*(long *)(this + 0x2f68) + (ulong)uVar4 * 0x20);
    if (local_1f0 == local_1e8 * 0x40) {
      if ((long)(local_1f0 + 1) < 0) {
                    /* try { // try from 00b6a120 to 00b6a127 has its CatchHandler @ 00b6a150 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (local_1f0 < 0x3fffffffffffffff) {
        uVar22 = local_1f0 + 0x40 & 0xffffffffffffffc0;
        if (uVar22 <= (ulong)(local_1e8 << 7)) {
          uVar22 = local_1e8 << 7;
        }
      }
      else {
        uVar22 = 0x7fffffffffffffff;
      }
                    /* try { // try from 00b694a8 to 00b694af has its CatchHandler @ 00b6a150 */
      std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::reserve
                ((vector<bool,std::__ndk1::allocator<bool>> *)&local_1f8,uVar22);
    }
    uVar23 = local_1f0 >> 6;
    uVar22 = 1L << (local_1f0 & 0x3f);
    if (sVar5 < 0) {
      uVar22 = *(ulong *)((long)local_1f8 + uVar23 * 8) | uVar22;
    }
    else {
      uVar22 = *(ulong *)((long)local_1f8 + uVar23 * 8) & (uVar22 ^ 0xffffffffffffffff);
    }
    *(ulong *)((long)local_1f8 + uVar23 * 8) = uVar22;
    fVar38 = fVar43;
    uVar46 = uVar47;
    local_1f0 = local_1f0 + 1;
  }
  uVar22 = (ulong)uVar46;
  puVar35 = (undefined8 *)
            (*(long *)(this + 0x2ef0) +
            (ulong)*(ushort *)(*(long *)(this + 0x2f50) + uVar29 * 0xc) * 0x10);
  local_b8 = *puVar35;
  local_b0 = *(float *)(puVar35 + 1);
  puVar35 = (undefined8 *)
            (*(long *)(this + 0x2ef0) +
            (ulong)*(ushort *)(*(long *)(this + 0x2f50) + uVar30 * 0xc) * 0x10);
  local_c0 = *(float *)(puVar35 + 1);
  local_c8 = *puVar35;
                    /* try { // try from 00b69530 to 00b69557 has its CatchHandler @ 00b6a184 */
  Plane::Plane((Plane *)&local_108);
  Plane::Plane((Plane *)&uStack_f8);
  Plane::Plane(aPStack_e8);
  Plane::Plane(aPStack_d8);
                    /* try { // try from 00b69560 to 00b6958f has its CatchHandler @ 00b6a168 */
  iVar17 = getConstraintPlanes((Plane *)&local_108,*(uchar *)(*(long *)(this + 0x2f38) + uVar29),
                               (Vector3 *)&local_b8);
  iVar18 = getConstraintPlanes((Plane *)((long)&local_108 + (long)iVar17 * 4 * 4),
                               *(byte *)(*(long *)(this + 0x2f38) + uVar30) &
                               (*(byte *)(*(long *)(this + 0x2f38) + uVar29) ^ 0xff),
                               (Vector3 *)&local_c8);
  uVar4 = iVar18 + iVar17;
  uVar23 = (ulong)uVar4;
  fVar43 = (float)NEON_fminnm((float)local_b8,0x7f7fffff);
  fVar53 = (float)NEON_fminnm(local_b8._4_4_,0x7f7fffff);
  fVar56 = (float)NEON_fminnm(local_b0,0x7f7fffff);
  fVar42 = (float)local_b8;
  if ((float)local_b8 <= -3.402823e+38) {
    fVar42 = -3.402823e+38;
  }
  fVar57 = local_b0;
  if (local_b0 <= -3.402823e+38) {
    fVar57 = -3.402823e+38;
  }
  fVar50 = (float)local_c8;
  if (fVar43 <= (float)local_c8) {
    fVar50 = fVar43;
  }
  fVar43 = local_c8._4_4_;
  if (fVar53 <= local_c8._4_4_) {
    fVar43 = fVar53;
  }
  fVar53 = local_b8._4_4_;
  if (local_b8._4_4_ <= -3.402823e+38) {
    fVar53 = -3.402823e+38;
  }
  fVar52 = local_c0;
  if (fVar56 <= local_c0) {
    fVar52 = fVar56;
  }
  fVar56 = (float)local_c8;
  if ((float)local_c8 <= fVar42) {
    fVar56 = fVar42;
  }
  fVar42 = local_c8._4_4_;
  if (local_c8._4_4_ <= fVar53) {
    fVar42 = fVar53;
  }
  fVar53 = local_c0;
  pfVar28 = local_1c8;
  if (local_c0 <= fVar57) {
    fVar53 = fVar57;
  }
  while (fVar57 = fVar53, pfVar28 != local_1c0) {
    fVar51 = *pfVar28;
    fVar54 = pfVar28[1];
    fVar53 = pfVar28[2];
    pfVar28 = pfVar28 + 3;
    fVar55 = fVar51;
    if (fVar50 <= fVar51) {
      fVar55 = fVar50;
    }
    fVar7 = fVar54;
    if (fVar43 <= fVar54) {
      fVar7 = fVar43;
    }
    fVar8 = fVar53;
    if (fVar52 <= fVar53) {
      fVar8 = fVar52;
    }
    if (fVar51 <= fVar56) {
      fVar51 = fVar56;
    }
    if (fVar54 <= fVar42) {
      fVar54 = fVar42;
    }
    fVar50 = fVar55;
    fVar43 = fVar7;
    fVar52 = fVar8;
    fVar56 = fVar51;
    fVar42 = fVar54;
    if (fVar53 <= fVar57) {
      fVar53 = fVar57;
    }
  }
  local_118 = (fVar56 + fVar50) * 0.5;
  fStack_114 = (fVar42 + fVar43) * 0.5;
  local_110 = (fVar57 + fVar52) * 0.5;
  if (uVar4 != 0) {
    puVar35 = &local_108;
    uVar31 = uVar23;
    do {
                    /* try { // try from 00b6967c to 00b69687 has its CatchHandler @ 00b6a194 */
      fVar42 = (float)Plane::signedDistanceTo((Plane *)puVar35,(Vector3 *)&local_118);
      uVar40 = *puVar35;
      uVar31 = uVar31 - 1;
      puVar1 = puVar35 + 1;
      puVar35 = puVar35 + 2;
      local_118 = local_118 - (float)uVar40 * fVar42;
      fStack_114 = fStack_114 - (float)((ulong)uVar40 >> 0x20) * fVar42;
      local_110 = local_110 - fVar42 * *(float *)puVar1;
    } while (uVar31 != 0);
  }
  uVar37 = NEON_fmadd(local_118,*(undefined4 *)(param_3 + 8),fStack_114 * *(float *)(param_3 + 0x18)
                     );
  fVar42 = (float)NEON_fmadd(local_110,*(undefined4 *)(param_3 + 0x28),uVar37);
  local_160 = *(undefined8 *)param_3;
  uStack_150 = *(undefined8 *)(param_3 + 0x10);
  fVar43 = (float)*(undefined8 *)(param_3 + 0x10) * fStack_114 +
           (float)*(undefined8 *)param_3 * local_118 +
           (float)*(undefined8 *)(param_3 + 0x20) * local_110 +
           (float)*(undefined8 *)(param_3 + 0x30);
  fVar53 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) * fStack_114 +
           (float)((ulong)*(undefined8 *)param_3 >> 0x20) * local_118 +
           (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20) * local_110 +
           (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
  local_130 = CONCAT44(fVar53,fVar43);
  local_140 = *(undefined8 *)(param_3 + 0x20);
  local_128 = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20),
                       *(float *)(param_3 + 0x38) + fVar42);
  uStack_148 = CONCAT44(fVar53,(int)*(undefined8 *)(param_3 + 0x18));
  uStack_158 = CONCAT44(fVar43,(int)*(undefined8 *)(param_3 + 8));
  uStack_138 = CONCAT44(*(float *)(param_3 + 0x38) + fVar42,(int)*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 00b69730 to 00b6973b has its CatchHandler @ 00b6a158 */
  uVar37 = QuadricSolverUtil::squaredError(param_3,(Vector3 *)&local_118);
  local_128 = CONCAT44(uVar37,(undefined4)local_128);
  if (uVar4 != 0) {
    if (uVar4 < 4) {
      uVar24 = 0;
    }
    else {
      uVar24 = uVar23 & 0xfffffffc;
      pfVar28 = &local_dc;
      uVar31 = uVar24;
      do {
        pfVar32 = pfVar28 + 4;
        uVar31 = uVar31 - 4;
        pfVar9 = pfVar28 + -7;
        pfVar10 = pfVar28 + -6;
        pfVar11 = pfVar28 + -5;
        pfVar12 = pfVar28 + -4;
        pfVar13 = pfVar28 + 1;
        pfVar14 = pfVar28 + 2;
        pfVar15 = pfVar28 + 3;
        pfVar16 = pfVar28 + 4;
        pfVar33 = pfVar28 + -4;
        pfVar28[-8] = pfVar28[-8] +
                      pfVar28[-10] * fStack_114 + local_118 * pfVar28[-0xb] +
                      local_110 * pfVar28[-9];
        *pfVar28 = *pfVar28 +
                   pfVar28[-2] * fStack_114 + local_118 * pfVar28[-3] + local_110 * pfVar28[-1];
        pfVar28 = pfVar28 + 0x10;
        *pfVar33 = *pfVar12 + *pfVar10 * fStack_114 + local_118 * *pfVar9 + local_110 * *pfVar11;
        *pfVar32 = *pfVar16 + *pfVar14 * fStack_114 + local_118 * *pfVar13 + local_110 * *pfVar15;
      } while (uVar31 != 0);
      if (uVar24 == uVar23) goto LAB_00b697f0;
    }
    lVar25 = uVar23 - uVar24;
    pfVar28 = local_100 + uVar24 * 4 + 1;
    do {
      lVar25 = lVar25 + -1;
      uVar37 = NEON_fmadd(pfVar28[-3],local_118,pfVar28[-2] * fStack_114);
      fVar42 = (float)NEON_fmadd(pfVar28[-1],local_110,uVar37);
      *pfVar28 = *pfVar28 + fVar42;
      pfVar28 = pfVar28 + 4;
    } while (lVar25 != 0);
  }
LAB_00b697f0:
  if (local_1e0 != local_1d8) {
    uVar23 = (long)local_1d8 + (-0x10 - (long)local_1e0);
    puVar27 = local_1e0;
    if (0x2f < uVar23) {
      uVar23 = (uVar23 >> 4) + 1;
      uVar24 = uVar23 & 0x1ffffffffffffffc;
      puVar27 = local_1e0 + uVar24 * 4;
      pfVar28 = (float *)(local_1e0 + 0xb);
      uVar31 = uVar24;
      do {
        pfVar32 = pfVar28 + 4;
        uVar31 = uVar31 - 4;
        pfVar9 = pfVar28 + -7;
        pfVar10 = pfVar28 + -6;
        pfVar12 = pfVar28 + -5;
        pfVar11 = pfVar28 + -4;
        pfVar13 = pfVar28 + 1;
        pfVar14 = pfVar28 + 2;
        pfVar15 = pfVar28 + 3;
        pfVar16 = pfVar28 + 4;
        pfVar33 = pfVar28 + -4;
        pfVar28[-8] = pfVar28[-8] +
                      pfVar28[-10] * fStack_114 + local_118 * pfVar28[-0xb] +
                      local_110 * pfVar28[-9];
        *pfVar28 = *pfVar28 +
                   pfVar28[-2] * fStack_114 + local_118 * pfVar28[-3] + local_110 * pfVar28[-1];
        pfVar28 = pfVar28 + 0x10;
        *pfVar33 = *pfVar11 + *pfVar10 * fStack_114 + local_118 * *pfVar9 + local_110 * *pfVar12;
        *pfVar32 = *pfVar16 + *pfVar14 * fStack_114 + local_118 * *pfVar13 + local_110 * *pfVar15;
      } while (uVar31 != 0);
      if (uVar23 == uVar24) goto LAB_00b6989c;
    }
    do {
      uVar37 = NEON_fmadd(*puVar27,local_118,(float)puVar27[1] * fStack_114);
      fVar42 = (float)NEON_fmadd(puVar27[2],local_110,uVar37);
      puVar27[3] = (float)puVar27[3] + fVar42;
      puVar27 = puVar27 + 4;
    } while (puVar27 != local_1d8);
  }
LAB_00b6989c:
  if (local_1c8 != local_1c0) {
    pfVar28 = local_1c8 + 3;
    *local_1c8 = *local_1c8 - local_118;
    local_1c8[1] = local_1c8[1] - fStack_114;
    local_1c8[2] = local_1c8[2] - local_110;
    if (pfVar28 != local_1c0) {
      uVar23 = (long)local_1c0 + (-0x18 - (long)local_1c8);
      if (0x23 < uVar23) {
        uVar23 = uVar23 / 0xc;
        if ((&local_118 <= local_1c8) || (local_1c8 + uVar23 * 3 + 6 <= &local_118)) {
          uVar23 = uVar23 + 1;
          uVar24 = uVar23 & 0x3ffffffffffffffc;
          pfVar32 = pfVar28 + uVar24 * 3;
          uVar31 = uVar24;
          do {
            uVar31 = uVar31 - 4;
            *pfVar28 = *pfVar28 - local_118;
            pfVar28[1] = pfVar28[1] - fStack_114;
            pfVar28[2] = pfVar28[2] - local_110;
            pfVar28[3] = pfVar28[3] - local_118;
            pfVar28[4] = pfVar28[4] - fStack_114;
            pfVar28[5] = pfVar28[5] - local_110;
            pfVar28[6] = pfVar28[6] - local_118;
            pfVar28[7] = pfVar28[7] - fStack_114;
            pfVar28[8] = pfVar28[8] - local_110;
            pfVar28[9] = pfVar28[9] - local_118;
            pfVar28[10] = pfVar28[10] - fStack_114;
            pfVar28[0xb] = pfVar28[0xb] - local_110;
            pfVar28 = pfVar28 + 0xc;
          } while (uVar31 != 0);
          pfVar28 = pfVar32;
          if (uVar23 == uVar24) goto LAB_00b6995c;
        }
      }
      do {
        *pfVar28 = *pfVar28 - local_118;
        pfVar28[1] = pfVar28[1] - fStack_114;
        pfVar28[2] = pfVar28[2] - local_110;
        pfVar28 = pfVar28 + 3;
      } while (pfVar28 != local_1c0);
    }
  }
LAB_00b6995c:
  if (uVar4 == 0) {
                    /* try { // try from 00b69cc8 to 00b69cef has its CatchHandler @ 00b6a154 */
    ppfVar21 = (float **)0x1;
    uVar23 = QuadricSolverUtil::solve((Vector3 *)&local_170,(Matrix4x4 *)&local_160,true);
    if ((uVar23 & 1) != 0) {
      ppfVar21 = &local_1c8;
      uVar23 = validateVertex((Vector3 *)&local_170,(vector *)&local_1e0,(vector *)ppfVar21,param_8)
      ;
                    /* try { // try from 00b69cf4 to 00b69cff has its CatchHandler @ 00b6a130 */
      if (((uVar23 & 1) != 0) &&
         (fVar42 = (float)QuadricSolverUtil::squaredError
                                    ((Matrix4x4 *)&local_160,(Vector3 *)&local_170),
         uVar23 = local_170, fVar43 = local_168, fVar42 < INFINITY)) goto LAB_00b69fc4;
    }
    if ((long)local_1d8 - (long)local_1e0 != 0) {
      uVar24 = 0;
      uVar31 = (long)local_1d8 - (long)local_1e0 >> 4;
      fVar42 = INFINITY;
      do {
        if ((*(ulong *)((long)local_1f8 + (uVar24 >> 3 & 0x1ffffffffffffff8)) >> (uVar24 & 0x3f) & 1
            ) == 0) {
          ppfVar21 = (float **)(local_1e0 + uVar24 * 4);
                    /* try { // try from 00b69d70 to 00b69d97 has its CatchHandler @ 00b6a170 */
          uVar23 = QuadricSolverUtil::solve
                             ((Vector3 *)&local_170,(Matrix4x4 *)&local_160,(Plane *)ppfVar21,true);
          if ((uVar23 & 1) != 0) {
            ppfVar21 = &local_1c8;
            uVar23 = validateVertex((Vector3 *)&local_170,(vector *)&local_1e0,(vector *)ppfVar21,
                                    param_8);
                    /* try { // try from 00b69d9c to 00b69da7 has its CatchHandler @ 00b6a144 */
            if (((uVar23 & 1) != 0) &&
               (fVar43 = (float)QuadricSolverUtil::squaredError
                                          ((Matrix4x4 *)&local_160,(Vector3 *)&local_170),
               fVar43 < fVar42)) {
              uVar22 = local_170;
              fVar38 = local_168;
              fVar42 = fVar43;
            }
          }
          if (uVar24 + 1 != uVar31) {
            lVar25 = uVar24 * 0x10 + 0x20;
            uVar20 = uVar24 + 1;
            uVar23 = uVar24;
            do {
              uVar26 = uVar20;
              if ((*(ulong *)((long)local_1f8 + (uVar26 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar26 & 0x3f) & 1) == 0) {
                pfVar28 = (float *)(local_1e0 + uVar24 * 4);
                pfVar32 = (float *)(local_1e0 + uVar26 * 4);
                fVar53 = pfVar28[1];
                fVar43 = pfVar28[2];
                fVar52 = *pfVar32;
                fVar50 = pfVar32[1];
                fVar56 = *pfVar28;
                fVar51 = pfVar32[2];
                fVar55 = pfVar32[3];
                fVar57 = pfVar28[3];
                uVar37 = NEON_fmadd(fVar53,fVar51,fVar50 * -fVar43);
                fStack_1a8 = (float)NEON_fmadd(fVar43,fVar52,fVar51 * -fVar56);
                fStack_1a4 = fVar50 * fVar57 - fVar53 * fVar55;
                local_1a0 = NEON_fmadd(fVar56,fVar50,fVar52 * -fVar53);
                fStack_19c = fVar51 * fVar57 - fVar43 * fVar55;
                local_1b0 = (float *)CONCAT44(fVar52 * fVar57 - fVar56 * fVar55,uVar37);
                    /* try { // try from 00b69e80 to 00b69eab has its CatchHandler @ 00b6a188 */
                ppfVar21 = &local_1b0;
                uVar20 = QuadricSolverUtil::solve
                                   ((Vector3 *)&local_170,(Matrix4x4 *)&local_160,
                                    (DualVector3 *)ppfVar21,true);
                if ((uVar20 & 1) != 0) {
                  ppfVar21 = &local_1c8;
                  uVar20 = validateVertex((Vector3 *)&local_170,(vector *)&local_1e0,
                                          (vector *)ppfVar21,param_8);
                    /* try { // try from 00b69eb0 to 00b69ebb has its CatchHandler @ 00b6a16c */
                  if (((uVar20 & 1) != 0) &&
                     (fVar43 = (float)QuadricSolverUtil::squaredError
                                                ((Matrix4x4 *)&local_160,(Vector3 *)&local_170),
                     fVar43 < fVar42)) {
                    uVar22 = local_170;
                    fVar38 = local_168;
                    fVar42 = fVar43;
                  }
                }
                lVar34 = lVar25;
                for (uVar23 = uVar23 + 2; uVar23 != uVar31; uVar23 = uVar23 + 1) {
                  if ((*(ulong *)((long)local_1f8 + (uVar23 >> 3 & 0x1ffffffffffffff8)) >>
                       (uVar23 & 0x3f) & 1) == 0) {
                    ppfVar21 = (float **)(local_1e0 + uVar26 * 4);
                    /* try { // try from 00b69f1c to 00b69f3b has its CatchHandler @ 00b6a198 */
                    uVar20 = QuadricSolverUtil::solvePlanesIntersection
                                       ((Vector3 *)&local_170,(Plane *)(local_1e0 + uVar24 * 4),
                                        (Plane *)ppfVar21,(Plane *)((long)local_1e0 + lVar34));
                    if ((uVar20 & 1) != 0) {
                      ppfVar21 = &local_1c8;
                      uVar20 = validateVertex((Vector3 *)&local_170,(vector *)&local_1e0,
                                              (vector *)ppfVar21,param_8);
                    /* try { // try from 00b69f40 to 00b69f4b has its CatchHandler @ 00b6a18c */
                      if (((uVar20 & 1) != 0) &&
                         (fVar43 = (float)QuadricSolverUtil::squaredError
                                                    ((Matrix4x4 *)&local_160,(Vector3 *)&local_170),
                         fVar43 < fVar42)) {
                        uVar22 = local_170;
                        fVar38 = local_168;
                        fVar42 = fVar43;
                      }
                    }
                  }
                  lVar34 = lVar34 + 0x10;
                }
              }
              lVar25 = lVar25 + 0x10;
              uVar20 = uVar26 + 1;
              uVar23 = uVar26;
            } while (uVar26 + 1 != uVar31);
          }
        }
        uVar24 = uVar24 + 1;
        uVar23 = uVar22;
        fVar43 = fVar38;
      } while (uVar24 != uVar31);
      goto LAB_00b69fc4;
    }
  }
  else if (uVar4 == 1) {
                    /* try { // try from 00b69ad4 to 00b69aff has its CatchHandler @ 00b6a154 */
    ppfVar21 = (float **)&local_108;
    uVar23 = QuadricSolverUtil::solve
                       ((Vector3 *)&local_170,(Matrix4x4 *)&local_160,(Plane *)ppfVar21,true);
    if ((uVar23 & 1) != 0) {
      ppfVar21 = &local_1c8;
      uVar23 = validateVertex((Vector3 *)&local_170,(vector *)&local_1e0,(vector *)ppfVar21,param_8)
      ;
                    /* try { // try from 00b69b04 to 00b69b0f has its CatchHandler @ 00b6a134 */
      if (((uVar23 & 1) != 0) &&
         (fVar42 = (float)QuadricSolverUtil::squaredError
                                    ((Matrix4x4 *)&local_160,(Vector3 *)&local_170),
         uVar23 = local_170, fVar43 = local_168, fVar42 < INFINITY)) goto LAB_00b69fc4;
    }
    if ((long)local_1d8 - (long)local_1e0 != 0) {
      uVar31 = 0;
      uVar24 = (long)local_1d8 - (long)local_1e0 >> 4;
      fVar42 = INFINITY;
      do {
        if ((*(ulong *)((long)local_1f8 + (uVar31 >> 3 & 0x1ffffffffffffff8)) >> (uVar31 & 0x3f) & 1
            ) == 0) {
          pfVar28 = (float *)(local_1e0 + uVar31 * 4);
          fVar53 = *pfVar28;
          fVar43 = pfVar28[1];
          fVar57 = pfVar28[2];
          fVar56 = pfVar28[3];
          uVar37 = NEON_fmadd(local_108._4_4_,fVar57,fVar43 * -local_100[0]);
          fStack_1a8 = (float)NEON_fmadd(local_100[0],fVar53,fVar57 * -(float)local_108);
          fStack_1a4 = fVar43 * local_100[1] - local_108._4_4_ * fVar56;
          local_1a0 = NEON_fmadd((float)local_108,fVar43,fVar53 * -local_108._4_4_);
          fStack_19c = fVar57 * local_100[1] - local_100[0] * fVar56;
          local_1b0 = (float *)CONCAT44(fVar53 * local_100[1] - (float)local_108 * fVar56,uVar37);
                    /* try { // try from 00b69bdc to 00b69c07 has its CatchHandler @ 00b6a174 */
          ppfVar21 = &local_1b0;
          uVar23 = QuadricSolverUtil::solve
                             ((Vector3 *)&local_170,(Matrix4x4 *)&local_160,(DualVector3 *)ppfVar21,
                              true);
          if ((uVar23 & 1) != 0) {
            ppfVar21 = &local_1c8;
            uVar23 = validateVertex((Vector3 *)&local_170,(vector *)&local_1e0,(vector *)ppfVar21,
                                    param_8);
                    /* try { // try from 00b69c0c to 00b69c17 has its CatchHandler @ 00b6a148 */
            if (((uVar23 & 1) != 0) &&
               (fVar43 = (float)QuadricSolverUtil::squaredError
                                          ((Matrix4x4 *)&local_160,(Vector3 *)&local_170),
               fVar43 < fVar42)) {
              uVar22 = local_170;
              fVar38 = local_168;
              fVar42 = fVar43;
            }
          }
          uVar23 = uVar31 + 1;
          if (uVar23 != uVar24) {
            lVar25 = uVar31 * 0x10;
            do {
              lVar25 = lVar25 + 0x10;
              if ((*(ulong *)((long)local_1f8 + (uVar23 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar23 & 0x3f) & 1) == 0) {
                ppfVar21 = (float **)(local_1e0 + uVar31 * 4);
                    /* try { // try from 00b69c7c to 00b69c9f has its CatchHandler @ 00b6a190 */
                uVar20 = QuadricSolverUtil::solvePlanesIntersection
                                   ((Vector3 *)&local_170,(Plane *)&local_108,(Plane *)ppfVar21,
                                    (Plane *)((long)local_1e0 + lVar25));
                if ((uVar20 & 1) != 0) {
                  ppfVar21 = &local_1c8;
                  uVar20 = validateVertex((Vector3 *)&local_170,(vector *)&local_1e0,
                                          (vector *)ppfVar21,param_8);
                    /* try { // try from 00b69ca4 to 00b69caf has its CatchHandler @ 00b6a178 */
                  if (((uVar20 & 1) != 0) &&
                     (fVar43 = (float)QuadricSolverUtil::squaredError
                                                ((Matrix4x4 *)&local_160,(Vector3 *)&local_170),
                     fVar43 < fVar42)) {
                    uVar22 = local_170;
                    fVar38 = local_168;
                    fVar42 = fVar43;
                  }
                }
              }
              uVar23 = uVar23 + 1;
            } while (uVar24 != uVar23);
          }
        }
        uVar31 = uVar31 + 1;
        uVar23 = uVar22;
        fVar43 = fVar38;
      } while (uVar31 != uVar24);
      goto LAB_00b69fc4;
    }
  }
  else if (uVar4 == 2) {
    uVar37 = NEON_fmadd(local_108._4_4_,fStack_f0,uStack_f8._4_4_ * -local_100[0]);
    fStack_1a8 = (float)NEON_fmadd(local_100[0],(float)uStack_f8,fStack_f0 * -(float)local_108);
    fStack_1a4 = uStack_f8._4_4_ * local_100[1] - local_108._4_4_ * local_ec;
    local_1a0 = NEON_fmadd((float)local_108,uStack_f8._4_4_,(float)uStack_f8 * -local_108._4_4_);
    fStack_19c = fStack_f0 * local_100[1] - local_100[0] * local_ec;
    local_1b0 = (float *)CONCAT44((float)uStack_f8 * local_100[1] - (float)local_108 * local_ec,
                                  uVar37);
                    /* try { // try from 00b699d8 to 00b69a03 has its CatchHandler @ 00b6a140 */
    ppfVar21 = &local_1b0;
    uVar23 = QuadricSolverUtil::solve
                       ((Vector3 *)&local_170,(Matrix4x4 *)&local_160,(DualVector3 *)ppfVar21,true);
    if ((uVar23 & 1) != 0) {
      ppfVar21 = &local_1c8;
      uVar23 = validateVertex((Vector3 *)&local_170,(vector *)&local_1e0,(vector *)ppfVar21,param_8)
      ;
                    /* try { // try from 00b69a08 to 00b69a13 has its CatchHandler @ 00b6a12c */
      if (((uVar23 & 1) != 0) &&
         (fVar42 = (float)QuadricSolverUtil::squaredError
                                    ((Matrix4x4 *)&local_160,(Vector3 *)&local_170),
         uVar23 = local_170, fVar43 = local_168, fVar42 < INFINITY)) goto LAB_00b69fc4;
    }
    lVar25 = (long)local_1d8 - (long)local_1e0;
    if (lVar25 == 0) {
      fVar42 = INFINITY;
      uVar23 = uVar22;
      fVar43 = fVar38;
    }
    else {
      lVar34 = 0;
      uVar31 = 0;
      fVar42 = INFINITY;
      do {
                    /* try { // try from 00b69a84 to 00b69aab has its CatchHandler @ 00b6a17c */
        if (((*(ulong *)((long)local_1f8 + (uVar31 >> 3 & 0x1ffffffffffffff8)) >> (uVar31 & 0x3f) &
             1) == 0) &&
           (ppfVar21 = (float **)&uStack_f8,
           uVar23 = QuadricSolverUtil::solvePlanesIntersection
                              ((Vector3 *)&local_170,(Plane *)&local_108,(Plane *)&uStack_f8,
                               (Plane *)((long)local_1e0 + lVar34)), (uVar23 & 1) != 0)) {
          ppfVar21 = &local_1c8;
          uVar23 = validateVertex((Vector3 *)&local_170,(vector *)&local_1e0,(vector *)ppfVar21,
                                  param_8);
                    /* try { // try from 00b69ab0 to 00b69abb has its CatchHandler @ 00b6a14c */
          if (((uVar23 & 1) != 0) &&
             (fVar43 = (float)QuadricSolverUtil::squaredError
                                        ((Matrix4x4 *)&local_160,(Vector3 *)&local_170),
             fVar43 < fVar42)) {
            uVar22 = local_170;
            fVar38 = local_168;
            fVar42 = fVar43;
          }
        }
        uVar31 = uVar31 + 1;
        lVar34 = lVar34 + 0x10;
        uVar23 = uVar22;
        fVar43 = fVar38;
      } while (lVar25 >> 4 != uVar31);
    }
LAB_00b69fc4:
    if (fVar42 <= 1.677722e+07) {
                    /* try { // try from 00b6a060 to 00b6a067 has its CatchHandler @ 00b6a13c */
      QuadricSolverUtil::solveMinimalQuadric
                ((QuadricSolverUtil *)(*(long *)(this + 0x2f20) + uVar29 * 0x40),
                 (Matrix4x4 *)(*(long *)(this + 0x2f20) + uVar30 * 0x40),(Matrix4x4 *)ppfVar21);
      fVar42 = (float)(uVar23 >> 0x20);
      *(ulong *)(param_4 + 8) = CONCAT44(fStack_1a4,fStack_1a8);
      *(float **)param_4 = local_1b0;
      *(undefined8 *)(param_4 + 0x18) = uStack_198;
      *(ulong *)(param_4 + 0x10) = CONCAT44(fStack_19c,local_1a0);
      fStack_1a8 = fVar43 + local_110;
      *(undefined8 *)(param_4 + 0x28) = uStack_188;
      *(undefined8 *)(param_4 + 0x20) = local_190;
      *(undefined8 *)(param_4 + 0x38) = uStack_178;
      *(undefined8 *)(param_4 + 0x30) = uStack_180;
                    /* try { // try from 00b6a094 to 00b6a09b has its CatchHandler @ 00b6a138 */
      local_1b0 = (float *)CONCAT44(fVar42 + fStack_114,(float)uVar23 + local_118);
      fVar38 = (float)QuadricSolverUtil::squaredError(param_4,(Vector3 *)&local_1b0);
      *param_6 = fVar38;
      if (fVar38 <= param_7) {
        *(ulong *)param_2 = CONCAT44(fVar42 + fStack_114,(float)uVar23 + local_118);
        *(float *)(param_2 + 8) = fVar43 + local_110;
        uVar37 = 1;
        *param_5 = *(byte *)(*(long *)(this + 0x2f38) + uVar30) |
                   *(byte *)(*(long *)(this + 0x2f38) + uVar29);
      }
      else {
        uVar37 = 0;
      }
      goto LAB_00b69fe4;
    }
  }
  uVar37 = 0;
  *param_6 = INFINITY;
LAB_00b69fe4:
  if (local_1f8 != (void *)0x0) {
    operator_delete(local_1f8);
  }
  if (local_1e0 != (undefined4 *)0x0) {
    local_1d8 = local_1e0;
    operator_delete(local_1e0);
  }
  if (local_1c8 != (float *)0x0) {
    local_1c0 = local_1c8;
    operator_delete(local_1c8);
  }
  if (*(long *)(lVar6 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar37;
}


