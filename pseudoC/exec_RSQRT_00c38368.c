// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_RSQRT
// Entry Point: 00c38368
// Size: 52 bytes
// Signature: undefined __cdecl exec_RSQRT(IR_Const * param_1)


/* IR_Interpreter::exec_RSQRT(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_RSQRT(IR_Const *param_1)

{
  undefined auVar1 [16];
  
  if (*(int *)param_1 == 3) {
    auVar1._12_4_ = 0;
    auVar1._8_4_ = 1.0 / SQRT(*(float *)(param_1 + 8));
    auVar1._0_8_ = 3;
    return auVar1;
  }
  return ZEXT816(0);
}


