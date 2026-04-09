// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildJacobian
// Entry Point: 00f3cc5c
// Size: 1264 bytes
// Signature: undefined buildJacobian(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btGeneric6DofConstraint::buildJacobian() */

void btGeneric6DofConstraint::buildJacobian(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  bool bVar10;
  long *in_x0;
  ulong uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar7 = tpidr_el0;
  local_38 = *(long *)(lVar7 + 0x28);
  if (*(btGeneric6DofConstraint *)((long)in_x0 + 0x534) != (btGeneric6DofConstraint)0x0) {
    *(undefined4 *)(in_x0 + 0x77) = 0;
    *(undefined4 *)(in_x0 + 0x7f) = 0;
    *(undefined4 *)(in_x0 + 0x87) = 0;
    in_x0[0x5d] = 0;
    in_x0[0x5c] = 0;
    calculateTransforms((btGeneric6DofConstraint *)in_x0,(btTransform *)(in_x0[5] + 8),
                        (btTransform *)(in_x0[6] + 8));
    (**(code **)(*in_x0 + 0x58))();
    uStack_48 = *(undefined8 *)((long)in_x0 + 0x524);
    uStack_50 = *(undefined8 *)((long)in_x0 + 0x51c);
    uStack_58 = *(undefined8 *)((long)in_x0 + 0x524);
    local_60 = *(undefined8 *)((long)in_x0 + 0x51c);
    if (*(float *)(in_x0 + 0x58) <= *(float *)(in_x0 + 0x5a)) {
      bVar10 = *(btGeneric6DofConstraint *)((long)in_x0 + 0x52c) != (btGeneric6DofConstraint)0x0;
      plVar3 = in_x0 + 0x90;
      if (bVar10) {
        plVar3 = in_x0 + 0x88;
      }
      plVar4 = in_x0 + 0x94;
      plVar8 = in_x0 + 0x92;
      if (bVar10) {
        plVar4 = in_x0 + 0x8c;
        plVar8 = in_x0 + 0x8a;
      }
      local_70 = CONCAT44(*(undefined4 *)plVar8,*(undefined4 *)plVar3);
      uStack_68 = (ulong)*(uint *)plVar4;
      buildLinearJacobian((btGeneric6DofConstraint *)in_x0,(btJacobianEntry *)(in_x0 + 0x19),
                          (btVector3 *)&local_70,(btVector3 *)&uStack_50,(btVector3 *)&local_60);
    }
    if (*(float *)((long)in_x0 + 0x2c4) <= *(float *)((long)in_x0 + 0x2d4)) {
      bVar10 = *(btGeneric6DofConstraint *)((long)in_x0 + 0x52c) != (btGeneric6DofConstraint)0x0;
      puVar1 = (undefined4 *)((long)in_x0 + 0x484);
      if (bVar10) {
        puVar1 = (undefined4 *)((long)in_x0 + 0x444);
      }
      puVar2 = (uint *)((long)in_x0 + 0x4a4);
      puVar9 = (undefined4 *)((long)in_x0 + 0x494);
      if (bVar10) {
        puVar2 = (uint *)((long)in_x0 + 0x464);
        puVar9 = (undefined4 *)((long)in_x0 + 0x454);
      }
      local_70 = CONCAT44(*puVar9,*puVar1);
      uStack_68 = (ulong)*puVar2;
      buildLinearJacobian((btGeneric6DofConstraint *)in_x0,(btJacobianEntry *)((long)in_x0 + 0x11c),
                          (btVector3 *)&local_70,(btVector3 *)&uStack_50,(btVector3 *)&local_60);
    }
    if (*(float *)(in_x0 + 0x59) <= *(float *)(in_x0 + 0x5b)) {
      bVar10 = *(btGeneric6DofConstraint *)((long)in_x0 + 0x52c) != (btGeneric6DofConstraint)0x0;
      plVar3 = in_x0 + 0x91;
      if (bVar10) {
        plVar3 = in_x0 + 0x89;
      }
      plVar4 = in_x0 + 0x95;
      plVar8 = in_x0 + 0x93;
      if (bVar10) {
        plVar4 = in_x0 + 0x8d;
        plVar8 = in_x0 + 0x8b;
      }
      local_70 = CONCAT44(*(undefined4 *)plVar8,*(undefined4 *)plVar3);
      uStack_68 = (ulong)*(uint *)plVar4;
      buildLinearJacobian((btGeneric6DofConstraint *)in_x0,(btJacobianEntry *)(in_x0 + 0x2e),
                          (btVector3 *)&local_70,(btVector3 *)&uStack_50,(btVector3 *)&local_60);
    }
    uVar11 = testAngularLimitMotor((btGeneric6DofConstraint *)in_x0,0);
    if ((uVar11 & 1) != 0) {
      lVar5 = in_x0[5];
      lVar6 = in_x0[6];
      uStack_68 = in_x0[0x9b];
      local_70 = in_x0[0x9a];
      fVar19 = *(float *)(lVar5 + 0x10);
      uVar15 = *(undefined8 *)(lVar6 + 0x28);
      uVar17 = *(undefined8 *)(lVar5 + 8);
      fVar14 = (float)((ulong)local_70 >> 0x20);
      fVar12 = (float)local_70;
      fVar16 = (float)uStack_68;
      uVar25 = *(undefined8 *)(lVar6 + 0x18);
      fVar22 = *(float *)(lVar5 + 0x20);
      uVar29 = *(undefined8 *)(lVar5 + 0x18);
      uVar26 = *(undefined8 *)(lVar5 + 0x28);
      fVar21 = (float)NEON_fnmadd(fVar14,*(undefined4 *)(lVar6 + 0x20),
                                  -(*(float *)(lVar6 + 0x30) * fVar16));
      fVar23 = *(float *)(lVar5 + 0x30);
      fVar27 = *(float *)(lVar6 + 0x10);
      uVar28 = *(undefined8 *)(lVar6 + 8);
      *(undefined8 *)((long)in_x0 + 0x1cc) = 0;
      fVar20 = fVar19 * fVar12 + fVar22 * fVar14 + fVar23 * fVar16;
      fVar22 = (float)uVar17 * fVar12 + (float)uVar29 * fVar14 + (float)uVar26 * fVar16;
      fVar18 = (float)((ulong)uVar17 >> 0x20) * fVar12 + (float)((ulong)uVar29 >> 0x20) * fVar14 +
               (float)((ulong)uVar26 >> 0x20) * fVar16;
      fVar21 = fVar21 - fVar27 * fVar12;
      *(undefined8 *)((long)in_x0 + 0x1c4) = 0;
      fVar19 = -((float)uVar15 * fVar16 + (float)uVar25 * fVar14) - (float)uVar28 * fVar12;
      fVar16 = -((float)((ulong)uVar15 >> 0x20) * fVar16 + (float)((ulong)uVar25 >> 0x20) * fVar14)
               - (float)((ulong)uVar28 >> 0x20) * fVar12;
      *(undefined4 *)(in_x0 + 0x3c) = 0;
      *(undefined4 *)(in_x0 + 0x3e) = 0;
      *(float *)((long)in_x0 + 0x1dc) = fVar20;
      *(float *)((long)in_x0 + 0x1ec) = fVar21;
      *(ulong *)((long)in_x0 + 0x1d4) = CONCAT44(fVar18,fVar22);
      *(ulong *)((long)in_x0 + 0x1e4) = CONCAT44(fVar16,fVar19);
      uVar15 = *(undefined8 *)(lVar5 + 0x1d0);
      fVar24 = *(float *)(lVar5 + 0x1d8);
      *(undefined4 *)(in_x0 + 0x40) = 0;
      fVar12 = (float)uVar15 * fVar22;
      fVar14 = (float)((ulong)uVar15 >> 0x20) * fVar18;
      fVar24 = fVar24 * fVar20;
      *(ulong *)((long)in_x0 + 500) = CONCAT44(fVar14,fVar12);
      *(float *)((long)in_x0 + 0x1fc) = fVar24;
      fVar23 = (float)*(undefined8 *)(lVar6 + 0x1d0) * fVar19;
      fVar27 = (float)((ulong)*(undefined8 *)(lVar6 + 0x1d0) >> 0x20) * fVar16;
      fVar12 = (float)NEON_fmadd(fVar24,fVar20,fVar12 * fVar22 + fVar14 * fVar18);
      fVar14 = *(float *)(lVar6 + 0x1d8);
      *(ulong *)((long)in_x0 + 0x204) = CONCAT44(fVar27,fVar23);
      *(undefined4 *)(in_x0 + 0x42) = 0;
      fVar14 = fVar14 * fVar21;
      uVar13 = NEON_fmadd(fVar14,fVar21,fVar12 + fVar23 * fVar19 + fVar27 * fVar16);
      *(float *)((long)in_x0 + 0x20c) = fVar14;
      *(undefined4 *)((long)in_x0 + 0x214) = uVar13;
    }
    uVar11 = testAngularLimitMotor((btGeneric6DofConstraint *)in_x0,1);
    if ((uVar11 & 1) != 0) {
      lVar5 = in_x0[5];
      lVar6 = in_x0[6];
      uStack_68 = in_x0[0x9d];
      local_70 = in_x0[0x9c];
      fVar19 = *(float *)(lVar5 + 0x10);
      uVar15 = *(undefined8 *)(lVar6 + 0x28);
      uVar17 = *(undefined8 *)(lVar5 + 8);
      fVar14 = (float)((ulong)local_70 >> 0x20);
      fVar12 = (float)local_70;
      fVar16 = (float)uStack_68;
      uVar25 = *(undefined8 *)(lVar6 + 0x18);
      fVar22 = *(float *)(lVar5 + 0x20);
      uVar29 = *(undefined8 *)(lVar5 + 0x18);
      uVar26 = *(undefined8 *)(lVar5 + 0x28);
      fVar21 = (float)NEON_fnmadd(fVar14,*(undefined4 *)(lVar6 + 0x20),
                                  -(*(float *)(lVar6 + 0x30) * fVar16));
      fVar23 = *(float *)(lVar5 + 0x30);
      fVar27 = *(float *)(lVar6 + 0x10);
      uVar28 = *(undefined8 *)(lVar6 + 8);
      in_x0[0x44] = 0;
      fVar20 = fVar19 * fVar12 + fVar22 * fVar14 + fVar23 * fVar16;
      fVar22 = (float)uVar17 * fVar12 + (float)uVar29 * fVar14 + (float)uVar26 * fVar16;
      fVar18 = (float)((ulong)uVar17 >> 0x20) * fVar12 + (float)((ulong)uVar29 >> 0x20) * fVar14 +
               (float)((ulong)uVar26 >> 0x20) * fVar16;
      fVar21 = fVar21 - fVar27 * fVar12;
      in_x0[0x43] = 0;
      fVar19 = -((float)uVar15 * fVar16 + (float)uVar25 * fVar14) - (float)uVar28 * fVar12;
      fVar16 = -((float)((ulong)uVar15 >> 0x20) * fVar16 + (float)((ulong)uVar25 >> 0x20) * fVar14)
               - (float)((ulong)uVar28 >> 0x20) * fVar12;
      *(undefined4 *)((long)in_x0 + 0x234) = 0;
      *(undefined4 *)((long)in_x0 + 0x244) = 0;
      *(float *)(in_x0 + 0x46) = fVar20;
      *(float *)(in_x0 + 0x48) = fVar21;
      in_x0[0x45] = CONCAT44(fVar18,fVar22);
      in_x0[0x47] = CONCAT44(fVar16,fVar19);
      uVar15 = *(undefined8 *)(lVar5 + 0x1d0);
      fVar24 = *(float *)(lVar5 + 0x1d8);
      *(undefined4 *)((long)in_x0 + 0x254) = 0;
      fVar12 = (float)uVar15 * fVar22;
      fVar14 = (float)((ulong)uVar15 >> 0x20) * fVar18;
      fVar24 = fVar24 * fVar20;
      in_x0[0x49] = CONCAT44(fVar14,fVar12);
      *(float *)(in_x0 + 0x4a) = fVar24;
      fVar23 = (float)*(undefined8 *)(lVar6 + 0x1d0) * fVar19;
      fVar27 = (float)((ulong)*(undefined8 *)(lVar6 + 0x1d0) >> 0x20) * fVar16;
      fVar12 = (float)NEON_fmadd(fVar24,fVar20,fVar12 * fVar22 + fVar14 * fVar18);
      fVar14 = *(float *)(lVar6 + 0x1d8);
      in_x0[0x4b] = CONCAT44(fVar27,fVar23);
      *(undefined4 *)((long)in_x0 + 0x264) = 0;
      fVar14 = fVar14 * fVar21;
      uVar13 = NEON_fmadd(fVar14,fVar21,fVar12 + fVar23 * fVar19 + fVar27 * fVar16);
      *(float *)(in_x0 + 0x4c) = fVar14;
      *(undefined4 *)(in_x0 + 0x4d) = uVar13;
    }
    uVar11 = testAngularLimitMotor((btGeneric6DofConstraint *)in_x0,2);
    if ((uVar11 & 1) != 0) {
      lVar5 = in_x0[5];
      lVar6 = in_x0[6];
      uStack_68 = in_x0[0x9f];
      local_70 = in_x0[0x9e];
      fVar19 = *(float *)(lVar5 + 0x10);
      uVar15 = *(undefined8 *)(lVar6 + 0x28);
      uVar17 = *(undefined8 *)(lVar5 + 8);
      fVar14 = (float)((ulong)local_70 >> 0x20);
      fVar12 = (float)local_70;
      fVar16 = (float)uStack_68;
      uVar25 = *(undefined8 *)(lVar6 + 0x18);
      fVar22 = *(float *)(lVar5 + 0x20);
      uVar29 = *(undefined8 *)(lVar5 + 0x18);
      uVar26 = *(undefined8 *)(lVar5 + 0x28);
      fVar21 = (float)NEON_fnmadd(fVar14,*(undefined4 *)(lVar6 + 0x20),
                                  -(*(float *)(lVar6 + 0x30) * fVar16));
      fVar23 = *(float *)(lVar5 + 0x30);
      fVar27 = *(float *)(lVar6 + 0x10);
      uVar28 = *(undefined8 *)(lVar6 + 8);
      *(undefined8 *)((long)in_x0 + 0x274) = 0;
      fVar20 = fVar19 * fVar12 + fVar22 * fVar14 + fVar23 * fVar16;
      fVar22 = (float)uVar17 * fVar12 + (float)uVar29 * fVar14 + (float)uVar26 * fVar16;
      fVar18 = (float)((ulong)uVar17 >> 0x20) * fVar12 + (float)((ulong)uVar29 >> 0x20) * fVar14 +
               (float)((ulong)uVar26 >> 0x20) * fVar16;
      fVar21 = fVar21 - fVar27 * fVar12;
      *(undefined8 *)((long)in_x0 + 0x26c) = 0;
      fVar19 = -((float)uVar15 * fVar16 + (float)uVar25 * fVar14) - (float)uVar28 * fVar12;
      fVar16 = -((float)((ulong)uVar15 >> 0x20) * fVar16 + (float)((ulong)uVar25 >> 0x20) * fVar14)
               - (float)((ulong)uVar28 >> 0x20) * fVar12;
      *(undefined4 *)(in_x0 + 0x51) = 0;
      *(undefined4 *)(in_x0 + 0x53) = 0;
      *(float *)((long)in_x0 + 0x284) = fVar20;
      *(float *)((long)in_x0 + 0x294) = fVar21;
      *(ulong *)((long)in_x0 + 0x27c) = CONCAT44(fVar18,fVar22);
      *(ulong *)((long)in_x0 + 0x28c) = CONCAT44(fVar16,fVar19);
      uVar15 = *(undefined8 *)(lVar5 + 0x1d0);
      fVar24 = *(float *)(lVar5 + 0x1d8);
      *(undefined4 *)(in_x0 + 0x55) = 0;
      fVar12 = (float)uVar15 * fVar22;
      fVar14 = (float)((ulong)uVar15 >> 0x20) * fVar18;
      fVar24 = fVar24 * fVar20;
      *(ulong *)((long)in_x0 + 0x29c) = CONCAT44(fVar14,fVar12);
      *(float *)((long)in_x0 + 0x2a4) = fVar24;
      fVar23 = (float)*(undefined8 *)(lVar6 + 0x1d0) * fVar19;
      fVar27 = (float)((ulong)*(undefined8 *)(lVar6 + 0x1d0) >> 0x20) * fVar16;
      fVar12 = (float)NEON_fmadd(fVar24,fVar20,fVar12 * fVar22 + fVar14 * fVar18);
      fVar14 = *(float *)(lVar6 + 0x1d8);
      *(ulong *)((long)in_x0 + 0x2ac) = CONCAT44(fVar27,fVar23);
      *(undefined4 *)(in_x0 + 0x57) = 0;
      fVar14 = fVar14 * fVar21;
      uVar13 = NEON_fmadd(fVar14,fVar21,fVar12 + fVar23 * fVar19 + fVar27 * fVar16);
      *(float *)((long)in_x0 + 0x2b4) = fVar14;
      *(undefined4 *)((long)in_x0 + 700) = uVar13;
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


