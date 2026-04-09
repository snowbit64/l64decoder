// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canReceiveWhenReference
// Entry Point: 00c55874
// Size: 36 bytes
// Signature: undefined __cdecl canReceiveWhenReference(IR_Type * param_1, IR_Type * * param_2)


/* IR_Type::canReceiveWhenReference(IR_Type*, IR_Type*&) */

bool IR_Type::canReceiveWhenReference(IR_Type *param_1,IR_Type **param_2)

{
  IR_Type **ppIVar1;
  
  ppIVar1 = *(IR_Type ***)(param_1 + 8);
  if (*(int *)param_2 != 5) {
    ppIVar1 = param_2;
    param_2 = (IR_Type **)param_1;
  }
  return (IR_Type **)param_2[1] == ppIVar1;
}


