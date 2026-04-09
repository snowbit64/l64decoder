// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00f007b0
// Size: 404 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::AstLocal*, std::__ndk1::pair<Luau::AstLocal*, unsigned long>,
   std::__ndk1::pair<Luau::AstLocal* const, unsigned long>,
   Luau::detail::ItemInterfaceMap<Luau::AstLocal*, unsigned long>, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstLocal*> >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,unsigned_long>,std::__ndk1::pair<Luau::AstLocal*const,unsigned_long>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,unsigned_long>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
     ::rehash(void)

{
  void *pvVar1;
  void **in_x0;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void **ppvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  void *pvVar10;
  void **ppvVar11;
  void **ppvVar12;
  void *pvVar13;
  
  pvVar6 = in_x0[1];
  pvVar13 = in_x0[3];
  pvVar1 = (void *)0x10;
  if (pvVar6 != (void *)0x0) {
    pvVar1 = (void *)((long)pvVar6 << 1);
  }
  if (pvVar1 == (void *)0x0) {
    pvVar2 = (void *)0x0;
    ppvVar5 = (void **)*in_x0;
    pvVar8 = pvVar13;
    goto joined_r0x00f00808;
  }
  pvVar2 = operator_new((long)pvVar1 << 4);
  pvVar8 = in_x0[3];
  if (pvVar1 < (void *)0x4) {
    pvVar3 = (void *)0x0;
LAB_00f0085c:
    lVar4 = (long)pvVar1 - (long)pvVar3;
    puVar7 = (undefined8 *)((long)pvVar2 + (long)pvVar3 * 0x10 + 8);
    do {
      puVar7[-1] = pvVar8;
      *puVar7 = 0;
      lVar4 = lVar4 + -1;
      puVar7 = puVar7 + 2;
    } while (lVar4 != 0);
  }
  else {
    pvVar3 = (void *)((ulong)pvVar1 & 0xfffffffffffffffc);
    ppvVar5 = (void **)((long)pvVar2 + 0x20);
    pvVar6 = pvVar3;
    do {
      *ppvVar5 = pvVar8;
      ppvVar5[1] = (void *)0x0;
      ppvVar5[2] = pvVar8;
      ppvVar5[3] = (void *)0x0;
      pvVar6 = (void *)((long)pvVar6 + -4);
      ppvVar5[-4] = pvVar8;
      ppvVar5[-3] = (void *)0x0;
      ppvVar5[-2] = pvVar8;
      ppvVar5[-1] = (void *)0x0;
      ppvVar5 = ppvVar5 + 8;
    } while (pvVar6 != (void *)0x0);
    if (pvVar1 != pvVar3) goto LAB_00f0085c;
  }
  ppvVar5 = (void **)*in_x0;
  pvVar6 = in_x0[1];
joined_r0x00f00808:
  if (pvVar6 == (void *)0x0) {
    *in_x0 = pvVar2;
    in_x0[1] = pvVar1;
joined_r0x00f00810:
    if (ppvVar5 == (void **)0x0) {
      return;
    }
    operator_delete(ppvVar5);
    return;
  }
  pvVar3 = (void *)0x0;
  pvVar10 = *ppvVar5;
  ppvVar12 = ppvVar5;
  if (pvVar10 == pvVar8) goto LAB_00f00904;
  do {
    uVar9 = ((ulong)pvVar10 >> 4 ^ (ulong)pvVar10 >> 9) & (long)pvVar1 - 1U;
    ppvVar11 = (void **)((long)pvVar2 + uVar9 * 0x10);
    if (*ppvVar11 == pvVar13) {
LAB_00f008e8:
      *ppvVar11 = pvVar10;
      pvVar10 = *ppvVar12;
    }
    else if (*ppvVar11 != pvVar10) {
      lVar4 = 1;
      do {
        uVar9 = uVar9 + lVar4 & (long)pvVar1 - 1U;
        ppvVar11 = (void **)((long)pvVar2 + uVar9 * 0x10);
        if (*ppvVar11 == pvVar13) goto LAB_00f008e8;
        lVar4 = lVar4 + 1;
      } while (*ppvVar11 != pvVar10);
    }
    *ppvVar11 = pvVar10;
    *(void **)((long)pvVar2 + uVar9 * 0x10 + 8) = ppvVar5[(long)pvVar3 * 2 + 1];
LAB_00f00904:
    do {
      pvVar3 = (void *)((long)pvVar3 + 1);
      if (pvVar3 == pvVar6) {
        ppvVar5 = (void **)*in_x0;
        *in_x0 = pvVar2;
        in_x0[1] = pvVar1;
        goto joined_r0x00f00810;
      }
      ppvVar12 = ppvVar5 + (long)pvVar3 * 2;
      pvVar10 = *ppvVar12;
    } while (pvVar10 == in_x0[3]);
  } while( true );
}


