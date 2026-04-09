// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00ee8c04
// Size: 492 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::AstNameTable::Entry, Luau::AstNameTable::Entry,
   Luau::AstNameTable::Entry, Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,
   Luau::AstNameTable::EntryHash, std::__ndk1::equal_to<Luau::AstNameTable::Entry> >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
     ::rehash(void)

{
  long **pplVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long **in_x0;
  long **pplVar8;
  long *__s2;
  ulong uVar9;
  long *__s2_00;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong __n;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  
  __s2_00 = in_x0[3];
  plVar13 = in_x0[1];
  uVar3 = *(uint *)(in_x0 + 4);
  plVar2 = (long *)0x10;
  if (plVar13 != (long *)0x0) {
    plVar2 = (long *)((long)plVar13 << 1);
  }
  if (plVar2 == (long *)0x0) {
    pplVar8 = (long **)0x0;
    plVar15 = *in_x0;
  }
  else {
    pplVar8 = (long **)operator_new((long)plVar2 << 4);
    plVar13 = plVar2;
    pplVar10 = pplVar8;
    do {
      plVar15 = in_x0[3];
      plVar13 = (long *)((long)plVar13 + -1);
      pplVar10[1] = in_x0[4];
      *pplVar10 = plVar15;
      pplVar10 = pplVar10 + 2;
    } while (plVar13 != (long *)0x0);
    plVar15 = *in_x0;
    plVar13 = in_x0[1];
  }
  if (plVar13 == (long *)0x0) {
    *in_x0 = (long *)pplVar8;
    in_x0[1] = plVar2;
    if (plVar15 == (long *)0x0) {
      return;
    }
  }
  else {
    uVar4 = *(uint *)(in_x0 + 4);
    plVar16 = (long *)0x0;
    __s2 = in_x0[3];
    do {
      pplVar10 = (long **)(plVar15 + (long)plVar16 * 2);
      uVar5 = *(uint *)(pplVar10 + 1);
      __n = (ulong)uVar5;
      plVar14 = *pplVar10;
      if ((uVar5 != uVar4) || (iVar7 = memcmp(plVar14,__s2,__n), iVar7 != 0)) {
        uVar9 = 0x811c9dc5;
        plVar11 = plVar14;
        uVar12 = __n;
        if (uVar5 != 0) {
          do {
            uVar12 = uVar12 - 1;
            uVar9 = (ulong)(((uint)uVar9 ^ (uint)*(byte *)plVar11) * 0x1000193);
            plVar11 = (long *)((long)plVar11 + 1);
          } while (uVar12 != 0);
        }
        lVar17 = 0;
        while( true ) {
          uVar9 = uVar9 & (long)plVar2 - 1U;
          pplVar1 = pplVar8 + uVar9 * 2;
          uVar6 = *(uint *)(pplVar1 + 1);
          if ((uVar6 == uVar3) && (iVar7 = memcmp(*pplVar1,__s2_00,(ulong)uVar3), iVar7 == 0))
          break;
          if ((uVar6 == uVar5) && (iVar7 = memcmp(*pplVar1,plVar14,__n), iVar7 == 0))
          goto LAB_00ee8cac;
          lVar17 = lVar17 + 1;
          uVar9 = lVar17 + uVar9;
        }
        plVar14 = *pplVar10;
        pplVar1[1] = pplVar10[1];
        *pplVar1 = plVar14;
LAB_00ee8cac:
        plVar14 = *pplVar10;
        pplVar1[1] = pplVar10[1];
        *pplVar1 = plVar14;
      }
      plVar16 = (long *)((long)plVar16 + 1);
    } while (plVar16 < plVar13);
    *in_x0 = (long *)pplVar8;
    in_x0[1] = plVar2;
  }
  operator_delete(plVar15);
  return;
}


