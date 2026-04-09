// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: blockFollow
// Entry Point: 00eea90c
// Size: 56 bytes
// Signature: undefined __thiscall blockFollow(Parser * this, Lexeme * param_1)


/* Luau::Parser::blockFollow(Luau::Lexeme const&) */

undefined8 __thiscall Luau::Parser::blockFollow(Parser *this,Lexeme *param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)param_1 - 0x122;
  if (((0x10 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x10007U) == 0)) && (*(int *)param_1 != 0))
  {
    return 0;
  }
  return 1;
}


