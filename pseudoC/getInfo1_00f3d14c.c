// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfo1
// Entry Point: 00f3d14c
// Size: 312 bytes
// Signature: undefined __thiscall getInfo1(btGeneric6DofConstraint * this, btConstraintInfo1 * param_1)


/* btGeneric6DofConstraint::getInfo1(btTypedConstraint::btConstraintInfo1*) */

void __thiscall
btGeneric6DofConstraint::getInfo1(btGeneric6DofConstraint *this,btConstraintInfo1 *param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (this[0x534] == (btGeneric6DofConstraint)0x0) {
    calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                        (btTransform *)(*(long *)(this + 0x30) + 8));
    *(undefined8 *)param_1 = 0x600000000;
    bVar1 = (*(uint *)(this + 0x370) | (uint)(byte)this[0x32c]) != 0;
    iVar3 = 5;
    if (!bVar1) {
      iVar3 = 6;
    }
    uVar5 = NEON_cmeq((ulong)(*(uint *)(this + 0x370) | (uint)(byte)this[0x32c]),0,4);
    uVar4 = (uint)bVar1;
    uVar5 = NEON_bsl(CONCAT44((int)uVar5,(int)uVar5),0x600000000,0x500000001,1);
    *(undefined8 *)param_1 = uVar5;
    if ((*(int *)(this + 0x374) != 0) || (this[0x32d] != (btGeneric6DofConstraint)0x0)) {
      uVar4 = 1;
      if (bVar1) {
        uVar4 = 2;
      }
      iVar3 = iVar3 + -1;
      *(uint *)param_1 = uVar4;
      *(int *)(param_1 + 4) = iVar3;
    }
    if ((*(int *)(this + 0x378) != 0) || (this[0x32e] != (btGeneric6DofConstraint)0x0)) {
      *(uint *)param_1 = uVar4 + 1;
      *(int *)(param_1 + 4) = iVar3 + -1;
    }
    uVar2 = testAngularLimitMotor(this,0);
    if ((uVar2 & 1) != 0) {
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + -1,
                    (int)*(undefined8 *)param_1 + 1);
    }
    uVar2 = testAngularLimitMotor(this,1);
    if ((uVar2 & 1) != 0) {
      *(ulong *)param_1 =
           CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + -1,
                    (int)*(undefined8 *)param_1 + 1);
    }
    uVar2 = testAngularLimitMotor(this,2);
    if ((uVar2 & 1) != 0) {
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


