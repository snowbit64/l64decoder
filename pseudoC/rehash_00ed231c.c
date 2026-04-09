// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00ed231c
// Size: 460 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::AstLocal*, std::__ndk1::pair<Luau::AstLocal*,
   Luau::Compiler::Local>, std::__ndk1::pair<Luau::AstLocal* const, Luau::Compiler::Local>,
   Luau::detail::ItemInterfaceMap<Luau::AstLocal*, Luau::Compiler::Local>, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstLocal*> >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compiler::Local>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compiler::Local>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compiler::Local>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
     ::rehash(void)

{
  void *pvVar1;
  bool bVar2;
  void **in_x0;
  void *pvVar3;
  long lVar4;
  void **ppvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  void **ppvVar12;
  void **ppvVar13;
  void *pvVar14;
  
  pvVar6 = in_x0[1];
  pvVar14 = in_x0[3];
  pvVar1 = (void *)0x10;
  if (pvVar6 != (void *)0x0) {
    pvVar1 = (void *)((long)pvVar6 << 1);
  }
  if (pvVar1 == (void *)0x0) {
    pvVar3 = (void *)0x0;
    ppvVar5 = (void **)*in_x0;
    pvVar8 = pvVar14;
    goto joined_r0x00ed2374;
  }
  pvVar3 = operator_new((long)pvVar1 << 4);
  pvVar8 = in_x0[3];
  if (pvVar1 < (void *)0x4) {
    pvVar6 = (void *)0x0;
LAB_00ed2400:
    lVar4 = (long)pvVar1 - (long)pvVar6;
    puVar7 = (undefined8 *)((long)pvVar3 + (long)pvVar6 * 0x10 + 8);
    do {
      puVar7[-1] = pvVar8;
      *puVar7 = 0;
      lVar4 = lVar4 + -1;
      puVar7 = puVar7 + 2;
    } while (lVar4 != 0);
  }
  else {
    pvVar6 = (void *)0x0;
    lVar4 = ((long)pvVar1 - 1U) * 0x10;
    bVar2 = (long)pvVar1 - 1U >> 0x3c != 0;
    if (((((void *)((long)pvVar3 + lVar4) < pvVar3) || (bVar2)) ||
        ((long)pvVar3 + 8U + lVar4 < (long)pvVar3 + 8U)) || (bVar2)) goto LAB_00ed2400;
    pvVar6 = (void *)((ulong)pvVar1 & 0xfffffffffffffffc);
    ppvVar5 = (void **)((long)pvVar3 + 0x20);
    pvVar10 = pvVar6;
    do {
      *ppvVar5 = pvVar8;
      ppvVar5[1] = (void *)0x0;
      ppvVar5[2] = pvVar8;
      ppvVar5[3] = (void *)0x0;
      pvVar10 = (void *)((long)pvVar10 + -4);
      ppvVar5[-4] = pvVar8;
      ppvVar5[-3] = (void *)0x0;
      ppvVar5[-2] = pvVar8;
      ppvVar5[-1] = (void *)0x0;
      ppvVar5 = ppvVar5 + 8;
    } while (pvVar10 != (void *)0x0);
    if (pvVar1 != pvVar6) goto LAB_00ed2400;
  }
  ppvVar5 = (void **)*in_x0;
  pvVar6 = in_x0[1];
joined_r0x00ed2374:
  if (pvVar6 == (void *)0x0) {
    *in_x0 = pvVar3;
    in_x0[1] = pvVar1;
joined_r0x00ed237c:
    if (ppvVar5 == (void **)0x0) {
      return;
    }
    operator_delete(ppvVar5);
    return;
  }
  pvVar10 = (void *)0x0;
  pvVar11 = *ppvVar5;
  ppvVar12 = ppvVar5;
  if (pvVar11 == pvVar8) goto LAB_00ed24a8;
  do {
    uVar9 = ((ulong)pvVar11 >> 4 ^ (ulong)pvVar11 >> 9) & (long)pvVar1 - 1U;
    ppvVar13 = (void **)((long)pvVar3 + uVar9 * 0x10);
    if (*ppvVar13 == pvVar14) {
LAB_00ed248c:
      *ppvVar13 = pvVar11;
      pvVar11 = *ppvVar12;
    }
    else if (*ppvVar13 != pvVar11) {
      lVar4 = 1;
      do {
        uVar9 = uVar9 + lVar4 & (long)pvVar1 - 1U;
        ppvVar13 = (void **)((long)pvVar3 + uVar9 * 0x10);
        if (*ppvVar13 == pvVar14) goto LAB_00ed248c;
        lVar4 = lVar4 + 1;
      } while (*ppvVar13 != pvVar11);
    }
    *ppvVar13 = pvVar11;
    *(void **)((long)pvVar3 + uVar9 * 0x10 + 8) = ppvVar5[(long)pvVar10 * 2 + 1];
LAB_00ed24a8:
    do {
      pvVar10 = (void *)((long)pvVar10 + 1);
      if (pvVar10 == pvVar6) {
        ppvVar5 = (void **)*in_x0;
        *in_x0 = pvVar3;
        in_x0[1] = pvVar1;
        goto joined_r0x00ed237c;
      }
      ppvVar12 = ppvVar5 + (long)pvVar10 * 2;
      pvVar11 = *ppvVar12;
    } while (pvVar11 == in_x0[3]);
  } while( true );
}


