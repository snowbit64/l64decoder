// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_MODi
// Entry Point: 00c38b70
// Size: 88 bytes
// Signature: undefined __cdecl exec_MODi(IR_Const * param_1, IR_Const * param_2)


/* IR_Interpreter::exec_MODi(IR_Const const&, IR_Const const&) */

undefined  [16] IR_Interpreter::exec_MODi(IR_Const *param_1,IR_Const *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  uVar3 = 0xc;
  pcVar4 = "type error interpreting IR";
  if ((*(int *)param_1 == 5) && (*(int *)param_2 == 5)) {
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 0) {
      auVar6._8_8_ = "divide by zero interpreting IR";
      auVar6._0_8_ = 0xc;
      return auVar6;
    }
    uVar3 = 5;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 8) / iVar1;
    }
    pcVar4 = (char *)(ulong)(uint)(*(int *)(param_1 + 8) - iVar2 * iVar1);
  }
  auVar5._8_8_ = pcVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}


