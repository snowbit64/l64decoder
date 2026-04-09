// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseIfElseExpr
// Entry Point: 00ef63fc
// Size: 464 bytes
// Signature: undefined parseIfElseExpr(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseIfElseExpr() */

AstExprIfElse * Luau::Parser::parseIfElseExpr(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  Parser *in_x0;
  AstExpr *pAVar7;
  AstExpr *pAVar8;
  AstExpr *pAVar9;
  AstExprIfElse *this;
  undefined8 uVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar10 = *(undefined8 *)(in_x0 + 0x2c);
  nextLexeme();
  pAVar7 = (AstExpr *)parseExpr(in_x0,0);
  iVar2 = *(int *)(in_x0 + 0x28);
  if (iVar2 == 0x130) {
LAB_00ef648c:
    nextLexeme();
  }
  else {
    expectAndConsumeFail(in_x0,0x130,"if then else expression");
    Lexer::lookahead();
    if ((int)local_88 == 0x130) {
      nextLexeme();
      goto LAB_00ef648c;
    }
  }
  pAVar8 = (AstExpr *)parseExpr(in_x0,0);
  uVar5 = FInt::LuauRecursionLimit;
  if (*(int *)(in_x0 + 0x28) == 0x123) {
    iVar3 = *(int *)(in_x0 + 0xbc);
    uVar1 = iVar3 + 1;
    *(uint *)(in_x0 + 0xbc) = uVar1;
    if (uVar5 < uVar1) {
      ParseError::raise((Location *)(in_x0 + 0x2c),
                        "Exceeded allowed recursion depth; simplify your %s to make the code compile"
                        ,"expression");
      goto LAB_00ef65c8;
    }
    pAVar9 = (AstExpr *)parseIfElseExpr();
    bVar6 = true;
    *(int *)(in_x0 + 0xbc) = iVar3;
  }
  else {
    bVar6 = *(int *)(in_x0 + 0x28) == 0x122;
    if (bVar6) {
LAB_00ef6528:
      nextLexeme();
    }
    else {
      expectAndConsumeFail(in_x0,0x122,"if then else expression");
      Lexer::lookahead();
      if ((int)local_88 == 0x122) {
        nextLexeme();
        goto LAB_00ef6528;
      }
    }
    pAVar9 = (AstExpr *)parseExpr(in_x0,0);
  }
  uStack_80 = *(undefined8 *)(pAVar9 + 0x14);
  local_88 = uVar10;
  this = (AstExprIfElse *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x48);
  AstExprIfElse::AstExprIfElse(this,(Location *)&local_88,pAVar7,iVar2 == 0x130,pAVar8,bVar6,pAVar9)
  ;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return this;
  }
LAB_00ef65c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


