// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_MIN
// Entry Point: 00c3a2f0
// Size: 128 bytes
// Signature: undefined __cdecl exec_MIN(IR_Const * param_1, IR_Const * param_2)


/* IR_Interpreter::exec_MIN(IR_Const const&, IR_Const const&) */

undefined  [16] IR_Interpreter::exec_MIN(IR_Const *param_1,IR_Const *param_2)

{
  float *pfVar1;
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  uVar2 = *(uint *)param_1;
  if (uVar2 == 6) {
    uVar2 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 8) <= *(uint *)(param_2 + 8)) {
      uVar2 = *(uint *)(param_1 + 8);
    }
    auVar4._12_4_ = 0;
    auVar4._8_4_ = uVar2;
    auVar4._0_8_ = 6;
    return auVar4;
  }
  if (uVar2 != 5) {
    if (uVar2 == 3) {
      pfVar1 = (float *)(param_2 + 8);
      if (*(float *)(param_1 + 8) <= *(float *)(param_2 + 8)) {
        pfVar1 = (float *)(param_1 + 8);
      }
      auVar3._12_4_ = 0;
      auVar3._8_4_ = *pfVar1;
      auVar3._0_8_ = 3;
      return auVar3;
    }
    return ZEXT416(uVar2) << 0x40;
  }
  uVar2 = *(uint *)(param_2 + 8);
  if ((int)*(uint *)(param_1 + 8) <= (int)*(uint *)(param_2 + 8)) {
    uVar2 = *(uint *)(param_1 + 8);
  }
  auVar5._12_4_ = 0;
  auVar5._8_4_ = uVar2;
  auVar5._0_8_ = 5;
  return auVar5;
}


