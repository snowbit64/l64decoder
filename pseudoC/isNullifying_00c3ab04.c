// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isNullifying
// Entry Point: 00c3ab04
// Size: 232 bytes
// Signature: undefined __cdecl isNullifying(IR_OPCODE param_1, IR_Const * param_2, IR_Const * param_3, IR_Const * param_4)


/* IR_Interpreter::isNullifying(IR_OPCODE, IR_Const const&, IR_Const const&, IR_Const&) */

undefined8
IR_Interpreter::isNullifying
          (IR_OPCODE param_1,IR_Const *param_2,IR_Const *param_3,IR_Const *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (DAT_0211f298 != s_nullifyingPatterns) {
    uVar3 = 0;
    do {
      if (((*(IR_OPCODE *)(s_nullifyingPatterns + uVar3 * 0x38) == param_1) &&
          (uVar1 = IR_Const::operator==
                             (param_2,(IR_Const *)(s_nullifyingPatterns + uVar3 * 0x38 + 8)),
          (uVar1 & 1) != 0)) &&
         (uVar1 = IR_Const::operator==
                            (param_3,(IR_Const *)(s_nullifyingPatterns + uVar3 * 0x38 + 0x18)),
         (uVar1 & 1) != 0)) {
        lVar2 = s_nullifyingPatterns + uVar3 * 0x38;
        uVar4 = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(param_4 + 8) = *(undefined8 *)(lVar2 + 0x30);
        *(undefined8 *)param_4 = uVar4;
        return 1;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      uVar1 = (DAT_0211f298 - s_nullifyingPatterns >> 3) * 0x6db6db6db6db6db7;
    } while (uVar3 <= uVar1 && uVar1 - uVar3 != 0);
  }
  return 0;
}


