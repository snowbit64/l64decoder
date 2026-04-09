// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shouldShareClosure
// Entry Point: 00edf244
// Size: 408 bytes
// Signature: undefined __thiscall shouldShareClosure(Compiler * this, AstExprFunction * param_1)


/* Luau::Compiler::shouldShareClosure(Luau::AstExprFunction*) */

undefined8 __thiscall Luau::Compiler::shouldShareClosure(Compiler *this,AstExprFunction *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  AstExprFunction *pAVar6;
  ulong uVar7;
  ulong *puVar8;
  
  if ((*(long *)(this + 0x40) == 0) || (*(AstExprFunction **)(this + 0x48) == param_1)) {
    return 0;
  }
  uVar3 = 0;
  uVar5 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
  do {
    uVar5 = uVar5 & *(long *)(this + 0x38) - 1U;
    pAVar6 = *(AstExprFunction **)(*(long *)(this + 0x30) + uVar5 * 0x38);
    if (pAVar6 == param_1) {
      lVar2 = *(long *)(this + 0x30) + uVar5 * 0x38;
      puVar8 = *(ulong **)(lVar2 + 0x10);
      puVar1 = *(ulong **)(lVar2 + 0x18);
      if (puVar8 == puVar1) {
        return 1;
      }
      do {
        if (*(long *)(this + 0xb8) == 0) {
          return 0;
        }
        uVar3 = *puVar8;
        if (uVar3 == *(ulong *)(this + 0xc0)) {
          return 0;
        }
        lVar2 = *(long *)(this + 0xa8);
        uVar5 = 0;
        uVar4 = uVar3 >> 4 ^ uVar3 >> 9;
        while( true ) {
          uVar4 = uVar4 & *(long *)(this + 0xb0) - 1U;
          uVar7 = *(ulong *)(lVar2 + uVar4 * 0x18);
          if (uVar7 == uVar3) break;
          if (uVar7 == *(ulong *)(this + 0xc0)) {
            return 0;
          }
          uVar5 = uVar5 + 1;
          uVar4 = uVar5 + uVar4;
          if (*(long *)(this + 0xb0) - 1U < uVar5) {
            return 0;
          }
        }
        if (*(char *)(lVar2 + uVar4 * 0x18 + 0x10) != '\0') {
          return 0;
        }
        if ((*(long *)(uVar3 + 0x20) != 0) || (*(long *)(uVar3 + 0x28) != 0)) {
          pAVar6 = *(AstExprFunction **)(lVar2 + uVar4 * 0x18 + 8);
          if (pAVar6 == (AstExprFunction *)0x0) {
            return 0;
          }
          if (*(int *)(pAVar6 + 8) != AstRtti<Luau::AstExprFunction>::value) {
            return 0;
          }
          if ((pAVar6 != param_1) && (uVar3 = shouldShareClosure(this,pAVar6), (uVar3 & 1) == 0)) {
            return 0;
          }
        }
        puVar8 = puVar8 + 1;
        if (puVar8 == puVar1) {
          return 1;
        }
      } while( true );
    }
    if (pAVar6 == *(AstExprFunction **)(this + 0x48)) {
      return 0;
    }
    uVar3 = uVar3 + 1;
    uVar5 = uVar3 + uVar5;
  } while (uVar3 <= *(long *)(this + 0x38) - 1U);
  return 0;
}


