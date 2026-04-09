// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkHssaCorrectness
// Entry Point: 00c29bf4
// Size: 88 bytes
// Signature: undefined __cdecl checkHssaCorrectness(char * param_1)


/* IR_Function::checkHssaCorrectness(char const*) */

void IR_Function::checkHssaCorrectness(char *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  if (*(long *)(param_1 + 0xc0) != lVar1) {
    uVar2 = 0;
    do {
      IR_Section::checkHssaCorrectness(*(char **)(lVar1 + uVar2 * 8));
      lVar1 = *(long *)(param_1 + 0xb8);
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)(*(long *)(param_1 + 0xc0) - lVar1 >> 3));
  }
  return;
}


