// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_NOTu
// Entry Point: 00c376ac
// Size: 44 bytes
// Signature: undefined __cdecl exec_NOTu(IR_Const * param_1)


/* IR_Interpreter::exec_NOTu(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_NOTu(IR_Const *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined auVar3 [16];
  
  uVar1 = 6;
  pcVar2 = (char *)(ulong)~*(uint *)(param_1 + 8);
  if (*(int *)param_1 != 6) {
    uVar1 = 0xc;
    pcVar2 = "type error interpreting IR";
  }
  auVar3._8_8_ = pcVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


