// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00ee55fc
// Size: 336 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::AstExpr*, std::__ndk1::pair<Luau::AstExpr*,
   Luau::Compile::Constant>, std::__ndk1::pair<Luau::AstExpr* const, Luau::Compile::Constant>,
   Luau::detail::ItemInterfaceMap<Luau::AstExpr*, Luau::Compile::Constant>, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstExpr*> >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::AstExpr*,std::__ndk1::pair<Luau::AstExpr*,Luau::Compile::Constant>,std::__ndk1::pair<Luau::AstExpr*const,Luau::Compile::Constant>,Luau::detail::ItemInterfaceMap<Luau::AstExpr*,Luau::Compile::Constant>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExpr*>>
     ::rehash(void)

{
  void *pvVar1;
  void *pvVar2;
  void **in_x0;
  void *pvVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  void **ppvVar10;
  void **ppvVar11;
  void *pvVar12;
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
    pvVar8 = pvVar14;
  }
  else {
    pvVar3 = operator_new((long)pvVar1 * 0x18);
    pvVar8 = in_x0[3];
    puVar4 = (undefined8 *)((long)pvVar3 + 8);
    pvVar6 = pvVar1;
    do {
      puVar4[-1] = pvVar8;
      *puVar4 = 0;
      pvVar6 = (void *)((long)pvVar6 + -1);
      puVar4[1] = 0;
      puVar4 = puVar4 + 3;
    } while (pvVar6 != (void *)0x0);
    pvVar6 = in_x0[1];
  }
  if (pvVar6 == (void *)0x0) {
LAB_00ee571c:
    pvVar6 = *in_x0;
    *in_x0 = pvVar3;
    in_x0[1] = pvVar1;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      return;
    }
    return;
  }
  pvVar5 = (void *)0x0;
  ppvVar11 = (void **)*in_x0;
  pvVar2 = in_x0[1];
  pvVar12 = *ppvVar11;
  ppvVar13 = ppvVar11;
  if (pvVar12 == pvVar8) goto LAB_00ee56f0;
  do {
    uVar7 = 0;
    uVar9 = (ulong)pvVar12 >> 4 ^ (ulong)pvVar12 >> 9;
    do {
      uVar9 = uVar9 & (long)pvVar1 - 1U;
      ppvVar10 = (void **)((long)pvVar3 + uVar9 * 0x18);
      if (*ppvVar10 == pvVar14) {
        *ppvVar10 = pvVar12;
        pvVar12 = *ppvVar13;
        goto code_r0x00ee56dc;
      }
      if (*ppvVar10 == pvVar12) goto code_r0x00ee56dc;
      uVar7 = uVar7 + 1;
      uVar9 = uVar7 + uVar9;
    } while (uVar7 <= (long)pvVar1 - 1U);
    ppvVar10 = (void **)0x0;
code_r0x00ee56dc:
    *ppvVar10 = pvVar12;
    pvVar6 = ppvVar11[(long)pvVar5 * 3 + 1];
    ppvVar10[2] = ppvVar11[(long)pvVar5 * 3 + 2];
    ppvVar10[1] = pvVar6;
    pvVar6 = pvVar2;
LAB_00ee56f0:
    do {
      pvVar5 = (void *)((long)pvVar5 + 1);
      if (pvVar6 <= pvVar5) goto LAB_00ee571c;
      ppvVar11 = (void **)*in_x0;
      ppvVar13 = ppvVar11 + (long)pvVar5 * 3;
      pvVar12 = *ppvVar13;
    } while (pvVar12 == in_x0[3]);
  } while( true );
}


