// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: noConversionNeededTo
// Entry Point: 00c50cf4
// Size: 192 bytes
// Signature: undefined __thiscall noConversionNeededTo(IR_Type * this, IR_Type * param_1)


/* IR_Type::noConversionNeededTo(IR_Type*) const */

bool __thiscall IR_Type::noConversionNeededTo(IR_Type *this,IR_Type *param_1)

{
  bool bVar1;
  
  if (this == param_1) {
    return true;
  }
  if (*(int *)this == 4) {
    if (*(int *)param_1 != 4) {
      return false;
    }
    if (*(long *)(param_1 + 8) != *(long *)(this + 8)) {
      return false;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      return true;
    }
    bVar1 = *(int *)(param_1 + 0x10) == *(int *)(this + 0x10);
  }
  else {
    if ((((*(int *)this != 7) || (*(int *)param_1 != 7)) ||
        (*(int *)(this + 0x10) != *(int *)(param_1 + 0x10))) || (this[0x14] != param_1[0x14])) {
      return false;
    }
    bVar1 = false;
    if ((this[0x15] == param_1[0x15]) && (*(int *)(this + 0x18) != 2)) {
      return *(int *)(param_1 + 0x18) != 2;
    }
  }
  return bVar1;
}


