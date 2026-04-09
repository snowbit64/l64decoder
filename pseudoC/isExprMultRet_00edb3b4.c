// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isExprMultRet
// Entry Point: 00edb3b4
// Size: 344 bytes
// Signature: undefined __thiscall isExprMultRet(Compiler * this, AstExpr * param_1)


/* Luau::Compiler::isExprMultRet(Luau::AstExpr*) */

bool __thiscall Luau::Compiler::isExprMultRet(Compiler *this,AstExpr *param_1)

{
  AstExpr *pAVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  AstExpr *pAVar7;
  ulong uVar8;
  
  if ((param_1 == (AstExpr *)0x0) || (*(int *)(param_1 + 8) != AstRtti<Luau::AstExprCall>::value)) {
    return *(int *)(param_1 + 8) == AstRtti<Luau::AstExprVarargs>::value;
  }
  if (1 < *(int *)(this + 8)) {
    if ((*(long *)(this + 0xe0) != 0) && (pAVar1 = *(AstExpr **)(this + 0xe8), pAVar1 != param_1)) {
      uVar2 = 0;
      uVar5 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
      uVar3 = *(long *)(this + 0xd8) - 1;
      do {
        uVar5 = uVar5 & uVar3;
        pAVar7 = *(AstExpr **)(*(long *)(this + 0xd0) + uVar5 * 0x18);
        if (pAVar7 == param_1) {
          if (*(int *)(*(long *)(this + 0xd0) + uVar5 * 0x18 + 8) != 0) {
            return false;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        uVar5 = uVar2 + uVar5;
      } while (pAVar7 != pAVar1 && uVar2 < uVar3 || pAVar7 != pAVar1 && uVar2 == uVar3);
    }
    uVar2 = getFunctionExpr(this,*(AstExpr **)(param_1 + 0x20));
    if (((uVar2 != 0) && (*(long *)(this + 0x40) != 0)) &&
       (uVar5 = *(ulong *)(this + 0x48), uVar2 != uVar5)) {
      uVar3 = 0;
      uVar6 = uVar2 >> 4 ^ uVar2 >> 9;
      uVar4 = *(long *)(this + 0x38) - 1;
      do {
        uVar6 = uVar6 & uVar4;
        uVar8 = *(ulong *)(*(long *)(this + 0x30) + uVar6 * 0x38);
        if (uVar8 == uVar2) {
          if (*(char *)(*(long *)(this + 0x30) + uVar6 * 0x38 + 0x35) == '\0') {
            return true;
          }
          return false;
        }
        uVar3 = uVar3 + 1;
        uVar6 = uVar3 + uVar6;
      } while (uVar8 != uVar5 && uVar3 < uVar4 || uVar8 != uVar5 && uVar3 == uVar4);
    }
  }
  return true;
}


