// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_ABS
// Entry Point: 00c3839c
// Size: 76 bytes
// Signature: undefined __cdecl exec_ABS(IR_Const * param_1)


/* IR_Interpreter::exec_ABS(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_ABS(IR_Const *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  uVar1 = *(uint *)param_1;
  if (uVar1 == 5) {
    uVar2 = *(uint *)(param_1 + 8);
    uVar1 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    auVar4._12_4_ = 0;
    auVar4._8_4_ = uVar1;
    auVar4._0_8_ = 5;
    return auVar4;
  }
  if (uVar1 == 3) {
    auVar3._12_4_ = 0;
    auVar3._8_4_ = *(uint *)(param_1 + 8) & 0x7fffffff;
    auVar3._0_8_ = 3;
    return auVar3;
  }
  return ZEXT416(uVar1) << 0x40;
}


