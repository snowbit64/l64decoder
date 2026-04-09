// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expectAndConsume
// Entry Point: 00eeec38
// Size: 164 bytes
// Signature: undefined __thiscall expectAndConsume(Parser * this, Type param_1, char * param_2)


/* Luau::Parser::expectAndConsume(Luau::Lexeme::Type, char const*) */

void __thiscall Luau::Parser::expectAndConsume(Parser *this,Type param_1,char *param_2)

{
  Type TVar1;
  long lVar2;
  long lVar3;
  Type local_68;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  TVar1 = *(Type *)(this + 0x28);
  if (TVar1 != param_1) {
    expectAndConsumeFail(this,param_1,param_2);
    Lexer::lookahead();
    if (local_68 != param_1) goto LAB_00eeeca8;
    nextLexeme();
  }
  nextLexeme();
LAB_00eeeca8:
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(TVar1 == param_1);
}


