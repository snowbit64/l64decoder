// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parsePrefixExpr
// Entry Point: 00ef4fec
// Size: 288 bytes
// Signature: undefined parsePrefixExpr(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parsePrefixExpr() */

AstExprGroup * Luau::Parser::parsePrefixExpr(void)

{
  char *pcVar1;
  long lVar2;
  Parser *in_x0;
  AstExpr *pAVar3;
  AstExprGroup *pAVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  undefined8 local_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(in_x0 + 0x28) == 0x28) {
    uVar5 = *(undefined8 *)(in_x0 + 0x2c);
    local_58 = *(int *)(in_x0 + 0x28);
    local_54 = uVar5;
    nextLexeme();
    pAVar3 = (AstExpr *)parseExpr(in_x0,0);
    if (*(int *)(in_x0 + 0x28) == 0x29) {
      uStack_60 = *(undefined8 *)(in_x0 + 0x34);
      nextLexeme();
    }
    else {
      pcVar1 = "; did you mean to use \'{\' when defining a table?";
      if (*(int *)(in_x0 + 0x28) != 0x3d) {
        pcVar1 = (char *)0x0;
      }
      expectMatchAndConsumeFail(in_x0,0x29,(MatchLexeme *)&local_58,pcVar1);
      uStack_60 = *(undefined8 *)(in_x0 + 0x50);
    }
    local_68 = uVar5;
    pAVar4 = (AstExprGroup *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x28);
    AstExprGroup::AstExprGroup(pAVar4,(Location *)&local_68,pAVar3);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return pAVar4;
    }
  }
  else {
    pAVar4 = (AstExprGroup *)parseNameExpr(in_x0,"expression");
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return pAVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


