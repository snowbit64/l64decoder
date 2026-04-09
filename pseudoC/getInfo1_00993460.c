// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfo1
// Entry Point: 00993460
// Size: 232 bytes
// Signature: undefined __thiscall getInfo1(Bt2D6Joint * this, btConstraintInfo1 * param_1)


/* Bt2D6Joint::getInfo1(btTypedConstraint::btConstraintInfo1*) */

void __thiscall Bt2D6Joint::getInfo1(Bt2D6Joint *this,btConstraintInfo1 *param_1)

{
  Bt2D6Joint BVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  uVar2 = 2;
  if (*(int *)(this + 0x1b4) != 4) {
    uVar2 = (uint)(*(int *)(this + 0x1b4) != 0);
  }
  iVar4 = uVar2 + (byte)this[0x14c];
  iVar3 = iVar4;
  if ((*(int *)(this + 0x1b8) != 0) && (iVar3 = iVar4 + 2, *(int *)(this + 0x1b8) != 4)) {
    iVar3 = iVar4 + 1;
  }
  iVar3 = iVar3 + (uint)(byte)this[0x14d];
  iVar4 = iVar3;
  if ((*(int *)(this + 0x1bc) != 0) && (iVar4 = iVar3 + 2, *(int *)(this + 0x1bc) != 4)) {
    iVar4 = iVar3 + 1;
  }
  iVar4 = iVar4 + (uint)(byte)this[0x14e];
  iVar3 = iVar4;
  if ((*(int *)(this + 0x200) != 0) && (iVar3 = iVar4 + 2, *(int *)(this + 0x200) != 4)) {
    iVar3 = iVar4 + 1;
  }
  iVar3 = iVar3 + (uint)(byte)this[0x1e0];
  iVar4 = iVar3;
  if ((*(int *)(this + 0x244) != 0) && (iVar4 = iVar3 + 2, *(int *)(this + 0x244) != 4)) {
    iVar4 = iVar3 + 1;
  }
  iVar4 = iVar4 + (uint)(byte)this[0x224];
  iVar3 = iVar4;
  if ((*(int *)(this + 0x288) != 0) && (iVar3 = iVar4 + 2, *(int *)(this + 0x288) != 4)) {
    iVar3 = iVar4 + 1;
  }
  BVar1 = this[0x268];
  *(uint *)param_1 = iVar3 + (uint)(byte)BVar1;
  *(uint *)(param_1 + 4) = 0x12 - (iVar3 + (uint)(byte)BVar1);
  return;
}


