// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_BITCOUNT
// Entry Point: 00c385cc
// Size: 108 bytes
// Signature: undefined __cdecl exec_BITCOUNT(IR_Const * param_1)


/* IR_Interpreter::exec_BITCOUNT(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_BITCOUNT(IR_Const *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined auVar3 [16];
  
  uVar2 = *(uint *)param_1;
  if (uVar2 == 6) {
    uVar2 = *(uint *)(param_1 + 8);
    uVar1 = 6;
  }
  else {
    if (uVar2 != 5) {
      return ZEXT416(uVar2) << 0x40;
    }
    uVar2 = *(uint *)(param_1 + 8);
    uVar1 = 5;
  }
  uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  auVar3._8_4_ = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  auVar3._0_8_ = uVar1;
  auVar3._12_4_ = 0;
  return auVar3;
}


