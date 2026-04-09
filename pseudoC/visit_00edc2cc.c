// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00edc2cc
// Size: 228 bytes
// Signature: undefined __thiscall visit(UndefinedLocalVisitor * this, AstExprLocal * param_1)


/* Luau::Compiler::UndefinedLocalVisitor::visit(Luau::AstExprLocal*) */

undefined8 __thiscall
Luau::Compiler::UndefinedLocalVisitor::visit(UndefinedLocalVisitor *this,AstExprLocal *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1[0x28] == (AstExprLocal)0x0) {
    lVar7 = *(long *)(this + 8);
    uVar6 = *(ulong *)(param_1 + 0x20);
    lVar1 = *(long *)(lVar7 + 0x60);
    if ((ulong)(lVar1 * 3) >> 2 <= *(ulong *)(lVar7 + 0x68)) {
      detail::
      DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compiler::Local>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compiler::Local>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compiler::Local>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
      ::rehash();
      lVar1 = *(long *)(lVar7 + 0x60);
    }
    lVar3 = *(long *)(lVar7 + 0x58);
    uVar2 = lVar1 - 1U & (uVar6 >> 4 ^ uVar6 >> 9);
    uVar5 = *(ulong *)(lVar3 + uVar2 * 0x10);
    if (uVar5 != *(ulong *)(lVar7 + 0x70)) {
      lVar4 = 1;
      do {
        if (uVar5 == uVar6) goto LAB_00edc384;
        uVar2 = uVar2 + lVar4;
        lVar4 = lVar4 + 1;
        uVar2 = uVar2 & lVar1 - 1U;
        uVar5 = *(ulong *)(lVar3 + uVar2 * 0x10);
      } while (uVar5 != *(ulong *)(lVar7 + 0x70));
    }
    lVar1 = *(long *)(lVar7 + 0x68);
    *(ulong *)(lVar3 + uVar2 * 0x10) = uVar6;
    *(long *)(lVar7 + 0x68) = lVar1 + 1;
LAB_00edc384:
    if ((*(char *)(lVar3 + uVar2 * 0x10 + 9) == '\0') && (*(long *)(this + 0x10) == 0)) {
      *(ulong *)(this + 0x10) = uVar6;
      return 0;
    }
  }
  return 0;
}


