// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expectAndConsume
// Entry Point: 00eeee98
// Size: 164 bytes
// Signature: undefined __thiscall expectAndConsume(Parser * this, char param_1, char * param_2)


/* Luau::Parser::expectAndConsume(char, char const*) */

void __thiscall Luau::Parser::expectAndConsume(Parser *this,char param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint local_68;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(this + 0x28);
  if (uVar1 != (byte)param_1) {
    expectAndConsumeFail(this,(uint)(byte)param_1,param_2);
    Lexer::lookahead();
    if (local_68 != (byte)param_1) goto LAB_00eeef08;
    nextLexeme();
  }
  nextLexeme();
LAB_00eeef08:
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1 == (byte)param_1);
}


