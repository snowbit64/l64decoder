// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMatrixColType
// Entry Point: 00c4ebe4
// Size: 104 bytes
// Signature: undefined __thiscall getMatrixColType(IR_Type * this, IR_TypeSet * param_1)


/* IR_Type::getMatrixColType(IR_TypeSet*) const */

void __thiscall IR_Type::getMatrixColType(IR_Type *this,IR_TypeSet *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(this + 0x14);
  uVar2 = *(uint *)(this + 8);
  uVar4 = (ulong)(iVar1 - 1);
  if (*(long *)(param_1 + uVar4 * 0x10 + (ulong)uVar2 * 0x40 + 0xa0) == 0) {
    puVar3 = (undefined4 *)operator_new(0x20);
    puVar3[2] = uVar2;
    puVar3[5] = iVar1;
    *puVar3 = 1;
    *(undefined4 **)(param_1 + uVar4 * 0x10 + (ulong)uVar2 * 0x40 + 0xa0) = puVar3;
    param_1[uVar4 * 0x10 + (ulong)uVar2 * 0x40 + 0xa8] = (IR_TypeSet)0x1;
  }
  return;
}


