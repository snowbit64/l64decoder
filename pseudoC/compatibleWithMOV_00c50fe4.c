// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compatibleWithMOV
// Entry Point: 00c50fe4
// Size: 92 bytes
// Signature: undefined __thiscall compatibleWithMOV(IR_Type * this, IR_Type * param_1)


/* IR_Type::compatibleWithMOV(IR_Type*) const */

undefined8 __thiscall IR_Type::compatibleWithMOV(IR_Type *this,IR_Type *param_1)

{
  if ((param_1 != this) &&
     ((((*(int *)this != 6 || (**(int **)(this + 8) != 3)) || (*(int *)param_1 != 5)) ||
      ((**(int **)(param_1 + 8) != 7 || ((*(int **)(param_1 + 8))[4] != 6)))))) {
    return 0;
  }
  return 1;
}


