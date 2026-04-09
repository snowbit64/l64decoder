// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queryResolvedType
// Entry Point: 00c50db4
// Size: 176 bytes
// Signature: undefined __thiscall queryResolvedType(IR_Type * this, IR_Type * param_1, IR_Type * * param_2)


/* IR_Type::queryResolvedType(IR_Type*, IR_Type*&) const */

undefined8 __thiscall IR_Type::queryResolvedType(IR_Type *this,IR_Type *param_1,IR_Type **param_2)

{
  int iVar1;
  
  if (*(int *)this != 0) {
    return 0;
  }
  iVar1 = *(int *)(this + 8);
  if (1 < iVar1 - 1U) {
    return 0;
  }
  if (iVar1 == 2) {
    iVar1 = *(int *)(param_1 + 8);
    if (*(int *)param_1 == 0) {
      if (iVar1 == 2) {
        return 1;
      }
      if (iVar1 - 1U < 2) {
        return 0;
      }
    }
    else if (1 < *(int *)param_1) {
      return 0;
    }
    if (1 < iVar1 - 3U) {
      return 0;
    }
    if (*param_2 != (IR_Type *)0x0) {
      return 1;
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    if (0xfffffffd < *(int *)(param_1 + 8) - 3U && *(int *)param_1 == 0) {
      return 1;
    }
    if (*param_2 != (IR_Type *)0x0) {
      return 1;
    }
  }
  *param_2 = param_1;
  return 1;
}


