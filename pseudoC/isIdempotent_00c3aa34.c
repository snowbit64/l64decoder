// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isIdempotent
// Entry Point: 00c3aa34
// Size: 208 bytes
// Signature: undefined __cdecl isIdempotent(IR_OPCODE param_1, IR_Const * param_2, IR_Const * param_3)


/* IR_Interpreter::isIdempotent(IR_OPCODE, IR_Const const&, IR_Const const&) */

undefined8 IR_Interpreter::isIdempotent(IR_OPCODE param_1,IR_Const *param_2,IR_Const *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (DAT_0211f280 != s_idempotentPatterns) {
    uVar1 = 1;
    uVar4 = 0;
    do {
      uVar3 = uVar1;
      if (((*(IR_OPCODE *)(s_idempotentPatterns + uVar4 * 0x28) == param_1) &&
          (uVar1 = IR_Const::operator==
                             (param_2,(IR_Const *)(s_idempotentPatterns + uVar4 * 0x28 + 8)),
          (uVar1 & 1) != 0)) &&
         (uVar1 = IR_Const::operator==
                            (param_3,(IR_Const *)(s_idempotentPatterns + uVar4 * 0x28 + 0x18)),
         (uVar1 & 1) != 0)) {
        return 1;
      }
      uVar2 = (DAT_0211f280 - s_idempotentPatterns >> 3) * -0x3333333333333333;
      uVar1 = (ulong)((int)uVar3 + 1);
      uVar4 = uVar3;
    } while (uVar3 <= uVar2 && uVar2 - uVar3 != 0);
  }
  return 0;
}


