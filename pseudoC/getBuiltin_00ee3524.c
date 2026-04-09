// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBuiltin
// Entry Point: 00ee3524
// Size: 572 bytes
// Signature: undefined __cdecl getBuiltin(AstExpr * param_1, DenseHashMap * param_2, DenseHashMap * param_3)


/* Luau::Compile::getBuiltin(Luau::AstExpr*, Luau::DenseHashMap<Luau::AstName,
   Luau::Compile::Global, std::__ndk1::hash<Luau::AstName>, std::__ndk1::equal_to<Luau::AstName> >
   const&, Luau::DenseHashMap<Luau::AstLocal*, Luau::Compile::Variable, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstLocal*> > const&) */

undefined  [16]
Luau::Compile::getBuiltin(AstExpr *param_1,DenseHashMap *param_2,DenseHashMap *param_3)

{
  int iVar1;
  AstExpr *pAVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  iVar1 = *(int *)(param_1 + 8);
  if ((param_1 != (AstExpr *)0x0) && (iVar1 == AstRtti<Luau::AstExprLocal>::value)) {
    uVar3 = *(ulong *)(param_3 + 0x10);
    if (uVar3 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      if (uVar3 != *(ulong *)(param_3 + 0x18)) {
        lVar5 = *(long *)param_3;
        uVar6 = 0;
        uVar8 = uVar3 >> 4 ^ uVar3 >> 9;
        do {
          uVar8 = uVar8 & *(long *)(param_3 + 8) - 1U;
          uVar10 = *(ulong *)(lVar5 + uVar8 * 0x18);
          if (uVar10 == uVar3) {
            if (*(char *)(lVar5 + uVar8 * 0x18 + 0x10) == '\0') {
              pAVar2 = *(AstExpr **)(lVar5 + uVar8 * 0x18 + 8);
              if (pAVar2 != (AstExpr *)0x0) {
                auVar12 = getBuiltin(pAVar2,param_2,param_3);
                return auVar12;
              }
              return ZEXT816(0);
            }
            break;
          }
          if (uVar10 == *(ulong *)(param_3 + 0x18)) break;
          uVar6 = uVar6 + 1;
          uVar8 = uVar6 + uVar8;
        } while (uVar6 <= *(long *)(param_3 + 8) - 1U);
      }
LAB_00ee36f8:
      return ZEXT816(0);
    }
LAB_00ee36bc:
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar3;
    return auVar12 << 0x40;
  }
  if ((param_1 == (AstExpr *)0x0) || (iVar1 != AstRtti<Luau::AstExprIndexName>::value)) {
    uVar3 = 0;
    if (param_1 != (AstExpr *)0x0) {
      uVar4 = 0;
      if (iVar1 == AstRtti<Luau::AstExprGlobal>::value) {
        uVar3 = *(ulong *)(param_1 + 0x20);
        if ((*(long *)(param_2 + 0x10) != 0) && (uVar6 = *(ulong *)(param_2 + 0x18), uVar6 != uVar3)
           ) {
          uVar8 = 0;
          uVar10 = uVar3 >> 4 ^ uVar3 >> 9;
          uVar7 = *(long *)(param_2 + 8) - 1;
          do {
            uVar10 = uVar10 & uVar7;
            uVar9 = *(ulong *)(*(long *)param_2 + uVar10 * 0x10);
            if (uVar9 == uVar3) {
              if (*(int *)(*(long *)param_2 + uVar10 * 0x10 + 8) != 0) goto LAB_00ee36f8;
              break;
            }
            uVar8 = uVar8 + 1;
            uVar10 = uVar8 + uVar10;
          } while (uVar9 != uVar6 && uVar8 < uVar7 || uVar9 != uVar6 && uVar8 == uVar7);
        }
        goto LAB_00ee36bc;
      }
      goto LAB_00ee36cc;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar3 = 0;
    if (*(int *)(lVar5 + 8) == AstRtti<Luau::AstExprGlobal>::value) {
      uVar4 = 0;
      if (lVar5 != 0) {
        uVar3 = *(ulong *)(lVar5 + 0x20);
        if ((*(long *)(param_2 + 0x10) != 0) && (uVar6 = *(ulong *)(param_2 + 0x18), uVar6 != uVar3)
           ) {
          uVar8 = 0;
          uVar10 = uVar3 >> 4 ^ uVar3 >> 9;
          uVar7 = *(long *)(param_2 + 8) - 1;
          do {
            uVar10 = uVar10 & uVar7;
            uVar9 = *(ulong *)(*(long *)param_2 + uVar10 * 0x10);
            if (uVar9 == uVar3) {
              if (*(int *)(*(long *)param_2 + uVar10 * 0x10 + 8) != 0) goto LAB_00ee36f8;
              break;
            }
            uVar8 = uVar8 + 1;
            uVar10 = uVar8 + uVar10;
          } while (uVar9 != uVar6 && uVar8 < uVar7 || uVar9 != uVar6 && uVar8 == uVar7);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x28);
      }
LAB_00ee36cc:
      auVar11._8_8_ = uVar4;
      auVar11._0_8_ = uVar3;
      return auVar11;
    }
  }
  return ZEXT816(0);
}


