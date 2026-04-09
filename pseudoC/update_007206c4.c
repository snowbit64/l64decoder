// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 007206c4
// Size: 5224 bytes
// Signature: undefined __thiscall update(TrafficVehicle * this, Vector3 * param_1, bool param_2, float param_3, float param_4, bool param_5, bool param_6, VehicleNavigationMapGenerator * param_7)


/* WARNING: Removing unreachable block (ram,0x00720c34) */
/* TrafficVehicle::update(Vector3&, bool, float, float, bool, bool, VehicleNavigationMapGenerator*)
    */

void __thiscall
TrafficVehicle::update
          (TrafficVehicle *this,Vector3 *param_1,bool param_2,float param_3,float param_4,
          bool param_5,bool param_6,VehicleNavigationMapGenerator *param_7)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  AudioSource *pAVar5;
  ScenegraphNode *this_00;
  EntityRegistryManager *this_01;
  TrafficVehicle *this_02;
  GsShape *this_03;
  bool bVar6;
  Road *pRVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long **pplVar13;
  float *pfVar14;
  long lVar15;
  long **pplVar16;
  int iVar17;
  long *plVar18;
  long **pplVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float extraout_s0;
  undefined4 uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_194;
  float local_190;
  float fStack_18c;
  float local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  undefined4 local_14c;
  float local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float fStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  float local_110;
  undefined4 local_10c;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  if (this[0x218] == (TrafficVehicle)0x0) {
    if (this[0x40] != (TrafficVehicle)0x0) goto LAB_00721ae4;
    ScenegraphPhysicsContextManager::getInstance();
    lVar11 = ScenegraphPhysicsContextManager::getContext();
    fVar21 = *(float *)(this + 0x33c);
    fVar27 = fVar21 + *(float *)(lVar11 + 0x74) / *(float *)(this + 0x340);
    if (1.0 <= fVar27) {
      *(undefined8 *)(this + 0x30c) = *(undefined8 *)(this + 0x318);
      *(undefined4 *)(this + 0x214) = *(undefined4 *)(this + 0x308);
      *(undefined4 *)(this + 0x314) = *(undefined4 *)(this + 800);
      *(undefined8 *)(this + 0x324) = *(undefined8 *)(this + 0x330);
      *(undefined4 *)(this + 0x32c) = *(undefined4 *)(this + 0x338);
    }
    else {
      *(float *)(this + 0x33c) = fVar27;
      fVar27 = (fVar27 - fVar21) / (1.0 - fVar21);
      uVar4 = *(undefined8 *)(this + 0x30c);
      fVar21 = (float)uVar4;
      fVar31 = (float)((ulong)uVar4 >> 0x20);
      fVar22 = (float)*(undefined8 *)(this + 0x324);
      fVar25 = (float)((ulong)*(undefined8 *)(this + 0x324) >> 0x20);
      uVar23 = NEON_fmadd(*(undefined4 *)(this + 0x214),1.0 - fVar27,
                          fVar27 * *(float *)(this + 0x308));
      *(undefined4 *)(this + 0x214) = uVar23;
      *(ulong *)(this + 0x30c) =
           CONCAT44(fVar31 + ((float)((ulong)*(undefined8 *)(this + 0x318) >> 0x20) - fVar31) *
                             fVar27,
                    fVar21 + ((float)*(undefined8 *)(this + 0x318) - fVar21) * fVar27);
      *(float *)(this + 0x314) =
           *(float *)(this + 0x314) + fVar27 * (*(float *)(this + 800) - *(float *)(this + 0x314));
      *(ulong *)(this + 0x324) =
           CONCAT44(fVar25 + ((float)((ulong)*(undefined8 *)(this + 0x330) >> 0x20) - fVar25) *
                             fVar27,
                    fVar22 + ((float)*(undefined8 *)(this + 0x330) - fVar22) * fVar27);
      *(float *)(this + 0x32c) =
           *(float *)(this + 0x32c) + fVar27 * (*(float *)(this + 0x338) - *(float *)(this + 0x32c))
      ;
    }
    puVar9 = (undefined8 *)(this + 0x30c);
    puVar10 = (undefined8 *)(this + 0x324);
    bVar3 = false;
LAB_00721ae0:
    updatePosition(this,param_1,param_3,param_4,false,(Vector3 *)puVar9,(Vector3 *)puVar10,bVar3);
  }
  else {
    if (this[0x40] == (TrafficVehicle)0x0) {
      if (this[0x23c] != (TrafficVehicle)param_5) {
        pAVar5 = *(AudioSource **)(this + 0x240);
        if (pAVar5 == (AudioSource *)0x0) {
          pAVar5 = *(AudioSource **)(this + 0x2c8);
          if (pAVar5 != (AudioSource *)0x0) {
            if (!param_5) goto LAB_00720900;
LAB_007208ac:
            AudioSource::setVolume(pAVar5,*(float *)(this + 0x2e0));
            fVar27 = *(float *)(this + 0x2e4);
            fVar21 = *(float *)(this + 0x300);
            fVar31 = *(float *)(this + 0x304);
LAB_0072091c:
            Sample::setFrequencyFilter(1.0,fVar27,0.0,fVar21,0.0,fVar31);
          }
        }
        else if (param_5) {
          AudioSource::setVolume(pAVar5,*(float *)(this + 0x2b8));
          Sample::setFrequencyFilter
                    (1.0,*(float *)(this + 0x2c0),0.0,*(float *)(this + 0x2f0),0.0,
                     *(float *)(this + 0x2f4));
          pAVar5 = *(AudioSource **)(this + 0x2c8);
          if (pAVar5 != (AudioSource *)0x0) goto LAB_007208ac;
        }
        else {
          AudioSource::setVolume(pAVar5,*(float *)(this + 0x2b4));
          Sample::setFrequencyFilter
                    (1.0,*(float *)(this + 700),0.0,*(float *)(this + 0x2e8),0.0,
                     *(float *)(this + 0x2ec));
          pAVar5 = *(AudioSource **)(this + 0x2c8);
          if (pAVar5 != (AudioSource *)0x0) {
LAB_00720900:
            AudioSource::setVolume(pAVar5,*(float *)(this + 0x2dc));
            fVar27 = *(float *)(this + 0x2e0);
            fVar21 = *(float *)(this + 0x2f8);
            fVar31 = *(float *)(this + 0x2fc);
            goto LAB_0072091c;
          }
        }
        this[0x23c] = (TrafficVehicle)param_5;
      }
      if (*(int *)(this + 0x210) == 1) {
        lVar15 = *(long *)(this + (ulong)*(uint *)(this + 0x1f0) * 8 + 0x1f8);
        lVar11 = *(long *)(lVar15 + 0x10);
        uVar24 = *(uint *)(lVar15 + 0x18);
        uVar1 = *(uint *)(lVar11 + 0xc);
        if (((uVar24 | *(uint *)(lVar15 + 0x1c)) & uVar1) == 0) {
          bVar3 = false;
          *(undefined4 *)(this + 0x210) = 2;
          *(uint *)(lVar11 + 0xc) = uVar24 | uVar1;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = false;
      }
      local_194 = 0.0;
      fVar27 = *(float *)(*(long *)(this + 0x1e8) + 0x44);
      fVar21 = *(float *)(this + 0x224) * *(float *)(*(long *)(this + 0x1e8) + 0x40);
      if (fVar21 <= fVar27) {
        fVar27 = fVar21;
      }
      if ((bVar3) ||
         (((param_7 != (VehicleNavigationMapGenerator *)0x0 && (*(ulonglong *)(this + 0x370) != 0))
          && (uVar12 = VehicleNavigationMapGenerator::getIsObstacleBlocked
                                 (param_7,*(ulonglong *)(this + 0x370)), (uVar12 & 1) != 0)))) {
        local_194 = 2e-05;
LAB_007209f0:
        fVar27 = (float)NEON_fmsub(local_194,param_3,*(undefined4 *)(this + 0x220));
        this[0x234] = (TrafficVehicle)0x1;
        fVar21 = 0.0;
        if (0.0001 <= fVar27) {
          fVar21 = fVar27;
        }
      }
      else {
        uVar12 = willCollide(this,*(float *)(this + 0x220),(bool)this[0x234],false,&local_194);
        if ((uVar12 & 1) != 0) goto LAB_007209f0;
        this[0x234] = (TrafficVehicle)0x0;
        fVar21 = (float)NEON_fmadd(*(undefined4 *)(this + 0x228),param_3,
                                   *(undefined4 *)(this + 0x220));
        if (fVar27 <= 0.002) {
          fVar27 = 0.002;
        }
        if (fVar27 <= fVar21) {
          fVar21 = fVar27;
        }
      }
      *(float *)(this + 0x220) = fVar21;
      if (fVar21 <= 0.0) {
        fVar27 = *(float *)(this + 0x238) + param_3;
        *(float *)(this + 0x238) = fVar27;
        if (fVar27 <= 20000.0) {
LAB_00720d64:
          this_00 = *(ScenegraphNode **)(this + 0x2c8);
          if (this_00 != (ScenegraphNode *)0x0) {
            bVar6 = *(float *)(this + 0x2d0) < fVar27 &&
                    fVar27 < *(float *)(this + 0x2d0) + *(float *)(this + 0x2d4);
            goto LAB_00720d8c;
          }
        }
        else {
          uVar23 = NEON_fmadd(*(float *)(this + 0x170) - *(float *)(param_1 + 4),
                              *(float *)(this + 0x170) - *(float *)(param_1 + 4),
                              (*(float *)(this + 0x16c) - *(float *)param_1) *
                              (*(float *)(this + 0x16c) - *(float *)param_1));
          fVar21 = (float)NEON_fmadd(*(float *)(this + 0x174) - *(float *)(param_1 + 8),
                                     *(float *)(this + 0x174) - *(float *)(param_1 + 8),uVar23);
          if (40000.0 <= fVar21) {
            pplVar19 = *(long ***)(*(long *)(this + 0x48) + 0x28);
            if (pplVar19 != (long **)(*(long *)(this + 0x48) + 0x30)) {
              do {
                this_01 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
                lVar11 = EntityRegistryManager::getEntityById
                                   (this_01,*(uint *)((long)pplVar19 + 0x1c));
                if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0x10) >> 5 & 1) != 0)) {
                  RawTransformGroup::updateWorldTransformation();
                  fVar27 = *(float *)(this + 0x16c) - *(float *)(lVar11 + 0xe8);
                  fVar21 = *(float *)(this + 0x170) - *(float *)(lVar11 + 0xec);
                  uVar23 = NEON_fmadd(fVar21,fVar21,fVar27 * fVar27);
                  fVar27 = *(float *)(this + 0x174) - *(float *)(lVar11 + 0xf0);
                  fVar27 = (float)NEON_fmadd(fVar27,fVar27,uVar23);
                  if (fVar27 < 40000.0) {
                    bVar6 = false;
                    goto LAB_00720d48;
                  }
                }
                pplVar13 = (long **)pplVar19[1];
                if ((long **)pplVar19[1] == (long **)0x0) {
                  pplVar13 = pplVar19 + 2;
                  pplVar16 = (long **)*pplVar13;
                  if ((long **)*pplVar16 != pplVar19) {
                    do {
                      plVar20 = *pplVar13;
                      pplVar13 = (long **)(plVar20 + 2);
                      pplVar16 = (long **)*pplVar13;
                    } while (*pplVar16 != plVar20);
                  }
                }
                else {
                  do {
                    pplVar16 = pplVar13;
                    pplVar13 = (long **)*pplVar16;
                  } while (*pplVar16 != (long *)0x0);
                }
                pplVar19 = pplVar16;
              } while (pplVar16 != (long **)(*(long *)(this + 0x48) + 0x30));
              bVar6 = true;
LAB_00720d48:
              fVar27 = *(float *)(this + 0x238);
              if (!bVar6) goto LAB_00720d50;
            }
          }
          else {
LAB_00720d50:
            if (fVar27 < 300000.0) goto LAB_00720d64;
          }
          reset(this,param_7);
        }
      }
      else {
        fVar27 = (float)Spline::getLength();
        fVar21 = *(float *)(this + 0x220);
        fVar31 = *(float *)(this + 0x214) + (fVar21 * param_3) / fVar27;
        *(float *)(this + 0x214) = fVar31;
        if (*(int *)(this + 0x210) == 0) {
          fVar25 = *(float *)(this + 0x21c);
          fVar22 = (float)Spline::getLength();
          if (1.0 - ((fVar21 * fVar21 * 0.5) / 2e-05 + fVar25 + 3.0) / fVar22 <= fVar31) {
            lVar11 = *(long *)(this + (ulong)*(uint *)(this + 0x1f0) * 8 + 0x1f8);
            if (lVar11 == 0) {
              lVar11 = getSuccessorRoad((TrafficVehicle *)0x0,*(Road **)(this + 0x1e8));
              *(long *)(this + (ulong)*(uint *)(this + 0x1f0) * 8 + 0x1f8) = lVar11;
            }
            uVar23 = 1;
            if (*(long *)(lVar11 + 0x10) == 0) {
              uVar23 = 2;
            }
            *(undefined4 *)(this + 0x210) = uVar23;
          }
          fVar31 = *(float *)(this + 0x214);
        }
        if (1.0 <= fVar31) {
          pRVar7 = *(Road **)(this + 0x1e8);
          lVar11 = *(long *)(pRVar7 + 0x10);
          if (lVar11 != 0) {
            *(uint *)(lVar11 + 0xc) =
                 *(uint *)(lVar11 + 0xc) & (*(uint *)(pRVar7 + 0x18) ^ 0xffffffff);
          }
          *(int *)(pRVar7 + 0x4c) = *(int *)(pRVar7 + 0x4c) + -1;
          uVar12 = (ulong)*(uint *)(this + 0x1f0);
          lVar11 = *(long *)(this + uVar12 * 8 + 0x1f8);
          *(Road **)(this + 0x1e0) = pRVar7;
          *(long *)(this + 0x1e8) = lVar11;
          if (lVar11 == 0) {
            lVar11 = getSuccessorRoad((TrafficVehicle *)0x0,pRVar7);
            uVar12 = (ulong)*(uint *)(this + 0x1f0);
            *(long *)(this + 0x1e8) = lVar11;
          }
          uVar24 = (int)uVar12 + 1;
          *(int *)(lVar11 + 0x4c) = *(int *)(lVar11 + 0x4c) + 1;
          *(undefined8 *)(this + uVar12 * 8 + 0x1f8) = 0;
          *(undefined4 *)(this + 0x210) = 0;
          *(undefined4 *)(this + 0x378) = 0;
          *(undefined8 *)(this + 0x380) = 0;
          *(uint *)(this + 0x1f0) =
               uVar24 - (uVar24 / 3 + ((uint)((ulong)uVar24 * 0xaaaaaaab >> 0x20) & 0xfffffffe));
          *(undefined4 *)(*(long *)(this + 0x30) + 0xe8) = 0;
          *(undefined4 *)(*(long *)(this + 0x38) + 0xe8) = 0;
          lVar15 = *(long *)(lVar11 + 0x10);
          if (lVar15 != 0) {
            *(uint *)(lVar15 + 0xc) = *(uint *)(lVar15 + 0xc) | *(uint *)(lVar11 + 0x18);
          }
          fVar21 = (float)Spline::getLength();
          *(float *)(this + 0x214) = (fVar27 * (*(float *)(this + 0x214) + -1.0)) / fVar21;
        }
        this_00 = *(ScenegraphNode **)(this + 0x2c8);
        *(undefined4 *)(this + 0x238) = 0;
        if (this_00 != (ScenegraphNode *)0x0) {
          bVar6 = false;
LAB_00720d8c:
          ScenegraphNode::setVisibility(this_00,bVar6);
        }
      }
      fVar27 = (float)Spline::getLength();
      fVar27 = (float)NEON_fmin(2.0 / fVar27,0x3f000000);
      fVar21 = *(float *)(this + 0x214);
      fVar31 = 1.0 - fVar27;
      if (fVar27 <= fVar21 && fVar21 == fVar31 || fVar27 <= fVar21 && fVar21 < fVar31) {
LAB_00721188:
        updateOvertake(this,param_3);
        (**(code **)(**(long **)(*(long *)(this + 0x1e8) + 8) + 0x10))
                  (*(undefined4 *)(this + 0x214),*(long **)(*(long *)(this + 0x1e8) + 8),&local_168,
                   &local_190);
        lVar11 = **(long **)(this + 0x1e8);
        RawTransformGroup::updateWorldTransformation();
        uVar23 = NEON_fmadd((float)local_168,*(undefined4 *)(lVar11 + 0xc0),
                            local_168._4_4_ * *(float *)(lVar11 + 0xd0));
        local_b0 = (float)NEON_fmadd((float)local_160,*(undefined4 *)(lVar11 + 0xe0),uVar23);
        local_b8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 200) >> 0x20) * local_168._4_4_
                            + (float)((ulong)*(undefined8 *)(lVar11 + 0xb8) >> 0x20) *
                              (float)local_168 +
                            (float)((ulong)*(undefined8 *)(lVar11 + 0xd8) >> 0x20) *
                            (float)local_160 +
                            (float)((ulong)*(undefined8 *)(lVar11 + 0xe8) >> 0x20),
                            (float)*(undefined8 *)(lVar11 + 200) * local_168._4_4_ +
                            (float)*(undefined8 *)(lVar11 + 0xb8) * (float)local_168 +
                            (float)*(undefined8 *)(lVar11 + 0xd8) * (float)local_160 +
                            (float)*(undefined8 *)(lVar11 + 0xe8));
        local_b0 = *(float *)(lVar11 + 0xf0) + local_b0;
        lVar11 = **(long **)(this + 0x1e8);
        RawTransformGroup::updateWorldTransformation();
        uVar23 = NEON_fmadd(local_190,*(undefined4 *)(lVar11 + 0xc0),
                            fStack_18c * *(float *)(lVar11 + 0xd0));
        local_c8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 200) >> 0x20) * fStack_18c +
                            (float)((ulong)*(undefined8 *)(lVar11 + 0xb8) >> 0x20) * local_190 +
                            (float)((ulong)*(undefined8 *)(lVar11 + 0xd8) >> 0x20) * local_188,
                            (float)*(undefined8 *)(lVar11 + 200) * fStack_18c +
                            (float)*(undefined8 *)(lVar11 + 0xb8) * local_190 +
                            (float)*(undefined8 *)(lVar11 + 0xd8) * local_188);
        local_c0 = (float)NEON_fmadd(local_188,*(undefined4 *)(lVar11 + 0xe0),uVar23);
      }
      else {
        this_02 = (TrafficVehicle *)Spline::getLength();
        fVar21 = fVar27 * extraout_s0;
        if (*(float *)(this + 0x214) <= fVar31) {
          plVar20 = *(long **)(this + 0x1e0);
          if (plVar20 == (long *)0x0) goto LAB_00721188;
          plVar18 = *(long **)(this + 0x1e8);
          fVar31 = (float)Spline::getLength();
          fVar22 = (float)NEON_fmin(2.0 / fVar31,0x3f000000);
          fVar31 = (float)Spline::getLength();
          uVar28 = *(undefined4 *)(this + 0x214);
          uVar23 = Spline::getLength();
          fVar25 = (float)NEON_fmadd(uVar28,uVar23,fVar22 * fVar31);
          fVar25 = fVar25 / (fVar21 + fVar22 * fVar31);
          fVar31 = 1.0 - fVar22;
        }
        else {
          plVar18 = *(long **)(this + (ulong)*(uint *)(this + 0x1f0) * 8 + 0x1f8);
          if (plVar18 == (long *)0x0) {
            plVar18 = (long *)getSuccessorRoad(this_02,*(Road **)(this + 0x1e8));
            *(long **)(this + (ulong)*(uint *)(this + 0x1f0) * 8 + 0x1f8) = plVar18;
            if (plVar18 == (long *)0x0) goto LAB_00721188;
          }
          plVar20 = *(long **)(this + 0x1e8);
          fVar22 = (float)Spline::getLength();
          fVar32 = (float)NEON_fmin(2.0 / fVar22,0x3f000000);
          fVar22 = (float)Spline::getLength();
          fVar25 = *(float *)(this + 0x214);
          uVar23 = Spline::getLength();
          fVar25 = (float)NEON_fmsub(1.0 - fVar25,uVar23,fVar21);
          fVar25 = fVar25 / (fVar21 + fVar22 * fVar32);
          fVar22 = fVar27;
          fVar27 = fVar32;
        }
        updateOvertake(this,param_3);
        (**(code **)(*(long *)plVar20[1] + 0x10))(fVar31,(long *)plVar20[1],&local_168,&local_190);
        lVar11 = *plVar20;
        RawTransformGroup::updateWorldTransformation();
        uVar23 = NEON_fmadd((float)local_168,*(undefined4 *)(lVar11 + 0xc0),
                            local_168._4_4_ * *(float *)(lVar11 + 0xd0));
        local_d0 = (float)NEON_fmadd((float)local_160,*(undefined4 *)(lVar11 + 0xe0),uVar23);
        local_d8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 200) >> 0x20) * local_168._4_4_
                            + (float)((ulong)*(undefined8 *)(lVar11 + 0xb8) >> 0x20) *
                              (float)local_168 +
                            (float)((ulong)*(undefined8 *)(lVar11 + 0xd8) >> 0x20) *
                            (float)local_160 +
                            (float)((ulong)*(undefined8 *)(lVar11 + 0xe8) >> 0x20),
                            (float)*(undefined8 *)(lVar11 + 200) * local_168._4_4_ +
                            (float)*(undefined8 *)(lVar11 + 0xb8) * (float)local_168 +
                            (float)*(undefined8 *)(lVar11 + 0xd8) * (float)local_160 +
                            (float)*(undefined8 *)(lVar11 + 0xe8));
        local_d0 = *(float *)(lVar11 + 0xf0) + local_d0;
        lVar11 = *plVar20;
        RawTransformGroup::updateWorldTransformation();
        uVar23 = NEON_fmadd(local_190,*(undefined4 *)(lVar11 + 0xc0),
                            fStack_18c * *(float *)(lVar11 + 0xd0));
        fVar29 = (float)*(undefined8 *)(lVar11 + 200) * fStack_18c +
                 (float)*(undefined8 *)(lVar11 + 0xb8) * local_190 +
                 (float)*(undefined8 *)(lVar11 + 0xd8) * local_188;
        fVar30 = (float)((ulong)*(undefined8 *)(lVar11 + 200) >> 0x20) * fStack_18c +
                 (float)((ulong)*(undefined8 *)(lVar11 + 0xb8) >> 0x20) * local_190 +
                 (float)((ulong)*(undefined8 *)(lVar11 + 0xd8) >> 0x20) * local_188;
        fVar33 = (float)NEON_fmadd(local_188,*(undefined4 *)(lVar11 + 0xe0),uVar23);
        fVar21 = (float)Spline::getLength();
        fVar32 = 1.0;
        fVar31 = 1.0;
        fVar26 = (float)NEON_fmadd(fVar33,fVar33,fVar30 * fVar30 + fVar29 * fVar29);
        if (1e-06 < fVar26) {
          fVar31 = 1.0 / SQRT(fVar26);
        }
        fVar31 = fVar22 * fVar21 * 0.8 * fVar31;
        local_e0 = fVar33 * fVar31 + local_d0;
        local_e8 = CONCAT44((float)((ulong)local_d8 >> 0x20) + fVar30 * fVar31,
                            (float)local_d8 + fVar29 * fVar31);
        (**(code **)(*(long *)plVar18[1] + 0x10))(fVar27,(long *)plVar18[1],&local_168,&local_190);
        lVar11 = *plVar18;
        RawTransformGroup::updateWorldTransformation();
        uVar23 = NEON_fmadd((float)local_168,*(undefined4 *)(lVar11 + 0xc0),
                            local_168._4_4_ * *(float *)(lVar11 + 0xd0));
        local_f0 = (float)NEON_fmadd((float)local_160,*(undefined4 *)(lVar11 + 0xe0),uVar23);
        local_f8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 200) >> 0x20) * local_168._4_4_
                            + (float)((ulong)*(undefined8 *)(lVar11 + 0xb8) >> 0x20) *
                              (float)local_168 +
                            (float)((ulong)*(undefined8 *)(lVar11 + 0xd8) >> 0x20) *
                            (float)local_160 +
                            (float)((ulong)*(undefined8 *)(lVar11 + 0xe8) >> 0x20),
                            (float)*(undefined8 *)(lVar11 + 200) * local_168._4_4_ +
                            (float)*(undefined8 *)(lVar11 + 0xb8) * (float)local_168 +
                            (float)*(undefined8 *)(lVar11 + 0xd8) * (float)local_160 +
                            (float)*(undefined8 *)(lVar11 + 0xe8));
        local_f0 = *(float *)(lVar11 + 0xf0) + local_f0;
        lVar11 = *plVar18;
        RawTransformGroup::updateWorldTransformation();
        uVar23 = NEON_fmadd(local_190,*(undefined4 *)(lVar11 + 0xc0),
                            fStack_18c * *(float *)(lVar11 + 0xd0));
        fVar22 = (float)*(undefined8 *)(lVar11 + 200) * fStack_18c +
                 (float)*(undefined8 *)(lVar11 + 0xb8) * local_190 +
                 (float)*(undefined8 *)(lVar11 + 0xd8) * local_188;
        fVar26 = (float)((ulong)*(undefined8 *)(lVar11 + 200) >> 0x20) * fStack_18c +
                 (float)((ulong)*(undefined8 *)(lVar11 + 0xb8) >> 0x20) * local_190 +
                 (float)((ulong)*(undefined8 *)(lVar11 + 0xd8) >> 0x20) * local_188;
        fVar29 = (float)NEON_fmadd(local_188,*(undefined4 *)(lVar11 + 0xe0),uVar23);
        fVar21 = (float)Spline::getLength();
        fVar31 = (float)NEON_fmadd(fVar29,fVar29,fVar26 * fVar26 + fVar22 * fVar22);
        if (1e-06 < fVar31) {
          fVar32 = 1.0 / SQRT(fVar31);
        }
        fVar32 = fVar27 * fVar21 * 0.8 * fVar32;
        local_100 = local_f0 - fVar29 * fVar32;
        local_108 = CONCAT44((float)((ulong)local_f8 >> 0x20) - fVar26 * fVar32,
                             (float)local_f8 - fVar22 * fVar32);
        CubicBezierUtil::getPosition
                  (fVar25,(Vector3 *)&local_d8,(Vector3 *)&local_e8,(Vector3 *)&local_108,
                   (Vector3 *)&local_f8,(Vector3 *)&local_b8);
        CubicBezierUtil::getDirection
                  (fVar25,(Vector3 *)&local_d8,(Vector3 *)&local_e8,(Vector3 *)&local_108,
                   (Vector3 *)&local_f8,(Vector3 *)&local_c8);
      }
      fVar27 = *(float *)(this + 0x21c) - *(float *)(this + 0x350);
      if (*(float *)(this + 0x21c) - *(float *)(this + 0x350) <= 0.0001) {
        fVar27 = 0.0001;
      }
      getSplinePositionAhead(this,fVar27,*(float *)(this + 0x214),(Vector3 *)&local_d8);
      pfVar14 = *(float **)(this + 0x380);
      if (pfVar14 == (float *)0x0) {
        lVar11 = *(long *)(this + 0x1e8);
        pfVar14 = *(float **)(lVar11 + 0x70);
        if (pfVar14 != *(float **)(lVar11 + 0x78)) {
          do {
            if (*pfVar14 < *(float *)(this + 0x214) && *(float *)(this + 0x214) < pfVar14[1]) {
              *(float **)(this + 0x380) = pfVar14;
              if (((*(float *)(lVar11 + 0x44) <= 0.0194) && (pfVar14[3] == 1.0)) &&
                 (fVar21 = (float)MathUtil::getRandom(), fVar21 < 0.1)) {
                fVar21 = *(float *)(this + 0x220) * 1500.0;
                if (fVar21 <= 12.0) {
                  fVar21 = 12.0;
                }
                fVar31 = (float)Spline::getLength();
                fVar22 = **(float **)(this + 0x380);
                fVar25 = (*(float **)(this + 0x380))[1];
                if (fVar21 / fVar31 < fVar25 - fVar22) {
                  uVar23 = MathUtil::getRandomMinMax(fVar22,fVar25 - fVar21 / fVar31);
                  *(undefined4 *)(this + 0x390) = uVar23;
                  break;
                }
              }
              *(undefined4 *)(this + 0x390) = 0x3f800000;
              break;
            }
            pfVar14 = pfVar14 + 5;
          } while (pfVar14 != *(float **)(lVar11 + 0x78));
        }
LAB_0072139c:
        lVar11 = *(long *)(this + 0x380);
        if ((lVar11 == 0) || (iVar17 = *(int *)(this + 0x378), 4 < iVar17 - 1U)) goto LAB_007215f4;
        fVar21 = *(float *)(this + 0x214);
        switch(iVar17) {
        default:
          fVar22 = (fVar21 - *(float *)(this + 0x388)) /
                   (*(float *)(this + 0x38c) - *(float *)(this + 0x388));
          fVar25 = (float)NEON_fmin(fVar22,0x3f800000);
          fVar31 = 0.0;
          break;
        case 2:
        case 5:
          fVar31 = *(float *)(lVar11 + 8);
          goto LAB_00721460;
        case 3:
          fVar31 = 3.141593;
          fVar22 = (fVar21 - *(float *)(this + 0x388)) /
                   (*(float *)(this + 0x38c) - *(float *)(this + 0x388));
          fVar25 = (float)NEON_fmin(fVar22,0x3f800000);
          fVar25 = 1.0 - fVar25;
        }
        if (0.0 <= fVar22) {
          fVar31 = fVar25 * 3.141593;
        }
        fVar31 = cosf(fVar31);
        fVar31 = *(float *)(lVar11 + 8) * (fVar31 + -1.0) * -0.5;
LAB_00721460:
        if (fVar31 != 0.0) {
          uVar23 = NEON_fmadd((float)local_c8,(float)local_c8,local_c8._4_4_ * local_c8._4_4_);
          fVar25 = (float)NEON_fmadd(local_c0,local_c0,uVar23);
          fVar22 = 1.0;
          if (1e-06 < fVar25) {
            fVar22 = 1.0 / SQRT(fVar25);
          }
          uVar28 = NEON_fmadd(local_c0 * fVar22,fVar31,(float)local_b8);
          uVar23 = NEON_fmadd(local_c0 * fVar22,fVar31,(float)local_d8);
          local_b0 = (float)NEON_fmadd(fVar22 * -(float)local_c8,fVar31,local_b0);
          local_d0 = (float)NEON_fmadd(fVar22 * -(float)local_c8,fVar31,local_d0);
          local_b8 = CONCAT44(local_b8._4_4_,uVar28);
          local_d8 = CONCAT44(local_d8._4_4_,uVar23);
          if (iVar17 == 5) {
            fVar22 = (fVar21 - *(float *)(this + 0x388)) /
                     (*(float *)(this + 0x38c) - *(float *)(this + 0x388));
            plVar18 = (long *)(*(long *)(*(long *)(this + 0x48) + 0x18) +
                              (ulong)*(uint *)(lVar11 + 0x10) * 0x88);
            plVar20 = (long *)plVar18[1];
            uVar23 = NEON_fmadd(*(float *)(this + 0x398) - *(float *)(this + 0x394),fVar22,
                                *(float *)(this + 0x394));
            (**(code **)(*plVar20 + 0x10))(uVar23,plVar20,&local_168,&local_190);
            lVar11 = *plVar18;
            RawTransformGroup::updateWorldTransformation();
            uVar23 = NEON_fmadd((float)local_168,*(undefined4 *)(lVar11 + 0xc0),
                                local_168._4_4_ * *(float *)(lVar11 + 0xd0));
            fVar21 = (float)NEON_fmadd((float)local_160,*(undefined4 *)(lVar11 + 0xe0),uVar23);
            local_168 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0xe8) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar11 + 200) >> 0x20) *
                                 local_168._4_4_ +
                                 (float)((ulong)*(undefined8 *)(lVar11 + 0xb8) >> 0x20) *
                                 (float)local_168 +
                                 (float)((ulong)*(undefined8 *)(lVar11 + 0xd8) >> 0x20) *
                                 (float)local_160,
                                 (float)*(undefined8 *)(lVar11 + 0xe8) +
                                 (float)*(undefined8 *)(lVar11 + 200) * local_168._4_4_ +
                                 (float)*(undefined8 *)(lVar11 + 0xb8) * (float)local_168 +
                                 (float)*(undefined8 *)(lVar11 + 0xd8) * (float)local_160);
            local_160 = CONCAT44(local_160._4_4_,*(float *)(lVar11 + 0xf0) + fVar21);
            RawTransformGroup::updateWorldTransformation();
            fVar21 = (float)local_b8;
            fVar31 = local_b0;
            if (0.0 < fVar22) {
              fVar21 = (float)local_168;
              fVar31 = (float)local_160;
              if (fVar22 < 1.0) {
                fVar21 = (float)local_b8 + fVar22 * ((float)local_168 - (float)local_b8);
                fVar31 = local_b0 + fVar22 * ((float)local_160 - local_b0);
              }
            }
            local_b8 = CONCAT44(local_b8._4_4_,fVar21);
            local_b0 = fVar31;
          }
        }
      }
      else {
        if ((*pfVar14 <= *(float *)(this + 0x214)) && (*(float *)(this + 0x214) <= pfVar14[1]))
        goto LAB_0072139c;
        *(undefined8 *)(this + 0x380) = 0;
        if (*(int *)(this + 0x378) != 0) {
          *(undefined4 *)(this + 0x378) = 0;
          goto LAB_0072139c;
        }
      }
LAB_007215f4:
      fVar31 = (float)local_c8 * -(local_d0 - local_b0);
      fVar21 = (float)NEON_fmadd((float)local_d8 - (float)local_b8,local_c0,fVar31);
      fVar31 = (float)NEON_fnmadd((float)local_d8 - (float)local_b8,local_c0,-fVar31);
      if (*(char *)(*(long *)(this + 0x48) + 0x88) != '\0') {
        fVar21 = fVar31;
      }
      if (fVar21 <= 0.0) {
        local_b8._0_4_ = (float)local_d8;
        local_b8._4_4_ = local_d8._4_4_;
      }
      else {
        uVar23 = NEON_fmadd((float)local_c8,(float)local_c8,local_c8._4_4_ * local_c8._4_4_);
        fVar31 = (float)NEON_fmadd(local_c0,local_c0,uVar23);
        fVar21 = 1.0;
        if (1e-06 < fVar31) {
          fVar21 = 1.0 / SQRT(fVar31);
        }
        local_b8._0_4_ = (float)local_b8 + fVar27 * (float)local_c8 * fVar21;
        local_b8._4_4_ = local_b8._4_4_ + fVar27 * local_c8._4_4_ * fVar21;
        local_d0 = local_b0 + fVar27 * local_c0 * fVar21;
        local_d8 = CONCAT44(local_b8._4_4_,(float)local_b8);
      }
      fVar21 = local_b8._4_4_ - *(float *)(this + 0x358);
      fVar31 = (float)local_b8 - *(float *)(this + 0x354);
      local_c0 = local_d0 - *(float *)(this + 0x35c);
      uVar23 = NEON_fmadd(fVar31,fVar31,fVar21 * fVar21);
      fVar25 = (float)NEON_fmadd(local_c0,local_c0,uVar23);
      fVar22 = 1.0;
      if (1e-06 < fVar25) {
        fVar22 = 1.0 / SQRT(fVar25);
      }
      local_c0 = local_c0 * fVar22;
      local_c8 = CONCAT44(fVar21 * fVar22,fVar31 * fVar22);
      local_b0 = local_d0 - fVar27 * local_c0;
      local_b8 = CONCAT44(local_b8._4_4_ - fVar27 * fVar21 * fVar22,
                          (float)local_b8 - fVar27 * fVar31 * fVar22);
      *(undefined8 *)(this + 0x354) = local_b8;
      *(float *)(this + 0x35c) = local_b0;
      iVar17 = *(int *)(*(long *)(this + 0x1e8) + 0x48);
      if ((*(long *)(this + (ulong)*(uint *)(this + 0x1f0) * 8 + 0x1f8) != 0) && (iVar17 == 0)) {
        iVar17 = *(int *)(*(long *)(this + (ulong)*(uint *)(this + 0x1f0) * 8 + 0x1f8) + 0x48);
      }
      if (*(int *)(this + 0x378) == 0) {
        this_03 = *(GsShape **)(this + 0x1b0);
        if (0 < iVar17) goto LAB_00721790;
        uVar24 = 0;
      }
      else if ((*(int *)(this + 0x378) != 4) || (0.0 < *(float *)(*(long *)(this + 0x380) + 8))) {
        this_03 = *(GsShape **)(this + 0x1b0);
        iVar17 = 1;
LAB_00721790:
        uVar24 = *(uint *)(this + 0x1cc);
      }
      else {
        this_03 = *(GsShape **)(this + 0x1b0);
        uVar24 = 0;
        iVar17 = -1;
      }
      if (((byte)this_03[0x11] >> 3 & 1) != 0) {
        local_160 = 0;
        local_168 = (ulong)uVar24;
        GsShape::setCustomShaderParameter(this_03,"lightControl",(float *)&local_168);
      }
      if (((byte)(*(GsShape **)(this + 0x1b8))[0x11] >> 3 & 1) != 0) {
        uVar24 = *(uint *)(this + 0x1d0);
        local_160 = 0;
        if (-1 < iVar17) {
          uVar24 = 0;
        }
        local_168 = (ulong)uVar24;
        GsShape::setCustomShaderParameter
                  (*(GsShape **)(this + 0x1b8),"lightControl",(float *)&local_168);
      }
      if (param_7 != (VehicleNavigationMapGenerator *)0x0) {
        fVar27 = *(float *)(this + 0x220);
        iVar17 = *(int *)(this + 0x36c);
        uVar24 = 10;
        if (0.0001 <= fVar27) {
          uVar24 = 4;
        }
        *(uint *)(this + 0x36c) = iVar17 + 1U;
        if (uVar24 < iVar17 + 1U) {
          uVar8 = *(ulonglong *)(this + 0x370);
          *(undefined4 *)(this + 0x36c) = 0;
          if (uVar8 == 0) {
            local_168 = CONCAT44(*(float *)(this + 0x21c) * 0.5,*(float *)(this + 0x348) * 0.5);
            uVar8 = VehicleNavigationMapGenerator::addObstacle
                              (param_7,true,2e-05,(Vector2 *)&local_168,3);
            fVar27 = *(float *)(this + 0x220);
            *(ulonglong *)(this + 0x370) = uVar8;
          }
          fVar21 = *(float *)(this + 0x21c) * 0.5;
          local_14c = 0;
          local_150 = local_c0;
          fVar27 = (fVar27 * fVar27 * 0.5) / 2e-05;
          uVar24 = NEON_fmadd((float)local_c8,fVar21,(float)local_b8);
          uVar28 = NEON_fmadd(local_c8._4_4_,fVar21,local_b8._4_4_);
          uVar23 = NEON_fmadd(local_c0,fVar21,local_b0);
          local_168 = (ulong)uVar24 << 0x20;
          local_160 = CONCAT44(uVar23,uVar28);
          local_158 = local_c8;
          if (fVar27 <= 1.0) {
            uVar24 = 1;
          }
          else {
            getLookAheadValues(this,*(float *)(this + 0x214),0xffffffff,fVar27,
                               (LookAheadState *)&local_190);
            fVar21 = *(float *)(this + 0x220);
            uVar23 = NEON_fmadd(local_17c,(float)local_c8,local_178 * local_c8._4_4_);
            fVar31 = (float)NEON_fmadd(local_174,local_c0,uVar23);
            local_148 = (fVar21 / 2e-05) * 0.001;
            if (0.707 <= fVar31) {
              uVar24 = 2;
              fVar21 = *(float *)(this + 0x21c) * 0.5;
              uStack_144 = NEON_fmadd(local_17c,fVar21,local_188);
              local_140 = NEON_fmadd(local_178,fVar21,uStack_184);
              uStack_13c = NEON_fmadd(local_174,fVar21,local_180);
            }
            else {
              local_118 = CONCAT44(local_178,local_17c);
              fVar22 = *(float *)(this + 0x21c) * 0.5;
              local_10c = 0;
              local_110 = local_174;
              local_188 = (float)NEON_fmadd(local_17c,fVar22,local_188);
              uStack_184 = NEON_fmadd(local_178,fVar22,uStack_184);
              local_180 = NEON_fmadd(local_174,fVar22,local_180);
              local_128 = local_148;
              fStack_124 = local_188;
              local_120 = uStack_184;
              uStack_11c = local_180;
              getLookAheadValues(this,*(float *)(this + 0x214),0xffffffff,fVar27 * 0.5,
                                 (LookAheadState *)&local_190);
              uVar24 = 3;
              fVar22 = *(float *)(this + 0x21c) * 0.5;
              local_148 = (fVar21 / 2e-05 + (*(float *)(this + 0x220) * -0.7071068) / 2e-05) * 0.001
              ;
              uStack_144 = NEON_fmadd(local_17c,fVar22,local_188);
              local_140 = NEON_fmadd(local_178,fVar22,uStack_184);
              uStack_13c = NEON_fmadd(local_174,fVar22,local_180);
            }
            fVar27 = fVar27 * 0.5;
            local_130 = fVar27 * local_174;
            local_158 = CONCAT44((float)((ulong)local_158 >> 0x20) * fVar27,
                                 (float)local_158 * fVar27);
            local_12c = 0;
            local_150 = fVar27 * local_150;
            local_138 = CONCAT44(local_178 * fVar27,local_17c * fVar27);
            if (fVar31 < 0.707) {
              local_118 = CONCAT44((float)((ulong)local_118 >> 0x20) * fVar27,
                                   (float)local_118 * fVar27);
              local_110 = fVar27 * local_110;
            }
            uVar8 = *(ulonglong *)(this + 0x370);
          }
          VehicleNavigationMapGenerator::setObstaclePoses
                    (param_7,uVar8,uVar24,(ObstaclePose *)&local_168);
        }
      }
      puVar9 = &local_b8;
      puVar10 = &local_c8;
      goto LAB_00721ae0;
    }
    if (param_2) {
      spawn(this,param_1);
      uVar4 = 1;
      goto LAB_00721ae8;
    }
  }
LAB_00721ae4:
  uVar4 = 0;
LAB_00721ae8:
  if (*(long *)(lVar2 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


