// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMotorTarget
// Entry Point: 00f3be38
// Size: 304 bytes
// Signature: undefined __thiscall setMotorTarget(btConeTwistConstraint * this, btQuaternion * param_1)


/* btConeTwistConstraint::setMotorTarget(btQuaternion const&) */

void __thiscall
btConeTwistConstraint::setMotorTarget(btConeTwistConstraint *this,btQuaternion *param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 0x184),(btQuaternion *)&local_68);
  fVar4 = *(float *)param_1;
  uVar6 = *(undefined4 *)(param_1 + 4);
  fVar11 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_1 + 0xc);
  uVar9 = NEON_fmadd(fVar7,fStack_5c,fVar4 * local_68);
  fVar8 = (float)NEON_fmadd(fVar7,fStack_64,fVar4 * local_60);
  fVar2 = (float)NEON_fmadd(uVar6,local_68,fVar7 * local_60);
  fVar12 = (float)NEON_fmadd(fVar11,fStack_64,fVar7 * local_68);
  fVar7 = (float)NEON_fmadd(uVar6,local_60,fVar4 * fStack_5c);
  fVar13 = (float)NEON_fmadd(uVar6,fStack_5c,fVar11 * local_68);
  fVar4 = (float)NEON_fmadd(fVar11,fStack_5c,fVar4 * fStack_64);
  uVar9 = NEON_fmadd(fVar11,local_60,uVar9);
  fVar7 = fVar7 - fVar12;
  fVar13 = fVar13 - fVar8;
  fVar4 = fVar4 - fVar2;
  uVar10 = NEON_fmadd(uVar6,fStack_64,uVar9);
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 0x144),(btQuaternion *)&local_68);
  uVar6 = NEON_fnmsub(uVar10,local_68,fStack_64 * fVar4);
  uVar3 = NEON_fmadd(fStack_64,uVar10,local_68 * fVar4);
  uVar5 = NEON_fnmsub(fStack_64,fVar7,local_68 * fVar13);
  uVar9 = NEON_fmadd(fStack_64,fVar13,fVar7 * local_68);
  uVar6 = NEON_fmadd(local_60,fVar13,uVar6);
  uVar3 = NEON_fmsub(local_60,fVar7,uVar3);
  uVar5 = NEON_fmadd(local_60,uVar10,uVar5);
  uVar9 = NEON_fmadd(local_60,fVar4,uVar9);
  local_68 = (float)NEON_fmadd(fStack_5c,fVar7,uVar6);
  fStack_64 = (float)NEON_fmadd(fStack_5c,fVar13,uVar3);
  local_60 = (float)NEON_fmadd(fStack_5c,fVar4,uVar5);
  fStack_5c = (float)NEON_fnmsub(fStack_5c,uVar10,uVar9);
  setMotorTargetInConstraintSpace(this,(btQuaternion *)&local_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


