// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expectMatchAndConsume
// Entry Point: 00ef0d70
// Size: 112 bytes
// Signature: undefined __thiscall expectMatchAndConsume(Parser * this, char param_1, MatchLexeme * param_2, bool param_3)


/* Luau::Parser::expectMatchAndConsume(char, Luau::Parser::MatchLexeme const&, bool) */

undefined8 __thiscall
Luau::Parser::expectMatchAndConsume(Parser *this,char param_1,MatchLexeme *param_2,bool param_3)

{
  undefined8 uVar1;
  
  if (*(uint *)(this + 0x28) == (uint)(byte)param_1) {
    nextLexeme();
    return 1;
  }
  expectMatchAndConsumeFail(this,(uint)(byte)param_1,param_2,(char *)0x0);
  uVar1 = expectMatchAndConsumeRecover(this,param_1,param_2,param_3);
  return uVar1;
}


