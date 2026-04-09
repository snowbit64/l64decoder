// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expectMatchAndConsumeRecover
// Entry Point: 00ef6e24
// Size: 228 bytes
// Signature: undefined __thiscall expectMatchAndConsumeRecover(Parser * this, char param_1, MatchLexeme * param_2, bool param_3)


/* Luau::Parser::expectMatchAndConsumeRecover(char, Luau::Parser::MatchLexeme const&, bool) */

void __thiscall
Luau::Parser::expectMatchAndConsumeRecover
          (Parser *this,char param_1,MatchLexeme *param_2,bool param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint local_58;
  
  lVar6 = tpidr_el0;
  lVar5 = *(long *)(lVar6 + 0x28);
  uVar7 = (uint)(byte)param_1;
  if (param_3) {
    iVar2 = *(int *)(this + 0x2c);
    iVar3 = *(int *)(this + 0x50);
    uVar1 = *(uint *)(this + 0x28);
    while ((iVar3 == iVar2 && (uVar1 != uVar7))) {
      if (*(int *)(*(long *)(this + 0x160) + (ulong)uVar1 * 4) != 0) goto LAB_00ef6ee0;
      nextLexeme();
      iVar2 = *(int *)(this + 0x2c);
      uVar1 = *(uint *)(this + 0x28);
    }
    if (uVar1 == uVar7) {
LAB_00ef6ec0:
      nextLexeme();
      uVar4 = 1;
      lVar6 = *(long *)(lVar6 + 0x28);
      goto joined_r0x00ef6ed8;
    }
  }
  else {
    Lexer::lookahead();
    if (local_58 == uVar7) {
      nextLexeme();
      goto LAB_00ef6ec0;
    }
  }
LAB_00ef6ee0:
  uVar4 = 0;
  lVar6 = *(long *)(lVar6 + 0x28);
joined_r0x00ef6ed8:
  if (lVar6 != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


