// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f01a68
// Size: 456 bytes
// Signature: undefined __thiscall visit(ValueVisitor * this, AstStatLocal * param_1)


/* Luau::Compile::ValueVisitor::visit(Luau::AstStatLocal*) */

undefined8 __thiscall Luau::Compile::ValueVisitor::visit(ValueVisitor *this,AstStatLocal *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 != 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar8 = 0;
      do {
        plVar7 = *(long **)(this + 0x10);
        lVar10 = *(long *)(param_1 + 0x20);
        lVar2 = plVar7[1];
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar8 * 8);
        if ((ulong)(lVar2 * 3) >> 2 <= (ulong)plVar7[2]) {
          detail::
          DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compile::Variable>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compile::Variable>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compile::Variable>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
          ::rehash();
          lVar2 = plVar7[1];
        }
        uVar1 = *(ulong *)(lVar10 + uVar8 * 8);
        lVar10 = *plVar7;
        uVar3 = (uVar1 >> 4 ^ uVar1 >> 9) & lVar2 - 1U;
        puVar4 = (ulong *)(lVar10 + uVar3 * 0x18);
        uVar6 = *puVar4;
        if (uVar6 != plVar7[3]) {
          lVar5 = 1;
          do {
            if (uVar6 == uVar1) goto LAB_00f01b34;
            uVar3 = uVar3 + lVar5;
            lVar5 = lVar5 + 1;
            uVar3 = uVar3 & lVar2 - 1U;
            puVar4 = (ulong *)(lVar10 + uVar3 * 0x18);
            uVar6 = *puVar4;
          } while (uVar6 != plVar7[3]);
        }
        lVar2 = plVar7[2];
        *puVar4 = uVar1;
        plVar7[2] = lVar2 + 1;
LAB_00f01b34:
        uVar1 = *(ulong *)(param_1 + 0x28);
        uVar8 = uVar8 + 1;
        *(undefined8 *)(lVar10 + uVar3 * 0x18 + 8) = uVar9;
      } while ((uVar8 < uVar1) && (uVar8 < *(ulong *)(param_1 + 0x38)));
    }
    uVar8 = *(ulong *)(param_1 + 0x38);
    if (uVar8 < uVar1) {
      do {
        plVar7 = *(long **)(this + 0x10);
        lVar10 = *(long *)(param_1 + 0x20);
        lVar2 = plVar7[1];
        if ((ulong)(lVar2 * 3) >> 2 <= (ulong)plVar7[2]) {
          detail::
          DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compile::Variable>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compile::Variable>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compile::Variable>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
          ::rehash();
          lVar2 = plVar7[1];
        }
        uVar3 = *(ulong *)(lVar10 + uVar8 * 8);
        lVar10 = *plVar7;
        uVar1 = (uVar3 >> 4 ^ uVar3 >> 9) & lVar2 - 1U;
        puVar4 = (ulong *)(lVar10 + uVar1 * 0x18);
        uVar6 = *puVar4;
        if (uVar6 != plVar7[3]) {
          lVar5 = 1;
          do {
            if (uVar6 == uVar3) goto LAB_00f01b80;
            uVar1 = uVar1 + lVar5;
            lVar5 = lVar5 + 1;
            uVar1 = uVar1 & lVar2 - 1U;
            puVar4 = (ulong *)(lVar10 + uVar1 * 0x18);
            uVar6 = *puVar4;
          } while (uVar6 != plVar7[3]);
        }
        lVar2 = plVar7[2];
        *puVar4 = uVar3;
        plVar7[2] = lVar2 + 1;
LAB_00f01b80:
        uVar3 = *(ulong *)(param_1 + 0x28);
        uVar8 = uVar8 + 1;
        *(undefined8 *)(lVar10 + uVar1 * 0x18 + 8) = 0;
      } while (uVar8 < uVar3);
    }
  }
  return 1;
}


