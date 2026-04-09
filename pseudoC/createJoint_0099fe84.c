// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createJoint
// Entry Point: 0099fe84
// Size: 3380 bytes
// Signature: undefined __thiscall createJoint(Bt2ScenegraphPhysicsContext * this, uint param_1, uint param_2, btRigidBody * param_3, btRigidBody * param_4, IJointBreakReport * param_5, Vector3 * param_6, Vector3 * param_7, Vector3 * param_8, Vector3 * param_9, Vector3 * param_10, Vector3 * param_11, float * param_12, float * param_13, float * param_14, float * param_15, float * param_16, float * param_17, float * param_18, float * param_19, float * param_20, float * param_21, float param_22, float param_23, float * param_24, float * param_25, float * param_26, float * param_27, float * param_28, float * param_29, float * param_30, float * param_31, float * param_32, float * param_33, uint param_34)


/* Bt2ScenegraphPhysicsContext::createJoint(unsigned int, unsigned int, btRigidBody*, btRigidBody*,
   IJointBreakReport*, Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&, Vector3
   const&, Vector3 const&, float const*, float const*, float const*, float const*, float const*,
   float const*, float const*, float const*, float const*, float const*, float, float, float const*,
   float const*, float const*, float const*, float const*, float const*, float const*, float const*,
   float const*, float const*, unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::createJoint
          (Bt2ScenegraphPhysicsContext *this,uint param_1,uint param_2,btRigidBody *param_3,
          btRigidBody *param_4,IJointBreakReport *param_5,Vector3 *param_6,Vector3 *param_7,
          Vector3 *param_8,Vector3 *param_9,Vector3 *param_10,Vector3 *param_11,float *param_12,
          float *param_13,float *param_14,float *param_15,float *param_16,float *param_17,
          float *param_18,float *param_19,float *param_20,float *param_21,float param_22,
          float param_23,float *param_24,float *param_25,float *param_26,float *param_27,
          float *param_28,float *param_29,float *param_30,float *param_31,float *param_32,
          float *param_33,uint param_34)

{
  uint uVar1;
  long lVar2;
  Bt2D6Joint *pBVar3;
  long *plVar4;
  btRigidBody *pbVar5;
  undefined8 *puVar6;
  long lVar7;
  IJointBreakReport *pIVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  float *pfVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  Bt2D6Joint *local_140;
  uint local_134;
  float local_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  local_e0 = *(float *)(param_7 + 4);
  local_d0 = *(float *)(param_7 + 8);
  fStack_dc = *(float *)(param_8 + 4);
  fStack_cc = *(float *)(param_8 + 8);
  local_120 = *(float *)(param_10 + 4);
  local_110 = *(float *)(param_10 + 8);
  fVar33 = *(float *)param_8;
  fVar32 = *(float *)param_7;
  local_130 = *(float *)param_10;
  local_b8 = *(float *)(param_6 + 8);
  local_11c = *(float *)(param_11 + 4);
  fStack_10c = *(float *)(param_11 + 8);
  uVar35 = NEON_fmadd(local_e0,fStack_cc,fStack_dc * -local_d0);
  local_c8 = NEON_fmadd(fVar32,fStack_dc,fVar33 * -local_e0);
  local_c0 = *(float *)param_6;
  fStack_bc = *(float *)(param_6 + 4);
  local_d8 = (float)NEON_fmadd(local_d0,fVar33,fStack_cc * -fVar32);
  fStack_12c = *(float *)param_11;
  local_128 = NEON_fmadd(local_120,fStack_10c,local_11c * -local_110);
  local_118 = (float)NEON_fmadd(local_110,fStack_12c,fStack_10c * -local_130);
  local_f8 = *(float *)(param_9 + 8);
  local_100 = *(float *)param_9;
  local_fc = *(float *)(param_9 + 4);
  local_108 = NEON_fmadd(local_130,local_11c,fStack_12c * -local_120);
  local_124 = 0;
  local_114 = 0;
  local_104 = 0;
  local_f4 = 0;
  local_134 = param_1;
  local_f0 = fVar32;
  fStack_ec = fVar33;
  local_e8 = uVar35;
  if (param_3 == (btRigidBody *)0x0) {
    if (param_4 != (btRigidBody *)0x0) goto LAB_009a0174;
  }
  else {
    if ((((byte)param_3[0xe0] & 1) == 0) && (lVar7 = *(long *)(param_3 + 0x228), lVar7 != 0)) {
      uVar23 = *(undefined4 *)(lVar7 + 0x60);
      uVar20 = *(undefined4 *)(lVar7 + 0x58);
      fVar26 = *(float *)(lVar7 + 0x5c);
      uVar27 = *(undefined4 *)(lVar7 + 0x68);
      fVar28 = *(float *)(lVar7 + 0x6c);
      uVar29 = *(undefined4 *)(lVar7 + 0x78);
      fVar30 = *(float *)(lVar7 + 0x7c);
      uVar22 = NEON_fmadd(fVar32,uVar20,local_e0 * fVar26);
      uVar24 = NEON_fmadd(fVar33,uVar20,fVar26 * fStack_dc);
      fVar31 = local_e0 * fVar30;
      uVar19 = *(undefined4 *)(lVar7 + 0x70);
      uVar21 = NEON_fmadd(uVar35,uVar20,fVar26 * local_d8);
      uVar25 = NEON_fmadd(fVar32,uVar27,local_e0 * fVar28);
      fVar34 = fStack_dc * fVar30;
      local_f0 = (float)NEON_fmadd(local_d0,uVar23,uVar22);
      fStack_ec = (float)NEON_fmadd(fStack_cc,uVar23,uVar24);
      local_e8 = NEON_fmadd(local_c8,uVar23,uVar21);
      local_e0 = (float)NEON_fmadd(local_d0,uVar19,uVar25);
      uVar24 = NEON_fmadd(fVar33,uVar27,fStack_dc * fVar28);
      uVar22 = NEON_fmadd(uVar35,uVar27,local_d8 * fVar28);
      uVar21 = NEON_fmadd(fVar32,uVar29,fVar31);
      fVar32 = local_d8 * fVar30;
      uVar37 = *(undefined4 *)(lVar7 + 0x80);
      fStack_dc = (float)NEON_fmadd(fStack_cc,uVar19,uVar24);
      uVar24 = NEON_fmadd(fVar33,uVar29,fVar34);
      local_d8 = (float)NEON_fmadd(local_c8,uVar19,uVar22);
      uVar22 = NEON_fmadd(uVar35,uVar29,fVar32);
      local_d0 = (float)NEON_fmadd(local_d0,uVar37,uVar21);
      uVar25 = NEON_fmadd(local_c0,uVar29,fVar30 * fStack_bc);
      fStack_cc = (float)NEON_fmadd(fStack_cc,uVar37,uVar24);
      uVar21 = NEON_fmadd(local_c0,uVar27,fVar28 * fStack_bc);
      uVar35 = NEON_fmadd(local_c0,uVar20,fVar26 * fStack_bc);
      local_c8 = NEON_fmadd(local_c8,uVar37,uVar22);
      fStack_bc = (float)NEON_fmadd(local_b8,uVar19,uVar21);
      fVar32 = (float)NEON_fmadd(local_b8,uVar37,uVar25);
      local_c0 = (float)NEON_fmadd(local_b8,uVar23,uVar35);
      local_b8 = fVar32 + *(float *)(lVar7 + 0x90);
      local_c0 = *(float *)(lVar7 + 0x88) + local_c0;
      fStack_bc = fStack_bc + *(float *)(lVar7 + 0x8c);
    }
    local_b4 = 0;
    local_c4 = 0;
    local_d4 = 0;
    local_e4 = 0;
    if (param_4 == (btRigidBody *)0x0) {
      param_4 = (btRigidBody *)btTypedConstraint::getFixedBody();
      goto LAB_009a0280;
    }
LAB_009a0174:
    local_b4 = 0;
    local_c4 = 0;
    local_d4 = 0;
    local_e4 = 0;
    if ((((byte)param_4[0xe0] & 1) == 0) && (lVar7 = *(long *)(param_4 + 0x228), lVar7 != 0)) {
      uVar19 = *(undefined4 *)(lVar7 + 0x58);
      fVar32 = *(float *)(lVar7 + 0x5c);
      uVar21 = *(undefined4 *)(lVar7 + 0x68);
      fVar33 = *(float *)(lVar7 + 0x6c);
      uVar36 = *(undefined4 *)(lVar7 + 0x78);
      fVar26 = *(float *)(lVar7 + 0x7c);
      uVar27 = *(undefined4 *)(lVar7 + 0x60);
      uVar20 = NEON_fmadd(fStack_12c,uVar19,fVar32 * local_11c);
      uVar37 = *(undefined4 *)(lVar7 + 0x70);
      uVar38 = NEON_fmadd(fStack_12c,uVar21,local_11c * fVar33);
      uVar23 = NEON_fmadd(local_130,uVar19,local_120 * fVar32);
      uVar35 = NEON_fmadd(fStack_12c,uVar36,local_11c * fVar26);
      uVar29 = NEON_fmadd(local_130,uVar21,local_120 * fVar33);
      uVar22 = NEON_fmadd(local_130,uVar36,local_120 * fVar26);
      uVar24 = *(undefined4 *)(lVar7 + 0x80);
      uVar25 = NEON_fmadd(local_128,uVar19,fVar32 * local_118);
      fStack_12c = (float)NEON_fmadd(fStack_10c,uVar27,uVar20);
      local_11c = (float)NEON_fmadd(fStack_10c,uVar37,uVar38);
      uVar20 = NEON_fmadd(local_100,uVar19,fVar32 * local_fc);
      fStack_10c = (float)NEON_fmadd(fStack_10c,uVar24,uVar35);
      uVar35 = NEON_fmadd(local_100,uVar21,fVar33 * local_fc);
      uVar19 = NEON_fmadd(local_100,uVar36,fVar26 * local_fc);
      local_130 = (float)NEON_fmadd(local_110,uVar27,uVar23);
      local_120 = (float)NEON_fmadd(local_110,uVar37,uVar29);
      uVar23 = NEON_fmadd(local_128,uVar21,local_118 * fVar33);
      uVar21 = NEON_fmadd(local_128,uVar36,local_118 * fVar26);
      local_110 = (float)NEON_fmadd(local_110,uVar24,uVar22);
      local_100 = (float)NEON_fmadd(local_f8,uVar27,uVar20);
      local_fc = (float)NEON_fmadd(local_f8,uVar37,uVar35);
      local_f8 = (float)NEON_fmadd(local_f8,uVar24,uVar19);
      local_128 = NEON_fmadd(local_108,uVar27,uVar25);
      local_118 = (float)NEON_fmadd(local_108,uVar37,uVar23);
      local_108 = NEON_fmadd(local_108,uVar24,uVar21);
      local_f8 = local_f8 + *(float *)(lVar7 + 0x90);
      local_100 = *(float *)(lVar7 + 0x88) + local_100;
      local_fc = local_fc + *(float *)(lVar7 + 0x8c);
    }
    local_f4 = 0;
    local_104 = 0;
    local_114 = 0;
    local_124 = 0;
    if (param_3 != (btRigidBody *)0x0) goto LAB_009a0280;
  }
  local_b4 = 0;
  local_c4 = 0;
  local_d4 = 0;
  local_e4 = 0;
  local_f4 = 0;
  local_104 = 0;
  local_114 = 0;
  local_124 = 0;
  param_3 = (btRigidBody *)btTypedConstraint::getFixedBody();
LAB_009a0280:
  pBVar3 = (Bt2D6Joint *)btAlignedAllocInternal(0x370,0x10);
                    /* try { // try from 009a0294 to 009a02ab has its CatchHandler @ 009a0bd4 */
  Bt2D6Joint::Bt2D6Joint(pBVar3,param_3,param_4,(btTransform *)&local_f0,(btTransform *)&local_130);
  *(float *)(pBVar3 + 200) = param_22;
  uVar18 = 0;
  lVar7 = 0;
  pfVar16 = (float *)(pBVar3 + 0x1f0);
  fVar32 = *(float *)(*(long *)(this + 0x30) + 0x9c);
  pIVar8 = *(IJointBreakReport **)(this + 0x128);
  local_140 = pBVar3;
  do {
    uVar10 = (uint)lVar7;
    if (((param_2 >> (ulong)(uVar10 & 0x1f)) >> 3 & 1) == 0) {
      *(undefined8 *)(pfVar16 + -0xc) = 0xbf8000003f800000;
    }
    else {
      fVar33 = -param_13[lVar7];
      fVar26 = -param_12[lVar7];
      if (param_12[lVar7] <= param_13[lVar7]) {
        fVar28 = fmodf(fVar33,6.283185);
        fVar33 = fVar28 + 6.283185;
        if (-6.283185 <= fVar28) {
          fVar33 = fVar28;
        }
        fVar26 = fmodf(fVar26,6.283185);
        fVar28 = fVar26 + 6.283185;
        if (-6.283185 <= fVar26) {
          fVar28 = fVar26;
        }
        fVar26 = fVar28 + 6.283185;
        if (fVar33 <= fVar28) {
          fVar26 = fVar28;
        }
        if (fVar26 < fVar33 + 0.001) {
          fVar33 = (fVar33 + fVar26) * 0.5;
          fVar26 = fVar33;
        }
      }
      pfVar16[-0xc] = fVar33;
      pfVar16[-0xb] = fVar26;
      fVar33 = param_14[lVar7];
      if (0.0 < fVar33) {
        uVar1 = 0xc0 << (ulong)(uVar18 & 0x1f);
        if (fVar33 <= 0.0) {
          *(uint *)(pBVar3 + 0x36c) = *(uint *)(pBVar3 + 0x36c) & (uVar1 ^ 0xffffffff);
        }
        else {
          fVar26 = param_15[lVar7];
          *(uint *)(pBVar3 + 0x36c) = *(uint *)(pBVar3 + 0x36c) | uVar1;
          fVar26 = (float)NEON_fmadd(fVar32,fVar33,fVar26);
          fVar26 = 1.0 / (fVar32 * fVar26);
          pfVar16[-8] = fVar32 * fVar32 * fVar33 * fVar26;
          pfVar16[-7] = fVar26;
        }
      }
    }
    fVar33 = 3.402823e+38;
    if (0.0 <= param_16[lVar7]) {
      fVar33 = fVar32 * param_16[lVar7];
    }
    pfVar16[-9] = fVar33;
    if (((param_2 >> (ulong)(uVar10 & 0x1f)) >> 0xe & 1) != 0) {
      pfVar16[-3] = param_33[lVar7];
      fVar33 = param_31[lVar7];
      *(Bt2D6Joint *)(pfVar16 + -4) = (Bt2D6Joint)0x1;
      pfVar16[-6] = 0.9;
      pfVar16[-2] = fVar33;
    }
    if (((param_2 >> (ulong)(uVar10 & 0x1f)) >> 0x11 & 1) != 0) {
      pfVar16[-2] = param_31[lVar7];
      fVar33 = param_32[lVar7];
      *(Bt2D6Joint *)(pfVar16 + -4) = (Bt2D6Joint)0x1;
      *(Bt2D6Joint *)(pfVar16 + -1) = (Bt2D6Joint)0x1;
      *pfVar16 = fVar33;
      fVar33 = (float)NEON_fmadd(fVar32,param_29[lVar7],param_30[lVar7]);
      fVar33 = 1.0 / (fVar32 * fVar33);
      pfVar16[-6] = fVar32 * param_29[lVar7] * fVar33;
      pfVar16[-5] = fVar33;
    }
    lVar7 = lVar7 + 1;
    uVar18 = uVar18 + 2;
    pfVar16 = pfVar16 + 0x11;
  } while (lVar7 != 3);
  Bt2D6Joint::selectBestRotateOrder();
  uVar18 = 0;
  lVar7 = 0;
  lVar12 = 0xcc;
  lVar9 = *(long *)(this + 0x30);
  do {
    uVar10 = (uint)lVar7;
    if ((param_2 >> (ulong)(uVar10 & 0x1f) & 1) == 0) {
      *(undefined4 *)(local_140 + lVar12) = 0x3f800000;
      *(undefined4 *)((long)(local_140 + lVar12) + 0x10) = 0xbf800000;
    }
    else {
      fVar28 = param_17[lVar7];
      fVar30 = param_18[lVar7];
      fVar26 = (fVar28 + fVar30) * 0.5;
      fVar33 = fVar26;
      if (fVar30 < fVar28 || fVar28 + 0.0001 <= fVar30) {
        fVar26 = fVar30;
        fVar33 = fVar28;
      }
      *(float *)(local_140 + lVar12) = fVar33;
      *(float *)((long)(local_140 + lVar12) + 0x10) = fVar26;
      fVar33 = param_19[lVar7];
      if (0.0 < fVar33) {
        uVar1 = 3 << (ulong)(uVar18 & 0x1f);
        if (fVar33 <= 0.0) {
          *(uint *)(local_140 + 0x36c) = *(uint *)(local_140 + 0x36c) & (uVar1 ^ 0xffffffff);
        }
        else {
          fVar26 = param_20[lVar7];
          *(uint *)(local_140 + 0x36c) = *(uint *)(local_140 + 0x36c) | uVar1;
          fVar26 = (float)NEON_fmadd(fVar32,fVar33,fVar26);
          fVar26 = 1.0 / (fVar32 * fVar26);
          *(float *)(local_140 + lVar12 + 0x50) = fVar26;
          *(float *)(local_140 + lVar12 + 0x40) = fVar32 * fVar32 * fVar33 * fVar26;
        }
      }
    }
    fVar33 = 3.402823e+38;
    if (0.0 <= param_21[lVar7]) {
      fVar33 = fVar32 * param_21[lVar7];
    }
    *(float *)(local_140 + lVar12 + 0x30) = fVar33;
    if (((param_2 >> (ulong)(uVar10 & 0x1f)) >> 8 & 1) != 0) {
      *(float *)(local_140 + lVar12 + 0x98) = param_28[lVar7];
      *(float *)(local_140 + lVar12 + 0xa8) = param_26[lVar7];
      local_140[lVar7 + 0x14c] = (Bt2D6Joint)0x1;
      *(undefined4 *)(local_140 + lVar12 + 0x60) = 0x3f666666;
    }
    if (((param_2 >> (ulong)(uVar10 & 0x1f)) >> 0xb & 1) != 0) {
      *(float *)(local_140 + lVar12 + 0xa8) = param_26[lVar7];
      *(float *)(local_140 + lVar12 + 0x88) = param_27[lVar7];
      local_140[lVar7 + 0x14c] = (Bt2D6Joint)0x1;
      local_140[lVar7 + 0x14f] = (Bt2D6Joint)0x1;
      fVar33 = param_24[lVar7];
      fVar28 = *(float *)(lVar9 + 0x9c);
      fVar26 = (float)NEON_fmadd(fVar28,fVar33,param_25[lVar7]);
      fVar26 = 1.0 / (fVar28 * fVar26);
      *(float *)(local_140 + lVar12 + 0x70) = fVar26;
      *(float *)(local_140 + lVar12 + 0x60) = fVar33 * fVar28 * fVar26;
    }
    lVar7 = lVar7 + 1;
    uVar18 = uVar18 + 2;
    lVar12 = lVar12 + 4;
  } while (lVar7 != 3);
  if (param_5 != (IJointBreakReport *)0x0) {
    pIVar8 = param_5;
  }
  if ((param_2 >> 6 & 1) != 0) {
    *(float *)(local_140 + 0x18) = *(float *)(lVar9 + 0x9c) * param_23;
    SimpleArray<Bt2D6Joint*,false,16u>::push_back
              ((SimpleArray<Bt2D6Joint*,false,16u> *)(this + 0x248),&local_140);
  }
  uVar18 = local_134;
  pBVar3 = local_140;
  puVar15 = (undefined8 *)(this + 0x1c8);
  puVar17 = *(undefined8 **)(this + 0x1c8);
  puVar6 = puVar15;
  while (puVar17 != (undefined8 *)0x0) {
    while (puVar6 = puVar17, local_134 < *(uint *)(puVar6 + 4)) {
      puVar15 = puVar6;
      puVar17 = (undefined8 *)*puVar6;
      if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)*puVar6;
        goto joined_r0x009a078c;
      }
    }
    if (local_134 <= *(uint *)(puVar6 + 4)) break;
    puVar15 = puVar6 + 1;
    puVar17 = (undefined8 *)*puVar15;
  }
  puVar17 = (undefined8 *)*puVar15;
joined_r0x009a078c:
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)operator_new(0x40);
    *(uint *)(puVar17 + 4) = uVar18;
    puVar17[6] = pBVar3;
    puVar17[7] = pIVar8;
    *puVar17 = 0;
    puVar17[1] = 0;
    *(undefined4 *)(puVar17 + 5) = 4;
    *(uint *)((long)puVar17 + 0x2c) = uVar18;
    puVar17[2] = puVar6;
    *puVar15 = puVar17;
    puVar6 = puVar17;
    if (**(long **)(this + 0x1c0) != 0) {
      *(long *)(this + 0x1c0) = **(long **)(this + 0x1c0);
      puVar6 = (undefined8 *)*puVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x1c8),(__tree_node_base *)puVar6);
    *(long *)(this + 0x1d0) = *(long *)(this + 0x1d0) + 1;
  }
  *(undefined8 **)(local_140 + 0x10) = puVar17 + 5;
  if ((param_2 >> 7 & 1) == 0) {
    uVar18 = *(uint *)(param_3 + 300);
    if (0 < (int)uVar18) {
      uVar11 = 0;
      lVar7 = *(long *)(param_3 + 0x138);
      do {
        if (*(btRigidBody **)(lVar7 + uVar11 * 8) == param_4) {
          if ((int)uVar11 < (int)uVar18) {
            uVar18 = uVar18 - 1;
            uVar13 = -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3;
            uVar14 = *(undefined8 *)(lVar7 + uVar11 * 8);
            *(undefined8 *)(lVar7 + uVar11 * 8) = *(undefined8 *)(lVar7 + uVar13);
            *(undefined8 *)(*(long *)(param_3 + 0x138) + uVar13) = uVar14;
            *(uint *)(param_3 + 300) = uVar18;
          }
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar18 != uVar11);
    }
    *(uint *)(param_3 + 0x120) = (uint)(0 < (int)uVar18);
    uVar18 = *(uint *)(param_4 + 300);
    if (0 < (int)uVar18) {
      uVar11 = 0;
      lVar7 = *(long *)(param_4 + 0x138);
      do {
        if (*(btRigidBody **)(lVar7 + uVar11 * 8) == param_3) {
          if ((int)uVar11 < (int)uVar18) {
            uVar18 = uVar18 - 1;
            uVar13 = -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3;
            uVar14 = *(undefined8 *)(lVar7 + uVar11 * 8);
            *(undefined8 *)(lVar7 + uVar11 * 8) = *(undefined8 *)(lVar7 + uVar13);
            *(undefined8 *)(*(long *)(param_4 + 0x138) + uVar13) = uVar14;
            *(uint *)(param_4 + 300) = uVar18;
          }
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar18 != uVar11);
    }
    *(uint *)(param_4 + 0x120) = (uint)(0 < (int)uVar18);
  }
  if (param_34 != 0) {
    if (0x1d < param_34) {
      param_34 = 0x1e;
    }
    uVar18 = *(uint *)(*(long *)(this + 0x30) + 0xa4);
    if (*(uint *)(*(long *)(this + 0x30) + 0xa4) <= param_34) {
      uVar18 = param_34;
    }
    *(uint *)(local_140 + 0x20) = uVar18;
  }
  if (((param_2 >> 7 & 1) == 0) &&
     (lVar7 = (**(code **)(**(long **)(*(long *)(this + 0x30) + 0x60) + 0x48))(), lVar7 != 0)) {
    if (*(long *)(param_3 + 0xc0) != 0) {
      plVar4 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x30) + 0x60) + 0x48))();
      (**(code **)(*plVar4 + 0x50))
                (plVar4,*(undefined8 *)(param_3 + 0xc0),
                 *(undefined8 *)(*(long *)(this + 0x30) + 0x28));
    }
    if (*(long *)(param_4 + 0xc0) != 0) {
      plVar4 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x30) + 0x60) + 0x48))();
      (**(code **)(*plVar4 + 0x50))
                (plVar4,*(undefined8 *)(param_4 + 0xc0),
                 *(undefined8 *)(*(long *)(this + 0x30) + 0x28));
    }
  }
  (**(code **)(**(long **)(this + 0x30) + 0x70))
            (*(long **)(this + 0x30),local_140,(param_2 & 0x80) == 0);
  pbVar5 = (btRigidBody *)btTypedConstraint::getFixedBody();
  if (param_3 != pbVar5) {
    puVar15 = (undefined8 *)(this + 0x220);
    puVar17 = *(undefined8 **)(this + 0x220);
    puVar6 = puVar15;
    while (puVar17 != (undefined8 *)0x0) {
      while (puVar6 = puVar17, param_3 < (btRigidBody *)puVar6[4]) {
        puVar15 = puVar6;
        puVar17 = (undefined8 *)*puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)*puVar6;
          goto joined_r0x009a0a40;
        }
      }
      if (param_3 <= (btRigidBody *)puVar6[4]) break;
      puVar15 = puVar6 + 1;
      puVar17 = (undefined8 *)*puVar15;
    }
    puVar17 = (undefined8 *)*puVar15;
joined_r0x009a0a40:
    if (puVar17 == (undefined8 *)0x0) {
                    /* try { // try from 009a0a00 to 009a0a07 has its CatchHandler @ 009a0bbc */
      puVar17 = (undefined8 *)operator_new(0x38);
      puVar17[5] = 0;
      puVar17[6] = 0;
      puVar17[4] = param_3;
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar17[2] = puVar6;
      *puVar15 = puVar17;
      puVar6 = puVar17;
      if (**(long **)(this + 0x218) != 0) {
        *(long *)(this + 0x218) = **(long **)(this + 0x218);
        puVar6 = (undefined8 *)*puVar15;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x220),(__tree_node_base *)puVar6);
      *(long *)(this + 0x228) = *(long *)(this + 0x228) + 1;
    }
    operator_delete__((void *)0x0);
    operator_delete__((void *)0x0);
    SimpleArray<unsigned_int,false,1u>::push_back
              ((SimpleArray<unsigned_int,false,1u> *)(puVar17 + 5),&local_134);
  }
  pbVar5 = (btRigidBody *)btTypedConstraint::getFixedBody();
  if (param_4 != pbVar5) {
    puVar15 = (undefined8 *)(this + 0x220);
    puVar17 = *(undefined8 **)(this + 0x220);
    puVar6 = puVar15;
    while (puVar17 != (undefined8 *)0x0) {
      while (puVar6 = puVar17, param_4 < (btRigidBody *)puVar6[4]) {
        puVar15 = puVar6;
        puVar17 = (undefined8 *)*puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)*puVar6;
          goto joined_r0x009a0b1c;
        }
      }
      if (param_4 <= (btRigidBody *)puVar6[4]) break;
      puVar15 = puVar6 + 1;
      puVar17 = (undefined8 *)*puVar15;
    }
    puVar17 = (undefined8 *)*puVar15;
joined_r0x009a0b1c:
    if (puVar17 == (undefined8 *)0x0) {
                    /* try { // try from 009a0adc to 009a0ae3 has its CatchHandler @ 009a0bb8 */
      puVar17 = (undefined8 *)operator_new(0x38);
      puVar17[5] = 0;
      puVar17[6] = 0;
      puVar17[4] = param_4;
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar17[2] = puVar6;
      *puVar15 = puVar17;
      puVar6 = puVar17;
      if (**(long **)(this + 0x218) != 0) {
        *(long *)(this + 0x218) = **(long **)(this + 0x218);
        puVar6 = (undefined8 *)*puVar15;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x220),(__tree_node_base *)puVar6);
      *(long *)(this + 0x228) = *(long *)(this + 0x228) + 1;
    }
    operator_delete__((void *)0x0);
    operator_delete__((void *)0x0);
    SimpleArray<unsigned_int,false,1u>::push_back
              ((SimpleArray<unsigned_int,false,1u> *)(puVar17 + 5),&local_134);
  }
  btCollisionObject::activate((btCollisionObject *)param_3,false);
  btCollisionObject::activate((btCollisionObject *)param_4,false);
  if (*(long *)(lVar2 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


