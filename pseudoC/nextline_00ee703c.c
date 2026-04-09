// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nextline
// Entry Point: 00ee703c
// Size: 88 bytes
// Signature: undefined nextline(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::nextline() */

void Luau::Lexer::nextline(void)

{
  long *in_x0;
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(in_x0 + 2);
  uVar2 = (ulong)uVar1;
  if (uVar2 < (ulong)in_x0[1]) {
    do {
      uVar1 = uVar1 + 1;
      if (*(byte *)(*in_x0 + uVar2) < 0xe &&
          (1 << (ulong)(*(byte *)(*in_x0 + uVar2) & 0x1f) & 0x2401U) != 0) break;
      *(uint *)(in_x0 + 2) = uVar1;
      uVar2 = (ulong)uVar1;
    } while (uVar2 < (ulong)in_x0[1]);
  }
  next((Lexer *)in_x0,(bool)*(Lexer *)(in_x0 + 0xb),true);
  return;
}


