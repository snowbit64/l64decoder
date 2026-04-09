// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseAssertionExpr
// Entry Point: 00ef4f34
// Size: 184 bytes
// Signature: undefined parseAssertionExpr(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseAssertionExpr() */

AstExpr * Luau::Parser::parseAssertionExpr(void)

{
  long lVar1;
  char *in_x0;
  AstExpr *pAVar2;
  AstType *pAVar3;
  AstExpr *this;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(in_x0 + 0x2c);
  pAVar2 = (AstExpr *)parseSimpleExpr();
  this = pAVar2;
  if ((*in_x0 != '\0') && (*(int *)(in_x0 + 0x28) == 0x108)) {
    nextLexeme();
    pAVar3 = (AstType *)parseTypeAnnotation();
    uStack_50 = *(undefined8 *)(pAVar3 + 0x14);
    local_58 = uVar4;
    this = (AstExpr *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x30);
    AstExprTypeAssertion::AstExprTypeAssertion
              ((AstExprTypeAssertion *)this,(Location *)&local_58,pAVar2,pAVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


