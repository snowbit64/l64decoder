// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f00c70
// Size: 300 bytes
// Signature: undefined __thiscall visit(ShapeVisitor * this, AstStatFor * param_1)


/* Luau::Compile::ShapeVisitor::visit(Luau::AstStatFor*) */

undefined8 __thiscall Luau::Compile::ShapeVisitor::visit(ShapeVisitor *this,AstStatFor *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar1 + 8) != AstRtti<Luau::AstExprConstantNumber>::value) {
    lVar1 = 0;
  }
  if (*(int *)(lVar2 + 8) != AstRtti<Luau::AstExprConstantNumber>::value) {
    lVar2 = 0;
  }
  if ((((lVar1 == 0 || lVar2 == 0) || (*(double *)(lVar1 + 0x20) != 1.0)) ||
      (dVar8 = *(double *)(lVar2 + 0x20),
      (dVar8 < 1.0 || 16.0 <= dVar8) && (dVar8 < 1.0 || dVar8 != 16.0))) ||
     (*(long *)(param_1 + 0x38) != 0)) {
    return 1;
  }
  lVar1 = *(long *)(this + 0x70);
  if ((ulong)(lVar1 * 3) >> 2 <= *(ulong *)(this + 0x78)) {
    detail::
    DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,unsigned_int>,std::__ndk1::pair<Luau::AstLocal*const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,unsigned_int>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
    ::rehash();
    lVar1 = *(long *)(this + 0x70);
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar2 = *(long *)(this + 0x68);
  uVar3 = (uVar4 >> 4 ^ uVar4 >> 9) & lVar1 - 1U;
  puVar5 = (ulong *)(lVar2 + uVar3 * 0x10);
  uVar7 = *puVar5;
  if (uVar7 != *(ulong *)(this + 0x80)) {
    lVar6 = 1;
    do {
      if (uVar7 == uVar4) goto LAB_00f00d80;
      uVar3 = uVar3 + lVar6;
      lVar6 = lVar6 + 1;
      uVar3 = uVar3 & lVar1 - 1U;
      puVar5 = (ulong *)(lVar2 + uVar3 * 0x10);
      uVar7 = *puVar5;
    } while (uVar7 != *(ulong *)(this + 0x80));
  }
  lVar1 = *(long *)(this + 0x78);
  *puVar5 = uVar4;
  *(long *)(this + 0x78) = lVar1 + 1;
LAB_00f00d80:
  *(int *)(lVar2 + uVar3 * 0x10 + 8) = (int)dVar8;
  return 1;
}


