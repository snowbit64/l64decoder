// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_ISCONST
// Entry Point: 00c38638
// Size: 40 bytes
// Signature: undefined __cdecl exec_ISCONST(IR_Const * param_1)


/* IR_Interpreter::exec_ISCONST(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_ISCONST(IR_Const *param_1)

{
  undefined auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1[8] = *(int *)param_1 == 9 && param_1[8] != (IR_Const)0x0;
  auVar1._0_8_ = 9;
  return auVar1;
}


