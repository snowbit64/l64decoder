// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00f01700
// Size: 372 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<std::__ndk1::pair<Luau::AstExprTable*, Luau::AstName>,
   std::__ndk1::pair<Luau::AstExprTable*, Luau::AstName>, std::__ndk1::pair<Luau::AstExprTable*,
   Luau::AstName>, Luau::detail::ItemInterfaceSet<std::__ndk1::pair<Luau::AstExprTable*,
   Luau::AstName> >, Luau::Compile::ShapeVisitor::Hasher,
   std::__ndk1::equal_to<std::__ndk1::pair<Luau::AstExprTable*, Luau::AstName> > >::rehash() */

void Luau::detail::
     DenseHashTable<std::__ndk1::pair<Luau::AstExprTable*,Luau::AstName>,std::__ndk1::pair<Luau::AstExprTable*,Luau::AstName>,std::__ndk1::pair<Luau::AstExprTable*,Luau::AstName>,Luau::detail::ItemInterfaceSet<std::__ndk1::pair<Luau::AstExprTable*,Luau::AstName>>,Luau::Compile::ShapeVisitor::Hasher,std::__ndk1::equal_to<std::__ndk1::pair<Luau::AstExprTable*,Luau::AstName>>>
     ::rehash(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong **in_x0;
  ulong **ppuVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong **ppuVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong **ppuVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  
  puVar12 = in_x0[3];
  puVar5 = in_x0[1];
  puVar13 = in_x0[4];
  puVar1 = (ulong *)0x10;
  if (puVar5 != (ulong *)0x0) {
    puVar1 = (ulong *)((long)puVar5 << 1);
  }
  if (puVar1 == (ulong *)0x0) {
    ppuVar3 = (ulong **)0x0;
    puVar4 = *in_x0;
  }
  else {
    ppuVar3 = (ulong **)operator_new((long)puVar1 << 4);
    puVar5 = puVar1;
    ppuVar6 = ppuVar3;
    do {
      puVar4 = in_x0[3];
      puVar5 = (ulong *)((long)puVar5 + -1);
      ppuVar6[1] = in_x0[4];
      *ppuVar6 = puVar4;
      ppuVar6 = ppuVar6 + 2;
    } while (puVar5 != (ulong *)0x0);
    puVar4 = *in_x0;
    puVar5 = in_x0[1];
  }
  if (puVar5 == (ulong *)0x0) {
    *in_x0 = (ulong *)ppuVar3;
    in_x0[1] = puVar1;
  }
  else {
    puVar7 = (ulong *)0x0;
    do {
      ppuVar6 = (ulong **)(puVar4 + (long)puVar7 * 2);
      puVar8 = *ppuVar6;
      puVar2 = ppuVar6[1];
      if (puVar8 != in_x0[3] || puVar2 != in_x0[4]) {
        uVar9 = ((ulong)puVar2 >> 4 ^ (ulong)puVar2 >> 9 ^ (ulong)puVar8 >> 9 ^ (ulong)puVar8 >> 4)
                & (long)puVar1 - 1U;
        ppuVar10 = ppuVar3 + uVar9 * 2;
        if (*ppuVar10 == puVar12 && ppuVar10[1] == puVar13) {
LAB_00f0179c:
          *ppuVar10 = puVar8;
          ppuVar3[uVar9 * 2 + 1] = (ulong *)puVar4[(long)puVar7 * 2 + 1];
          puVar8 = *ppuVar6;
        }
        else if (*ppuVar10 != puVar8 || ppuVar10[1] != puVar2) {
          lVar11 = 1;
          do {
            uVar9 = uVar9 + lVar11 & (long)puVar1 - 1U;
            ppuVar10 = ppuVar3 + uVar9 * 2;
            if (*ppuVar10 == puVar12 && ppuVar10[1] == puVar13) goto LAB_00f0179c;
            lVar11 = lVar11 + 1;
          } while (*ppuVar10 != puVar8 || ppuVar10[1] != puVar2);
        }
        *ppuVar10 = puVar8;
        ppuVar3[uVar9 * 2 + 1] = (ulong *)puVar4[(long)puVar7 * 2 + 1];
      }
      puVar7 = (ulong *)((long)puVar7 + 1);
    } while (puVar7 != puVar5);
    puVar4 = *in_x0;
    *in_x0 = (ulong *)ppuVar3;
    in_x0[1] = puVar1;
  }
  if (puVar4 != (ulong *)0x0) {
    operator_delete(puVar4);
    return;
  }
  return;
}


