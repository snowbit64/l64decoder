// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseUnaryOp
// Entry Point: 00ef4ae8
// Size: 80 bytes
// Signature: undefined __cdecl parseUnaryOp(Lexeme * param_1)


/* Luau::Parser::parseUnaryOp(Luau::Lexeme const&) */

undefined8 Luau::Parser::parseUnaryOp(Lexeme *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0x23) {
    return 0x100000002;
  }
  if (iVar1 != 300) {
    if (iVar1 == 0x2d) {
      return 0x100000001;
    }
    return 0;
  }
  return 0x100000000;
}


