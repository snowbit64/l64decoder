// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseCompoundAssignment
// Entry Point: 00eed8d8
// Size: 304 bytes
// Signature: undefined __thiscall parseCompoundAssignment(Parser * this, AstExpr * param_1, Op param_2)


/* Luau::Parser::parseCompoundAssignment(Luau::AstExpr*, Luau::AstExprBinary::Op) */

AstStatCompoundAssign * __thiscall
Luau::Parser::parseCompoundAssignment(Parser *this,AstExpr *param_1,Op param_2)

{
  int iVar1;
  long lVar2;
  AstExpr *pAVar3;
  AstStatCompoundAssign *this_00;
  AstExpr **local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 8);
  if ((((iVar1 != AstRtti<Luau::AstExprLocal>::value) &&
       (iVar1 != AstRtti<Luau::AstExprGlobal>::value)) &&
      (iVar1 != AstRtti<Luau::AstExprIndexExpr>::value)) &&
     (iVar1 != AstRtti<Luau::AstExprIndexName>::value)) {
    local_58 = (AstExpr **)Allocator::allocate(*(Allocator **)(this + 0x80),8);
    *local_58 = param_1;
    uStack_50 = 1;
    param_1 = (AstExpr *)
              reportExprError((Location *)this,(AstArray *)(param_1 + 0xc),(char *)&local_58,
                              "Assigned expression must be a variable or a field");
  }
  nextLexeme();
  pAVar3 = (AstExpr *)parseExpr(this,0);
  local_58 = *(AstExpr ***)(param_1 + 0xc);
  uStack_50 = *(undefined8 *)(pAVar3 + 0x14);
  this_00 = (AstStatCompoundAssign *)Allocator::allocate(*(Allocator **)(this + 0x80),0x38);
  AstStatCompoundAssign::AstStatCompoundAssign(this_00,(Location *)&local_58,param_2,param_1,pAVar3)
  ;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


