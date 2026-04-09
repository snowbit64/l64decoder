// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00ef7890
// Size: 444 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::AstName, std::__ndk1::pair<Luau::AstName, Luau::AstLocal*>,
   std::__ndk1::pair<Luau::AstName const, Luau::AstLocal*>,
   Luau::detail::ItemInterfaceMap<Luau::AstName, Luau::AstLocal*>, std::__ndk1::hash<Luau::AstName>,
   std::__ndk1::equal_to<Luau::AstName> >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::AstName,std::__ndk1::pair<Luau::AstName,Luau::AstLocal*>,std::__ndk1::pair<Luau::AstName_const,Luau::AstLocal*>,Luau::detail::ItemInterfaceMap<Luau::AstName,Luau::AstLocal*>,std::__ndk1::hash<Luau::AstName>,std::__ndk1::equal_to<Luau::AstName>>
     ::rehash(void)

{
  void *pvVar1;
  bool bVar2;
  void **in_x0;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  void **ppvVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void **ppvVar14;
  void *pvVar15;
  
  pvVar4 = in_x0[1];
  pvVar15 = in_x0[3];
  pvVar1 = (void *)0x10;
  if (pvVar4 != (void *)0x0) {
    pvVar1 = (void *)((long)pvVar4 << 1);
  }
  if (pvVar1 == (void *)0x0) {
    pvVar3 = (void *)0x0;
    pvVar6 = pvVar15;
    goto joined_r0x00ef78e4;
  }
  pvVar3 = operator_new((long)pvVar1 << 4);
  pvVar6 = in_x0[3];
  if (pvVar1 < (void *)0x4) {
    pvVar4 = (void *)0x0;
LAB_00ef7958:
    lVar5 = (long)pvVar1 - (long)pvVar4;
    puVar9 = (undefined8 *)((long)pvVar3 + (long)pvVar4 * 0x10 + 8);
    do {
      puVar9[-1] = pvVar6;
      *puVar9 = 0;
      lVar5 = lVar5 + -1;
      puVar9 = puVar9 + 2;
    } while (lVar5 != 0);
  }
  else {
    pvVar4 = (void *)0x0;
    lVar5 = ((long)pvVar1 - 1U) * 0x10;
    bVar2 = (long)pvVar1 - 1U >> 0x3c != 0;
    if (((((void *)((long)pvVar3 + lVar5) < pvVar3) || (bVar2)) ||
        ((long)pvVar3 + 8U + lVar5 < (long)pvVar3 + 8U)) || (bVar2)) goto LAB_00ef7958;
    pvVar4 = (void *)((ulong)pvVar1 & 0xfffffffffffffffc);
    ppvVar8 = (void **)((long)pvVar3 + 0x20);
    pvVar10 = pvVar4;
    do {
      *ppvVar8 = pvVar6;
      ppvVar8[1] = (void *)0x0;
      ppvVar8[2] = pvVar6;
      ppvVar8[3] = (void *)0x0;
      pvVar10 = (void *)((long)pvVar10 + -4);
      ppvVar8[-4] = pvVar6;
      ppvVar8[-3] = (void *)0x0;
      ppvVar8[-2] = pvVar6;
      ppvVar8[-1] = (void *)0x0;
      ppvVar8 = ppvVar8 + 8;
    } while (pvVar10 != (void *)0x0);
    if (pvVar1 != pvVar4) goto LAB_00ef7958;
  }
  pvVar4 = in_x0[1];
joined_r0x00ef78e4:
  if (pvVar4 != (void *)0x0) {
    pvVar10 = (void *)0x0;
    pvVar11 = *in_x0;
    pvVar12 = in_x0[3];
    do {
      ppvVar8 = (void **)((long)pvVar11 + (long)pvVar10 * 0x10);
      pvVar13 = *ppvVar8;
      if (pvVar13 != pvVar6) {
        uVar7 = ((ulong)pvVar13 >> 4 ^ (ulong)pvVar13 >> 9) & (long)pvVar1 - 1U;
        ppvVar14 = (void **)((long)pvVar3 + uVar7 * 0x10);
        if (*ppvVar14 == pvVar15) {
LAB_00ef7990:
          *ppvVar14 = pvVar13;
          pvVar13 = *ppvVar8;
        }
        else if (*ppvVar14 != pvVar13) {
          lVar5 = 1;
          do {
            uVar7 = uVar7 + lVar5 & (long)pvVar1 - 1U;
            ppvVar14 = (void **)((long)pvVar3 + uVar7 * 0x10);
            if (*ppvVar14 == pvVar15) goto LAB_00ef7990;
            lVar5 = lVar5 + 1;
          } while (*ppvVar14 != pvVar13);
        }
        *ppvVar14 = pvVar13;
        *(undefined8 *)((long)pvVar3 + uVar7 * 0x10 + 8) =
             *(undefined8 *)((long)pvVar11 + (long)pvVar10 * 0x10 + 8);
      }
      pvVar10 = (void *)((long)pvVar10 + 1);
      pvVar6 = pvVar12;
    } while (pvVar10 != pvVar4);
  }
  pvVar4 = *in_x0;
  *in_x0 = pvVar3;
  in_x0[1] = pvVar1;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


