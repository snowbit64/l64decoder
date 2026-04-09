// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: linkTrafficSystem
// Entry Point: 00895544
// Size: 2732 bytes
// Signature: undefined __thiscall linkTrafficSystem(PedestrianSystem * this, TrafficSystem * param_1)


/* PedestrianSystem::linkTrafficSystem(TrafficSystem*) */

void __thiscall PedestrianSystem::linkTrafficSystem(PedestrianSystem *this,TrafficSystem *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  long **pplVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  void **ppvVar8;
  void *pvVar9;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  void **ppvVar14;
  float *pfVar15;
  ulong uVar16;
  float *pfVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  float *pfVar21;
  long lVar22;
  ulong uVar23;
  void *pvVar24;
  void **ppvVar25;
  void *pvVar26;
  ulong uVar27;
  uint uVar28;
  size_t sVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 local_160;
  float fStack_15c;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  float local_148;
  void **local_140;
  void **local_138;
  void **local_130;
  void **local_128;
  void **local_120;
  void **local_118;
  void *local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined auStack_e0 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  float local_c0;
  float local_bc;
  float local_b8 [2];
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  lVar22 = *(long *)(this + 0x25960);
  puVar2 = (uint *)(this + 0x258f8);
  if (lVar22 != 0) {
    lVar12 = *(long *)(lVar22 + 0x40);
    lVar4 = *(long *)(lVar22 + 0x48) - lVar12;
    if (lVar4 != 0) {
      uVar19 = 0;
      do {
        if (*(PedestrianSystem **)(lVar12 + uVar19 * 8) == this + 0x30) {
          pvVar26 = (void *)(lVar12 + uVar19 * 8);
          sVar29 = *(long *)(lVar22 + 0x48) - (long)(void *)((long)pvVar26 + 8);
          if (sVar29 != 0) {
            memmove(pvVar26,(void *)((long)pvVar26 + 8),sVar29);
          }
          *(size_t *)(lVar22 + 0x48) = (long)pvVar26 + sVar29;
          break;
        }
        uVar19 = (ulong)((int)uVar19 + 1);
      } while (uVar19 < (ulong)(lVar4 >> 3));
    }
  }
  uVar18 = *puVar2;
  *(TrafficSystem **)(this + 0x25960) = param_1;
  if (uVar18 != 0) {
    uVar19 = 0;
    do {
      lVar22 = *(long *)(this + uVar19 * 0x80 + 0x90);
      lVar12 = *(long *)(this + uVar19 * 0x80 + 0x88);
      if (lVar22 != lVar12) {
        uVar30 = 0;
        do {
          pvVar26 = (void *)(lVar12 + uVar30 * 0x1c);
          if (*(int *)((long)pvVar26 + 0x10) != -1) {
            sVar29 = lVar22 - (long)(void *)((long)pvVar26 + 0x1c);
            if (sVar29 != 0) {
              memmove(pvVar26,(void *)((long)pvVar26 + 0x1c),sVar29);
              lVar12 = *(long *)(this + uVar19 * 0x80 + 0x88);
            }
            lVar22 = (long)pvVar26 + sVar29;
            *(long *)(this + uVar19 * 0x80 + 0x90) = lVar22;
          }
          uVar30 = (ulong)((int)uVar30 + 1);
          uVar20 = (lVar22 - lVar12 >> 2) * 0x6db6db6db6db6db7;
        } while (uVar30 <= uVar20 && uVar20 - uVar30 != 0);
        uVar18 = *puVar2;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar18);
    param_1 = *(TrafficSystem **)(this + 0x25960);
  }
  if (param_1 != (TrafficSystem *)0x0) {
    DeleteNotifier::addDeleteListener
              ((DeleteNotifier *)(param_1 + 0x38),(IDeleteListener *)(this + 0x30));
    local_f8 = (void *)0x0;
    local_f0 = (void *)0x0;
    local_e8 = 0;
    local_110 = (void *)0x0;
    local_108 = (void *)0x0;
    local_100 = 0;
                    /* try { // try from 008956d4 to 008956df has its CatchHandler @ 00896020 */
    TrafficSystem::getSplineData
              (*(TrafficSystem **)(this + 0x25960),(vector *)&local_f8,(vector *)&local_110);
    local_128 = (void **)0x0;
    local_120 = (void **)0x0;
    local_118 = (void **)0x0;
    uVar27 = (long)local_f0 - (long)local_f8;
    uVar18 = *puVar2;
    uVar30 = (ulong)uVar18;
    uVar20 = (long)uVar27 >> 3;
    uVar19 = uVar20 & 0xffffffff;
    if (uVar19 != 0) {
                    /* try { // try from 00895710 to 00895717 has its CatchHandler @ 00896008 */
      ppvVar8 = (void **)operator_new(uVar19 * 0x18);
      uVar13 = (uVar19 * 0x18 - 0x18) / 0x18;
      local_118 = ppvVar8 + uVar19 * 3;
      local_128 = ppvVar8;
      memset(ppvVar8,0,uVar13 * 0x18 + 0x18);
      local_120 = ppvVar8 + uVar13 * 3 + 3;
    }
    local_140 = (void **)0x0;
    local_138 = (void **)0x0;
    local_130 = (void **)0x0;
    if (uVar18 != 0) {
                    /* try { // try from 0089577c to 00895783 has its CatchHandler @ 00895ff0 */
      ppvVar8 = (void **)operator_new(uVar30 * 0x18);
      local_130 = ppvVar8 + uVar30 * 3;
      uVar19 = (uVar30 * 0x18 - 0x18) / 0x18;
      local_140 = ppvVar8;
      memset(ppvVar8,0,uVar19 * 0x18 + 0x18);
      local_138 = ppvVar8 + uVar19 * 3 + 3;
      uVar19 = 0;
      do {
        lVar12 = *(long *)(this + uVar19 * 0x80 + 0x38);
                    /* try { // try from 008957f8 to 0089581b has its CatchHandler @ 00896040 */
        lVar22 = UserAttributes::getAttribute
                           ((UserAttributes *)(lVar12 + 0x60),"ignoreTrafficIntersections");
        if (((lVar22 == 0) || (iVar6 = UserAttribute::getType(), iVar6 != 0)) ||
           (uVar13 = UserAttribute::getBool(), (uVar13 & 1) == 0)) {
          lVar22 = *(long *)(this + uVar19 * 0x80 + 0x48);
                    /* try { // try from 0089582c to 00895833 has its CatchHandler @ 00896038 */
          uVar7 = Spline::getNumOfCV();
          if (uVar7 == 0) {
            pvVar9 = (void *)0x0;
            pvVar26 = (void *)0x0;
            pvVar24 = (void *)0x0;
          }
          else {
            uVar23 = (ulong)uVar7;
                    /* try { // try from 00895844 to 0089584b has its CatchHandler @ 00896030 */
            pvVar9 = operator_new(uVar23 * 0xc);
            pvVar24 = (void *)((long)pvVar9 + uVar23 * 0xc);
            sVar29 = ((uVar23 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
            memset(pvVar9,0,sVar29);
            uVar13 = 0;
            pvVar26 = (void *)((long)pvVar9 + sVar29);
            do {
                    /* try { // try from 00895884 to 0089588b has its CatchHandler @ 00896044 */
              RawTransformGroup::updateWorldTransformation();
              puVar1 = (undefined4 *)
                       (*(long *)(lVar22 + 0x18) + (ulong)(uint)(*(int *)(lVar22 + 0x20) * 3) * 4 +
                       (uVar13 & 0xffffffff) * 4);
              uVar36 = *puVar1;
              fVar31 = (float)puVar1[1];
              uVar37 = puVar1[2];
              pfVar15 = (float *)((long)pvVar9 + uVar13 * 4);
              uVar13 = uVar13 + 3;
              uVar34 = NEON_fmadd(uVar36,*(undefined4 *)(lVar12 + 0xb8),
                                  fVar31 * *(float *)(lVar12 + 200));
              fVar35 = (float)NEON_fmadd(uVar37,*(undefined4 *)(lVar12 + 0xd8),uVar34);
              *pfVar15 = *(float *)(lVar12 + 0xe8) + fVar35;
              uVar34 = NEON_fmadd(uVar36,*(undefined4 *)(lVar12 + 0xbc),
                                  fVar31 * *(float *)(lVar12 + 0xcc));
              fVar35 = (float)NEON_fmadd(uVar37,*(undefined4 *)(lVar12 + 0xdc),uVar34);
              pfVar15[1] = *(float *)(lVar12 + 0xec) + fVar35;
              uVar34 = NEON_fmadd(uVar36,*(undefined4 *)(lVar12 + 0xc0),
                                  fVar31 * *(float *)(lVar12 + 0xd0));
              fVar31 = (float)NEON_fmadd(uVar37,*(undefined4 *)(lVar12 + 0xe0),uVar34);
              pfVar15[2] = *(float *)(lVar12 + 0xf0) + fVar31;
            } while (uVar23 * 3 != uVar13);
          }
          ppvVar8 = local_140 + uVar19 * 3;
          pvVar10 = *ppvVar8;
          ppvVar8[2] = pvVar24;
          *ppvVar8 = pvVar9;
          ppvVar8[1] = pvVar26;
          if (pvVar10 != (void *)0x0) {
            operator_delete(pvVar10);
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar30);
    }
    iVar6 = (int)uVar20;
    if (iVar6 != 0) {
      uVar19 = 0;
      uVar20 = uVar27 >> 3 & 0xffffffff;
      do {
        lVar22 = *(long *)((long)local_f8 + uVar19 * 8);
        lVar12 = *(long *)((long)local_110 + uVar19 * 8);
                    /* try { // try from 008959a4 to 008959ab has its CatchHandler @ 0089603c */
        uVar7 = Spline::getNumOfCV();
        if (uVar7 == 0) {
          pvVar9 = (void *)0x0;
          pvVar26 = (void *)0x0;
          pvVar24 = (void *)0x0;
        }
        else {
          uVar13 = (ulong)uVar7;
                    /* try { // try from 008959bc to 008959c3 has its CatchHandler @ 00896034 */
          pvVar9 = operator_new(uVar13 * 0xc);
          pvVar24 = (void *)((long)pvVar9 + uVar13 * 0xc);
          sVar29 = ((uVar13 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
          memset(pvVar9,0,sVar29);
          uVar27 = 0;
          pvVar26 = (void *)((long)pvVar9 + sVar29);
          do {
                    /* try { // try from 008959fc to 00895a03 has its CatchHandler @ 00896054 */
            RawTransformGroup::updateWorldTransformation();
            puVar1 = (undefined4 *)
                     (*(long *)(lVar22 + 0x18) + (ulong)(uint)(*(int *)(lVar22 + 0x20) * 3) * 4 +
                     (uVar27 & 0xffffffff) * 4);
            uVar36 = *puVar1;
            fVar31 = (float)puVar1[1];
            uVar37 = puVar1[2];
            pfVar15 = (float *)((long)pvVar9 + uVar27 * 4);
            uVar27 = uVar27 + 3;
            uVar34 = NEON_fmadd(uVar36,*(undefined4 *)(lVar12 + 0xb8),
                                fVar31 * *(float *)(lVar12 + 200));
            fVar35 = (float)NEON_fmadd(uVar37,*(undefined4 *)(lVar12 + 0xd8),uVar34);
            *pfVar15 = *(float *)(lVar12 + 0xe8) + fVar35;
            uVar34 = NEON_fmadd(uVar36,*(undefined4 *)(lVar12 + 0xbc),
                                fVar31 * *(float *)(lVar12 + 0xcc));
            fVar35 = (float)NEON_fmadd(uVar37,*(undefined4 *)(lVar12 + 0xdc),uVar34);
            pfVar15[1] = *(float *)(lVar12 + 0xec) + fVar35;
            uVar34 = NEON_fmadd(uVar36,*(undefined4 *)(lVar12 + 0xc0),
                                fVar31 * *(float *)(lVar12 + 0xd0));
            fVar31 = (float)NEON_fmadd(uVar37,*(undefined4 *)(lVar12 + 0xe0),uVar34);
            pfVar15[2] = *(float *)(lVar12 + 0xf0) + fVar31;
          } while (uVar13 * 3 != uVar27);
        }
        ppvVar8 = local_128 + uVar19 * 3;
        pvVar10 = *ppvVar8;
        *ppvVar8 = pvVar9;
        ppvVar8[1] = pvVar26;
        ppvVar8[2] = pvVar24;
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar20);
      if (iVar6 != 0) {
        uVar19 = 0;
        do {
          ppvVar8 = local_140;
          if (uVar18 != 0) {
            uVar27 = 0;
            do {
              ppvVar14 = ppvVar8 + uVar27 * 3;
              if (*ppvVar14 != ppvVar14[1]) {
                ppvVar14 = local_128 + uVar19 * 3;
                pvVar9 = ppvVar14[1];
                pvVar26 = *ppvVar14;
                if (1 < (ulong)(((long)pvVar9 - (long)pvVar26 >> 2) * -0x5555555555555555)) {
                  uVar13 = 1;
                  ppvVar25 = ppvVar8 + uVar27 * 3;
                  pplVar3 = (long **)(this + uVar27 * 0x80 + 0x48);
                  do {
                    pvVar24 = *ppvVar25;
                    uVar7 = (uint)uVar13;
                    if (1 < (ulong)(((long)ppvVar25[1] - (long)pvVar24 >> 2) * -0x5555555555555555))
                    {
                      uVar23 = 1;
                      while( true ) {
                        pfVar17 = (float *)((long)pvVar26 + (ulong)(uVar7 - 1) * 0xc);
                        uVar28 = (uint)uVar23;
                        pfVar15 = (float *)((long)pvVar26 + uVar13 * 0xc);
                        pfVar21 = (float *)((long)pvVar24 + (ulong)(uVar28 - 1) * 0xc);
                        fVar43 = *pfVar17;
                        fVar31 = *pfVar15;
                        fVar35 = pfVar15[2];
                        pfVar15 = (float *)((long)pvVar24 + uVar23 * 0xc);
                        fVar39 = *pfVar21;
                        local_bc = pfVar21[1];
                        fVar44 = pfVar17[2];
                        fVar40 = pfVar21[2];
                        fVar41 = *pfVar15;
                        fVar42 = pfVar15[2];
                    /* try { // try from 00895c40 to 00895c6b has its CatchHandler @ 0089606c */
                        uVar23 = MathUtil::lineLineIntersect2D
                                           (fVar43,fVar44,fVar31,fVar35,fVar39,fVar40,fVar41,fVar42,
                                            &local_c0,local_b8);
                        if ((uVar23 & 1) != 0) {
                    /* try { // try from 00895c74 to 00895c7b has its CatchHandler @ 00896068 */
                          fVar32 = (float)Spline::getTimeAtCV((Spline *)*pplVar3,uVar28 - 1);
                    /* try { // try from 00895c84 to 00895c8b has its CatchHandler @ 00896064 */
                          fVar33 = (float)Spline::getTimeAtCV((Spline *)*pplVar3,uVar28);
                          fVar35 = fVar35 - fVar44;
                          fVar31 = fVar31 - fVar43;
                          fVar44 = 1.0;
                          fVar38 = (float)NEON_fmadd(fVar31,fVar31,fVar35 * fVar35);
                          fVar43 = 1.0;
                          if (1e-06 < fVar38) {
                            fVar44 = 1.0 / SQRT(fVar38);
                          }
                          fVar42 = fVar42 - fVar40;
                          fVar41 = fVar41 - fVar39;
                          fVar39 = (float)NEON_fmadd(fVar41,fVar41,fVar42 * fVar42);
                          if (1e-06 < fVar39) {
                            fVar43 = 1.0 / SQRT(fVar39);
                          }
                          local_158 = 0;
                          local_150 = (undefined4)uVar19;
                          lVar22 = *(long *)(this + uVar27 * 0x80 + 0x38);
                          fVar31 = (float)NEON_fmadd(fVar31 * fVar44,fVar41 * fVar43,
                                                     fVar35 * fVar44 * fVar42 * fVar43);
                          local_148 = ABS(fVar31) * 3.0;
                    /* try { // try from 00895d30 to 00895ecf has its CatchHandler @ 00896070 */
                          RawTransformGroup::updateWorldTransformation();
                          fVar35 = local_bc - *(float *)(lVar22 + 0xec);
                          fVar41 = local_c0 - *(float *)(lVar22 + 0xe8);
                          fVar42 = local_b8[0] - *(float *)(lVar22 + 0xf0);
                          uVar36 = NEON_fmadd(fVar41,*(undefined4 *)(lVar22 + 0xb8),
                                              fVar35 * *(float *)(lVar22 + 0xbc));
                          uVar37 = NEON_fmadd(fVar41,*(undefined4 *)(lVar22 + 200),
                                              fVar35 * *(float *)(lVar22 + 0xcc));
                          uVar34 = NEON_fmadd(fVar41,*(undefined4 *)(lVar22 + 0xd8),
                                              fVar35 * *(float *)(lVar22 + 0xdc));
                          local_d0 = NEON_fmadd(fVar42,*(undefined4 *)(lVar22 + 0xc0),uVar36);
                          uStack_cc = NEON_fmadd(fVar42,*(undefined4 *)(lVar22 + 0xd0),uVar37);
                          local_c8 = NEON_fmadd(fVar42,*(undefined4 *)(lVar22 + 0xe0),uVar34);
                          local_160 = (**(code **)(**pplVar3 + 0x28))
                                                ((fVar32 + fVar33) * 0.5,fVar33 - fVar32,0x3a83126f,
                                                 *pplVar3,&local_d0,auStack_e0);
                          fStack_15c = (ABS(fVar31) * 3.0 + 3.0) *
                                       *(float *)(this + uVar27 * 0x80 + 0x5c);
                          fVar31 = (float)Spline::getTimeAtCV(*(Spline **)
                                                               ((long)local_f8 + uVar19 * 8),
                                                              uVar7 - 1);
                          fVar35 = (float)Spline::getTimeAtCV(*(Spline **)
                                                               ((long)local_f8 + uVar19 * 8),uVar7);
                          lVar22 = *(long *)((long)local_110 + uVar19 * 8);
                          RawTransformGroup::updateWorldTransformation();
                          fVar41 = local_bc - *(float *)(lVar22 + 0xec);
                          fVar42 = local_c0 - *(float *)(lVar22 + 0xe8);
                          fVar39 = local_b8[0] - *(float *)(lVar22 + 0xf0);
                          uVar36 = NEON_fmadd(fVar42,*(undefined4 *)(lVar22 + 0xb8),
                                              fVar41 * *(float *)(lVar22 + 0xbc));
                          uVar37 = NEON_fmadd(fVar42,*(undefined4 *)(lVar22 + 200),
                                              fVar41 * *(float *)(lVar22 + 0xcc));
                          uVar34 = NEON_fmadd(fVar42,*(undefined4 *)(lVar22 + 0xd8),
                                              fVar41 * *(float *)(lVar22 + 0xdc));
                          local_d0 = NEON_fmadd(fVar39,*(undefined4 *)(lVar22 + 0xc0),uVar36);
                          uStack_cc = NEON_fmadd(fVar39,*(undefined4 *)(lVar22 + 0xd0),uVar37);
                          local_c8 = NEON_fmadd(fVar39,*(undefined4 *)(lVar22 + 0xe0),uVar34);
                          plVar11 = *(long **)((long)local_f8 + uVar19 * 8);
                          local_14c = (**(code **)(*plVar11 + 0x28))
                                                ((fVar31 + fVar35) * 0.5,fVar35 - fVar31,0x3a83126f,
                                                 plVar11,&local_d0,auStack_e0);
                          FUN_00896144(this + uVar27 * 0x80 + 0x88,&local_160);
                        }
                        pvVar24 = *ppvVar25;
                        uVar23 = (ulong)(uVar28 + 1);
                        uVar16 = ((long)ppvVar25[1] - (long)pvVar24 >> 2) * -0x5555555555555555;
                        if (uVar16 < uVar23 || uVar16 - uVar23 == 0) break;
                        pvVar26 = *ppvVar14;
                      }
                      pvVar9 = ppvVar14[1];
                      pvVar26 = *ppvVar14;
                    }
                    uVar13 = (ulong)(uVar7 + 1);
                    uVar23 = ((long)pvVar9 - (long)pvVar26 >> 2) * -0x5555555555555555;
                  } while (uVar13 <= uVar23 && uVar23 - uVar13 != 0);
                }
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 != uVar30);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar20);
      }
    }
    ppvVar8 = local_140;
    ppvVar14 = local_138;
    if (local_140 != (void **)0x0) {
      while (ppvVar25 = ppvVar14, ppvVar25 != ppvVar8) {
        ppvVar14 = ppvVar25 + -3;
        pvVar26 = *ppvVar14;
        if (pvVar26 != (void *)0x0) {
          ppvVar25[-2] = pvVar26;
          operator_delete(pvVar26);
        }
      }
      operator_delete(ppvVar8);
    }
    ppvVar8 = local_128;
    ppvVar14 = local_120;
    if (local_128 != (void **)0x0) {
      while (ppvVar25 = ppvVar14, ppvVar25 != ppvVar8) {
        ppvVar14 = ppvVar25 + -3;
        pvVar26 = *ppvVar14;
        if (pvVar26 != (void *)0x0) {
          ppvVar25[-2] = pvVar26;
          operator_delete(pvVar26);
        }
      }
      operator_delete(ppvVar8);
    }
    if (local_110 != (void *)0x0) {
      local_108 = local_110;
      operator_delete(local_110);
    }
    if (local_f8 != (void *)0x0) {
      local_f0 = local_f8;
      operator_delete(local_f8);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


