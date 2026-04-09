// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canReceiveWhenSampler
// Entry Point: 00c55960
// Size: 12 bytes
// Signature: undefined __cdecl canReceiveWhenSampler(IR_Type * param_1, IR_Type * * param_2)


/* IR_Type::canReceiveWhenSampler(IR_Type*, IR_Type*&) */

bool IR_Type::canReceiveWhenSampler(IR_Type *param_1,IR_Type **param_2)

{
  return (IR_Type **)param_1 == param_2;
}


