// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008968ac
// Size: 2572 bytes
// Signature: undefined __thiscall update(PedestrianSystem * this, float param_1)


/* WARNING: Removing unreachable block (ram,0x00897040) */
/* WARNING: Removing unreachable block (ram,0x008970b8) */
/* WARNING: Removing unreachable block (ram,0x008970f0) */
/* WARNING: Removing unreachable block (ram,0x008970f8) */
/* WARNING: Removing unreachable block (ram,0x00897044) */
/* PedestrianSystem::update(float) */

void __thiscall PedestrianSystem::update(PedestrianSystem *this,float param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  Bt2ScenegraphPhysicsContext *pBVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  PedestrianSystem *pPVar12;
  PedestrianData *pPVar13;
  SimulatedPedestrian *this_00;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  SimulatedPedestrian *local_148;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  if ((this[0x25974] != (PedestrianSystem)0x0) &&
     (piVar1 = (int *)(this + 0x258e8), this[0x25975] != (PedestrianSystem)0x0)) {
    if (this[0x25976] == (PedestrianSystem)0x0) {
      uVar6 = *(uint *)(this + 0x25900);
      if (uVar6 == 0) {
        this[0x25976] = (PedestrianSystem)0x1;
      }
      else {
        lVar3 = 0;
        do {
          if (*(long *)(this + lVar3 + 0x66e8) == 0) goto LAB_00897274;
          lVar3 = lVar3 + 0x3b0;
        } while ((ulong)uVar6 * 0x3b0 - lVar3 != 0);
        this[0x25976] = (PedestrianSystem)0x1;
        if (uVar6 != 0) {
          uVar16 = 0;
          pPVar13 = (PedestrianData *)(this + 0x6398);
          do {
            initPedestrianVisuals(this,pPVar13,(PedestrianVisuals *)(pPVar13 + 8));
            initPedestrianVisuals(this,pPVar13,(PedestrianVisuals *)(pPVar13 + 0xd8));
            initPedestrianVisuals(this,pPVar13,(PedestrianVisuals *)(pPVar13 + 0x1a8));
            initPedestrianVisuals(this,pPVar13,(PedestrianVisuals *)(pPVar13 + 0x278));
            uVar16 = uVar16 + 1;
            pPVar13 = pPVar13 + 0x3b0;
          } while (uVar16 < *(uint *)(this + 0x25900));
        }
      }
    }
    else {
      EngineManager::getInstance();
      lVar3 = Renderer::getCamera();
      if (lVar3 != 0) {
        RawTransformGroup::updateWorldTransformation();
        local_d0 = *(undefined8 *)(lVar3 + 0xe8);
        local_c8 = *(undefined4 *)(lVar3 + 0xf0);
        lVar3 = *(long *)(this + 0x25958);
        local_c0 = local_d0;
        local_b8 = local_c8;
        if (lVar3 != 0) {
          RawTransformGroup::updateWorldTransformation();
          local_c0 = *(undefined8 *)(lVar3 + 0xe8);
          local_b8 = *(undefined4 *)(lVar3 + 0xf0);
        }
        runSpawningLogic(this,param_1,(Vector3 *)&local_d0);
        local_e0 = 0;
        local_d8 = 0.0;
        if (*(int *)(this + 0x25904) == 0) {
          local_148 = (SimulatedPedestrian *)0x0;
        }
        else {
          lVar3 = 0;
          uVar16 = 0;
          local_148 = (SimulatedPedestrian *)0x0;
          fVar18 = 3.402823e+38;
          do {
            this_00 = (SimulatedPedestrian *)(this + lVar3 + 0x1d458);
            SimulatedPedestrian::update(this_00,*(float *)(this + 0x25988) * param_1);
            SimulatedPedestrian::checkForAvoidance
                      (this_00,(SimulatedPedestrian *)(this + 0x1d458),*(int *)(this + 0x25904));
            fVar19 = *(float *)(this + lVar3 + 0x1d480);
            fVar17 = *(float *)(this + lVar3 + 0x1d488);
            uVar20 = NEON_fmadd(fVar19,fVar19,0);
            fVar23 = (float)NEON_fmadd(fVar17,fVar17,uVar20);
            fVar21 = 1.0;
            if (1e-06 < fVar23) {
              fVar21 = 1.0 / SQRT(fVar23);
            }
            *(float *)(this + lVar3 + 0x1d488) = fVar17 * fVar21;
            *(ulong *)(this + lVar3 + 0x1d480) = CONCAT44(fVar21 * 0.0,fVar19 * fVar21);
            if ((this[lVar3 + 0x1d4e1] != (PedestrianSystem)0x0) &&
               (*(float *)(this + lVar3 + 0x1d4b0) < 225.0)) {
              playWalkSoundAtPosition(this,(Vector3 *)(this + lVar3 + 0x1d474));
            }
            fVar17 = *(float *)(this + lVar3 + 120000);
            if (*(float *)(this + lVar3 + 0x1d4bc) <= *(float *)(this + lVar3 + 120000)) {
              fVar17 = *(float *)(this + lVar3 + 0x1d4bc);
            }
            if (fVar17 == 3.402823e+38) {
              if ((this[lVar3 + 0x1d4ca] != (PedestrianSystem)0x0) &&
                 (this[lVar3 + 0x1d4c9] == (PedestrianSystem)0x0)) {
                SimulatedPedestrian::setBlockedState(this_00,false);
              }
              if (this[lVar3 + 0x1d4c8] == (PedestrianSystem)0x0) {
                this[lVar3 + 0x1d4c8] = (PedestrianSystem)0x1;
                goto LAB_00896bd4;
              }
            }
            else {
              if ((this[lVar3 + 0x1d4ca] == (PedestrianSystem)0x0) &&
                 (this[lVar3 + 0x1d4c9] == (PedestrianSystem)0x0)) {
                SimulatedPedestrian::setBlockedState(this_00,true);
              }
              if ((this[lVar3 + 0x1d4c8] != (PedestrianSystem)0x0) && (fVar17 < 0.2)) {
                this[lVar3 + 0x1d4c8] = (PedestrianSystem)0x0;
LAB_00896bd4:
                ScenegraphNode::setVisibility
                          (*(ScenegraphNode **)(*(long *)(this + lVar3 + 0x1d4a0) + 0xa8),
                           fVar17 == 3.402823e+38);
                ScenegraphNode::setVisibility
                          (*(ScenegraphNode **)(*(long *)(this + lVar3 + 0x1d4a0) + 0xa0),
                           fVar17 == 3.402823e+38);
              }
            }
            fVar21 = *(float *)(this + lVar3 + 0x1d474);
            fVar17 = *(float *)(this + lVar3 + 0x1d478);
            fVar19 = *(float *)(this + lVar3 + 0x1d47c);
            if (this[lVar3 + 0x1d4c9] == (PedestrianSystem)0x0) {
              fVar23 = *(float *)(this + lVar3 + 0x1d4b8) +
                       (*(float *)(this + lVar3 + 0x1d4b4) - *(float *)(this + lVar3 + 0x1d4b8)) *
                       0.25;
              *(float *)(this + lVar3 + 0x1d4b8) = fVar23;
              fVar17 = fVar17 - (fVar23 + -0.5);
            }
            fVar22 = *(float *)(this + lVar3 + 0x1d480);
            fStack_fc = *(float *)(this + lVar3 + 0x1d484);
            fVar24 = 1.0;
            local_114 = 0;
            local_104 = 0;
            local_f4 = 0;
            local_e4 = 0x3f800000;
            uVar20 = NEON_fmadd(fVar22,fVar22,fStack_fc * fStack_fc);
            local_f8 = *(float *)(this + lVar3 + 0x1d488);
            fVar23 = (float)NEON_fmadd(local_f8,local_f8,uVar20);
            fVar25 = 1.0;
            if (1e-06 < fVar23) {
              fVar25 = 1.0 / SQRT(fVar23);
            }
            local_f8 = local_f8 * fVar25;
            local_100 = fVar22 * fVar25;
            fStack_fc = fStack_fc * fVar25;
            fVar26 = (float)NEON_fmadd(local_100,0,local_f8 * -0.0);
            fVar23 = local_f8 + fStack_fc * -0.0;
            local_118 = (float)NEON_fnmsub(fStack_fc,0,local_100);
            uVar20 = NEON_fmadd(fVar23,fVar23,fVar26 * fVar26);
            fVar27 = (float)NEON_fmadd(local_118,local_118,uVar20);
            if (1e-06 < fVar27) {
              fVar24 = 1.0 / SQRT(fVar27);
            }
            fVar26 = fVar26 * fVar24;
            local_118 = local_118 * fVar24;
            fVar23 = fVar23 * fVar24;
            local_120 = CONCAT44(fVar26,fVar23);
            local_110 = NEON_fmadd(fStack_fc,local_118,fVar26 * -local_f8);
            uStack_10c = NEON_fmadd(local_f8,fVar23,local_118 * -(fVar22 * fVar25));
            local_108 = NEON_fmadd(local_100,fVar26,fVar23 * -fStack_fc);
            local_f0 = fVar21;
            fStack_ec = fVar17;
            local_e8 = fVar19;
            RawTransformGroup::setTransformation
                      (*(RawTransformGroup **)(*(long *)(this + lVar3 + 0x1d4a0) + 0x98),
                       (Matrix4x4 *)&local_120,0);
            if (0.0 < param_1) {
              fVar24 = *(float *)(*(long *)(this + lVar3 + 0x1d4a0) + 200);
              uVar20 = NEON_fmadd(fVar17 - *(float *)(this + lVar3 + 0x1d490),
                                  fVar17 - *(float *)(this + lVar3 + 0x1d490),
                                  (fVar21 - *(float *)(this + lVar3 + 0x1d48c)) *
                                  (fVar21 - *(float *)(this + lVar3 + 0x1d48c)));
              fVar23 = (float)NEON_fmadd(fVar19 - *(float *)(this + lVar3 + 0x1d494),
                                         fVar19 - *(float *)(this + lVar3 + 0x1d494),uVar20);
              fVar22 = (float)PedestrianAnimationBlender::getActiveAnimationDuration();
              PedestrianAnimationBlender::setSpeedScale
                        ((PedestrianAnimationBlender *)(*(long *)(this + lVar3 + 0x1d4a0) + 8),
                         (SQRT(fVar23) / param_1) / (fVar24 / fVar22));
            }
            *(float *)(this + lVar3 + 0x1d48c) = fVar21;
            *(float *)(this + lVar3 + 0x1d490) = fVar17;
            *(float *)(this + lVar3 + 0x1d494) = fVar19;
            if (*(float *)(this + lVar3 + 0x1d4b0) < fVar18) {
              local_e0 = CONCAT44(fVar17,fVar21);
              fVar18 = *(float *)(this + lVar3 + 0x1d4b0);
              local_148 = this_00;
              local_d8 = fVar19;
            }
            SimulatedPedestrian::updateLookAngle(this_00,(Vector3 *)&local_c0,param_1);
            uVar16 = uVar16 + 1;
            lVar3 = lVar3 + 0x108;
          } while (uVar16 < *(uint *)(this + 0x25904));
        }
        if ((*(long *)(this + 0x25960) != 0) && (uVar6 = *(uint *)(this + 0x258f8), uVar6 != 0)) {
          uVar16 = 0;
          do {
            lVar3 = *(long *)(this + uVar16 * 0x80 + 0x88);
            if (*(long *)(this + uVar16 * 0x80 + 0x90) != lVar3) {
              uVar15 = 0;
              do {
                lVar14 = lVar3 + uVar15 * 0x1c;
                fVar19 = *(float *)(this + uVar16 * 0x80 + 0x50);
                fVar18 = *(float *)(lVar14 + 0x18);
                fVar17 = (float)Spline::getLength();
                if (*(int *)(lVar14 + 0xc) == 0) {
                  if (0 < *(int *)(lVar14 + 8)) {
                    bVar5 = true;
                    goto LAB_00896e2c;
                  }
                }
                else if (*(int *)(lVar14 + 8) == 0) {
                  bVar5 = false;
LAB_00896e2c:
                  lVar10 = lVar3 + uVar15 * 0x1c;
                  fVar18 = *(float *)(lVar10 + 0x14) - (fVar18 + fVar19) / fVar17;
                  if (fVar18 <= 0.0) {
                    fVar18 = 0.0;
                  }
                  TrafficSystem::setBlockingPositionState
                            (*(TrafficSystem **)(this + 0x25960),*(uint *)(lVar10 + 0x10),fVar18,
                             bVar5);
                }
                lVar3 = lVar3 + uVar15 * 0x1c;
                uVar15 = (ulong)((int)uVar15 + 1);
                iVar7 = *(int *)(lVar3 + 8);
                *(undefined4 *)(lVar3 + 8) = 0;
                *(int *)(lVar14 + 0xc) = iVar7;
                lVar3 = *(long *)(this + uVar16 * 0x80 + 0x88);
                uVar9 = (*(long *)(this + uVar16 * 0x80 + 0x90) - lVar3 >> 2) * 0x6db6db6db6db6db7;
              } while (uVar15 <= uVar9 && uVar9 - uVar15 != 0);
              uVar6 = *(uint *)(this + 0x258f8);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar6);
        }
        iVar7 = *piVar1;
        lVar3 = 0;
        uVar6 = iVar7 + 1;
        do {
          uVar11 = *(uint *)(this + 0x25904);
          uVar16 = (ulong)(iVar7 + 1U);
          if (iVar7 + 1U < uVar11) {
            pPVar12 = this + 0x1d4c9 + uVar16 * 0x108;
            do {
              if (*pPVar12 == (PedestrianSystem)0x0) goto LAB_00896f60;
              uVar16 = uVar16 + 1;
              pPVar12 = pPVar12 + 0x108;
            } while (uVar11 != (uint)uVar16);
          }
          uVar8 = uVar11;
          if (uVar6 <= uVar11) {
            uVar8 = uVar6;
          }
          if (uVar8 == 0) goto LAB_0089700c;
          uVar16 = 0;
          pPVar12 = this + 0x1d4c9;
          while (*pPVar12 != (PedestrianSystem)0x0) {
            uVar16 = uVar16 + 1;
            pPVar12 = pPVar12 + 0x108;
            if (uVar8 == uVar16) goto LAB_0089700c;
          }
LAB_00896f60:
          *piVar1 = (int)uVar16;
          local_118 = *(float *)(this + (uVar16 & 0xffffffff) * 0x108 + 0x1d47c);
          local_120._4_4_ =
               (float)((ulong)*(undefined8 *)(this + (uVar16 & 0xffffffff) * 0x108 + 0x1d474) >>
                      0x20);
          local_120 = CONCAT44(local_120._4_4_ + 0.5,
                               (int)*(undefined8 *)(this + (uVar16 & 0xffffffff) * 0x108 + 0x1d474))
          ;
          *(int *)(this + lVar3 * 0x18 + 0x257e0) = (int)uVar16;
          ScenegraphPhysicsContextManager::getInstance();
          pBVar4 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
          local_130 = 0xbf80000000000000;
          local_128 = 0;
          Bt2ScenegraphPhysicsContext::raycastShapes
                    (pBVar4,(Vector3 *)&local_120,(Vector3 *)&local_130,
                     (IRaycastReport *)(this + lVar3 * 0x18 + 0x257d8),2.0,true,
                     *(uint *)(this + 0x258f0),false,false,2);
          lVar3 = lVar3 + 1;
          if (lVar3 == 5) goto LAB_00897008;
          iVar7 = *piVar1;
        } while( true );
      }
    }
  }
  goto LAB_00897274;
LAB_00897008:
  uVar11 = *(uint *)(this + 0x25904);
LAB_0089700c:
  if (uVar11 == 0) {
    uVar16 = 0;
  }
  else {
    uVar15 = 0;
    do {
      lVar3 = *(long *)(this + uVar15 * 0x108 + 0x1d4d0);
      if (lVar3 != 0) {
        *(undefined4 *)(this + uVar15 * 0x108 + 120000) = 0x7f7fffff;
        lVar3 = *(long *)(lVar3 + 0x40) - *(long *)(lVar3 + 0x38);
        if (lVar3 != 0) {
          uVar16 = 0;
          do {
            uVar16 = (ulong)((int)uVar16 + 1);
          } while (uVar16 < (ulong)(lVar3 >> 3));
        }
      }
      uVar15 = uVar15 + 1;
      uVar16 = (ulong)*(uint *)(this + 0x25904);
    } while (uVar15 < uVar16);
  }
  iVar7 = *(int *)(this + 0x258ec);
  lVar3 = 4;
  pPVar12 = this + 0x25850;
  uVar6 = iVar7 + 1;
  while( true ) {
    uVar11 = iVar7 + 1;
    uVar8 = (uint)uVar16;
    if (uVar8 <= uVar11) {
      uVar11 = uVar8;
      if (uVar6 <= uVar8) {
        uVar11 = uVar6;
      }
      if (uVar11 == 0) goto LAB_00897218;
      uVar11 = 0;
    }
    *(uint *)(this + 0x258ec) = uVar11;
    *(uint *)((IRaycastReport *)pPVar12 + 8) = uVar11;
    local_118 = *(float *)(this + (ulong)uVar11 * 0x108 + 0x1d47c) -
                *(float *)(this + (ulong)uVar11 * 0x108 + 0x1d488) * 0.1;
    local_120 = CONCAT44((*(float *)(this + (ulong)uVar11 * 0x108 + 0x1d478) -
                         *(float *)(this + (ulong)uVar11 * 0x108 + 0x1d484) * 0.1) + 1.0,
                         *(float *)(this + (ulong)uVar11 * 0x108 + 0x1d474) -
                         *(float *)(this + (ulong)uVar11 * 0x108 + 0x1d480) * 0.1);
    ScenegraphPhysicsContextManager::getInstance();
    pBVar4 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::raycastShapes
              (pBVar4,(Vector3 *)&local_120,(Vector3 *)(this + (ulong)uVar11 * 0x108 + 0x1d480),
               (IRaycastReport *)pPVar12,3.0,true,*(uint *)(this + 0x258f4),false,false,2);
    if (lVar3 == 0) break;
    iVar7 = *(int *)(this + 0x258ec);
    pPVar12 = (PedestrianSystem *)((IRaycastReport *)pPVar12 + 0x18);
    uVar16 = (ulong)*(uint *)(this + 0x25904);
    lVar3 = lVar3 + -1;
  }
  uVar8 = *(uint *)(this + 0x25904);
LAB_00897218:
  if (((*(int *)(this + 0x25908) != 0) && (uVar8 != 0)) &&
     (fVar18 = *(float *)(this + 0x25970), *(float *)(this + 0x25970) = fVar18 - param_1,
     fVar18 - param_1 < 0.0)) {
    uVar20 = MathUtil::getRandomMinMax(6000.0,12000.0);
    *(undefined4 *)(this + 0x25970) = uVar20;
    if (local_148 != (SimulatedPedestrian *)0x0) {
      chooseAudioSource(this,local_148,(Vector3 *)&local_e0);
    }
  }
LAB_00897274:
  if (*(long *)(lVar2 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


