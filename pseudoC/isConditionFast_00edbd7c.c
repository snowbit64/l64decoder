// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isConditionFast
// Entry Point: 00edbd7c
// Size: 252 bytes
// Signature: undefined __thiscall isConditionFast(Compiler * this, AstExpr * param_1)


/* Luau::Compiler::isConditionFast(Luau::AstExpr*) */

bool __thiscall Luau::Compiler::isConditionFast(Compiler *this,AstExpr *param_1)

{
  bool bVar1;
  byte bVar2;
  AstExpr *pAVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  AstExpr *pAVar7;
  
  if ((*(long *)(this + 0xe0) != 0) && (pAVar3 = *(AstExpr **)(this + 0xe8), pAVar3 != param_1)) {
    uVar4 = 0;
    uVar6 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
    uVar5 = *(long *)(this + 0xd8) - 1;
    do {
      uVar6 = uVar6 & uVar5;
      pAVar7 = *(AstExpr **)(*(long *)(this + 0xd0) + uVar6 * 0x18);
      if (pAVar7 == param_1) {
        if (*(int *)(*(long *)(this + 0xd0) + uVar6 * 0x18 + 8) != 0) {
          return true;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      uVar6 = uVar4 + uVar6;
    } while (pAVar7 != pAVar3 && uVar4 < uVar5 || pAVar7 != pAVar3 && uVar4 == uVar5);
  }
  if ((param_1 != (AstExpr *)0x0) && (*(int *)(param_1 + 8) == AstRtti<Luau::AstExprBinary>::value))
  {
    return *(int *)(param_1 + 0x1c) - 7U < 8;
  }
  bVar1 = *(int *)(param_1 + 8) != AstRtti<Luau::AstExprGroup>::value;
  bVar2 = bVar1;
  if (param_1 != (AstExpr *)0x0 && !bVar1) {
    bVar2 = isConditionFast(this,*(AstExpr **)(param_1 + 0x20));
  }
  return (bool)((param_1 != (AstExpr *)0x0 && !bVar1) & bVar2);
}


