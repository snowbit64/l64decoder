// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportFunctionArgsError
// Entry Point: 00ef65cc
// Size: 292 bytes
// Signature: undefined __thiscall reportFunctionArgsError(Parser * this, AstExpr * param_1, bool param_2)


/* Luau::Parser::reportFunctionArgsError(Luau::AstExpr*, bool) */

undefined8 __thiscall
Luau::Parser::reportFunctionArgsError(Parser *this,AstExpr *param_1,bool param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  AstExpr **local_70;
  undefined8 uStack_68;
  void *local_60;
  AstExpr **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2) && (*(int *)(this + 0x2c) != *(int *)(param_1 + 0x14))) {
    local_70 = (AstExpr **)Allocator::allocate(*(Allocator **)(this + 0x80),8);
    *local_70 = param_1;
    uStack_68 = 1;
    uVar3 = reportExprError((Location *)this,(AstArray *)(param_1 + 0xc),(char *)&local_70,
                            "Expected function call arguments after \'(\'");
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_00ef66ec;
  }
  else {
    local_48 = *(undefined8 *)(param_1 + 0xc);
    uStack_40 = *(undefined8 *)(this + 0x2c);
    local_58 = (AstExpr **)Allocator::allocate(*(Allocator **)(this + 0x80),8);
    *local_58 = param_1;
    uStack_50 = 1;
    Lexeme::toString();
    pvVar1 = (void *)((ulong)&local_70 | 1);
    if (((ulong)local_70 & 1) != 0) {
      pvVar1 = local_60;
    }
                    /* try { // try from 00ef6654 to 00ef666b has its CatchHandler @ 00ef66f0 */
    uVar3 = reportExprError((Location *)this,(AstArray *)&local_48,(char *)&local_58,
                            "Expected \'(\', \'{\' or <string> when parsing function call, got %s",
                            pvVar1);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(long *)(lVar2 + 0x28) != local_38) {
LAB_00ef66ec:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar3;
}


