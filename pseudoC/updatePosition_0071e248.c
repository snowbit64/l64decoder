// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatePosition
// Entry Point: 0071e248
// Size: 2316 bytes
// Signature: undefined __thiscall updatePosition(TrafficVehicle * this, Vector3 * param_1, float param_2, float param_3, bool param_4, Vector3 * param_5, Vector3 * param_6, bool param_7)


/* TrafficVehicle::updatePosition(Vector3&, float, float, bool, Vector3&, Vector3&, bool) */

void __thiscall
TrafficVehicle::updatePosition
          (TrafficVehicle *this,Vector3 *param_1,float param_2,float param_3,bool param_4,
          Vector3 *param_5,Vector3 *param_6,bool param_7)

{
  uint uVar1;
  ScenegraphNode SVar2;
  long lVar3;
  TrafficVehicle TVar4;
  bool bVar5;
  int iVar6;
  ScenegraphNode *this_00;
  GsShape *this_01;
  Bt2ScenegraphPhysicsContext *this_02;
  TransformGroup *this_03;
  float *pfVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  TransformGroup **ppTVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  float local_98;
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  fVar19 = *(float *)(this + 0x22c);
  *(float *)(this + 0x22c) = *(float *)(this + 0x220);
  this_00 = *(ScenegraphNode **)(this + 0x1a8);
  uVar15 = NEON_fmadd(*(undefined4 *)(this + 0x230),param_3,
                      (1.0 - param_3) * (*(float *)(this + 0x220) - fVar19));
  *(undefined4 *)(this + 0x230) = uVar15;
  if (this_00 != (ScenegraphNode *)0x0) {
    if (*(float *)(this + 0x1c0) == 0.0) {
      ScenegraphNode::setVisibility(this_00,this[0x234] != (TrafficVehicle)0x0 || param_7);
    }
    else {
      fVar19 = *(float *)(this + 0x1c8);
      *(float *)(this + 0x1c8) = fVar19 + param_2;
      if (this[0x234] != (TrafficVehicle)0x0 || param_7) {
        bVar5 = true;
        *(undefined4 *)(this + 0x1c8) = 0;
        SVar2 = this_00[0x11];
      }
      else if (1000.0 <= fVar19 + param_2) {
        bVar5 = false;
        SVar2 = this_00[0x11];
      }
      else {
        bVar5 = true;
        SVar2 = this_00[0x11];
      }
      if (((byte)SVar2 >> 3 & 1) != 0) {
        pfVar7 = *(float **)(this + 0x48);
        local_d8 = 0;
        fVar19 = *(float *)(this + 0x1d4) + *pfVar7;
        fVar16 = *(float *)(this + 0x1c4);
        if (pfVar7[0x21] <= fVar19 && fVar19 == pfVar7[0x20] ||
            pfVar7[0x21] <= fVar19 && fVar19 < pfVar7[0x20]) {
          fVar16 = 0.0;
        }
        fVar19 = *(float *)(this + 0x1c0);
        if (!bVar5) {
          fVar19 = fVar16;
        }
        local_e0 = (ulong)(uint)fVar19;
        GsShape::setCustomShaderParameter((GsShape *)this_00,"lightControl",(float *)&local_e0);
      }
    }
  }
  if (*(long *)(this + 0x240) != 0) {
    uVar1 = *(uint *)(this + 0x2a8);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      fVar19 = *(float *)(this + 0x220);
      uVar17 = *(undefined4 *)(this + (ulong)(uVar1 - 1) * 4 + 0x288);
      uVar15 = *(undefined4 *)(this + (ulong)(uVar1 - 1) * 4 + 0x268);
      lVar10 = -0x100000000;
      do {
        if (fVar19 < *(float *)(this + uVar8 * 4 + 0x248)) {
          if ((int)uVar8 == 0) {
            uVar15 = *(undefined4 *)(this + uVar8 * 4 + 0x288);
            uVar17 = *(undefined4 *)(this + uVar8 * 4 + 0x268);
          }
          else {
            lVar10 = lVar10 >> 0x1e;
            fVar16 = (fVar19 - *(float *)(this + lVar10 + 0x248)) /
                     (*(float *)(this + uVar8 * 4 + 0x248) - *(float *)(this + lVar10 + 0x248));
            uVar15 = NEON_fmadd(*(float *)(this + uVar8 * 4 + 0x288) -
                                *(float *)(this + lVar10 + 0x288),fVar16,
                                *(float *)(this + lVar10 + 0x288));
            uVar17 = NEON_fmadd(*(float *)(this + uVar8 * 4 + 0x268) -
                                *(float *)(this + lVar10 + 0x268),fVar16,
                                *(float *)(this + lVar10 + 0x268));
          }
          break;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x100000000;
      } while (uVar1 != uVar8);
      uVar12 = NEON_fmin(fVar19 / *(float *)(this + 0x224),0x3f800000);
      uVar12 = NEON_fmadd(uVar12,*(float *)(this + 0x2b0) - *(float *)(this + 0x2ac),
                          *(float *)(this + 0x2ac));
      fVar19 = (float)NEON_fmadd(uVar12,uVar15,uVar17);
      Sample::setPitch((Sample *)(*(long *)(this + 0x240) + 0x158),fVar19);
    }
  }
  pfVar7 = *(float **)(this + 0x48);
  fVar19 = *(float *)(this + 0x1d4) + *pfVar7;
  fVar16 = pfVar7[0x20];
  fVar18 = pfVar7[0x21];
  TVar4 = (TrafficVehicle)(fVar16 < fVar19 || fVar19 < fVar18);
  if ((this[0x1d8] != TVar4) && (*(ScenegraphNode **)(this + 400) != (ScenegraphNode *)0x0)) {
    ScenegraphNode::setVisibility(*(ScenegraphNode **)(this + 400),(bool)TVar4);
    fVar13 = *(float *)(this + 0x1a0);
    if ((fVar13 != 0.0) &&
       ((this_01 = *(GsShape **)(this + 0x198), this_01 != (GsShape *)0x0 &&
        (((byte)this_01[0x11] >> 3 & 1) != 0)))) {
      local_d8 = 0;
      if (fVar16 >= fVar19 && fVar19 >= fVar18) {
        fVar13 = 0.0;
      }
      local_e0 = (ulong)(uint)fVar13;
      GsShape::setCustomShaderParameter(this_01,"lightControl",(float *)&local_e0);
    }
    this[0x1d8] = TVar4;
  }
  fStack_bc = *(float *)(param_6 + 4);
  local_b8 = *(float *)(param_6 + 8);
  local_c0 = *(float *)param_6;
  fVar16 = (float)NEON_fnmsub(fStack_bc,0,local_c0);
  fVar13 = (float)NEON_fmadd(local_c0,0,local_b8 * -0.0);
  fVar18 = local_b8 + fStack_bc * -0.0;
  fVar19 = (float)NEON_fmadd(local_b8,fVar18,fVar16 * -local_c0);
  fVar16 = (float)NEON_fmadd(fStack_bc,fVar16,fVar13 * -local_b8);
  fVar18 = (float)NEON_fmadd(local_c0,fVar13,fVar18 * -fStack_bc);
  uVar15 = NEON_fmadd(fVar16,fVar16,fVar19 * fVar19);
  uVar17 = NEON_fmadd(*(float *)(this + 0x170) - *(float *)(param_1 + 4),
                      *(float *)(this + 0x170) - *(float *)(param_1 + 4),
                      (*(float *)(this + 0x16c) - *(float *)param_1) *
                      (*(float *)(this + 0x16c) - *(float *)param_1));
  fVar21 = (float)NEON_fmadd(fVar18,fVar18,uVar15);
  fVar13 = (float)NEON_fmadd(*(float *)(this + 0x174) - *(float *)(param_1 + 8),
                             *(float *)(this + 0x174) - *(float *)(param_1 + 8),uVar17);
  fVar20 = 1.0;
  if (1e-06 < fVar21) {
    fVar20 = 1.0 / SQRT(fVar21);
  }
  fVar16 = fVar16 * fVar20;
  fVar19 = fVar19 * fVar20;
  fVar18 = fVar18 * fVar20;
  if (fVar13 < 7481.0) {
    fVar21 = 1.0;
    fVar20 = (fVar13 + -7225.0) * 0.00390625;
    local_e0._0_4_ = (undefined4)*(undefined8 *)param_5;
    local_e0._4_4_ = (undefined4)((ulong)*(undefined8 *)param_5 >> 0x20);
    uVar15 = NEON_fmadd(fVar16,0x3fc00000,(undefined4)local_e0);
    uVar17 = NEON_fmadd(fVar19,0x3fc00000,local_e0._4_4_);
    if (fVar13 <= 7225.0) {
      fVar20 = 0.0;
    }
    uVar12 = NEON_fmadd(fVar18,0x3fc00000,*(undefined4 *)(param_5 + 8));
    local_e0 = CONCAT44(uVar17,uVar15);
    local_98 = -fVar18;
    local_d8 = CONCAT44(local_d8._4_4_,uVar12);
    fVar13 = 1.0 - fVar20;
    local_a0 = CONCAT44(-fVar19,-fVar16);
    ScenegraphPhysicsContextManager::getInstance();
    this_02 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    iVar6 = Bt2ScenegraphPhysicsContext::raycastShapes
                      (this_02,(Vector3 *)&local_e0,(Vector3 *)&local_a0,
                       (IRaycastReport *)(this + 8),3.0,true,
                       *(uint *)(*(long *)(this + 0x48) + 0x40),true,true,0);
    if (iVar6 != 0) {
      *(ulong *)param_5 =
           CONCAT44((float)((ulong)*(undefined8 *)param_5 >> 0x20) * fVar20,
                    (float)*(undefined8 *)param_5 * fVar20);
      *(float *)(param_5 + 8) = fVar20 * *(float *)(param_5 + 8);
      fVar14 = (float)*(undefined8 *)(this + 0x10) * fVar13;
      *(ulong *)(this + 0x18) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) * fVar13,
                    (float)*(undefined8 *)(this + 0x18) * fVar13);
      *(ulong *)(this + 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * fVar13,fVar14);
      *(ulong *)(this + 0x20) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) * fVar13,
                    (float)*(undefined8 *)(this + 0x20) * fVar13);
      *(float *)param_5 = fVar14 + *(float *)param_5;
      *(float *)(param_5 + 4) = *(float *)(this + 0x14) + *(float *)(param_5 + 4);
      *(float *)(param_5 + 8) = *(float *)(this + 0x18) + *(float *)(param_5 + 8);
      fVar19 = fVar20 * fVar19 + *(float *)(this + 0x20);
      fVar16 = fVar20 * fVar16 + *(float *)(this + 0x1c);
      fVar18 = fVar20 * fVar18 + *(float *)(this + 0x24);
      uVar15 = NEON_fmadd(fVar16,fVar16,fVar19 * fVar19);
      fVar20 = (float)NEON_fmadd(fVar18,fVar18,uVar15);
      if (1e-06 < fVar20) {
        fVar21 = 1.0 / SQRT(fVar20);
      }
      fVar16 = fVar16 * fVar21;
      fVar19 = fVar19 * fVar21;
      fVar18 = fVar18 * fVar21;
    }
    fVar13 = fVar13 * *(float *)(this + 0x230) * 25.0;
    local_c0 = *(float *)param_6 + fVar16 * fVar13;
    fStack_bc = fVar19 * fVar13 + *(float *)(param_6 + 4);
    local_b8 = fVar18 * fVar13 + *(float *)(param_6 + 8);
    *(float *)param_6 = local_c0;
    *(float *)(param_6 + 4) = fStack_bc;
    *(float *)(param_6 + 8) = local_b8;
  }
  if (param_4) {
    lVar10 = RawTransformGroup::getPhysicsObject();
    if (lVar10 != 0) {
      Bt2PhysicsRBObject::setKinematicTeleportOnce();
    }
    *(undefined4 *)(this + 0x168) = 0x7f7fffff;
    local_c0 = *(float *)param_6;
    fStack_bc = *(float *)(param_6 + 4);
    local_b8 = *(float *)(param_6 + 8);
  }
  fVar20 = 1.0;
  local_c4 = 0;
  uVar15 = NEON_fmadd(local_c0,local_c0,fStack_bc * fStack_bc);
  local_b4 = 0;
  fVar21 = (float)NEON_fmadd(local_b8,local_b8,uVar15);
  fVar13 = 1.0;
  local_a4 = 0x3f800000;
  if (1e-06 < fVar21) {
    fVar20 = 1.0 / SQRT(fVar21);
  }
  local_b8 = local_b8 * fVar20;
  fStack_bc = fStack_bc * fVar20;
  local_c0 = local_c0 * fVar20;
  fVar20 = (float)NEON_fmadd(fVar18,local_c0,local_b8 * -fVar16);
  fVar18 = (float)NEON_fmadd(fVar19,local_b8,fStack_bc * -fVar18);
  fVar19 = (float)NEON_fmadd(fVar16,fStack_bc,local_c0 * -fVar19);
  uVar15 = NEON_fmadd(fVar18,fVar18,fVar20 * fVar20);
  fVar16 = (float)NEON_fmadd(fVar19,fVar19,uVar15);
  if (1e-06 < fVar16) {
    fVar13 = 1.0 / SQRT(fVar16);
  }
  fVar18 = fVar18 * fVar13;
  fVar20 = fVar20 * fVar13;
  fVar19 = fVar19 * fVar13;
  local_b0 = *(undefined8 *)param_5;
  local_d8 = (ulong)(uint)fVar19;
  local_d0 = NEON_fmadd(fStack_bc,fVar19,fVar20 * -local_b8);
  local_a8 = *(undefined4 *)(param_5 + 8);
  uStack_cc = NEON_fmadd(local_b8,fVar18,fVar19 * -local_c0);
  local_c8 = NEON_fmadd(local_c0,fVar20,fVar18 * -fStack_bc);
  local_e0 = CONCAT44(fVar20,fVar18);
  RawTransformGroup::setTransformation
            (*(RawTransformGroup **)(this + 0x50),(Matrix4x4 *)&local_e0,0);
  uVar15 = NEON_fmadd(*(float *)(param_5 + 4) - *(float *)(this + 0x170),
                      *(float *)(param_5 + 4) - *(float *)(this + 0x170),
                      (*(float *)param_5 - *(float *)(this + 0x16c)) *
                      (*(float *)param_5 - *(float *)(this + 0x16c)));
  fVar16 = (float)NEON_fmadd(*(float *)(param_5 + 8) - *(float *)(this + 0x174),
                             *(float *)(param_5 + 8) - *(float *)(this + 0x174),uVar15);
  fVar16 = SQRT(fVar16);
  fVar19 = 0.0;
  if (0.01 < fVar16) {
    fVar21 = *(float *)(this + 0x180);
    uVar17 = *(undefined4 *)(this + 0x178);
    *(undefined4 *)(this + 0x168) = 0x7f7fffff;
    fVar19 = *(float *)(param_6 + 8);
    uVar15 = *(undefined4 *)param_6;
    fVar20 = (float)NEON_fmadd(uVar17,uVar17,fVar21 * fVar21);
    fVar13 = (float)NEON_fmadd(uVar15,uVar15,fVar19 * fVar19);
    fVar18 = (float)NEON_fmadd(uVar15,uVar17,fVar19 * fVar21);
    fVar18 = fVar18 / (SQRT(fVar13) * SQRT(fVar20));
    fVar13 = (float)NEON_fmin(fVar18,0x3f800000);
    fVar19 = -1.0;
    if (-1.0 <= fVar18) {
      fVar19 = fVar13;
    }
    fVar19 = acosf(fVar19);
    if (0.001 < ABS(fVar19)) {
      fVar19 = sinf(fVar19 * 0.5);
      fVar19 = fVar16 / (fVar19 + fVar19);
      *(float *)(this + 0x168) = fVar19;
      fVar18 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 8),uVar17,fVar21 * -*(float *)param_6);
      if (0.0 < fVar18) {
        *(float *)(this + 0x168) = -fVar19;
      }
    }
    uVar9 = *(undefined8 *)param_5;
    *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_5 + 8);
    *(undefined8 *)(this + 0x16c) = uVar9;
    uVar9 = *(undefined8 *)param_6;
    *(undefined4 *)(this + 0x180) = *(undefined4 *)(param_6 + 8);
    *(undefined8 *)(this + 0x178) = uVar9;
    fVar19 = fVar16;
  }
  if (*(int *)(this + 0x5c) != 0) {
    uVar8 = 0;
    do {
      ppTVar11 = (TransformGroup **)(this + uVar8 * 0x28 + 0x68);
      local_a0._4_4_ = (undefined4)((ulong)*(undefined8 *)(this + uVar8 * 0x28 + 0x78) >> 0x20);
      local_98 = *(float *)(this + uVar8 * 0x28 + 0x80);
      uVar15 = NEON_fmadd(*(undefined4 *)(this + 0x230),0xc2a00000,local_a0._4_4_);
      local_a0 = CONCAT44(uVar15,(int)*(undefined8 *)(this + uVar8 * 0x28 + 0x78));
      TransformGroup::setTranslation(*ppTVar11,(Vector3 *)&local_a0);
      for (fVar16 = *(float *)(this + uVar8 * 4 + 0x150) +
                    fVar19 / *(float *)(this + uVar8 * 0x28 + 0x70); 6.283185 < fVar16;
          fVar16 = fVar16 + -6.283185) {
      }
      pfVar7 = (float *)(this + uVar8 * 4 + 0x150);
      *pfVar7 = fVar16;
      if (fVar16 < 0.0) {
        do {
          fVar16 = fVar16 + 6.283185;
        } while (fVar16 < 0.0);
        *pfVar7 = fVar16;
      }
      fVar18 = 0.0;
      if (*(float *)(this + 0x168) != 3.402823e+38) {
        fVar18 = atanf(*(float *)(this + uVar8 * 0x28 + 0x74) / *(float *)(this + 0x168));
      }
      uVar17 = NEON_fmin(fVar18,0x3f490fdb);
      this_03 = *(TransformGroup **)(this + uVar8 * 0x28 + 0x60);
      uVar15 = 0xbf490fdb;
      if (-0.7853982 <= fVar18) {
        uVar15 = uVar17;
      }
      if (this_03 == *ppTVar11) {
        if (((byte)this_03[0x41] >> 3 & 1) != 0) {
          TransformGroup::updateEulerFromMatrix();
          fVar16 = *pfVar7;
          this_03 = *(TransformGroup **)(this + uVar8 * 0x28 + 0x60);
        }
        pfVar7 = &local_f0;
        local_e8 = 0;
        local_f0 = fVar16;
        local_ec = uVar15;
      }
      else {
        local_ec = 0;
        local_e8 = 0;
        local_f0 = fVar16;
        TransformGroup::setRotation(this_03,(Vector3 *)&local_f0);
        this_03 = *ppTVar11;
        pfVar7 = &local_100;
        local_100 = 0.0;
        local_f8 = 0;
        local_fc = uVar15;
      }
      TransformGroup::setRotation(this_03,(Vector3 *)pfVar7);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(this + 0x5c));
  }
  if (*(long *)(lVar3 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


