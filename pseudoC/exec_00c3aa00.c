// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec
// Entry Point: 00c3aa00
// Size: 24 bytes
// Signature: undefined __cdecl exec(uint param_1, IR_Const * param_2)


/* IR_Interpreter::exec(unsigned int, IR_Const const&) */

void IR_Interpreter::exec(uint param_1,IR_Const *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c3aa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(s_unaryExecFuncs + (ulong)(param_1 - 0x1a) * 8))(param_2);
  return;
}


