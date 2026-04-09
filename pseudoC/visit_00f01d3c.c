// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f01d3c
// Size: 200 bytes
// Signature: undefined __thiscall visit(ValueVisitor * this, AstStatLocalFunction * param_1)


/* Luau::Compile::ValueVisitor::visit(Luau::AstStatLocalFunction*) */

undefined8 __thiscall
Luau::Compile::ValueVisitor::visit(ValueVisitor *this,AstStatLocalFunction *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  
  plVar8 = *(long **)(this + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = plVar8[1];
  if ((ulong)(lVar1 * 3) >> 2 <= (ulong)plVar8[2]) {
    detail::
    DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compile::Variable>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compile::Variable>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compile::Variable>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
    ::rehash();
    lVar1 = plVar8[1];
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar2 = *plVar8;
  uVar3 = (uVar4 >> 4 ^ uVar4 >> 9) & lVar1 - 1U;
  puVar5 = (ulong *)(lVar2 + uVar3 * 0x18);
  uVar7 = *puVar5;
  if (uVar7 != plVar8[3]) {
    lVar6 = 1;
    do {
      if (uVar7 == uVar4) goto LAB_00f01de0;
      uVar3 = uVar3 + lVar6;
      lVar6 = lVar6 + 1;
      uVar3 = uVar3 & lVar1 - 1U;
      puVar5 = (ulong *)(lVar2 + uVar3 * 0x18);
      uVar7 = *puVar5;
    } while (uVar7 != plVar8[3]);
  }
  lVar1 = plVar8[2];
  *puVar5 = uVar4;
  plVar8[2] = lVar1 + 1;
LAB_00f01de0:
  *(undefined8 *)(lVar2 + uVar3 * 0x18 + 8) = uVar9;
  return 1;
}


