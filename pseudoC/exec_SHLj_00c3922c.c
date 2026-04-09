// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_SHLj
// Entry Point: 00c3922c
// Size: 68 bytes
// Signature: undefined __cdecl exec_SHLj(IR_Const * param_1, IR_Const * param_2)


/* IR_Interpreter::exec_SHLj(IR_Const const&, IR_Const const&) */

undefined  [16] IR_Interpreter::exec_SHLj(IR_Const *param_1,IR_Const *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined auVar3 [16];
  
  uVar1 = 5;
  pcVar2 = (char *)(ulong)(uint)(*(int *)(param_1 + 8) << (ulong)(*(uint *)(param_2 + 8) & 0x1f));
  if (*(int *)param_1 != 5 || *(int *)param_2 != 5) {
    uVar1 = 0xc;
    pcVar2 = "type error interpreting IR";
  }
  auVar3._8_8_ = pcVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


