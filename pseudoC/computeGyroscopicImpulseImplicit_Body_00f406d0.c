// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeGyroscopicImpulseImplicit_Body
// Entry Point: 00f406d0
// Size: 644 bytes
// Signature: undefined __thiscall computeGyroscopicImpulseImplicit_Body(btRigidBody * this, float param_1)


/* btRigidBody::computeGyroscopicImpulseImplicit_Body(float) const */

undefined4 __thiscall
btRigidBody::computeGyroscopicImpulseImplicit_Body(btRigidBody *this,float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar2 = *(float *)(this + 0x1d0);
  fVar3 = *(float *)(this + 0x1d4);
  fVar4 = *(float *)(this + 0x1d8);
  fVar13 = *(float *)(this + 0x18c);
  fVar12 = *(float *)(this + 400);
  fVar11 = *(float *)(this + 0x194);
  fVar7 = 1.0 / fVar2;
  if (fVar2 == 0.0) {
    fVar7 = fVar2;
  }
  fVar2 = 1.0 / fVar3;
  if (fVar3 == 0.0) {
    fVar2 = fVar3;
  }
  fVar3 = 1.0 / fVar4;
  if (fVar4 == 0.0) {
    fVar3 = fVar4;
  }
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 8),(btQuaternion *)&local_78);
  uVar5 = NEON_fnmsub(local_6c,fVar13,local_74 * fVar11);
  fVar4 = (float)NEON_fmadd(local_74,fVar12,fVar11 * fStack_70);
  uVar8 = NEON_fnmsub(local_74,fVar13,local_78 * fVar12);
  uVar9 = NEON_fnmsub(local_6c,fVar12,fStack_70 * fVar13);
  fVar14 = (float)NEON_fmadd(fStack_70,fVar12,uVar5);
  fVar4 = (float)NEON_fnmadd(fVar13,local_78,-fVar4);
  fVar6 = (float)NEON_fmadd(local_6c,fVar11,uVar8);
  uVar5 = NEON_fmadd(local_78,fVar11,uVar9);
  fVar15 = (float)NEON_fmadd(fVar6,local_74,fVar4 * local_78);
  fVar10 = (float)NEON_fmadd(uVar5,fStack_70,fVar14 * local_6c);
  fVar17 = (float)NEON_fmadd(fVar14,fStack_70,fVar4 * local_74);
  fVar20 = (float)NEON_fmadd(uVar5,local_6c,fVar6 * local_78);
  fVar4 = (float)NEON_fmadd(uVar5,local_78,fVar4 * fStack_70);
  fVar10 = fVar10 - fVar15;
  fVar6 = (float)NEON_fmadd(fVar14,local_74,fVar6 * local_6c);
  fVar20 = fVar20 - fVar17;
  fVar28 = fVar10 * fVar7;
  fVar6 = fVar6 - fVar4;
  fVar29 = fVar20 * fVar2;
  fVar14 = (float)NEON_fmsub(fVar10,fVar3,fVar28);
  fVar15 = (float)NEON_fnmsub(fVar10,fVar2,fVar28);
  fVar30 = fVar6 * fVar3;
  fVar16 = (float)NEON_fnmsub(fVar20,fVar3,fVar29);
  fVar22 = (float)NEON_fmsub(fVar20,fVar7,fVar29);
  fVar14 = fVar14 * param_1;
  fVar15 = fVar15 * param_1;
  fVar17 = (float)NEON_fmsub(fVar6,fVar2,fVar30);
  fVar16 = fVar16 * param_1;
  fVar25 = (float)NEON_fnmsub(fVar6,fVar7,fVar30);
  fVar22 = fVar22 * param_1;
  fVar17 = fVar17 * param_1;
  fVar23 = (float)NEON_fnmsub(fVar3,fVar2,fVar14 * fVar15);
  uVar5 = NEON_fnmsub(fVar17,fVar14,fVar16 * fVar2);
  fVar25 = fVar25 * param_1;
  uVar9 = NEON_fnmsub(fVar16,fVar15,fVar17 * fVar3);
  uVar8 = NEON_fmadd(uVar5,fVar22,fVar23 * fVar7);
  fVar26 = (float)NEON_fmadd(uVar9,fVar25,uVar8);
  fVar4 = 1.0 / fVar26;
  if (ABS(fVar26) <= 1.192093e-07) {
    fVar4 = fVar26;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    fVar26 = (float)NEON_fnmsub(fVar28,fVar6,fVar30 * fVar10);
    fVar30 = (float)NEON_fnmsub(fVar30,fVar20,fVar29 * fVar6);
    fVar28 = (float)NEON_fnmsub(fVar29,fVar10,fVar28 * fVar20);
    fVar26 = fVar26 * param_1;
    fVar30 = fVar30 * param_1;
    fVar28 = fVar28 * param_1;
    fVar29 = (float)NEON_fnmsub(fVar30,fVar2,fVar26 * fVar17);
    fVar31 = (float)NEON_fnmsub(fVar26,fVar16,fVar30 * fVar14);
    uVar24 = NEON_fmadd(uVar9,fVar26,fVar23 * fVar30);
    uVar27 = NEON_fnmsub(fVar26,fVar15,fVar28 * fVar2);
    uVar8 = NEON_fnmsub(fVar28,fVar14,fVar26 * fVar3);
    uVar9 = NEON_fnmsub(fVar28,fVar17,fVar30 * fVar15);
    uVar18 = NEON_fmadd(uVar5,fVar28,uVar24);
    uVar24 = NEON_fnmsub(fVar30,fVar3,fVar28 * fVar16);
    uVar27 = NEON_fmadd(uVar27,fVar7,fVar29 * fVar22);
    uVar5 = NEON_fmadd(uVar8,fVar7,fVar31 * fVar22);
    fVar7 = (float)NEON_fmsub(fVar4,uVar18,fVar10);
    uVar8 = NEON_fmadd(uVar9,fVar25,uVar27);
    uVar5 = NEON_fmadd(uVar24,fVar25,uVar5);
    fVar2 = (float)NEON_fmadd(fVar4,uVar8,fVar6);
    uVar5 = NEON_fmadd(fVar4,uVar5,fVar20);
    uVar8 = NEON_fmadd(fVar2,local_74,fVar7 * local_6c);
    uVar9 = NEON_fmadd(uVar5,local_6c,fVar7 * fStack_70);
    uVar24 = NEON_fmsub(uVar5,fStack_70,uVar8);
    uVar27 = NEON_fmadd(uVar5,local_74,fVar2 * fStack_70);
    uVar18 = NEON_fmsub(fVar2,local_78,uVar9);
    uVar8 = NEON_fnmsub(fVar2,local_6c,fVar7 * local_74);
    uVar9 = NEON_fmadd(fVar7,local_78,uVar27);
    uVar27 = NEON_fnmsub(uVar24,local_6c,fVar13);
    uVar19 = NEON_fnmsub(uVar24,fStack_70,fVar12);
    uVar21 = NEON_fnmsub(uVar18,local_78,fVar11);
    uVar8 = NEON_fmadd(uVar5,local_78,uVar8);
    fVar7 = (float)NEON_fmadd(uVar9,local_78,uVar27);
    fVar2 = (float)NEON_fmadd(uVar18,local_6c,uVar19);
    fVar4 = (float)NEON_fmadd(uVar9,fStack_70,uVar21);
    fVar3 = (float)NEON_fnmadd(uVar8,local_74,-fVar7);
    fVar2 = (float)NEON_fnmadd(uVar9,local_74,-fVar2);
    fVar7 = (float)NEON_fnmadd(uVar8,local_6c,-fVar4);
    uVar5 = NEON_fnmadd(uVar18,fStack_70,-fVar3);
    NEON_fnmadd(uVar8,local_78,-fVar2);
    NEON_fnmadd(uVar24,local_74,-fVar7);
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


