// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_CVTV2B
// Entry Point: 00c37e30
// Size: 48 bytes
// Signature: undefined __cdecl exec_CVTV2B(IR_Const * param_1)


/* IR_Interpreter::exec_CVTV2B(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_CVTV2B(IR_Const *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined auVar3 [16];
  
  uVar1 = 9;
  if (*(int *)param_1 != 6) {
    uVar1 = 0xc;
  }
  pcVar2 = (char *)(ulong)(*(int *)(param_1 + 8) != 0);
  if (*(int *)param_1 != 6) {
    pcVar2 = "type error interpreting IR";
  }
  auVar3._8_8_ = pcVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


