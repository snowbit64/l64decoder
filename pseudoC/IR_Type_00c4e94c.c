// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IR_Type
// Entry Point: 00c4e94c
// Size: 68 bytes
// Signature: undefined __thiscall ~IR_Type(IR_Type * this)


/* IR_Type::~IR_Type() */

void __thiscall IR_Type::~IR_Type(IR_Type *this)

{
  IR_Struct *this_00;
  
  if ((*(int *)this == 3) && (this_00 = *(IR_Struct **)(this + 8), this_00 != (IR_Struct *)0x0)) {
    IR_Struct::~IR_Struct(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


