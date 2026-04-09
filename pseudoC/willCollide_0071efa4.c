// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: willCollide
// Entry Point: 0071efa4
// Size: 1872 bytes
// Signature: undefined __thiscall willCollide(TrafficVehicle * this, float param_1, bool param_2, bool param_3, float * param_4)


/* TrafficVehicle::willCollide(float, bool, bool, float&) */

void __thiscall
TrafficVehicle::willCollide
          (TrafficVehicle *this,float param_1,bool param_2,bool param_3,float *param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  TrafficVehicle TVar4;
  byte bVar5;
  int iVar6;
  Bt2ScenegraphPhysicsContext *pBVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_154;
  uint local_150;
  float local_14c;
  undefined8 local_148;
  float local_140;
  float local_13c;
  float fStack_138;
  float local_134;
  float local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4 [6];
  long local_b0;
  
  lVar2 = tpidr_el0;
  fVar26 = param_1 * param_1;
  fVar27 = param_1 * 0.5 * param_1;
  local_b0 = *(long *)(lVar2 + 0x28);
  fVar17 = fVar27 / 8e-06;
  *param_4 = -3.402823e+38;
  iVar6 = *(int *)(this + 0x360);
  *(uint *)(this + 0x360) = iVar6 + 1U;
  fVar16 = fVar17 + fVar17;
  if (*(int *)(this + 0x378) != 2) {
    fVar16 = fVar17;
  }
  uVar8 = 2;
  if (!param_2) {
    uVar8 = 4;
  }
  uVar1 = 10;
  if (0.0001 <= param_1) {
    uVar1 = uVar8;
  }
  if (uVar1 < iVar6 + 1U) {
    lVar12 = *(long *)(this + 0x188);
    *(undefined4 *)(this + 0x360) = 0;
    fVar25 = (fVar16 + 8.0 + 0.5) * 0.25;
    RawTransformGroup::updateWorldTransformation();
    getLookAheadValues(this,*(float *)(this + 0x214),0xffffffff,*(float *)(this + 0x21c),
                       (LookAheadState *)&local_150);
    fVar17 = 0.0;
    uVar13 = 0;
    uVar18 = NEON_fmadd(*(undefined4 *)(this + 0x178),local_13c,
                        fStack_138 * *(float *)(this + 0x17c));
    puVar14 = local_e4;
    pfVar15 = &local_120;
    local_f0 = local_148;
    fVar19 = (float)NEON_fmadd(*(undefined4 *)(this + 0x180),local_134,uVar18);
    local_e8 = local_140;
    local_12c = local_13c;
    fStack_128 = fStack_138;
    local_124 = local_134;
    bVar3 = 0.99875 <= fVar19;
    do {
      fVar23 = local_134;
      fVar21 = fStack_138;
      fVar19 = local_13c;
      getLookAheadValues(this,local_14c,local_150,fVar25,(LookAheadState *)&local_150);
      fVar20 = *(float *)(this + 0x17c);
      uVar18 = *(undefined4 *)(this + 0x178);
      uVar22 = *(undefined4 *)(this + 0x180);
      *pfVar15 = local_13c;
      pfVar15[1] = fStack_138;
      pfVar15[2] = local_134;
      uVar18 = NEON_fmadd(uVar18,local_13c,fStack_138 * fVar20);
      *puVar14 = local_148;
      fVar20 = (float)NEON_fmadd(uVar22,local_134,uVar18);
      *(float *)(puVar14 + 1) = local_140;
      if (fVar20 < 0.99875) {
        fVar20 = (float)local_148 - *(float *)((long)puVar14 + -0xc);
        uVar18 = NEON_fmadd(fVar19,local_13c,fVar21 * fStack_138);
        fVar19 = local_140 - *(float *)((long)puVar14 + -4);
        fVar28 = (float)NEON_fmadd(fVar23,local_134,uVar18);
        fVar24 = (float)NEON_fmadd(local_13c,fVar19,fVar20 * -local_134);
        fVar23 = (float)NEON_fmadd(local_13c,pfVar15[-1],local_134 * -pfVar15[-3]);
        fVar21 = (float)NEON_fmadd(pfVar15[-1],fVar20,fVar19 * -pfVar15[-3]);
        fVar19 = ABS(fVar21 / fVar23);
        if (ABS(fVar24 / fVar23) <= ABS(fVar21 / fVar23)) {
          fVar19 = ABS(fVar24 / fVar23);
        }
        fVar21 = SQRT((fVar28 + 1.0) / (1.0 - fVar28)) * fVar19 * 1e-05;
        fVar19 = local_130 * local_130;
        if (fVar21 <= local_130 * local_130) {
          fVar19 = fVar21;
        }
        fVar21 = fVar17;
        if (fVar19 < fVar26) {
          fVar21 = fVar25 * (float)(uVar13 & 0xffffffff);
          if (fVar21 <= 1.0) {
            fVar21 = 1.0;
          }
          fVar21 = (float)NEON_fmin((fVar26 - fVar19) / (fVar21 + fVar21),0x37a7c5ac);
          if (fVar21 <= fVar17) {
            fVar21 = fVar17;
          }
        }
        bVar3 = false;
        fVar17 = fVar21;
      }
      uVar13 = uVar13 + 1;
      puVar14 = (undefined8 *)((long)puVar14 + 0xc);
      pfVar15 = pfVar15 + 3;
    } while (uVar13 != 4);
    TVar4 = (TrafficVehicle)(0.0 < fVar17);
    if (0.0 < fVar17) {
      *param_4 = fVar17;
    }
    local_12c = *(float *)(lVar12 + 0xd8);
    fStack_128 = *(float *)(lVar12 + 0xdc);
    fVar17 = *(float *)(this + 0x348);
    local_f0 = *(undefined8 *)(lVar12 + 0xe8);
    local_e8 = *(float *)(lVar12 + 0xf0);
    local_124 = *(float *)(lVar12 + 0xe0);
    fVar19 = *(float *)(this + 0x34c);
    if ((*(uint *)(this + 0x378) < 5) &&
       ((1 << (ulong)(*(uint *)(this + 0x378) & 0x1f) & 0x1aU) != 0)) {
      local_11c = fStack_128 + local_11c;
      local_120 = local_12c + local_120;
      local_118 = local_124 + local_118;
      fVar21 = 1.0;
      uVar18 = NEON_fmadd(local_120,local_120,local_11c * local_11c);
      fVar23 = (float)NEON_fmadd(local_118,local_118,uVar18);
      fVar25 = 1.0;
      if (1e-06 < fVar23) {
        fVar21 = 1.0 / SQRT(fVar23);
      }
      local_11c = local_11c * fVar21;
      local_120 = local_120 * fVar21;
      local_118 = local_118 * fVar21;
      local_110 = local_11c + local_110;
      local_114 = local_120 + local_114;
      local_10c = local_118 + local_10c;
      uVar18 = NEON_fmadd(local_114,local_114,local_110 * local_110);
      fVar21 = (float)NEON_fmadd(local_10c,local_10c,uVar18);
      if (1e-06 < fVar21) {
        fVar25 = 1.0 / SQRT(fVar21);
      }
      local_110 = local_110 * fVar25;
      local_114 = local_114 * fVar25;
      local_10c = local_10c * fVar25;
      local_104 = local_110 + local_104;
      local_108 = local_114 + local_108;
      local_100 = local_10c + local_100;
      uVar18 = NEON_fmadd(local_108,local_108,local_104 * local_104);
      fVar23 = (float)NEON_fmadd(local_100,local_100,uVar18);
      fVar25 = 1.0;
      fVar21 = 1.0;
      if (1e-06 < fVar23) {
        fVar21 = 1.0 / SQRT(fVar23);
      }
      local_104 = local_104 * fVar21;
      local_108 = local_108 * fVar21;
      local_100 = local_100 * fVar21;
      local_f8 = local_104 + local_f8;
      local_fc = local_108 + local_fc;
      local_f4 = local_100 + local_f4;
      uVar18 = NEON_fmadd(local_fc,local_fc,local_f8 * local_f8);
      fVar21 = (float)NEON_fmadd(local_f4,local_f4,uVar18);
      if (1e-06 < fVar21) {
        fVar25 = 1.0 / SQRT(fVar21);
      }
      local_fc = local_fc * fVar25;
      local_f8 = local_f8 * fVar25;
      local_f4 = local_f4 * fVar25;
      bVar3 = false;
    }
    ScenegraphPhysicsContextManager::getInstance();
    pBVar7 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    VehicleCollisionDistanceUtil::getCollisionDistance
              (5,(float *)&local_f0,&local_12c,fVar17,fVar19,pBVar7,*(PhysicsReport **)(this + 0x28)
               ,*(uint *)(*(long *)(this + 0x48) + 0x4c) | *(uint *)(*(long *)(this + 0x48) + 0x44),
               true,false,true,bVar3);
    fVar19 = *(float *)(this + 0x214);
    fVar25 = *(float *)(this + 0x21c);
    fVar17 = (float)Spline::getLength();
    uVar13 = checkCollisionWithBlockPositions
                       (this,fVar19 + fVar25 / fVar17,fVar27 / 2e-05,fVar16 + 3.0,&local_154);
    if ((uVar13 & 1) != 0) {
      TVar4 = (TrafficVehicle)0x1;
      fVar17 = local_154 + -3.0;
      if (local_154 + -3.0 <= 0.01) {
        fVar17 = 0.01;
      }
      fVar17 = (float)NEON_fmin(fVar26 / (fVar17 + fVar17),0x37a7c5ac);
      if (fVar17 <= *param_4) {
        fVar17 = *param_4;
      }
      *param_4 = fVar17;
    }
  }
  else {
    TVar4 = (TrafficVehicle)(this[0x364] != (TrafficVehicle)0x0);
    *param_4 = *(float *)(this + 0x368);
  }
  lVar12 = *(long *)(this + 0x28);
  if (*(char *)(lVar12 + 0xec) != '\0') {
    fVar17 = 3.0;
    if (*(char *)(lVar12 + 0xee) != '\0') {
      fVar17 = 8.0;
    }
    fVar17 = *(float *)(lVar12 + 0xe8) - fVar17;
    if (fVar17 <= 0.01) {
      fVar17 = 0.01;
    }
    fVar26 = fVar26 / (fVar17 + fVar17);
    if ((*(char *)(lVar12 + 0xed) == '\0') || (fVar26 <= 2e-05)) {
      fVar16 = *(float *)(lVar12 + 0xe8) - (fVar16 + 8.0);
      if (0.5 <= fVar16) {
        fVar26 = -1e-06;
      }
      else {
        fVar26 = (float)NEON_fmin(fVar26,0x37a7c5ac);
        if (0.0 < fVar16) {
          fVar26 = (float)NEON_fmadd((fVar16 + -0.5) * (fVar26 + 1e-06) * 4.0,fVar16 + -0.5,
                                     0xb58637bd);
        }
      }
      TVar4 = (TrafficVehicle)0x1;
      if (fVar26 <= *param_4) {
        fVar26 = *param_4;
      }
      *param_4 = fVar26;
    }
    plVar10 = (long *)(*(long *)(this + 0x48) + 0x70);
    plVar11 = (long *)*plVar10;
    if (plVar11 != (long *)0x0) {
      uVar8 = *(uint *)(lVar12 + 0x114);
      plVar9 = plVar10;
      do {
        if (*(uint *)(plVar11 + 4) >= uVar8) {
          plVar9 = plVar11;
        }
        plVar11 = (long *)plVar11[*(uint *)(plVar11 + 4) < uVar8];
      } while (plVar11 != (long *)0x0);
      if (((plVar9 != plVar10) && (*(uint *)(plVar9 + 4) <= uVar8)) &&
         (*(int *)(plVar9[5] + 0x378) != 0)) {
        *param_4 = 2e-05;
      }
    }
  }
  this[0x364] = TVar4;
  *(float *)(this + 0x368) = *param_4;
  iVar6 = checkOvertake();
  if (iVar6 < 1) {
    bVar5 = iVar6 == 0 & (byte)TVar4;
  }
  else {
    bVar5 = 1;
    *param_4 = 2.4e-05;
    *(undefined4 *)(this + 0x368) = 0x37c9539c;
  }
  if (*(long *)(lVar2 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


