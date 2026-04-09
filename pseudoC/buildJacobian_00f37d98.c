// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildJacobian
// Entry Point: 00f37d98
// Size: 1324 bytes
// Signature: undefined buildJacobian(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btConeTwistConstraint::buildJacobian() */

void btConeTwistConstraint::buildJacobian(void)

{
  long lVar1;
  long lVar2;
  btConeTwistConstraint *in_x0;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_118;
  float local_110;
  undefined4 local_10c;
  undefined8 local_108;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (in_x0[0x227] != (btConeTwistConstraint)0x0) {
    *(undefined4 *)(in_x0 + 0x38) = 0;
    *(undefined8 *)(in_x0 + 0x21c) = 0;
    *(undefined8 *)(in_x0 + 0x260) = 0;
    *(undefined8 *)(in_x0 + 600) = 0;
    if (in_x0[0x224] == (btConeTwistConstraint)0x0) {
      lVar3 = *(long *)(in_x0 + 0x28);
      lVar1 = *(long *)(in_x0 + 0x30);
      fVar4 = (float)*(undefined8 *)(in_x0 + 0x174);
      fVar6 = (float)((ulong)*(undefined8 *)(in_x0 + 0x174) >> 0x20);
      fVar7 = (float)*(undefined8 *)(in_x0 + 0x1b4);
      fVar8 = (float)((ulong)*(undefined8 *)(in_x0 + 0x1b4) >> 0x20);
      uVar5 = NEON_rev64(CONCAT44(*(float *)(lVar3 + 0xc) * fVar6,*(float *)(lVar3 + 0x18) * fVar4),
                         4);
      fVar10 = *(float *)(in_x0 + 0x17c);
      fVar11 = *(float *)(in_x0 + 0x1bc);
      uVar9 = NEON_rev64(CONCAT44(*(float *)(lVar1 + 0xc) * fVar8,*(float *)(lVar1 + 0x18) * fVar7),
                         4);
      fVar14 = (float)uVar5 + fVar4 * *(float *)(lVar3 + 8) + *(float *)(lVar3 + 0x10) * fVar10 +
               (float)*(undefined8 *)(lVar3 + 0x38);
      fVar15 = (float)((ulong)uVar5 >> 0x20) + fVar6 * *(float *)(lVar3 + 0x1c) +
               *(float *)(lVar3 + 0x20) * fVar10 +
               (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
      fVar12 = (float)uVar9 + fVar7 * *(float *)(lVar1 + 8) + *(float *)(lVar1 + 0x10) * fVar11 +
               (float)*(undefined8 *)(lVar1 + 0x38);
      fVar13 = (float)((ulong)uVar9 >> 0x20) + fVar8 * *(float *)(lVar1 + 0x1c) +
               *(float *)(lVar1 + 0x20) * fVar11 +
               (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
      fVar8 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x30),fVar11,
                                (float)*(undefined8 *)(lVar1 + 0x28) * fVar7 +
                                (float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20) * fVar8);
      fVar10 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x30),fVar10,
                                 (float)*(undefined8 *)(lVar3 + 0x28) * fVar4 +
                                 (float)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20) * fVar6);
      fVar4 = fVar12 - fVar14;
      fVar6 = fVar13 - fVar15;
      fVar8 = fVar8 + *(float *)(lVar1 + 0x40);
      fVar10 = fVar10 + *(float *)(lVar3 + 0x40);
      fVar7 = fVar8 - fVar10;
      fVar11 = (float)NEON_fmadd(fVar7,fVar7,fVar4 * fVar4 + fVar6 * fVar6);
      if (fVar11 <= 1.192093e-07) {
        local_90 = 0.0;
        local_98 = 0x3f800000;
      }
      else {
        local_90 = 1.0 / SQRT(fVar11);
        local_98 = CONCAT44(fVar6 * local_90,fVar4 * local_90);
        local_90 = local_90 * fVar7;
      }
      local_8c = 0;
      fVar4 = (float)local_98;
      local_80 = (float)((ulong)local_98 >> 0x20);
      if (ABS(local_90) <= 0.7071068) {
        local_70 = SQRT(fVar4 * fVar4 + local_80 * local_80);
        fStack_84 = (1.0 / local_70) * fVar4;
        local_88 = (1.0 / local_70) * -local_80;
        local_80 = 0.0;
        local_78 = fStack_84 * -local_90;
        fStack_74 = local_88 * local_90;
      }
      else {
        local_78 = SQRT(local_90 * local_90 + local_80 * local_80);
        local_80 = (1.0 / local_78) * local_80;
        fStack_84 = (1.0 / local_78) * -local_90;
        fStack_74 = local_80 * -fVar4;
        local_70 = fStack_84 * fVar4;
        local_88 = 0.0;
      }
      lVar3 = *(long *)(in_x0 + 0x28);
      local_c8 = *(undefined4 *)(lVar3 + 8);
      local_bc = 0;
      local_b0 = *(undefined4 *)(lVar3 + 0x2c);
      uStack_a0 = *(undefined4 *)(lVar3 + 0x30);
      local_b8 = *(undefined4 *)(lVar3 + 0xc);
      local_b4 = *(undefined4 *)(lVar3 + 0x1c);
      local_c4 = *(undefined4 *)(lVar3 + 0x18);
      uStack_c0 = *(undefined4 *)(lVar3 + 0x28);
      local_ac = 0;
      local_108 = CONCAT44(fVar15 - (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20),
                           fVar14 - (float)*(undefined8 *)(lVar3 + 0x38));
      local_a8 = *(undefined4 *)(lVar3 + 0x10);
      local_a4 = *(undefined4 *)(lVar3 + 0x20);
      local_9c = 0;
      uStack_e0 = *(undefined4 *)(lVar1 + 0x2c);
      local_100 = fVar10 - *(float *)(lVar3 + 0x40);
      uStack_f4 = *(undefined4 *)(lVar1 + 0x18);
      local_e4 = *(undefined4 *)(lVar1 + 0x1c);
      local_f8 = *(undefined4 *)(lVar1 + 8);
      local_ec = 0;
      local_e8 = *(undefined4 *)(lVar1 + 0xc);
      local_dc = 0;
      local_f0 = *(undefined4 *)(lVar1 + 0x28);
      uStack_d0 = *(undefined4 *)(lVar1 + 0x30);
      local_d8 = *(undefined4 *)(lVar1 + 0x10);
      local_fc = 0;
      local_118 = CONCAT44(fVar13 - (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20),
                           fVar12 - (float)*(undefined8 *)(lVar1 + 0x38));
      local_d4 = *(undefined4 *)(lVar1 + 0x20);
      local_110 = fVar8 - *(float *)(lVar1 + 0x40);
      local_cc = 0;
      local_10c = 0;
      btJacobianEntry::btJacobianEntry
                ((btJacobianEntry *)(in_x0 + 0x48),(btMatrix3x3 *)&local_c8,(btMatrix3x3 *)&local_f8
                 ,(btVector3 *)&local_108,(btVector3 *)&local_118,(btVector3 *)&local_98,
                 (btVector3 *)(lVar3 + 0x1d0),*(float *)(lVar3 + 0x19c),(btVector3 *)(lVar1 + 0x1d0)
                 ,*(float *)(lVar1 + 0x19c));
      lVar3 = *(long *)(in_x0 + 0x28);
      lVar1 = *(long *)(in_x0 + 0x30);
      local_c8 = *(undefined4 *)(lVar3 + 8);
      local_bc = 0;
      local_c4 = *(undefined4 *)(lVar3 + 0x18);
      local_b4 = *(undefined4 *)(lVar3 + 0x1c);
      local_b0 = *(undefined4 *)(lVar3 + 0x2c);
      local_b8 = *(undefined4 *)(lVar3 + 0xc);
      local_ac = 0;
      uStack_a0 = *(undefined4 *)(lVar3 + 0x30);
      uStack_c0 = *(undefined4 *)(lVar3 + 0x28);
      local_a8 = *(undefined4 *)(lVar3 + 0x10);
      local_100 = fVar10 - *(float *)(lVar3 + 0x40);
      local_a4 = *(undefined4 *)(lVar3 + 0x20);
      local_9c = 0;
      uStack_e0 = *(undefined4 *)(lVar1 + 0x2c);
      local_108 = CONCAT44(fVar15 - (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20),
                           fVar14 - (float)*(undefined8 *)(lVar3 + 0x38));
      local_f8 = *(undefined4 *)(lVar1 + 8);
      local_ec = 0;
      uStack_f4 = *(undefined4 *)(lVar1 + 0x18);
      local_e4 = *(undefined4 *)(lVar1 + 0x1c);
      local_e8 = *(undefined4 *)(lVar1 + 0xc);
      local_118 = CONCAT44(fVar13 - (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20),
                           fVar12 - (float)*(undefined8 *)(lVar1 + 0x38));
      local_dc = 0;
      local_f0 = *(undefined4 *)(lVar1 + 0x28);
      local_d8 = *(undefined4 *)(lVar1 + 0x10);
      uStack_d0 = *(undefined4 *)(lVar1 + 0x30);
      local_d4 = *(undefined4 *)(lVar1 + 0x20);
      local_110 = fVar8 - *(float *)(lVar1 + 0x40);
      local_cc = 0;
      local_fc = 0;
      local_10c = 0;
      btJacobianEntry::btJacobianEntry
                ((btJacobianEntry *)(in_x0 + 0x9c),(btMatrix3x3 *)&local_c8,(btMatrix3x3 *)&local_f8
                 ,(btVector3 *)&local_108,(btVector3 *)&local_118,(btVector3 *)&local_88,
                 (btVector3 *)(lVar3 + 0x1d0),*(float *)(lVar3 + 0x19c),(btVector3 *)(lVar1 + 0x1d0)
                 ,*(float *)(lVar1 + 0x19c));
      lVar3 = *(long *)(in_x0 + 0x28);
      lVar1 = *(long *)(in_x0 + 0x30);
      local_c8 = *(undefined4 *)(lVar3 + 8);
      local_bc = 0;
      local_c4 = *(undefined4 *)(lVar3 + 0x18);
      local_b4 = *(undefined4 *)(lVar3 + 0x1c);
      local_b0 = *(undefined4 *)(lVar3 + 0x2c);
      local_b8 = *(undefined4 *)(lVar3 + 0xc);
      local_ac = 0;
      uStack_a0 = *(undefined4 *)(lVar3 + 0x30);
      uStack_c0 = *(undefined4 *)(lVar3 + 0x28);
      local_a8 = *(undefined4 *)(lVar3 + 0x10);
      local_100 = fVar10 - *(float *)(lVar3 + 0x40);
      local_a4 = *(undefined4 *)(lVar3 + 0x20);
      local_9c = 0;
      local_108 = CONCAT44(fVar15 - (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20),
                           fVar14 - (float)*(undefined8 *)(lVar3 + 0x38));
      uStack_e0 = *(undefined4 *)(lVar1 + 0x2c);
      local_f8 = *(undefined4 *)(lVar1 + 8);
      local_ec = 0;
      local_e8 = *(undefined4 *)(lVar1 + 0xc);
      uStack_f4 = *(undefined4 *)(lVar1 + 0x18);
      local_e4 = *(undefined4 *)(lVar1 + 0x1c);
      local_118 = CONCAT44(fVar13 - (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20),
                           fVar12 - (float)*(undefined8 *)(lVar1 + 0x38));
      local_dc = 0;
      uStack_d0 = *(undefined4 *)(lVar1 + 0x30);
      local_f0 = *(undefined4 *)(lVar1 + 0x28);
      local_d8 = *(undefined4 *)(lVar1 + 0x10);
      local_d4 = *(undefined4 *)(lVar1 + 0x20);
      local_fc = 0;
      local_cc = 0;
      local_110 = fVar8 - *(float *)(lVar1 + 0x40);
      local_10c = 0;
      btJacobianEntry::btJacobianEntry
                ((btJacobianEntry *)(in_x0 + 0xf0),(btMatrix3x3 *)&local_c8,(btMatrix3x3 *)&local_f8
                 ,(btVector3 *)&local_108,(btVector3 *)&local_118,(btVector3 *)&local_78,
                 (btVector3 *)(lVar3 + 0x1d0),*(float *)(lVar3 + 0x19c),(btVector3 *)(lVar1 + 0x1d0)
                 ,*(float *)(lVar1 + 0x19c));
    }
    calcAngleInfo2(in_x0,(btTransform *)(*(long *)(in_x0 + 0x28) + 8),
                   (btTransform *)(*(long *)(in_x0 + 0x30) + 8),
                   (btMatrix3x3 *)(*(long *)(in_x0 + 0x28) + 0x14c),
                   (btMatrix3x3 *)(*(long *)(in_x0 + 0x30) + 0x14c));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


