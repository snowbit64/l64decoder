// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_CVTB2H
// Entry Point: 00c37eb0
// Size: 80 bytes
// Signature: undefined __cdecl exec_CVTB2H(IR_Const * param_1)


/* IR_Interpreter::exec_CVTB2H(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_CVTB2H(IR_Const *param_1)

{
  undefined4 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 local_8;
  
  if (*(int *)param_1 == 9) {
    uVar1 = 0x3f800000;
    if (param_1[8] == (IR_Const)0x0) {
      uVar1 = 0;
    }
    local_8 = CONCAT44(local_8._4_4_,uVar1);
    auVar2._8_8_ = local_8;
    auVar2._0_8_ = 3;
    return auVar2;
  }
  auVar3._8_8_ = "type error interpreting IR";
  auVar3._0_8_ = 0xc;
  return auVar3;
}


