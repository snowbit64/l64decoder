// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_CMPLTj
// Entry Point: 00c39db0
// Size: 72 bytes
// Signature: undefined __cdecl exec_CMPLTj(IR_Const * param_1, IR_Const * param_2)


/* IR_Interpreter::exec_CMPLTj(IR_Const const&, IR_Const const&) */

undefined  [16] IR_Interpreter::exec_CMPLTj(IR_Const *param_1,IR_Const *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined auVar3 [16];
  
  uVar1 = 9;
  pcVar2 = (char *)(ulong)(*(int *)(param_1 + 8) < *(int *)(param_2 + 8));
  if (*(int *)param_1 != 5 || *(int *)param_2 != 5) {
    uVar1 = 0xc;
    pcVar2 = "type error interpreting IR";
  }
  auVar3._8_8_ = pcVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


