// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseCompoundOp
// Entry Point: 00eed8bc
// Size: 28 bytes
// Signature: undefined __cdecl parseCompoundOp(Lexeme * param_1)


/* Luau::Parser::parseCompoundOp(Luau::Lexeme const&) */

ulong Luau::Parser::parseCompoundOp(Lexeme *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(int *)param_1 - 0x10d;
  bVar2 = uVar1 < 7;
  if (!bVar2) {
    uVar1 = 0;
  }
  return (ulong)CONCAT14(bVar2,uVar1);
}


