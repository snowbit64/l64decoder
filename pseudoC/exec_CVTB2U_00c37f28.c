// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_CVTB2U
// Entry Point: 00c37f28
// Size: 40 bytes
// Signature: undefined __cdecl exec_CVTB2U(IR_Const * param_1)


/* IR_Interpreter::exec_CVTB2U(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_CVTB2U(IR_Const *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined auVar3 [16];
  
  uVar1 = 6;
  pcVar2 = (char *)(ulong)(byte)param_1[8];
  if (*(int *)param_1 != 9) {
    uVar1 = 0xc;
    pcVar2 = "type error interpreting IR";
  }
  auVar3._8_8_ = pcVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


