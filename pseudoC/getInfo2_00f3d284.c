// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfo2
// Entry Point: 00f3d284
// Size: 224 bytes
// Signature: undefined __thiscall getInfo2(btGeneric6DofConstraint * this, btConstraintInfo2 * param_1)


/* btGeneric6DofConstraint::getInfo2(btTypedConstraint::btConstraintInfo2*) */

void __thiscall
btGeneric6DofConstraint::getInfo2(btGeneric6DofConstraint *this,btConstraintInfo2 *param_1)

{
  btTransform *pbVar1;
  btVector3 *pbVar2;
  btTransform *pbVar3;
  btVector3 *pbVar4;
  btVector3 *pbVar5;
  btVector3 *pbVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  lVar7 = *(long *)(this + 0x28);
  lVar8 = *(long *)(this + 0x30);
  pbVar1 = (btTransform *)(lVar7 + 8);
  pbVar2 = (btVector3 *)(lVar7 + 0x17c);
  pbVar3 = (btTransform *)(lVar8 + 8);
  pbVar4 = (btVector3 *)(lVar8 + 0x17c);
  pbVar5 = (btVector3 *)(lVar7 + 0x18c);
  pbVar6 = (btVector3 *)(lVar8 + 0x18c);
  if (this[0x52d] == (btGeneric6DofConstraint)0x0) {
    iVar9 = setLinearLimits(this,param_1,0,pbVar1,pbVar3,pbVar2,pbVar4,pbVar5,pbVar6);
    setAngularLimits(this,param_1,iVar9,pbVar1,pbVar3,pbVar2,pbVar4,pbVar5,pbVar6);
  }
  else {
    iVar9 = setAngularLimits(this,param_1,0,pbVar1,pbVar3,pbVar2,pbVar4,pbVar5,pbVar6);
    setLinearLimits(this,param_1,iVar9,pbVar1,pbVar3,pbVar2,pbVar4,pbVar5,pbVar6);
  }
  return;
}


