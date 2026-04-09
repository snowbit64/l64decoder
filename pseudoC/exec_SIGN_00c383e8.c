// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_SIGN
// Entry Point: 00c383e8
// Size: 104 bytes
// Signature: undefined __cdecl exec_SIGN(IR_Const * param_1)


/* IR_Interpreter::exec_SIGN(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_SIGN(IR_Const *param_1)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  uVar1 = *(uint *)param_1;
  if (uVar1 == 5) {
    uVar1 = (uint)(*(int *)(param_1 + 8) != 0);
    if (*(int *)(param_1 + 8) < 0) {
      uVar1 = 0xffffffff;
    }
    auVar5._12_4_ = 0;
    auVar5._8_4_ = uVar1;
    auVar5._0_8_ = 5;
    return auVar5;
  }
  if (uVar1 == 3) {
    fVar2 = *(float *)(param_1 + 8);
    uVar1 = 0x3f800000;
    if (fVar2 == 0.0 || 0.0 > fVar2) {
      uVar1 = 0;
    }
    uVar3 = 0xbf800000;
    if (0.0 <= fVar2) {
      uVar3 = uVar1;
    }
    auVar4._12_4_ = 0;
    auVar4._8_4_ = uVar3;
    auVar4._0_8_ = 3;
    return auVar4;
  }
  return ZEXT416(uVar1) << 0x40;
}


