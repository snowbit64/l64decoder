// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_DIVv
// Entry Point: 00c39380
// Size: 84 bytes
// Signature: undefined __cdecl exec_DIVv(IR_Const * param_1, IR_Const * param_2)


/* IR_Interpreter::exec_DIVv(IR_Const const&, IR_Const const&) */

undefined  [16] IR_Interpreter::exec_DIVv(IR_Const *param_1,IR_Const *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  uVar3 = 0xc;
  pcVar4 = "type error interpreting IR";
  if ((*(int *)param_1 == 6) && (*(int *)param_2 == 6)) {
    uVar1 = *(uint *)(param_2 + 8);
    if (uVar1 == 0) {
      auVar6._8_8_ = "divide by zero interpreting IR";
      auVar6._0_8_ = 0xc;
      return auVar6;
    }
    uVar3 = 6;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = *(uint *)(param_1 + 8) / uVar1;
    }
    pcVar4 = (char *)(ulong)uVar2;
  }
  auVar5._8_8_ = pcVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}


