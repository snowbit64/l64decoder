// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processRoads
// Entry Point: 00718650
// Size: 2812 bytes
// Signature: undefined processRoads(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TrafficSystem::processRoads() */

void TrafficSystem::processRoads(void)

{
  OvertakeData **this;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  long in_x0;
  void *__s;
  void *__s_00;
  long *plVar9;
  uint *__s_01;
  OvertakeData *pOVar10;
  ulong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  float fVar16;
  float *pfVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *__src;
  BoundingBox *pBVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  uint uVar29;
  uint *puVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float unaff_s8;
  float fVar38;
  float unaff_s10;
  float fVar39;
  float fVar40;
  float unaff_s14;
  float unaff_s15;
  float fVar41;
  float fVar42;
  float fVar43;
  float local_164;
  undefined4 local_160;
  undefined4 local_158;
  OvertakeData *local_148;
  OvertakeData *local_140;
  undefined8 local_138;
  uint *local_130;
  uint *local_128;
  uint *local_120;
  void *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  float local_f0;
  undefined4 uStack_ec;
  uint local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  puVar1 = (uint *)(in_x0 + 0x4c90);
  local_110 = (undefined8 *)0x0;
  local_108 = (undefined8 *)0x0;
  local_100 = (undefined8 *)0x0;
  if (*puVar1 == 0) {
    __s_00 = (void *)0x0;
    __s = (void *)0x0;
    puVar23 = (undefined8 *)0x0;
    puVar19 = (undefined8 *)0x0;
  }
  else {
    uVar22 = (ulong)*puVar1 << 2;
                    /* try { // try from 007186b0 to 007186b7 has its CatchHandler @ 0071915c */
    __s = operator_new(uVar22);
    memset(__s,0,uVar22);
                    /* try { // try from 007186c8 to 007186cf has its CatchHandler @ 00719154 */
    __s_00 = operator_new(uVar22);
    memset(__s_00,0,uVar22);
    puVar18 = (undefined8 *)0x0;
    puVar23 = (undefined8 *)0x0;
    puVar19 = (undefined8 *)0x0;
    uVar22 = 0;
    plVar28 = (long *)(in_x0 + 0x4ca0);
    unaff_s8 = 5.0;
    do {
                    /* try { // try from 00718738 to 0071873b has its CatchHandler @ 00719194 */
      fVar31 = (float)Spline::getLength();
      *(int *)((long)__s + uVar22 * 4) = (int)((ulong)((long)puVar19 - (long)puVar23) >> 5);
      *(int *)((long)__s_00 + uVar22 * 4) = (int)(fVar31 / 5.0);
      if ((int)(fVar31 / 5.0) != 0) {
        unaff_s10 = 5.0 / fVar31;
        uVar29 = 0;
        puVar20 = puVar19;
        __src = puVar23;
        do {
          uStack_b4 = (undefined4)uVar22;
          fStack_b8 = unaff_s10 * (float)(ulong)uVar29;
          plVar9 = *(long **)(*plVar28 + uVar22 * 0x88 + 8);
                    /* try { // try from 007187bc to 00718917 has its CatchHandler @ 00719210 */
          (**(code **)(*plVar9 + 0x10))(plVar9,&local_d0,&fStack_c4);
          uVar34 = NEON_fmadd(fStack_c4,fStack_c4,fStack_c0 * fStack_c0);
          fVar36 = (float)NEON_fmadd(fStack_bc,fStack_bc,uVar34);
          fVar31 = 1.0;
          if (1e-06 < fVar36) {
            fVar31 = 1.0 / SQRT(fVar36);
          }
          fStack_c4 = fStack_c4 * fVar31;
          fStack_c0 = fStack_c0 * fVar31;
          fStack_bc = fStack_bc * fVar31;
          lVar26 = *(long *)(*plVar28 + uVar22 * 0x88);
          RawTransformGroup::updateWorldTransformation();
          uVar34 = NEON_fmadd((float)local_d0,*(undefined4 *)(lVar26 + 0xc0),
                              local_d0._4_4_ * *(float *)(lVar26 + 0xd0));
          fVar31 = (float)NEON_fmadd(fStack_c8,*(undefined4 *)(lVar26 + 0xe0),uVar34);
          local_d0 = (BoundingBox *)
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar26 + 200) >> 0x20) * local_d0._4_4_
                              + (float)((ulong)*(undefined8 *)(lVar26 + 0xb8) >> 0x20) *
                                (float)local_d0 +
                              (float)((ulong)*(undefined8 *)(lVar26 + 0xd8) >> 0x20) * fStack_c8,
                              (float)*(undefined8 *)(lVar26 + 0xe8) +
                              (float)*(undefined8 *)(lVar26 + 200) * local_d0._4_4_ +
                              (float)*(undefined8 *)(lVar26 + 0xb8) * (float)local_d0 +
                              (float)*(undefined8 *)(lVar26 + 0xd8) * fStack_c8);
          fStack_c8 = *(float *)(lVar26 + 0xf0) + fVar31;
          lVar26 = *(long *)(*plVar28 + uVar22 * 0x88);
          RawTransformGroup::updateWorldTransformation();
          fVar31 = (float)((ulong)*(undefined8 *)(lVar26 + 0xb8) >> 0x20) * fStack_c4;
          uVar34 = NEON_fmadd(fStack_c4,*(undefined4 *)(lVar26 + 0xc0),
                              fStack_c0 * *(float *)(lVar26 + 0xd0));
          fStack_c4 = (float)*(undefined8 *)(lVar26 + 200) * fStack_c0 +
                      (float)*(undefined8 *)(lVar26 + 0xb8) * fStack_c4 +
                      (float)*(undefined8 *)(lVar26 + 0xd8) * fStack_bc;
          fStack_c0 = (float)((ulong)*(undefined8 *)(lVar26 + 200) >> 0x20) * fStack_c0 + fVar31 +
                      (float)((ulong)*(undefined8 *)(lVar26 + 0xd8) >> 0x20) * fStack_bc;
          fStack_bc = (float)NEON_fmadd(fStack_bc,*(undefined4 *)(lVar26 + 0xe0),uVar34);
          if (puVar20 == puVar18) {
            uVar27 = (long)puVar18 - (long)__src;
            uVar11 = ((long)uVar27 >> 5) + 1;
            if (uVar11 >> 0x3b != 0) {
                    /* try { // try from 0071912c to 0071913f has its CatchHandler @ 0071920c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar11 <= (ulong)((long)uVar27 >> 4)) {
              uVar11 = (long)uVar27 >> 4;
            }
            if (0x7fffffffffffffdf < uVar27) {
              uVar11 = 0x7ffffffffffffff;
            }
            if (uVar11 == 0) {
              puVar23 = (undefined8 *)0x0;
            }
            else {
              if (uVar11 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              puVar23 = (undefined8 *)operator_new(uVar11 << 5);
            }
            puVar19 = puVar23 + ((long)uVar27 >> 5) * 4;
            puVar19[1] = CONCAT44(fStack_c4,fStack_c8);
            *puVar19 = local_d0;
            puVar19[3] = CONCAT44(uStack_b4,fStack_b8);
            puVar19[2] = CONCAT44(fStack_bc,fStack_c0);
            if (0 < (long)uVar27) {
              memcpy(puVar23,__src,uVar27);
            }
            puVar19 = puVar19 + 4;
            puVar18 = puVar23 + uVar11 * 4;
            local_110 = puVar23;
            local_108 = puVar19;
            local_100 = puVar18;
            if (__src != (undefined8 *)0x0) {
              operator_delete(__src);
            }
          }
          else {
            puVar19 = puVar20 + 4;
            puVar20[1] = CONCAT44(fStack_c4,fStack_c8);
            *puVar20 = local_d0;
            puVar20[3] = CONCAT44(uStack_b4,fStack_b8);
            puVar20[2] = CONCAT44(fStack_bc,fStack_c0);
            puVar23 = __src;
            local_108 = puVar19;
          }
          uVar29 = uVar29 + 1;
          puVar20 = puVar19;
          __src = puVar23;
        } while (uVar29 < *(uint *)((long)__s_00 + uVar22 * 4));
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < *puVar1);
  }
  plVar28 = (long *)(in_x0 + 0x4ca0);
  local_118 = (void *)0x0;
  local_d0 = (BoundingBox *)0x0;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  fStack_c0 = 0.0;
  fStack_bc = 0.0;
                    /* try { // try from 007189ac to 007189b3 has its CatchHandler @ 0071914c */
  if (((long)puVar19 - (long)puVar23 == 0) ||
     (std::__ndk1::vector<BoundingBox,std::__ndk1::allocator<BoundingBox>>::__append
                ((vector<BoundingBox,std::__ndk1::allocator<BoundingBox>> *)&local_d0,
                 (long)puVar19 - (long)puVar23 >> 5), pBVar24 = local_d0,
     (BoundingBox *)CONCAT44(fStack_c4,fStack_c8) == local_d0)) {
    __s_01 = (uint *)0x0;
    local_130 = (uint *)0x0;
    local_128 = (uint *)0x0;
    local_120 = (uint *)0x0;
    uVar22 = 0;
    pBVar24 = local_d0;
  }
  else {
    uVar22 = 0;
    do {
      fVar31 = *(float *)(puVar23 + uVar22 * 4);
      fVar36 = *(float *)(puVar23 + uVar22 * 4 + 1);
      *(ulong *)((long)(local_d0 + uVar22 * 0x10) + 8) = CONCAT44(fVar36 + 0.1,fVar31 + 0.1);
      *(ulong *)(local_d0 + uVar22 * 0x10) = CONCAT44(fVar36 + -0.1,fVar31 + -0.1);
      uVar22 = (ulong)((int)uVar22 + 1);
      uVar11 = CONCAT44(fStack_c4,fStack_c8) - (long)local_d0;
      uVar27 = (long)uVar11 >> 4;
      puVar23 = local_110;
    } while (uVar22 < uVar27);
    local_130 = (uint *)0x0;
    local_128 = (uint *)0x0;
    local_120 = (uint *)0x0;
    if (uVar11 == 0) {
      __s_01 = (uint *)0x0;
      uVar22 = 0;
    }
    else {
      if ((long)uVar11 < 0) {
                    /* try { // try from 00719140 to 00719147 has its CatchHandler @ 00719164 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00718a1c to 00718a1f has its CatchHandler @ 00719164 */
      __s_01 = (uint *)operator_new(uVar11 >> 2);
      puVar30 = __s_01 + uVar27;
      local_130 = __s_01;
      local_120 = puVar30;
      memset(__s_01,0,uVar27 * 4);
      uVar22 = (long)puVar30 - (long)__s_01;
      local_128 = puVar30;
      if (uVar22 != 0) {
        uVar11 = 0;
        do {
          __s_01[uVar11] = (uint)uVar11;
          uVar11 = (ulong)((uint)uVar11 + 1);
        } while (uVar11 < (ulong)((long)uVar22 >> 2));
      }
    }
  }
                    /* try { // try from 00718aa4 to 00718ab7 has its CatchHandler @ 00719180 */
  RectangleTree::buildRectangleNodes((RectangleTree *)&local_118,(uint)(uVar22 >> 2),__s_01,pBVar24)
  ;
  if (*puVar1 != 0) {
    uVar22 = 0;
    bVar7 = false;
    do {
      puVar19 = local_110;
      uVar29 = *(uint *)((long)__s_00 + uVar22 * 4);
      local_148 = (OvertakeData *)0x0;
      local_140 = (OvertakeData *)0x0;
      local_138 = 0;
      if (uVar29 != 0) {
        uVar25 = 0;
        bVar8 = false;
        fVar31 = unaff_s10;
        fVar36 = unaff_s8;
        fVar32 = unaff_s15;
        fVar35 = unaff_s14;
        do {
          puVar23 = puVar19 + (ulong)(*(int *)((long)__s + uVar22 * 4) + uVar25) * 4;
          unaff_s8 = *(float *)((long)puVar23 + 0xc);
          unaff_s15 = *(float *)(puVar23 + 2);
          unaff_s14 = *(float *)((long)puVar23 + 0x14);
          unaff_s10 = *(float *)(puVar23 + 3);
          if (local_118 == (void *)0x0) {
LAB_00718b18:
            bVar8 = false;
          }
          else {
            uVar4 = *(uint *)((long)local_118 + 0x10) >> 1;
            if ((*(uint *)((long)local_118 + 0x10) & 1) != 0) {
              uVar4 = 1;
            }
            if (uVar4 == 0) goto LAB_00718b18;
            fVar38 = *(float *)((long)puVar23 + 4);
            fVar40 = *(float *)(puVar23 + 1);
            fVar39 = *(float *)puVar23;
            uVar15 = 0;
            uVar13 = 0xffffffff;
            fVar16 = 3.402823e+38;
            do {
              while( true ) {
                pfVar17 = (float *)((long)local_118 + (ulong)uVar15 * 0x14);
                uVar11 = (ulong)uVar15;
                fVar41 = *pfVar17;
                fVar43 = pfVar17[2];
                fVar42 = fVar39 + -6.0;
                if (fVar39 + -6.0 < fVar41) {
                  fVar42 = fVar41;
                }
                fVar41 = fVar39 + 6.0;
                if (fVar43 < fVar39 + 6.0) {
                  fVar41 = fVar43;
                }
                if (fVar42 <= fVar41) break;
LAB_00718b9c:
                uVar2 = *(uint *)((long)local_118 + uVar11 * 0x14 + 0x10);
                uVar3 = uVar2 >> 1;
                if ((uVar2 & 1) != 0) {
                  uVar3 = 1;
                }
                uVar15 = uVar3 + uVar15;
                if (uVar15 == uVar4) goto LAB_00718ca0;
              }
              fVar41 = *(float *)((long)local_118 + uVar11 * 0x14 + 4);
              fVar43 = *(float *)((long)local_118 + uVar11 * 0x14 + 0xc);
              fVar42 = fVar40 + -6.0;
              if (fVar40 + -6.0 < fVar41) {
                fVar42 = fVar41;
              }
              fVar41 = fVar40 + 6.0;
              if (fVar43 < fVar40 + 6.0) {
                fVar41 = fVar43;
              }
              if (fVar41 < fVar42) goto LAB_00718b9c;
              uVar3 = *(uint *)((long)local_118 + uVar11 * 0x14 + 0x10);
              if ((uVar3 & 1) != 0) {
                uVar3 = uVar3 >> 1;
                puVar23 = puVar19 + (ulong)uVar3 * 4;
                if (uVar22 != (uint)*(float *)((long)puVar23 + 0x1c)) {
                  uVar34 = NEON_fmadd(*(float *)((long)puVar23 + 0xc),unaff_s8,
                                      *(float *)(puVar23 + 2) * unaff_s15);
                  fVar41 = *(float *)((long)puVar23 + 4) - fVar38;
                  fVar42 = (float)NEON_fmadd(*(float *)((long)puVar23 + 0x14),unaff_s14,uVar34);
                  uVar34 = NEON_fmadd(fVar41,fVar41,
                                      (*(float *)puVar23 - fVar39) * (*(float *)puVar23 - fVar39));
                  fVar41 = (float)NEON_fmadd(*(float *)(puVar23 + 1) - fVar40,
                                             *(float *)(puVar23 + 1) - fVar40,uVar34);
                  if (((uVar13 == 0xffffffff) || (!bVar7 && 0.0 < fVar42)) || (fVar41 < fVar16)) {
                    fVar16 = fVar41;
                    uVar13 = uVar3;
                    bVar7 = 0.0 < fVar42;
                  }
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar4);
LAB_00718ca0:
            if (uVar13 == 0xffffffff) goto LAB_00718b18;
            if (bVar8) {
              uVar11 = (ulong)uVar13;
              uVar34 = NEON_fmadd(fVar36,unaff_s8,fVar32 * unaff_s15);
              fVar36 = (float)NEON_fmadd(fVar35,unaff_s14,uVar34);
              if (0.99 < fVar36) {
                puVar21 = (undefined4 *)((long)puVar19 + uVar11 * 0x20 + 0xc);
                uVar34 = NEON_fmadd(local_160,*puVar21,
                                    local_164 * *(float *)(puVar19 + uVar11 * 4 + 2));
                puVar12 = (undefined4 *)((long)puVar19 + uVar11 * 0x20 + 0x14);
                fVar36 = (float)NEON_fmadd(local_158,*puVar12,uVar34);
                if (0.99 < fVar36) {
                  puVar30 = (uint *)((long)puVar19 + uVar11 * 0x20 + 0x1c);
                  lVar26 = *(long *)(*plVar28 + (ulong)*puVar30 * 0x88);
                    /* try { // try from 00718d2c to 00718d33 has its CatchHandler @ 007191a4 */
                  RawTransformGroup::updateWorldTransformation();
                  fVar36 = fVar38 - *(float *)(lVar26 + 0xec);
                  fVar32 = fVar39 - *(float *)(lVar26 + 0xe8);
                  uVar33 = NEON_fmadd(fVar32,*(undefined4 *)(lVar26 + 0xb8),
                                      fVar36 * *(float *)(lVar26 + 0xbc));
                  fVar35 = fVar40 - *(float *)(lVar26 + 0xf0);
                  uVar37 = NEON_fmadd(fVar32,*(undefined4 *)(lVar26 + 200),
                                      fVar36 * *(float *)(lVar26 + 0xcc));
                  uVar34 = NEON_fmadd(fVar32,*(undefined4 *)(lVar26 + 0xd8),
                                      fVar36 * *(float *)(lVar26 + 0xdc));
                  local_e0._0_4_ = (float)NEON_fmadd(fVar35,*(undefined4 *)(lVar26 + 0xc0),uVar33);
                  local_e0._4_4_ = (float)NEON_fmadd(fVar35,*(undefined4 *)(lVar26 + 0xd0),uVar37);
                  local_f0 = (float)NEON_fmadd(fVar35,*(undefined4 *)(lVar26 + 0xe0),uVar34);
                  plVar9 = *(long **)(*plVar28 + (ulong)*puVar30 * 0x88 + 8);
                    /* try { // try from 00718dc0 to 00718dd7 has its CatchHandler @ 00719198 */
                  local_d8 = local_f0;
                  local_f8._0_4_ = (float)local_e0;
                  local_f8._4_4_ = local_e0._4_4_;
                  (**(code **)(*plVar9 + 0x20))(0x3a83126f,plVar9,&local_f8,&local_e0);
                  lVar26 = *(long *)(*plVar28 + (ulong)*puVar30 * 0x88);
                    /* try { // try from 00718de8 to 00718def has its CatchHandler @ 007191a4 */
                  RawTransformGroup::updateWorldTransformation();
                  local_f8 = CONCAT44(unaff_s10,fVar31);
                  uVar34 = NEON_fmadd((float)local_e0,*(undefined4 *)(lVar26 + 0xc0),
                                      local_e0._4_4_ * *(float *)(lVar26 + 0xd0));
                  fVar31 = (float)*(undefined8 *)(lVar26 + 0xe8) +
                           (float)*(undefined8 *)(lVar26 + 200) * local_e0._4_4_ +
                           (float)*(undefined8 *)(lVar26 + 0xb8) * (float)local_e0 +
                           (float)*(undefined8 *)(lVar26 + 0xd8) * local_d8;
                  fVar36 = (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar26 + 200) >> 0x20) * local_e0._4_4_ +
                           (float)((ulong)*(undefined8 *)(lVar26 + 0xb8) >> 0x20) * (float)local_e0
                           + (float)((ulong)*(undefined8 *)(lVar26 + 0xd8) >> 0x20) * local_d8;
                  local_e0 = CONCAT44(fVar36,fVar31);
                  local_d8 = (float)NEON_fmadd(local_d8,*(undefined4 *)(lVar26 + 0xe0),uVar34);
                  local_d8 = *(float *)(lVar26 + 0xf0) + local_d8;
                  fVar38 = fVar38 - fVar36;
                  uVar34 = NEON_fmadd(fVar38,fVar38,(fVar39 - fVar31) * (fVar39 - fVar31));
                  local_f0 = (float)NEON_fmadd(fVar40 - local_d8,fVar40 - local_d8,uVar34);
                  local_f0 = SQRT(local_f0);
                  uVar34 = NEON_fmadd(unaff_s8,*puVar21,
                                      unaff_s15 * *(float *)(puVar19 + uVar11 * 4 + 2));
                  fVar36 = (float)NEON_fmadd(unaff_s14,*puVar12,uVar34);
                  uStack_ec = 0x3f800000;
                  if (fVar36 <= 0.0) {
                    uStack_ec = 0xbf800000;
                  }
                  fVar31 = (float)NEON_fmadd(unaff_s14,fVar31 - fVar39,
                                             (local_d8 - fVar40) * -unaff_s8);
                  local_e8 = *puVar30;
                  if (fVar31 < 0.0) {
                    local_f0 = -local_f0;
                  }
                    /* try { // try from 00718ec4 to 00718ed3 has its CatchHandler @ 0071919c */
                  FUN_00719aa0(&local_148,&local_f8);
                  uVar29 = *(uint *)((long)__s_00 + uVar22 * 4);
                }
              }
            }
            local_160 = *(undefined4 *)((long)puVar19 + (ulong)uVar13 * 0x20 + 0xc);
            local_164 = *(float *)(puVar19 + (ulong)uVar13 * 4 + 2);
            local_158 = *(undefined4 *)((long)puVar19 + (ulong)uVar13 * 0x20 + 0x14);
            bVar8 = true;
          }
          uVar25 = uVar25 + 1;
          fVar31 = unaff_s10;
          fVar36 = unaff_s8;
          fVar32 = unaff_s15;
          fVar35 = unaff_s14;
        } while (uVar25 < uVar29);
      }
      uVar11 = ((long)local_140 - (long)local_148 >> 2) * -0x3333333333333333;
      if (1 < (int)uVar11) {
        uVar11 = uVar11 & 0xffffffff;
        pOVar10 = local_140;
        while( true ) {
          uVar27 = (ulong)((int)uVar11 - 1);
          uVar14 = (ulong)((int)uVar11 - 2);
          pfVar17 = (float *)(local_148 + uVar27 * 0x14);
          if ((*pfVar17 - *(float *)(local_148 + uVar14 * 0x14 + 4) < 1e-05) &&
             (*(int *)(local_148 + uVar27 * 0x14 + 0x10) ==
              *(int *)(local_148 + uVar14 * 0x14 + 0x10))) {
            sVar5 = (long)pOVar10 - (long)(pfVar17 + 5);
            *(float *)(local_148 + uVar14 * 0x14 + 4) = *(float *)(local_148 + uVar27 * 0x14 + 4);
            if (sVar5 != 0) {
              memmove(pfVar17,pfVar17 + 5,sVar5);
            }
            pOVar10 = (OvertakeData *)((long)pfVar17 + sVar5);
            local_140 = pOVar10;
          }
          if (uVar11 < 3) break;
          uVar11 = uVar11 - 1;
        }
      }
                    /* try { // try from 00718fd8 to 00718fdb has its CatchHandler @ 007191a0 */
      fVar31 = (float)Spline::getLength();
      uVar11 = ((long)local_140 - (long)local_148 >> 2) * -0x3333333333333333;
      pOVar10 = local_140;
      if (0 < (int)uVar11) {
        uVar11 = uVar11 & 0xffffffff;
        while( true ) {
          pfVar17 = (float *)(local_148 + (ulong)((int)uVar11 - 1) * 0x14);
          if (pfVar17[1] - *pfVar17 < 15.0 / fVar31) {
            sVar5 = (long)pOVar10 - (long)(pfVar17 + 5);
            if (sVar5 != 0) {
              memmove(pfVar17,pfVar17 + 5,sVar5);
            }
            pOVar10 = (OvertakeData *)((long)pfVar17 + sVar5);
            local_140 = pOVar10;
          }
          if (uVar11 < 2) break;
          uVar11 = uVar11 - 1;
        }
      }
      this = (OvertakeData **)(*plVar28 + uVar22 * 0x88 + 0x70);
      if (this != &local_148) {
                    /* try { // try from 0071907c to 0071907f has its CatchHandler @ 007191a0 */
        std::__ndk1::
        vector<TrafficVehicle::OvertakeData,std::__ndk1::allocator<TrafficVehicle::OvertakeData>>::
        assign<TrafficVehicle::OvertakeData*>
                  ((vector<TrafficVehicle::OvertakeData,std::__ndk1::allocator<TrafficVehicle::OvertakeData>>
                    *)this,local_148,pOVar10);
      }
      if (local_148 != (OvertakeData *)0x0) {
        local_140 = local_148;
        operator_delete(local_148);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < *puVar1);
  }
  if (__s_01 != (uint *)0x0) {
    local_128 = __s_01;
    operator_delete(__s_01);
  }
  if (local_d0 != (BoundingBox *)0x0) {
    fStack_c8 = SUB84(local_d0,0);
    fStack_c4 = (float)((ulong)local_d0 >> 0x20);
    operator_delete(local_d0);
  }
  if (local_118 != (void *)0x0) {
    operator_delete__(local_118);
  }
  if (__s_00 != (void *)0x0) {
    operator_delete(__s_00);
  }
  if (__s != (void *)0x0) {
    operator_delete(__s);
  }
  if (local_110 != (undefined8 *)0x0) {
    local_108 = local_110;
    operator_delete(local_110);
  }
  if (*(long *)(lVar6 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


