// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_CMPGTb
// Entry Point: 00c3a1a0
// Size: 72 bytes
// Signature: undefined __cdecl exec_CMPGTb(IR_Const * param_1, IR_Const * param_2)


/* IR_Interpreter::exec_CMPGTb(IR_Const const&, IR_Const const&) */

undefined  [16] IR_Interpreter::exec_CMPGTb(IR_Const *param_1,IR_Const *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined auVar3 [16];
  
  uVar1 = 9;
  pcVar2 = (char *)(ulong)((byte)param_2[8] < (byte)param_1[8]);
  if (*(int *)param_1 != 9 || *(int *)param_2 != 9) {
    uVar1 = 0xc;
    pcVar2 = "type error interpreting IR";
  }
  auVar3._8_8_ = pcVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


