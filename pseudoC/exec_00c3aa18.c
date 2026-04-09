// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec
// Entry Point: 00c3aa18
// Size: 28 bytes
// Signature: undefined __cdecl exec(uint param_1, IR_Const * param_2, IR_Const * param_3)


/* IR_Interpreter::exec(unsigned int, IR_Const const&, IR_Const const&) */

void IR_Interpreter::exec(uint param_1,IR_Const *param_2,IR_Const *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c3aa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(s_binaryExecFuncs + (ulong)(param_1 - 0x6f) * 8))(param_2,param_3);
  return;
}


