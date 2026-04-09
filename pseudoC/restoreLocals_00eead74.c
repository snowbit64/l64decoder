// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: restoreLocals
// Entry Point: 00eead74
// Size: 316 bytes
// Signature: undefined __thiscall restoreLocals(Parser * this, uint param_1)


/* Luau::Parser::restoreLocals(unsigned int) */

void __thiscall Luau::Parser::restoreLocals(Parser *this,uint param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  
  lVar2 = *(long *)(this + 0x130);
  uVar7 = (ulong)param_1;
  uVar8 = *(long *)(this + 0x138) - lVar2 >> 3;
  if (uVar7 < uVar8) {
    lVar1 = *(long *)(this + 0x110);
    do {
      uVar8 = uVar8 - 1;
      puVar10 = *(ulong **)(lVar2 + uVar8 * 8);
      uVar9 = puVar10[3];
      if ((ulong)(lVar1 * 3) >> 2 <= *(ulong *)(this + 0x118)) {
        detail::
        DenseHashTable<Luau::AstName,std::__ndk1::pair<Luau::AstName,Luau::AstLocal*>,std::__ndk1::pair<Luau::AstName_const,Luau::AstLocal*>,Luau::detail::ItemInterfaceMap<Luau::AstName,Luau::AstLocal*>,std::__ndk1::hash<Luau::AstName>,std::__ndk1::equal_to<Luau::AstName>>
        ::rehash();
        lVar1 = *(long *)(this + 0x110);
      }
      uVar4 = *puVar10;
      lVar2 = *(long *)(this + 0x108);
      uVar3 = (uVar4 >> 4 ^ uVar4 >> 9) & lVar1 - 1U;
      puVar10 = (ulong *)(lVar2 + uVar3 * 0x10);
      uVar6 = *puVar10;
      if (uVar6 != *(ulong *)(this + 0x120)) {
        lVar5 = 1;
        do {
          if (uVar6 == uVar4) goto LAB_00eeae40;
          uVar3 = uVar3 + lVar5;
          lVar5 = lVar5 + 1;
          uVar3 = uVar3 & lVar1 - 1U;
          puVar10 = (ulong *)(lVar2 + uVar3 * 0x10);
          uVar6 = *puVar10;
        } while (uVar6 != *(ulong *)(this + 0x120));
      }
      lVar5 = *(long *)(this + 0x118);
      *puVar10 = uVar4;
      *(long *)(this + 0x118) = lVar5 + 1;
LAB_00eeae40:
      *(ulong *)(lVar2 + uVar3 * 0x10 + 8) = uVar9;
      if (uVar8 <= uVar7) goto LAB_00eeae58;
      lVar2 = *(long *)(this + 0x130);
    } while( true );
  }
LAB_00eeae64:
  if (uVar8 < uVar7) {
    std::__ndk1::vector<Luau::AstLocal*,std::__ndk1::allocator<Luau::AstLocal*>>::__append
              ((vector<Luau::AstLocal*,std::__ndk1::allocator<Luau::AstLocal*>> *)(this + 0x130),
               uVar7 - uVar8);
    return;
  }
  if (uVar7 < uVar8) {
    *(ulong *)(this + 0x138) = lVar2 + uVar7 * 8;
  }
  return;
LAB_00eeae58:
  lVar2 = *(long *)(this + 0x130);
  uVar8 = *(long *)(this + 0x138) - lVar2 >> 3;
  goto LAB_00eeae64;
}


