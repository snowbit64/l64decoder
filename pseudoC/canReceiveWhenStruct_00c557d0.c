// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canReceiveWhenStruct
// Entry Point: 00c557d0
// Size: 76 bytes
// Signature: undefined __thiscall canReceiveWhenStruct(IR_Type * this, IR_Type * param_1, IR_Type * * param_2)


/* IR_Type::canReceiveWhenStruct(IR_Type*, IR_Type*&) */

undefined8 __thiscall
IR_Type::canReceiveWhenStruct(IR_Type *this,IR_Type *param_1,IR_Type **param_2)

{
  IR_Struct *this_00;
  ulong uVar1;
  
  if (*(int *)param_1 == 3) {
    this_00 = *(IR_Struct **)(this + 8);
    if ((this_00 == *(IR_Struct **)(param_1 + 8)) ||
       ((this_00[0x50] != (IR_Struct)0x0 &&
        (uVar1 = IR_Struct::queryResolvedStruct(this_00,*(IR_Struct **)(param_1 + 8),param_2),
        (uVar1 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}


