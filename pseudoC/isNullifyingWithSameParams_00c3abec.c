// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isNullifyingWithSameParams
// Entry Point: 00c3abec
// Size: 112 bytes
// Signature: undefined __cdecl isNullifyingWithSameParams(IR_OPCODE param_1, IR_Const * param_2)


/* IR_Interpreter::isNullifyingWithSameParams(IR_OPCODE, IR_Const&) */

undefined8 IR_Interpreter::isNullifyingWithSameParams(IR_OPCODE param_1,IR_Const *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (DAT_0211f2b0 - s_nullifyingPatternsWithSameParams != 0) {
    uVar2 = 0;
    uVar3 = (DAT_0211f2b0 - s_nullifyingPatternsWithSameParams >> 3) * 0x6db6db6db6db6db7;
    do {
      if (*(IR_OPCODE *)(s_nullifyingPatternsWithSameParams + uVar2 * 0x38) == param_1) {
        lVar1 = s_nullifyingPatternsWithSameParams + uVar2 * 0x38;
        uVar4 = *(undefined8 *)(lVar1 + 0x28);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar1 + 0x30);
        *(undefined8 *)param_2 = uVar4;
        return 1;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 <= uVar3 && uVar3 - uVar2 != 0);
  }
  return 0;
}


