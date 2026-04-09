// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btGeneric6DofConstraint
// Entry Point: 00f3e5b8
// Size: 1132 bytes
// Signature: undefined __thiscall btGeneric6DofConstraint(btGeneric6DofConstraint * this, btRigidBody * param_1, btTransform * param_2, bool param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* btGeneric6DofConstraint::btGeneric6DofConstraint(btRigidBody&, btTransform const&, bool) */

void __thiscall
btGeneric6DofConstraint::btGeneric6DofConstraint
          (btGeneric6DofConstraint *this,btRigidBody *param_1,btTransform *param_2,bool param_3)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar14;
  undefined8 uVar13;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((DAT_02125608 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_02125608);
    if (iVar2 != 0) {
      DAT_02125450 = 0;
      DAT_02125480 = 0;
      uRam0000000002125410 = 0;
      _DAT_02125408 = 0;
      uRam0000000002125420 = 0;
      _DAT_02125418 = 0;
      uRam00000000021253f8 = 0x3f800000;
      _DAT_021253f0 = 0x3f8000003f800000;
      DAT_02125400 = 0x5d5e0b6b00000000;
      uRam0000000002125430 = 0x1ffffffff;
      _DAT_02125428 = 0xffffffff00000001;
      uRam0000000002125440 = 0;
      _DAT_02125438 = 0x3f00000000000000;
      DAT_02125458 = 0xffffffff;
      DAT_02125448 = 1;
      DAT_0212545c = 0x3f800000;
      DAT_02125464 = 0;
      DAT_02125488 = 1;
      DAT_02125490 = 0;
      DAT_0212535c = 0;
      DAT_02125474 = 0;
      DAT_02125350 = 0x3f800000;
      DAT_02125354 = 0;
      DAT_02125364 = 0x3f800000;
      DAT_02125590 = 1;
      DAT_02125368 = 0;
      DAT_02125370 = 0;
      DAT_02125378 = 0x3f800000;
      DAT_02125348 = &PTR__btRigidBody_01018d20;
      DAT_0212538c = 0;
      DAT_0212537c = 0;
      DAT_02125384 = 0;
      DAT_02125588 = 0;
      local_c0[0] = 0;
      DAT_0212557c = 0;
      local_b8 = 0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_50 = 0x3f000000;
      local_58 = 0;
      local_70 = 0;
      local_40 = 0x3f800000;
      local_48 = 0x3f4ccccd00000000;
      local_3c = 0;
      local_b0 = 0x3f800000;
      uStack_30 = 0x3c23d70a3c23d70a;
      local_38 = 0x3c23d70a3ba3d70a;
      local_a4 = 0;
      local_ac = 0;
      local_9c = 0x3f800000;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0x3f800000;
      local_74 = 0;
      local_84 = 0;
      local_7c = 0;
      btRigidBody::setupRigidBody
                ((btRigidBody *)&DAT_02125348,(btRigidBodyConstructionInfo *)local_c0);
      __cxa_atexit(btRigidBody::~btRigidBody,&DAT_02125348,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&DAT_02125608);
    }
  }
  uVar5 = DAT_02125428;
  DAT_021254e4 = 0;
  uRam00000000021255d8 = 0;
  _DAT_021255d0 = 0;
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  uRam0000000002125500 = 0;
  _DAT_021254f8 = 0;
  uRam0000000002125520 = 0;
  _DAT_02125518 = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  _DAT_02125428 = CONCAT44(DAT_02125428_4,uVar5) | 1;
  *(undefined8 *)(this + 8) = 0xffffffff00000006;
  *(undefined4 *)(this + 0x18) = 0x7f7fffff;
  *(undefined ****)(this + 0x28) = &DAT_02125348;
  *(btRigidBody **)(this + 0x30) = param_1;
  *(undefined2 *)(this + 0x1c) = 1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0x3e99999a00000000;
  *(undefined ***)this = &PTR__btTypedConstraint_01018c90;
  uVar11 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x88) = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  fVar9 = *(float *)(this + 0x90);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x98) = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  uVar22 = *(undefined4 *)(this + 0xa0);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0xa8) = uVar11;
  uVar13 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x314) = 0x3e4ccccd;
  *(undefined8 *)(this + 0x2fc) = 0;
  *(undefined8 *)(this + 0x304) = 0;
  *(undefined8 *)(this + 0x30c) = 0x3e4ccccd3e4ccccd;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x2f8) = 0x3f000000;
  this[0x32e] = (btGeneric6DofConstraint)0x0;
  *(undefined2 *)(this + 0x32c) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  *(undefined4 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x2f0) = 0x3f8000003f333333;
  *(undefined8 *)(this + 0xc0) = uVar13;
  *(undefined8 *)(this + 0xb8) = uVar11;
  *(undefined8 *)(this + 0x3b4) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x3f4) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x39c) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x3a4) = 0;
  *(undefined8 *)(this + 900) = 0x3dcccccd00000000;
  *(undefined8 *)(this + 0x37c) = 0xbf8000003f800000;
  *(undefined8 *)(this + 0x394) = 0x3f000000;
  *(undefined8 *)(this + 0x38c) = 0x3f80000043960000;
  *(undefined4 *)(this + 0x3ac) = 0;
  this[0x3a8] = (btGeneric6DofConstraint)0x0;
  *(undefined8 *)(this + 0x3dc) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x3e4) = 0;
  *(undefined8 *)(this + 0x3c4) = 0x3dcccccd00000000;
  *(undefined8 *)(this + 0x3bc) = 0xbf8000003f800000;
  *(undefined8 *)(this + 0x3d4) = 0x3f000000;
  *(undefined8 *)(this + 0x3cc) = 0x3f80000043960000;
  *(undefined4 *)(this + 0x3ec) = 0;
  this[1000] = (btGeneric6DofConstraint)0x0;
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x41c) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x424) = 0;
  *(undefined8 *)(this + 0x404) = 0x3dcccccd00000000;
  *(undefined8 *)(this + 0x3fc) = 0xbf8000003f800000;
  *(undefined8 *)(this + 0x414) = 0x3f000000;
  *(undefined8 *)(this + 0x40c) = 0x3f80000043960000;
  *(undefined4 *)(this + 0x434) = 0;
  *(undefined4 *)(this + 0x42c) = 0;
  this[0x428] = (btGeneric6DofConstraint)0x0;
  this[0x52c] = (btGeneric6DofConstraint)param_3;
  this[0x52d] = (btGeneric6DofConstraint)0x1;
  *(undefined4 *)(this + 0x530) = 0;
  this[0x534] = (btGeneric6DofConstraint)0x0;
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar10 = *(float *)(param_1 + 0x18);
  fVar15 = *(float *)(param_1 + 0x1c);
  fVar23 = *(float *)(param_1 + 0x10);
  fVar26 = *(float *)(param_1 + 0x20);
  fVar7 = (float)*(undefined8 *)(this + 0x88);
  fVar8 = (float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20);
  fVar12 = (float)*(undefined8 *)(this + 0x98);
  fVar14 = (float)((ulong)*(undefined8 *)(this + 0x98) >> 0x20);
  uVar5 = NEON_fmadd(uVar22,fVar4,fVar9 * fVar3);
  uVar16 = NEON_fmadd(fVar15,uVar22,fVar10 * fVar9);
  fVar20 = (float)*(undefined8 *)(this + 0xb8);
  fVar21 = (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20);
  uVar19 = *(undefined4 *)(this + 0xb0);
  fVar28 = *(float *)(param_1 + 0x28);
  fVar18 = *(float *)(param_1 + 0x2c);
  fVar24 = (float)*(undefined8 *)(this + 0xa8);
  fVar25 = (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
  uVar6 = NEON_fmadd(uVar19,fVar23,uVar5);
  uVar11 = NEON_rev64(CONCAT44(fVar21 * fVar4,fVar20 * fVar10),4);
  uVar5 = NEON_fmadd(fVar26,uVar19,uVar16);
  fVar17 = *(float *)(this + 0xc0);
  fVar27 = *(float *)(param_1 + 0x30);
  uVar16 = NEON_fmadd(fVar18,uVar22,fVar28 * fVar9);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  fVar9 = *(float *)(param_1 + 0x40);
  *(ulong *)(this + 0x48) =
       CONCAT44(fVar8 * fVar3 + fVar14 * fVar4 + fVar25 * fVar23,
                fVar7 * fVar3 + fVar12 * fVar4 + fVar24 * fVar23);
  fVar4 = (float)NEON_fmadd(fVar17,fVar27,fVar28 * fVar20 + fVar18 * fVar21);
  *(undefined4 *)(this + 0x50) = uVar6;
  uVar6 = NEON_fmadd(fVar27,uVar19,uVar16);
  *(undefined4 *)(this + 0x60) = uVar5;
  *(undefined4 *)(this + 0x54) = 0;
  *(ulong *)(this + 0x58) =
       CONCAT44(fVar8 * fVar10 + fVar14 * fVar15 + fVar25 * fVar26,
                fVar7 * fVar10 + fVar12 * fVar15 + fVar24 * fVar26);
  *(undefined4 *)(this + 100) = 0;
  *(ulong *)(this + 0x68) =
       CONCAT44(fVar8 * fVar28 + fVar14 * fVar18 + fVar25 * fVar27,
                fVar7 * fVar28 + fVar12 * fVar18 + fVar24 * fVar27);
  *(undefined4 *)(this + 0x70) = uVar6;
  *(undefined4 *)(this + 0x74) = 0;
  *(ulong *)(this + 0x78) =
       CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar15 * fVar21 + fVar26 * fVar17 +
                (float)((ulong)uVar13 >> 0x20),
                (float)uVar11 + fVar3 * fVar20 + fVar23 * fVar17 + (float)uVar13);
  *(float *)(this + 0x80) = fVar4 + fVar9;
  *(undefined4 *)(this + 0x84) = 0;
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


