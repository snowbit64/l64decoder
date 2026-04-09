// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00edf6f4
// Size: 544 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::AstExprFunction*, std::__ndk1::pair<Luau::AstExprFunction*,
   Luau::Compiler::Function>, std::__ndk1::pair<Luau::AstExprFunction* const,
   Luau::Compiler::Function>, Luau::detail::ItemInterfaceMap<Luau::AstExprFunction*,
   Luau::Compiler::Function>, Luau::DenseHashPointer, std::__ndk1::equal_to<Luau::AstExprFunction*>
   >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::AstExprFunction*,std::__ndk1::pair<Luau::AstExprFunction*,Luau::Compiler::Function>,std::__ndk1::pair<Luau::AstExprFunction*const,Luau::Compiler::Function>,Luau::detail::ItemInterfaceMap<Luau::AstExprFunction*,Luau::Compiler::Function>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprFunction*>>
     ::rehash(void)

{
  void **in_x0;
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void **ppvVar12;
  void **ppvVar13;
  void **ppvVar14;
  
  pvVar11 = in_x0[1];
  pvVar9 = in_x0[3];
  pvVar2 = (void *)0x10;
  if (pvVar11 != (void *)0x0) {
    pvVar2 = (void *)((long)pvVar11 << 1);
  }
  if (pvVar2 == (void *)0x0) {
    pvVar1 = (void *)0x0;
    pvVar5 = pvVar9;
  }
  else {
    pvVar1 = operator_new((long)pvVar2 * 0x38);
    pvVar5 = in_x0[3];
    puVar3 = (undefined8 *)((long)pvVar1 + 8);
    pvVar11 = pvVar2;
    do {
      puVar3[-1] = pvVar5;
      pvVar11 = (void *)((long)pvVar11 + -1);
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 7;
    } while (pvVar11 != (void *)0x0);
    pvVar11 = in_x0[1];
  }
  if (pvVar11 != (void *)0x0) {
    pvVar10 = (void *)0x0;
    ppvVar13 = (void **)*in_x0;
    pvVar4 = *ppvVar13;
    ppvVar14 = ppvVar13;
    if (pvVar4 == pvVar5) goto LAB_00edf850;
    do {
      uVar6 = 0;
      uVar8 = (ulong)pvVar4 >> 4 ^ (ulong)pvVar4 >> 9;
      do {
        uVar8 = uVar8 & (long)pvVar2 - 1U;
        ppvVar12 = (void **)((long)pvVar1 + uVar8 * 0x38);
        if (*ppvVar12 == pvVar9) {
          *ppvVar12 = pvVar4;
          pvVar4 = *ppvVar13;
          goto code_r0x00edf7e8;
        }
        if (*ppvVar12 == pvVar4) goto code_r0x00edf7e8;
        uVar6 = uVar6 + 1;
        uVar8 = uVar6 + uVar8;
      } while (uVar6 <= (long)pvVar2 - 1U);
      ppvVar12 = (void **)0x0;
code_r0x00edf7e8:
      *ppvVar12 = pvVar4;
      pvVar11 = ppvVar12[2];
      *(undefined4 *)(ppvVar12 + 1) = *(undefined4 *)(ppvVar14 + (long)pvVar10 * 7 + 1);
      if (pvVar11 != (void *)0x0) {
        ppvVar12[3] = pvVar11;
        operator_delete(pvVar11);
        ppvVar12[2] = (void *)0x0;
        ppvVar12[3] = (void *)0x0;
        ppvVar12[4] = (void *)0x0;
      }
      pvVar11 = ppvVar14[(long)pvVar10 * 7 + 3];
      ppvVar12[2] = ppvVar14[(long)pvVar10 * 7 + 2];
      ppvVar12[3] = pvVar11;
      ppvVar12[4] = ppvVar14[(long)pvVar10 * 7 + 4];
      uVar7 = *(undefined8 *)((long)ppvVar14 + (long)pvVar10 * 0x38 + 0x2e);
      ppvVar14[(long)pvVar10 * 7 + 2] = (void *)0x0;
      ppvVar14[(long)pvVar10 * 7 + 3] = (void *)0x0;
      pvVar11 = ppvVar14[(long)pvVar10 * 7 + 5];
      ppvVar14[(long)pvVar10 * 7 + 4] = (void *)0x0;
      *(undefined8 *)((long)ppvVar12 + 0x2e) = uVar7;
      ppvVar12[5] = pvVar11;
      pvVar11 = in_x0[1];
LAB_00edf850:
      do {
        pvVar10 = (void *)((long)pvVar10 + 1);
        if (pvVar11 <= pvVar10) {
          pvVar9 = *in_x0;
          *in_x0 = pvVar1;
          in_x0[1] = pvVar2;
          if (pvVar9 == (void *)0x0) {
            return;
          }
          if (pvVar11 != (void *)0x0) {
            ppvVar14 = (void **)((long)pvVar9 + 0x18);
            do {
              pvVar2 = ppvVar14[-1];
              if (pvVar2 != (void *)0x0) {
                *ppvVar14 = pvVar2;
                operator_delete(pvVar2);
              }
              pvVar11 = (void *)((long)pvVar11 + -1);
              ppvVar14 = ppvVar14 + 7;
            } while (pvVar11 != (void *)0x0);
          }
          goto LAB_00edf8d0;
        }
        ppvVar14 = (void **)*in_x0;
        ppvVar13 = ppvVar14 + (long)pvVar10 * 7;
        pvVar4 = *ppvVar13;
      } while (pvVar4 == in_x0[3]);
    } while( true );
  }
  pvVar9 = *in_x0;
  *in_x0 = pvVar1;
  in_x0[1] = pvVar2;
  if (pvVar9 == (void *)0x0) {
    return;
  }
LAB_00edf8d0:
  operator_delete(pvVar9);
  return;
}


