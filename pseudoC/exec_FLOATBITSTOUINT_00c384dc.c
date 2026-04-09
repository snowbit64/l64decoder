// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_FLOATBITSTOUINT
// Entry Point: 00c384dc
// Size: 24 bytes
// Signature: undefined __cdecl exec_FLOATBITSTOUINT(IR_Const * param_1)


/* IR_Interpreter::exec_FLOATBITSTOUINT(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_FLOATBITSTOUINT(IR_Const *param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  uVar1 = 5;
  if (*(int *)param_1 != 3) {
    uVar1 = 0;
  }
  auVar2._8_4_ = *(undefined4 *)(param_1 + 8);
  auVar2._0_8_ = uVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}


