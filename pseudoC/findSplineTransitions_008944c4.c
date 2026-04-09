// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findSplineTransitions
// Entry Point: 008944c4
// Size: 2504 bytes
// Signature: undefined findSplineTransitions(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PedestrianSystem::findSplineTransitions() */

void PedestrianSystem::findSplineTransitions(void)

{
  uint *puVar1;
  long *plVar2;
  Spline **ppSVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  long in_x0;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  long *plVar19;
  Spline **ppSVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  undefined4 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float local_118;
  float fStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  long *local_108;
  float local_100;
  float local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  long local_b0;
  float fVar30;
  
  lVar6 = tpidr_el0;
  puVar1 = (uint *)(in_x0 + 0x258f8);
  local_b0 = *(long *)(lVar6 + 0x28);
  if (*puVar1 != 0) {
    uVar28 = NEON_fmov(0x3f800000,4);
    uVar18 = 0;
    uVar15 = 1;
    do {
      uVar26 = local_110;
      fVar31 = fStack_114;
      fStack_114 = 0.0;
      fVar9 = fStack_114;
      local_110 = 0xbf800000;
      uVar11 = local_110;
      fStack_114 = (float)uVar28;
      fVar10 = fStack_114;
      local_110 = (undefined4)((ulong)uVar28 >> 0x20);
      uVar12 = local_110;
      fStack_114 = fVar31;
      local_110 = uVar26;
      if ((int)uVar15 != 0) {
        lVar16 = in_x0 + uVar18 * 0x80;
        uVar22 = 0;
        plVar2 = (long *)(lVar16 + 0x38);
        ppSVar3 = (Spline **)(lVar16 + 0x48);
        lVar4 = lVar16 + 0xa0;
        pcVar5 = (char *)(lVar16 + 100);
        do {
          lVar21 = in_x0 + uVar22 * 0x80;
          plVar19 = (long *)(lVar21 + 0x38);
          fVar31 = *(float *)(lVar16 + 0x5c) + *(float *)(lVar16 + 0x5c);
          fVar32 = *(float *)(lVar21 + 0x5c) + *(float *)(lVar21 + 0x5c);
          if (uVar18 == uVar22) {
            if (*pcVar5 == '\0') {
              iVar13 = Spline::getNumOfCV();
              Spline::getCV(*ppSVar3,0,(float *)&local_c0);
              Spline::getCV(*ppSVar3,iVar13 - 1,(float *)&local_e0);
              lVar21 = *plVar2;
              RawTransformGroup::updateWorldTransformation();
              uVar26 = NEON_fmadd((float)local_c0,*(undefined4 *)(lVar21 + 0xc0),
                                  local_c0._4_4_ * *(float *)(lVar21 + 0xd0));
              fVar27 = (float)NEON_fmadd(local_b8,*(undefined4 *)(lVar21 + 0xe0),uVar26);
              lVar24 = *plVar2;
              local_c0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + 0xe8) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar21 + 200) >> 0x20) *
                                  local_c0._4_4_ +
                                  (float)((ulong)*(undefined8 *)(lVar21 + 0xb8) >> 0x20) *
                                  (float)local_c0 +
                                  (float)((ulong)*(undefined8 *)(lVar21 + 0xd8) >> 0x20) * local_b8,
                                  (float)*(undefined8 *)(lVar21 + 0xe8) +
                                  (float)*(undefined8 *)(lVar21 + 200) * local_c0._4_4_ +
                                  (float)*(undefined8 *)(lVar21 + 0xb8) * (float)local_c0 +
                                  (float)*(undefined8 *)(lVar21 + 0xd8) * local_b8);
              local_b8 = *(float *)(lVar21 + 0xf0) + fVar27;
              RawTransformGroup::updateWorldTransformation();
              fVar27 = (float)*(undefined8 *)(lVar24 + 0xe8) +
                       (float)*(undefined8 *)(lVar24 + 200) * local_e0._4_4_ +
                       (float)*(undefined8 *)(lVar24 + 0xb8) * (float)local_e0 +
                       (float)*(undefined8 *)(lVar24 + 0xd8) * local_d8;
              fVar30 = (float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar24 + 200) >> 0x20) * local_e0._4_4_ +
                       (float)((ulong)*(undefined8 *)(lVar24 + 0xb8) >> 0x20) * (float)local_e0 +
                       (float)((ulong)*(undefined8 *)(lVar24 + 0xd8) >> 0x20) * local_d8;
              uVar29 = CONCAT44(fVar30,fVar27);
              uVar26 = NEON_fmadd((float)local_e0,*(undefined4 *)(lVar24 + 0xc0),
                                  local_e0._4_4_ * *(float *)(lVar24 + 0xd0));
              local_d8 = (float)NEON_fmadd(local_d8,*(undefined4 *)(lVar24 + 0xe0),uVar26);
              fVar30 = local_c0._4_4_ - fVar30;
              local_d8 = *(float *)(lVar24 + 0xf0) + local_d8;
              fVar27 = (float)local_c0 - fVar27;
              uVar26 = NEON_fmadd(fVar27,fVar27,fVar30 * fVar30);
              fVar27 = (float)NEON_fmadd(local_b8 - local_d8,local_b8 - local_d8,uVar26);
              local_e0 = uVar29;
              if (fVar27 < 1.0) {
                local_118 = 1.0 - fVar31;
                local_100 = 0.0;
                uStack_10c = 0x40000000;
                local_f8 = 0x400000003f800000;
                fStack_114 = fVar10;
                local_110 = uVar12;
                local_108 = plVar19;
                local_fc = fVar32;
                FUN_008988e4(lVar4,&local_118);
                local_118 = fVar31;
                fStack_114 = fVar9;
                local_110 = uVar11;
                goto LAB_00894c38;
              }
            }
          }
          else {
            iVar13 = Spline::getNumOfCV();
            ppSVar20 = (Spline **)(lVar21 + 0x48);
            iVar14 = Spline::getNumOfCV();
            if (2 < iVar13) {
              uVar23 = 1;
              do {
                if (2 < iVar14) {
                  iVar17 = 2;
                  do {
                    Spline::getCV(*ppSVar3,uVar23,(float *)&local_c0);
                    Spline::getCV(*ppSVar20,iVar17 - 1U,(float *)&local_d0);
                    lVar24 = *plVar2;
                    RawTransformGroup::updateWorldTransformation();
                    uVar26 = NEON_fmadd((float)local_c0,*(undefined4 *)(lVar24 + 0xc0),
                                        local_c0._4_4_ * *(float *)(lVar24 + 0xd0));
                    fVar27 = (float)NEON_fmadd(local_b8,*(undefined4 *)(lVar24 + 0xe0),uVar26);
                    lVar25 = *plVar19;
                    local_c0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar24 + 200) >> 0x20) *
                                        local_c0._4_4_ +
                                        (float)((ulong)*(undefined8 *)(lVar24 + 0xb8) >> 0x20) *
                                        (float)local_c0 +
                                        (float)((ulong)*(undefined8 *)(lVar24 + 0xd8) >> 0x20) *
                                        local_b8,(float)*(undefined8 *)(lVar24 + 0xe8) +
                                                 (float)*(undefined8 *)(lVar24 + 200) *
                                                 local_c0._4_4_ +
                                                 (float)*(undefined8 *)(lVar24 + 0xb8) *
                                                 (float)local_c0 +
                                                 (float)*(undefined8 *)(lVar24 + 0xd8) * local_b8);
                    local_b8 = *(float *)(lVar24 + 0xf0) + fVar27;
                    RawTransformGroup::updateWorldTransformation();
                    fVar27 = (float)*(undefined8 *)(lVar25 + 0xe8) +
                             (float)*(undefined8 *)(lVar25 + 200) * local_d0._4_4_ +
                             (float)*(undefined8 *)(lVar25 + 0xb8) * (float)local_d0 +
                             (float)*(undefined8 *)(lVar25 + 0xd8) * local_c8;
                    fVar30 = (float)((ulong)*(undefined8 *)(lVar25 + 0xe8) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar25 + 200) >> 0x20) * local_d0._4_4_
                             + (float)((ulong)*(undefined8 *)(lVar25 + 0xb8) >> 0x20) *
                               (float)local_d0 +
                             (float)((ulong)*(undefined8 *)(lVar25 + 0xd8) >> 0x20) * local_c8;
                    uVar29 = CONCAT44(fVar30,fVar27);
                    uVar26 = NEON_fmadd((float)local_d0,*(undefined4 *)(lVar25 + 0xc0),
                                        local_d0._4_4_ * *(float *)(lVar25 + 0xd0));
                    local_c8 = (float)NEON_fmadd(local_c8,*(undefined4 *)(lVar25 + 0xe0),uVar26);
                    fVar30 = local_c0._4_4_ - fVar30;
                    local_c8 = *(float *)(lVar25 + 0xf0) + local_c8;
                    fVar27 = (float)local_c0 - fVar27;
                    uVar26 = NEON_fmadd(fVar27,fVar27,fVar30 * fVar30);
                    fVar27 = (float)NEON_fmadd(local_b8 - local_c8,local_b8 - local_c8,uVar26);
                    local_d0 = uVar29;
                    if (fVar27 < 0.05) {
                      fVar27 = (float)Spline::getTimeAtCV(*ppSVar3,uVar23);
                      fVar30 = (float)Spline::getTimeAtCV(*ppSVar20,iVar17 - 1U);
                      local_110 = 0x3f800000;
                      uStack_10c = 0x40000000;
                      local_f8 = 0x400000003f800000;
                      local_118 = fVar27 - fVar31;
                      fStack_114 = fVar27;
                      local_108 = plVar19;
                      local_100 = fVar30;
                      local_fc = fVar32 + fVar30;
                      FUN_008988e4(lVar4,&local_118);
                      if (*(char *)(lVar21 + 100) == '\0') {
                        local_fc = fVar30 - fVar32;
                        local_110 = 0x3f800000;
                        uStack_10c = 0x40000000;
                        local_f8 = 0x40000000bf800000;
                        local_118 = fVar27 - fVar31;
                        fStack_114 = fVar27;
                        local_108 = plVar19;
                        local_100 = fVar30;
                        FUN_008988e4(lVar4,&local_118);
                      }
                      if (*pcVar5 == '\0') {
                        local_110 = 0xbf800000;
                        uStack_10c = 0x40000000;
                        local_f8 = 0x400000003f800000;
                        local_118 = fVar31 + fVar27;
                        fStack_114 = fVar27;
                        local_108 = plVar19;
                        local_100 = fVar30;
                        local_fc = fVar32 + fVar30;
                        FUN_008988e4(lVar4,&local_118);
                        if (*(char *)(lVar21 + 100) == '\0') {
                          local_fc = fVar30 - fVar32;
                          local_110 = 0xbf800000;
                          uStack_10c = 0x40000000;
                          local_f8 = 0x40000000bf800000;
                          local_118 = fVar31 + fVar27;
                          fStack_114 = fVar27;
                          local_108 = plVar19;
                          local_100 = fVar30;
                          FUN_008988e4(lVar4,&local_118);
                        }
                      }
                    }
                    iVar17 = iVar17 + 1;
                  } while (iVar14 != iVar17);
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 != iVar13 - 1U);
            }
            Spline::getCV(*ppSVar3,0,(float *)&local_c0);
            Spline::getCV(*ppSVar20,0,(float *)&local_d0);
            Spline::getCV(*ppSVar3,iVar13 - 1U,(float *)&local_e0);
            Spline::getCV(*ppSVar20,iVar14 - 1,(float *)&local_f0);
            lVar21 = *plVar2;
            RawTransformGroup::updateWorldTransformation();
            uVar26 = NEON_fmadd((float)local_c0,*(undefined4 *)(lVar21 + 0xc0),
                                local_c0._4_4_ * *(float *)(lVar21 + 0xd0));
            fVar27 = (float)NEON_fmadd(local_b8,*(undefined4 *)(lVar21 + 0xe0),uVar26);
            lVar24 = *plVar19;
            local_c0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + 0xe8) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar21 + 200) >> 0x20) *
                                local_c0._4_4_ +
                                (float)((ulong)*(undefined8 *)(lVar21 + 0xb8) >> 0x20) *
                                (float)local_c0 +
                                (float)((ulong)*(undefined8 *)(lVar21 + 0xd8) >> 0x20) * local_b8,
                                (float)*(undefined8 *)(lVar21 + 0xe8) +
                                (float)*(undefined8 *)(lVar21 + 200) * local_c0._4_4_ +
                                (float)*(undefined8 *)(lVar21 + 0xb8) * (float)local_c0 +
                                (float)*(undefined8 *)(lVar21 + 0xd8) * local_b8);
            local_b8 = *(float *)(lVar21 + 0xf0) + fVar27;
            RawTransformGroup::updateWorldTransformation();
            uVar26 = NEON_fmadd((float)local_d0,*(undefined4 *)(lVar24 + 0xc0),
                                local_d0._4_4_ * *(float *)(lVar24 + 0xd0));
            fVar27 = (float)NEON_fmadd(local_c8,*(undefined4 *)(lVar24 + 0xe0),uVar26);
            lVar21 = *plVar2;
            local_d0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar24 + 200) >> 0x20) *
                                local_d0._4_4_ +
                                (float)((ulong)*(undefined8 *)(lVar24 + 0xb8) >> 0x20) *
                                (float)local_d0 +
                                (float)((ulong)*(undefined8 *)(lVar24 + 0xd8) >> 0x20) * local_c8,
                                (float)*(undefined8 *)(lVar24 + 0xe8) +
                                (float)*(undefined8 *)(lVar24 + 200) * local_d0._4_4_ +
                                (float)*(undefined8 *)(lVar24 + 0xb8) * (float)local_d0 +
                                (float)*(undefined8 *)(lVar24 + 0xd8) * local_c8);
            local_c8 = *(float *)(lVar24 + 0xf0) + fVar27;
            RawTransformGroup::updateWorldTransformation();
            uVar26 = NEON_fmadd((float)local_e0,*(undefined4 *)(lVar21 + 0xc0),
                                local_e0._4_4_ * *(float *)(lVar21 + 0xd0));
            fVar27 = (float)NEON_fmadd(local_d8,*(undefined4 *)(lVar21 + 0xe0),uVar26);
            lVar24 = *plVar19;
            local_e0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + 0xe8) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar21 + 200) >> 0x20) *
                                local_e0._4_4_ +
                                (float)((ulong)*(undefined8 *)(lVar21 + 0xb8) >> 0x20) *
                                (float)local_e0 +
                                (float)((ulong)*(undefined8 *)(lVar21 + 0xd8) >> 0x20) * local_d8,
                                (float)*(undefined8 *)(lVar21 + 0xe8) +
                                (float)*(undefined8 *)(lVar21 + 200) * local_e0._4_4_ +
                                (float)*(undefined8 *)(lVar21 + 0xb8) * (float)local_e0 +
                                (float)*(undefined8 *)(lVar21 + 0xd8) * local_d8);
            local_d8 = *(float *)(lVar21 + 0xf0) + fVar27;
            RawTransformGroup::updateWorldTransformation();
            uVar26 = NEON_fmadd((float)local_f0,*(undefined4 *)(lVar24 + 0xc0),
                                local_f0._4_4_ * *(float *)(lVar24 + 0xd0));
            fVar27 = (float)NEON_fmadd(local_e8,*(undefined4 *)(lVar24 + 0xe0),uVar26);
            local_f0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar24 + 200) >> 0x20) *
                                local_f0._4_4_ +
                                (float)((ulong)*(undefined8 *)(lVar24 + 0xb8) >> 0x20) *
                                (float)local_f0 +
                                (float)((ulong)*(undefined8 *)(lVar24 + 0xd8) >> 0x20) * local_e8,
                                (float)*(undefined8 *)(lVar24 + 0xe8) +
                                (float)*(undefined8 *)(lVar24 + 200) * local_f0._4_4_ +
                                (float)*(undefined8 *)(lVar24 + 0xb8) * (float)local_f0 +
                                (float)*(undefined8 *)(lVar24 + 0xd8) * local_e8);
            local_e8 = *(float *)(lVar24 + 0xf0) + fVar27;
            if (*pcVar5 == '\0') {
              uVar26 = NEON_fmadd((float)local_c0 - (float)local_d0,
                                  (float)local_c0 - (float)local_d0,
                                  (local_c0._4_4_ - local_d0._4_4_) *
                                  (local_c0._4_4_ - local_d0._4_4_));
              fVar27 = (float)NEON_fmadd(local_b8 - local_c8,local_b8 - local_c8,uVar26);
              if (fVar27 < 1.0) {
                uStack_10c = 0x40000000;
                local_100 = 0.0;
                local_f8 = 0x400000003f800000;
                local_118 = fVar31;
                fStack_114 = fVar9;
                local_110 = uVar11;
                local_108 = plVar19;
                local_fc = fVar32;
                FUN_008988e4(lVar4,&local_118);
                if (*pcVar5 != '\0') goto LAB_008949dc;
              }
              uVar26 = NEON_fmadd((float)local_c0 - (float)local_f0,
                                  (float)local_c0 - (float)local_f0,
                                  (local_c0._4_4_ - local_f0._4_4_) *
                                  (local_c0._4_4_ - local_f0._4_4_));
              fVar27 = (float)NEON_fmadd(local_b8 - local_e8,local_b8 - local_e8,uVar26);
              if (fVar27 < 1.0) {
                local_fc = 1.0 - fVar32;
                uStack_10c = 0x40000000;
                local_100 = 1.0;
                local_f8 = 0x40000000bf800000;
                local_118 = fVar31;
                fStack_114 = fVar9;
                local_110 = uVar11;
                local_108 = plVar19;
                FUN_008988e4(lVar4,&local_118);
              }
            }
LAB_008949dc:
            uVar26 = NEON_fmadd((float)local_e0 - (float)local_d0,(float)local_e0 - (float)local_d0,
                                (local_e0._4_4_ - local_d0._4_4_) *
                                (local_e0._4_4_ - local_d0._4_4_));
            fVar27 = (float)NEON_fmadd(local_d8 - local_c8,local_d8 - local_c8,uVar26);
            if (fVar27 < 1.0) {
              local_118 = 1.0 - fVar31;
              uStack_10c = 0x40000000;
              local_100 = 0.0;
              local_f8 = 0x400000003f800000;
              fStack_114 = fVar10;
              local_110 = uVar12;
              local_108 = plVar19;
              local_fc = fVar32;
              FUN_008988e4(lVar4,&local_118);
            }
            uVar26 = NEON_fmadd((float)local_e0 - (float)local_f0,(float)local_e0 - (float)local_f0,
                                (local_e0._4_4_ - local_f0._4_4_) *
                                (local_e0._4_4_ - local_f0._4_4_));
            fVar27 = (float)NEON_fmadd(local_d8 - local_e8,local_d8 - local_e8,uVar26);
            if (fVar27 < 1.0) {
              local_118 = 1.0 - fVar31;
              fStack_114 = fVar10;
              local_110 = uVar12;
LAB_00894c38:
              local_fc = 1.0 - fVar32;
              local_f8 = 0x40000000bf800000;
              local_100 = 1.0;
              uStack_10c = 0x40000000;
              local_108 = plVar19;
              FUN_008988e4(lVar4,&local_118);
            }
          }
          uVar15 = (ulong)*puVar1;
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar15);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar15);
    if ((int)uVar15 != 0) {
      uVar18 = 0;
      do {
        lVar4 = in_x0 + uVar18 * 0x80;
        if (*(char *)(lVar4 + 100) == '\0') {
          plVar2 = (long *)(lVar4 + 0x38);
          plVar19 = (long *)(lVar4 + 0xa0);
          lVar16 = *plVar19;
          fVar31 = *(float *)(lVar4 + 0x5c) + *(float *)(lVar4 + 0x5c);
          if (lVar16 == *(long *)(lVar4 + 0xa8)) {
            uStack_10c = 0x40000000;
            local_100 = 0.0;
            local_f8 = 0x400000003f800000;
            local_118 = fVar31;
            fStack_114 = fVar9;
            local_110 = uVar11;
            local_108 = plVar2;
            local_fc = fVar31;
            FUN_008988e4(plVar19,&local_118);
          }
          else {
            bVar7 = false;
            bVar8 = false;
            do {
              if (*(float *)(lVar16 + 8) <= 0.0 || *(float *)(lVar16 + 4) != 1.0) {
                bVar7 = (bool)((*(float *)(lVar16 + 8) < 0.0 && *(float *)(lVar16 + 4) == 0.0) |
                              bVar7);
              }
              else {
                bVar8 = true;
              }
              lVar16 = lVar16 + 0x28;
            } while (lVar16 != *(long *)(lVar4 + 0xa8));
            if (!bVar7) {
              uStack_10c = 0x40000000;
              local_100 = 0.0;
              local_f8 = 0x400000003f800000;
              local_118 = fVar31;
              fStack_114 = fVar9;
              local_110 = uVar11;
              local_108 = plVar2;
              local_fc = fVar31;
              FUN_008988e4(plVar19,&local_118);
            }
            if (bVar8) goto LAB_00894d8c;
          }
          local_118 = 1.0 - fVar31;
          uStack_10c = 0x40000000;
          local_100 = 1.0;
          local_f8 = 0x40000000bf800000;
          fStack_114 = fVar10;
          local_110 = uVar12;
          local_108 = plVar2;
          local_fc = local_118;
          FUN_008988e4(plVar19,&local_118);
        }
LAB_00894d8c:
        uVar18 = uVar18 + 1;
      } while (uVar18 < *puVar1);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


