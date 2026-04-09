// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_SATURATE
// Entry Point: 00c37fa0
// Size: 60 bytes
// Signature: undefined __cdecl exec_SATURATE(IR_Const * param_1)


/* IR_Interpreter::exec_SATURATE(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_SATURATE(IR_Const *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined auVar3 [16];
  
  if (*(int *)param_1 == 3) {
    uVar2 = NEON_fmin(*(float *)(param_1 + 8),0x3f800000);
    uVar1 = 0;
    if (0.0 <= *(float *)(param_1 + 8)) {
      uVar1 = uVar2;
    }
    auVar3._12_4_ = 0;
    auVar3._8_4_ = uVar1;
    auVar3._0_8_ = 3;
    return auVar3;
  }
  return ZEXT816(0);
}


