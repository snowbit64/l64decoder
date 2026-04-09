// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00ee4090
// Size: 344 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::AstExprCall*, std::__ndk1::pair<Luau::AstExprCall*, int>,
   std::__ndk1::pair<Luau::AstExprCall* const, int>,
   Luau::detail::ItemInterfaceMap<Luau::AstExprCall*, int>, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstExprCall*> >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::AstExprCall*,std::__ndk1::pair<Luau::AstExprCall*,int>,std::__ndk1::pair<Luau::AstExprCall*const,int>,Luau::detail::ItemInterfaceMap<Luau::AstExprCall*,int>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>>
     ::rehash(void)

{
  void *pvVar1;
  void **in_x0;
  void *pvVar2;
  void **ppvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  void **ppvVar9;
  void **ppvVar10;
  long lVar11;
  void *pvVar12;
  
  pvVar4 = in_x0[1];
  pvVar12 = in_x0[3];
  pvVar1 = (void *)0x10;
  if (pvVar4 != (void *)0x0) {
    pvVar1 = (void *)((long)pvVar4 << 1);
  }
  if (pvVar1 == (void *)0x0) {
    pvVar2 = (void *)0x0;
    ppvVar3 = (void **)*in_x0;
    pvVar7 = pvVar12;
  }
  else {
    pvVar2 = operator_new((long)pvVar1 << 4);
    pvVar7 = in_x0[3];
    ppvVar3 = (void **)((long)pvVar2 + 0x10);
    pvVar4 = pvVar1;
    do {
      ppvVar3[-2] = pvVar7;
      pvVar4 = (void *)((long)pvVar4 + -2);
      *ppvVar3 = pvVar7;
      *(undefined4 *)(ppvVar3 + -1) = 0;
      *(undefined4 *)(ppvVar3 + 1) = 0;
      ppvVar3 = ppvVar3 + 4;
    } while (pvVar4 != (void *)0x0);
    ppvVar3 = (void **)*in_x0;
    pvVar4 = in_x0[1];
  }
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)0x0;
    pvVar6 = *ppvVar3;
    ppvVar10 = ppvVar3;
    if (pvVar6 == pvVar7) goto LAB_00ee41a8;
    do {
      uVar8 = ((ulong)pvVar6 >> 4 ^ (ulong)pvVar6 >> 9) & (long)pvVar1 - 1U;
      ppvVar9 = (void **)((long)pvVar2 + uVar8 * 0x10);
      if (*ppvVar9 == pvVar12) {
LAB_00ee418c:
        *ppvVar9 = pvVar6;
        pvVar6 = *ppvVar10;
      }
      else if (*ppvVar9 != pvVar6) {
        lVar11 = 1;
        do {
          uVar8 = uVar8 + lVar11 & (long)pvVar1 - 1U;
          ppvVar9 = (void **)((long)pvVar2 + uVar8 * 0x10);
          if (*ppvVar9 == pvVar12) goto LAB_00ee418c;
          lVar11 = lVar11 + 1;
        } while (*ppvVar9 != pvVar6);
      }
      *ppvVar9 = pvVar6;
      *(undefined4 *)((long)pvVar2 + uVar8 * 0x10 + 8) =
           *(undefined4 *)(ppvVar3 + (long)pvVar5 * 2 + 1);
LAB_00ee41a8:
      do {
        pvVar5 = (void *)((long)pvVar5 + 1);
        if (pvVar5 == pvVar4) {
          ppvVar3 = (void **)*in_x0;
          *in_x0 = pvVar2;
          in_x0[1] = pvVar1;
          goto joined_r0x00ee41d4;
        }
        ppvVar10 = ppvVar3 + (long)pvVar5 * 2;
        pvVar6 = *ppvVar10;
      } while (pvVar6 == in_x0[3]);
    } while( true );
  }
  *in_x0 = pvVar2;
  in_x0[1] = pvVar1;
joined_r0x00ee41d4:
  if (ppvVar3 == (void **)0x0) {
    return;
  }
  operator_delete(ppvVar3);
  return;
}


