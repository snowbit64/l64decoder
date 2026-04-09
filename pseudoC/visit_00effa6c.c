// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00effa6c
// Size: 308 bytes
// Signature: undefined __thiscall visit(CostVisitor * this, AstStatLocal * param_1)


/* Luau::Compile::CostVisitor::visit(Luau::AstStatLocal*) */

undefined8 __thiscall Luau::Compile::CostVisitor::visit(CostVisitor *this,AstStatLocal *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined auVar9 [16];
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar7 = 0;
    do {
      auVar9 = model(this,*(AstExpr **)(*(long *)(param_1 + 0x30) + uVar7 * 8));
      if ((auVar9._8_8_ != 0) && (uVar7 < *(ulong *)(param_1 + 0x28))) {
        lVar1 = *(long *)(this + 0x18);
        lVar8 = *(long *)(param_1 + 0x20);
        if ((ulong)(lVar1 * 3) >> 2 <= *(ulong *)(this + 0x20)) {
          detail::
          DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,unsigned_long>,std::__ndk1::pair<Luau::AstLocal*const,unsigned_long>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,unsigned_long>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
          ::rehash();
          lVar1 = *(long *)(this + 0x18);
        }
        uVar3 = *(ulong *)(lVar8 + uVar7 * 8);
        lVar8 = *(long *)(this + 0x10);
        uVar2 = (uVar3 >> 4 ^ uVar3 >> 9) & lVar1 - 1U;
        puVar4 = (ulong *)(lVar8 + uVar2 * 0x10);
        uVar6 = *puVar4;
        if (uVar6 != *(ulong *)(this + 0x28)) {
          lVar5 = 1;
          do {
            if (uVar6 == uVar3) goto LAB_00effab0;
            uVar2 = uVar2 + lVar5;
            lVar5 = lVar5 + 1;
            uVar2 = uVar2 & lVar1 - 1U;
            puVar4 = (ulong *)(lVar8 + uVar2 * 0x10);
            uVar6 = *puVar4;
          } while (uVar6 != *(ulong *)(this + 0x28));
        }
        lVar1 = *(long *)(this + 0x20);
        *puVar4 = uVar3;
        *(long *)(this + 0x20) = lVar1 + 1;
LAB_00effab0:
        *(long *)(lVar8 + uVar2 * 0x10 + 8) = auVar9._8_8_;
      }
      uVar7 = uVar7 + 1;
      uVar6 = *(ulong *)(param_1 + 0x38);
      uVar2 = *(long *)(this + 0x38) + auVar9._0_8_;
      uVar3 = uVar2 & 0x8080808080808080;
      *(ulong *)(this + 0x38) = uVar3 - (uVar3 >> 7) | uVar2 & 0x7f7f7f7f7f7f7f7f;
      *(undefined8 *)(this + 0x40) = 0;
    } while (uVar7 < uVar6);
  }
  return 0;
}


