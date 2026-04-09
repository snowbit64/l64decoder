// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getElementType
// Entry Point: 00c4e9f0
// Size: 136 bytes
// Signature: undefined __thiscall getElementType(IR_Type * this, IR_TypeSet * param_1)


/* IR_Type::getElementType(IR_TypeSet*) const */

IR_Type * __thiscall IR_Type::getElementType(IR_Type *this,IR_TypeSet *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  if (iVar1 - 1U < 2) {
    uVar2 = *(uint *)(this + 8);
    this = *(IR_Type **)(param_1 + (ulong)uVar2 * 0x10);
    if ((undefined4 *)this == (undefined4 *)0x0) {
      this = (IR_Type *)operator_new(0x20);
      *(undefined4 *)this = 0;
      *(uint *)((long)this + 8) = uVar2;
      *(IR_Type **)(param_1 + (ulong)uVar2 * 0x10) = this;
      param_1[(ulong)uVar2 * 0x10 + 8] = (IR_TypeSet)0x1;
    }
  }
  else if ((iVar1 != 0) && (iVar1 != 6)) {
    if (iVar1 == 4) {
      this = *(IR_Type **)(this + 8);
    }
    else {
      this = (IR_Type *)0x0;
    }
  }
  return this;
}


