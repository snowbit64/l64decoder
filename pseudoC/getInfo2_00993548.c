// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfo2
// Entry Point: 00993548
// Size: 188 bytes
// Signature: undefined __thiscall getInfo2(Bt2D6Joint * this, btConstraintInfo2 * param_1)


/* Bt2D6Joint::getInfo2(btTypedConstraint::btConstraintInfo2*) */

void __thiscall Bt2D6Joint::getInfo2(Bt2D6Joint *this,btConstraintInfo2 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  
  lVar1 = *(long *)(this + 0x28);
  lVar2 = *(long *)(this + 0x30);
  fVar4 = **(float **)(param_1 + 0x38);
  iVar3 = setAngularLimits(this,param_1,fVar4,0,(btTransform *)(lVar1 + 8),
                           (btTransform *)(lVar2 + 8),(btVector3 *)(lVar1 + 0x17c),
                           (btVector3 *)(lVar2 + 0x17c),(btVector3 *)(lVar1 + 0x18c),
                           (btVector3 *)(lVar2 + 0x18c));
  setLinearLimits(this,param_1,fVar4,iVar3,(btTransform *)(lVar1 + 8),(btTransform *)(lVar2 + 8),
                  (btVector3 *)(lVar1 + 0x17c),(btVector3 *)(lVar2 + 0x17c),
                  (btVector3 *)(lVar1 + 0x18c),(btVector3 *)(lVar2 + 0x18c));
  return;
}


