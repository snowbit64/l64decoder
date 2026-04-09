// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIRRegisterType
// Entry Point: 00c50b84
// Size: 72 bytes
// Signature: undefined __thiscall getIRRegisterType(IR_Type * this, uint param_1, IR_TypeSet * param_2)


/* IR_Type::getIRRegisterType(unsigned int, IR_TypeSet*) */

IR_Type * __thiscall IR_Type::getIRRegisterType(IR_Type *this,uint param_1,IR_TypeSet *param_2)

{
  if ((param_1 != 0) &&
     (this = *(IR_Type **)(param_2 + 0x60), (undefined4 *)this == (undefined4 *)0x0)) {
    this = (IR_Type *)operator_new(0x20);
    *(undefined4 *)this = 0;
    *(IR_Type **)(param_2 + 0x60) = this;
    *(undefined4 *)((long)this + 8) = 6;
    param_2[0x68] = (IR_TypeSet)0x1;
  }
  return this;
}


