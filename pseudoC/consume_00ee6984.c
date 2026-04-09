// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: consume
// Entry Point: 00ee6984
// Size: 56 bytes
// Signature: undefined consume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::consume() */

void Luau::Lexer::consume(void)

{
  uint uVar1;
  long *in_x0;
  
  uVar1 = *(uint *)(in_x0 + 2);
  if (*(char *)(*in_x0 + (ulong)uVar1) == '\n') {
    *(uint *)(in_x0 + 2) = uVar1 + 1;
    *(int *)((long)in_x0 + 0x14) = *(int *)((long)in_x0 + 0x14) + 1;
    *(uint *)(in_x0 + 3) = uVar1 + 1;
    return;
  }
  *(uint *)(in_x0 + 2) = uVar1 + 1;
  return;
}


