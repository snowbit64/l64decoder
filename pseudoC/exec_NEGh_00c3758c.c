// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_NEGh
// Entry Point: 00c3758c
// Size: 68 bytes
// Signature: undefined __cdecl exec_NEGh(IR_Const * param_1)


/* IR_Interpreter::exec_NEGh(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_NEGh(IR_Const *param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 local_8;
  
  if (*(int *)param_1 == 3) {
    local_8 = CONCAT44(local_8._4_4_,-*(float *)(param_1 + 8));
    auVar1._8_8_ = local_8;
    auVar1._0_8_ = 3;
    return auVar1;
  }
  auVar2._8_8_ = "type error interpreting IR";
  auVar2._0_8_ = 0xc;
  return auVar2;
}


