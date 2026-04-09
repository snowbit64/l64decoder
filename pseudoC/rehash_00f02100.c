// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00f02100
// Size: 328 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::AstName, std::__ndk1::pair<Luau::AstName,
   Luau::Compile::Global>, std::__ndk1::pair<Luau::AstName const, Luau::Compile::Global>,
   Luau::detail::ItemInterfaceMap<Luau::AstName, Luau::Compile::Global>,
   std::__ndk1::hash<Luau::AstName>, std::__ndk1::equal_to<Luau::AstName> >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::AstName,std::__ndk1::pair<Luau::AstName,Luau::Compile::Global>,std::__ndk1::pair<Luau::AstName_const,Luau::Compile::Global>,Luau::detail::ItemInterfaceMap<Luau::AstName,Luau::Compile::Global>,std::__ndk1::hash<Luau::AstName>,std::__ndk1::equal_to<Luau::AstName>>
     ::rehash(void)

{
  void *pvVar1;
  void **in_x0;
  void *pvVar2;
  void *pvVar3;
  void **ppvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  void **ppvVar11;
  long lVar12;
  void *pvVar13;
  
  pvVar3 = in_x0[1];
  pvVar13 = in_x0[3];
  pvVar1 = (void *)0x10;
  if (pvVar3 != (void *)0x0) {
    pvVar1 = (void *)((long)pvVar3 << 1);
  }
  if (pvVar1 == (void *)0x0) {
    pvVar2 = (void *)0x0;
    pvVar9 = pvVar13;
  }
  else {
    pvVar2 = operator_new((long)pvVar1 << 4);
    pvVar9 = in_x0[3];
    ppvVar4 = (void **)((long)pvVar2 + 0x10);
    pvVar3 = pvVar1;
    do {
      ppvVar4[-2] = pvVar9;
      pvVar3 = (void *)((long)pvVar3 + -2);
      *ppvVar4 = pvVar9;
      *(undefined4 *)(ppvVar4 + -1) = 0;
      *(undefined4 *)(ppvVar4 + 1) = 0;
      ppvVar4 = ppvVar4 + 4;
    } while (pvVar3 != (void *)0x0);
    pvVar3 = in_x0[1];
  }
  if (pvVar3 != (void *)0x0) {
    pvVar5 = (void *)0x0;
    pvVar6 = *in_x0;
    pvVar7 = in_x0[3];
    do {
      ppvVar4 = (void **)((long)pvVar6 + (long)pvVar5 * 0x10);
      pvVar8 = *ppvVar4;
      if (pvVar8 != pvVar9) {
        uVar10 = ((ulong)pvVar8 >> 4 ^ (ulong)pvVar8 >> 9) & (long)pvVar1 - 1U;
        ppvVar11 = (void **)((long)pvVar2 + uVar10 * 0x10);
        if (*ppvVar11 == pvVar13) {
LAB_00f0218c:
          *ppvVar11 = pvVar8;
          pvVar8 = *ppvVar4;
        }
        else if (*ppvVar11 != pvVar8) {
          lVar12 = 1;
          do {
            uVar10 = uVar10 + lVar12 & (long)pvVar1 - 1U;
            ppvVar11 = (void **)((long)pvVar2 + uVar10 * 0x10);
            if (*ppvVar11 == pvVar13) goto LAB_00f0218c;
            lVar12 = lVar12 + 1;
          } while (*ppvVar11 != pvVar8);
        }
        *ppvVar11 = pvVar8;
        *(undefined4 *)((long)pvVar2 + uVar10 * 0x10 + 8) =
             *(undefined4 *)((long)pvVar6 + (long)pvVar5 * 0x10 + 8);
      }
      pvVar5 = (void *)((long)pvVar5 + 1);
      pvVar9 = pvVar7;
    } while (pvVar5 != pvVar3);
  }
  pvVar3 = *in_x0;
  *in_x0 = pvVar2;
  in_x0[1] = pvVar1;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
    return;
  }
  return;
}


