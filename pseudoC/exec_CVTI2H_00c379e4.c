// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_CVTI2H
// Entry Point: 00c379e4
// Size: 68 bytes
// Signature: undefined __cdecl exec_CVTI2H(IR_Const * param_1)


/* IR_Interpreter::exec_CVTI2H(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_CVTI2H(IR_Const *param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 local_8;
  
  if (*(int *)param_1 == 5) {
    local_8 = CONCAT44(local_8._4_4_,(float)*(int *)(param_1 + 8));
    auVar1._8_8_ = local_8;
    auVar1._0_8_ = 3;
    return auVar1;
  }
  auVar2._8_8_ = "type error interpreting IR";
  auVar2._0_8_ = 0xc;
  return auVar2;
}


