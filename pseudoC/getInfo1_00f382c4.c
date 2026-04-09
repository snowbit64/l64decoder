// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfo1
// Entry Point: 00f382c4
// Size: 172 bytes
// Signature: undefined __thiscall getInfo1(btConeTwistConstraint * this, btConstraintInfo1 * param_1)


/* btConeTwistConstraint::getInfo1(btTypedConstraint::btConstraintInfo1*) */

void __thiscall
btConeTwistConstraint::getInfo1(btConeTwistConstraint *this,btConstraintInfo1 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if (this[0x227] == (btConeTwistConstraint)0x0) {
    lVar3 = *(long *)(this + 0x28);
    lVar4 = *(long *)(this + 0x30);
    *(undefined8 *)param_1 = 0x300000003;
    calcAngleInfo2(this,(btTransform *)(lVar3 + 8),(btTransform *)(lVar4 + 8),
                   (btMatrix3x3 *)(lVar3 + 0x14c),(btMatrix3x3 *)(lVar4 + 0x14c));
    if (this[0x226] != (btConeTwistConstraint)0x0) {
      iVar1 = *(int *)param_1;
      iVar2 = *(int *)(param_1 + 4);
      fVar6 = *(float *)(this + 0x1d4);
      fVar5 = *(float *)(this + 0x1e0);
      *(int *)param_1 = iVar1 + 1;
      *(int *)(param_1 + 4) = iVar2 + -1;
      if ((fVar6 < fVar5) && (*(float *)(this + 0x1d8) < fVar5)) {
        *(int *)param_1 = iVar1 + 2;
        *(int *)(param_1 + 4) = iVar2 + -2;
      }
    }
    if (this[0x225] != (btConeTwistConstraint)0x0) {
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + -1,
                    (int)*(undefined8 *)param_1 + 1);
    }
  }
  else {
    *(undefined8 *)param_1 = 0;
  }
  return;
}


