// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expectMatchEndAndConsume
// Entry Point: 00eeecdc
// Size: 232 bytes
// Signature: undefined __thiscall expectMatchEndAndConsume(Parser * this, Type param_1, MatchLexeme * param_2)


/* Luau::Parser::expectMatchEndAndConsume(Luau::Lexeme::Type, Luau::Parser::MatchLexeme const&) */

void __thiscall
Luau::Parser::expectMatchEndAndConsume(Parser *this,Type param_1,MatchLexeme *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  Type local_58;
  
  lVar2 = tpidr_el0;
  lVar1 = *(long *)(lVar2 + 0x28);
  if (*(Type *)(this + 0x28) == param_1) {
    if (((*(uint *)(this + 0x2c) != *(uint *)(param_2 + 4)) &&
        (*(int *)(this + 0x30) != *(int *)(param_2 + 8))) &&
       (*(uint *)(this + 0xe4) < *(uint *)(param_2 + 4))) {
      uVar3 = *(undefined8 *)param_2;
      *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_2 + 8);
      *(undefined8 *)(this + 0xe0) = uVar3;
    }
  }
  else {
    expectMatchEndAndConsumeFail(this,param_1,param_2);
    Lexer::lookahead();
    if (local_58 != param_1) {
      uVar3 = 0;
      lVar2 = *(long *)(lVar2 + 0x28);
      goto joined_r0x00eeedbc;
    }
    nextLexeme();
  }
  nextLexeme();
  uVar3 = 1;
  lVar2 = *(long *)(lVar2 + 0x28);
joined_r0x00eeedbc:
  if (lVar2 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


