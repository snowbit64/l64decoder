// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_CMPGTv
// Entry Point: 00c39ff0
// Size: 72 bytes
// Signature: undefined __cdecl exec_CMPGTv(IR_Const * param_1, IR_Const * param_2)


/* IR_Interpreter::exec_CMPGTv(IR_Const const&, IR_Const const&) */

undefined  [16] IR_Interpreter::exec_CMPGTv(IR_Const *param_1,IR_Const *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined auVar3 [16];
  
  uVar1 = 9;
  pcVar2 = (char *)(ulong)(*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8));
  if (*(int *)param_1 != 6 || *(int *)param_2 != 6) {
    uVar1 = 0xc;
    pcVar2 = "type error interpreting IR";
  }
  auVar3._8_8_ = pcVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


