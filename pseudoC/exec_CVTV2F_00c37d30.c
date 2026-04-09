// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_CVTV2F
// Entry Point: 00c37d30
// Size: 68 bytes
// Signature: undefined __cdecl exec_CVTV2F(IR_Const * param_1)


/* IR_Interpreter::exec_CVTV2F(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_CVTV2F(IR_Const *param_1)

{
  undefined4 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 local_8;
  
  if (*(int *)param_1 == 6) {
    uVar1 = NEON_ucvtf(*(undefined4 *)(param_1 + 8));
    local_8 = CONCAT44(local_8._4_4_,uVar1);
    auVar2._8_8_ = local_8;
    auVar2._0_8_ = 3;
    return auVar2;
  }
  auVar3._8_8_ = "type error interpreting IR";
  auVar3._0_8_ = 0xc;
  return auVar3;
}


