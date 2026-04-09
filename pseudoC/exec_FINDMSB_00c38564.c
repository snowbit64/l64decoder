// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_FINDMSB
// Entry Point: 00c38564
// Size: 104 bytes
// Signature: undefined __cdecl exec_FINDMSB(IR_Const * param_1)


/* IR_Interpreter::exec_FINDMSB(IR_Const const&) */

undefined  [16] IR_Interpreter::exec_FINDMSB(IR_Const *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  if (*(int *)param_1 == 5) {
    uVar2 = 5;
  }
  else {
    if (*(int *)param_1 != 6) {
      return ZEXT816(0);
    }
    uVar2 = 6;
  }
  uVar1 = *(uint *)(param_1 + 8) | *(uint *)(param_1 + 8) >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  auVar3._8_4_ = *(undefined4 *)
                  (MathUtil::s_multiplyDeBruijnBitPosition +
                  (ulong)((uVar1 | uVar1 >> 0x10) * 0x7c4acdd >> 0x1b) * 4);
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = 0;
  return auVar3;
}


