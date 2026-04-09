// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_CVTJ2I
// Entry Point: 00c37c88
// Size: 40 bytes
// Signature: undefined __cdecl exec_CVTJ2I(IR_Const * param_1)


/* IR_Interpreter::exec_CVTJ2I(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_CVTJ2I(IR_Const *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined auVar3 [16];
  
  uVar1 = 5;
  pcVar2 = (char *)(ulong)*(uint *)(param_1 + 8);
  if (*(int *)param_1 != 5) {
    uVar1 = 0xc;
    pcVar2 = "type error interpreting IR";
  }
  auVar3._8_8_ = pcVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


