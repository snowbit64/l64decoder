// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyFieldsFrom
// Entry Point: 00c51974
// Size: 72 bytes
// Signature: undefined __thiscall copyFieldsFrom(IR_Struct * this, IR_Struct * param_1)


/* IR_Struct::copyFieldsFrom(IR_Struct const*) */

void __thiscall IR_Struct::copyFieldsFrom(IR_Struct *this,IR_Struct *param_1)

{
  IR_StructField *pIVar1;
  IR_StructField *pIVar2;
  
  pIVar2 = *(IR_StructField **)(param_1 + 0x38);
  for (pIVar1 = *(IR_StructField **)(param_1 + 0x30); pIVar1 != pIVar2; pIVar1 = pIVar1 + 0x38) {
    addField(this,pIVar1);
  }
  return;
}


