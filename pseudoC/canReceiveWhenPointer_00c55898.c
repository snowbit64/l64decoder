// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canReceiveWhenPointer
// Entry Point: 00c55898
// Size: 12 bytes
// Signature: undefined __cdecl canReceiveWhenPointer(IR_Type * param_1, IR_Type * * param_2)


/* IR_Type::canReceiveWhenPointer(IR_Type*, IR_Type*&) */

bool IR_Type::canReceiveWhenPointer(IR_Type *param_1,IR_Type **param_2)

{
  return (IR_Type **)param_1 == param_2;
}


