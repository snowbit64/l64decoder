// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFunctionExpr
// Entry Point: 00edb50c
// Size: 320 bytes
// Signature: undefined __thiscall getFunctionExpr(Compiler * this, AstExpr * param_1)


/* Luau::Compiler::getFunctionExpr(Luau::AstExpr*) */

AstExpr * __thiscall Luau::Compiler::getFunctionExpr(Compiler *this,AstExpr *param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(long *)(this + 0xb8) == 0) {
    iVar3 = *(int *)(param_1 + 8);
    if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprLocal>::value)) {
      return (AstExpr *)0x0;
    }
    do {
      if ((iVar3 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar3 != AstRtti<Luau::AstExprTypeAssertion>::value)) {
LAB_00edb634:
        if (iVar3 != AstRtti<Luau::AstExprFunction>::value) {
          param_1 = (AstExpr *)0x0;
        }
        return param_1;
      }
      param_1 = *(AstExpr **)(param_1 + 0x20);
      iVar3 = *(int *)(param_1 + 8);
    } while ((param_1 == (AstExpr *)0x0) || (iVar3 != AstRtti<Luau::AstExprLocal>::value));
  }
  else {
    lVar1 = *(long *)(this + 0xa8);
    while( true ) {
      for (; (iVar3 = *(int *)(param_1 + 8), param_1 == (AstExpr *)0x0 ||
             (iVar3 != AstRtti<Luau::AstExprLocal>::value)); param_1 = *(AstExpr **)(param_1 + 0x20)
          ) {
        if ((param_1 == (AstExpr *)0x0 || iVar3 != AstRtti<Luau::AstExprGroup>::value) &&
           (param_1 == (AstExpr *)0x0 || iVar3 != AstRtti<Luau::AstExprTypeAssertion>::value))
        goto LAB_00edb634;
      }
      uVar4 = *(ulong *)(param_1 + 0x20);
      if (uVar4 == *(ulong *)(this + 0xc0)) break;
      uVar5 = 0;
      uVar6 = uVar4 >> 4 ^ uVar4 >> 9;
      while( true ) {
        uVar6 = uVar6 & *(long *)(this + 0xb0) - 1U;
        uVar2 = *(ulong *)(lVar1 + uVar6 * 0x18);
        if (uVar2 == uVar4) break;
        if (uVar2 == *(ulong *)(this + 0xc0)) {
          return (AstExpr *)0x0;
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar5 + uVar6;
        if (*(long *)(this + 0xb0) - 1U < uVar5) {
          return (AstExpr *)0x0;
        }
      }
      if (*(char *)(lVar1 + uVar6 * 0x18 + 0x10) != '\0') {
        return (AstExpr *)0x0;
      }
      param_1 = *(AstExpr **)(lVar1 + uVar6 * 0x18 + 8);
      if (param_1 == (AstExpr *)0x0) {
        return (AstExpr *)0x0;
      }
    }
  }
  return (AstExpr *)0x0;
}


