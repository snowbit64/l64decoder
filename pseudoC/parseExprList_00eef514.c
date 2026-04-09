// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseExprList
// Entry Point: 00eef514
// Size: 132 bytes
// Signature: undefined __thiscall parseExprList(Parser * this, TempVector * param_1)


/* Luau::Parser::parseExprList(Luau::TempVector<Luau::AstExpr*>&) */

void __thiscall Luau::Parser::parseExprList(Parser *this,TempVector *param_1)

{
  long lVar1;
  AstExpr *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  while( true ) {
    local_40 = (AstExpr *)parseExpr(this,0);
    TempVector<Luau::AstExpr*>::push_back((TempVector<Luau::AstExpr*> *)param_1,&local_40);
    if (*(int *)(this + 0x28) != 0x2c) break;
    nextLexeme();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


