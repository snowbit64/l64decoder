// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: simplify1
// Entry Point: 00c29460
// Size: 96 bytes
// Signature: undefined simplify1(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Function::simplify1() */

void IR_Function::simplify1(void)

{
  long in_x0;
  ulong uVar1;
  
  if (*(long *)(in_x0 + 0xc0) != *(long *)(in_x0 + 0xb8)) {
    uVar1 = 0;
    do {
      IR_InstructionSequence::stripUnreachableEpilogue();
      IR_Section::checkSection();
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < (ulong)(*(long *)(in_x0 + 0xc0) - *(long *)(in_x0 + 0xb8) >> 3));
  }
  return;
}


