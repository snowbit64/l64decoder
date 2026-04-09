// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assignField
// Entry Point: 00f0122c
// Size: 580 bytes
// Signature: undefined __thiscall assignField(ShapeVisitor * this, AstExpr * param_1, AstName param_2)


/* Luau::Compile::ShapeVisitor::assignField(Luau::AstExpr*, Luau::AstName) */

void __thiscall
Luau::Compile::ShapeVisitor::assignField(ShapeVisitor *this,long param_1,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  
  if ((param_1 != 0) &&
     (*(int *)(param_1 + 8) == AstRtti<Luau::AstExprLocal>::value && *(long *)(this + 0x20) != 0)) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    uVar6 = *(ulong *)(this + 0x28);
    if (uVar4 != uVar6) {
      uVar8 = 0;
      uVar10 = uVar4 >> 4 ^ uVar4 >> 9;
      uVar9 = *(long *)(this + 0x18) - 1;
      while( true ) {
        uVar10 = uVar10 & uVar9;
        uVar11 = *(ulong *)(*(long *)(this + 0x10) + uVar10 * 0x10);
        if (uVar11 == uVar4) break;
        uVar8 = uVar8 + 1;
        uVar10 = uVar8 + uVar10;
        if ((uVar11 == uVar6 || uVar9 <= uVar8) && (uVar11 == uVar6 || uVar8 != uVar9)) {
          return;
        }
      }
      puVar14 = (ulong *)(*(long *)(this + 0x10) + uVar10 * 0x10 + 8);
      uVar4 = *puVar14;
      if (*(ulong *)(this + 0x48) != 0) {
        uVar6 = *(ulong *)(this + 0x50);
        uVar8 = *(ulong *)(this + 0x58);
        if (uVar4 != uVar6 || uVar8 != param_3) {
          uVar10 = 0;
          uVar9 = param_3 >> 4 ^ param_3 >> 9 ^ uVar4 >> 9 ^ uVar4 >> 4;
          uVar11 = *(long *)(this + 0x40) - 1;
          do {
            puVar1 = (ulong *)(*(long *)(this + 0x38) + (uVar9 & uVar11) * 0x10);
            uVar2 = *puVar1;
            uVar3 = puVar1[1];
            if (uVar2 == uVar4 && uVar3 == param_3) {
              return;
            }
            uVar10 = uVar10 + 1;
            uVar9 = uVar10 + (uVar9 & uVar11);
          } while ((uVar2 != uVar6 || uVar3 != uVar8) && uVar10 < uVar11 ||
                   (uVar2 != uVar6 || uVar3 != uVar8) && uVar10 == uVar11);
        }
      }
      lVar7 = *(long *)(this + 0x40);
      if ((ulong)(lVar7 * 3) >> 2 <= *(ulong *)(this + 0x48)) {
        detail::
        DenseHashTable<std::__ndk1::pair<Luau::AstExprTable*,Luau::AstName>,std::__ndk1::pair<Luau::AstExprTable*,Luau::AstName>,std::__ndk1::pair<Luau::AstExprTable*,Luau::AstName>,Luau::detail::ItemInterfaceSet<std::__ndk1::pair<Luau::AstExprTable*,Luau::AstName>>,Luau::Compile::ShapeVisitor::Hasher,std::__ndk1::equal_to<std::__ndk1::pair<Luau::AstExprTable*,Luau::AstName>>>
        ::rehash();
        lVar7 = *(long *)(this + 0x40);
      }
      uVar6 = 0;
      uVar10 = lVar7 - 1;
      uVar8 = param_3 >> 4 ^ param_3 >> 9 ^ uVar4 >> 9 ^ uVar4 >> 4;
      do {
        puVar1 = (ulong *)(*(long *)(this + 0x38) + (uVar8 & uVar10) * 0x10);
        uVar9 = *puVar1;
        uVar11 = puVar1[1];
        if (uVar9 == *(ulong *)(this + 0x50) && uVar11 == *(ulong *)(this + 0x58)) {
          lVar7 = *(long *)(this + 0x48);
          *puVar1 = uVar4;
          puVar1[1] = param_3;
          *(long *)(this + 0x48) = lVar7 + 1;
          plVar13 = *(long **)(this + 8);
          lVar7 = plVar13[1];
          if ((ulong)plVar13[2] < (ulong)(lVar7 * 3) >> 2) goto LAB_00f013c0;
          goto LAB_00f013b4;
        }
        uVar6 = uVar6 + 1;
        uVar8 = uVar6 + (uVar8 & uVar10);
      } while ((uVar9 != uVar4 || uVar11 != param_3) && uVar6 < uVar10 ||
               (uVar9 != uVar4 || uVar11 != param_3) && uVar6 == uVar10);
      plVar13 = *(long **)(this + 8);
      lVar7 = plVar13[1];
      if ((ulong)(lVar7 * 3) >> 2 <= (ulong)plVar13[2]) {
LAB_00f013b4:
        detail::
        DenseHashTable<Luau::AstExprTable*,std::__ndk1::pair<Luau::AstExprTable*,Luau::Compile::TableShape>,std::__ndk1::pair<Luau::AstExprTable*const,Luau::Compile::TableShape>,Luau::detail::ItemInterfaceMap<Luau::AstExprTable*,Luau::Compile::TableShape>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprTable*>>
        ::rehash();
        lVar7 = plVar13[1];
      }
LAB_00f013c0:
      uVar6 = *puVar14;
      lVar5 = *plVar13;
      uVar4 = (uVar6 >> 4 ^ uVar6 >> 9) & lVar7 - 1U;
      puVar14 = (ulong *)(lVar5 + uVar4 * 0x10);
      uVar8 = *puVar14;
      if (uVar8 != plVar13[3]) {
        lVar12 = 1;
        do {
          if (uVar8 == uVar6) goto LAB_00f01424;
          uVar4 = uVar4 + lVar12;
          lVar12 = lVar12 + 1;
          uVar4 = uVar4 & lVar7 - 1U;
          puVar14 = (ulong *)(lVar5 + uVar4 * 0x10);
          uVar8 = *puVar14;
        } while (uVar8 != plVar13[3]);
      }
      lVar7 = plVar13[2];
      *puVar14 = uVar6;
      plVar13[2] = lVar7 + 1;
LAB_00f01424:
      lVar5 = lVar5 + uVar4 * 0x10;
      *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
      return;
    }
  }
  return;
}


