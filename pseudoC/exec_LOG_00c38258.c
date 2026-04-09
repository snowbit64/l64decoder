// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_LOG
// Entry Point: 00c38258
// Size: 60 bytes
// Signature: undefined __cdecl exec_LOG(IR_Const * param_1)


/* IR_Interpreter::exec_LOG(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_LOG(IR_Const *param_1)

{
  float fVar1;
  undefined auVar2 [16];
  
  if (*(int *)param_1 == 3) {
    fVar1 = logf(*(float *)(param_1 + 8));
    auVar2._12_4_ = 0;
    auVar2._8_4_ = fVar1;
    auVar2._0_8_ = 3;
    return auVar2;
  }
  return ZEXT816(0);
}


