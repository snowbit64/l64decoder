// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00efe558
// Size: 332 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<unsigned int, std::__ndk1::pair<unsigned int, short>,
   std::__ndk1::pair<unsigned int const, short>, Luau::detail::ItemInterfaceMap<unsigned int,
   short>, std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int> >::rehash() */

void Luau::detail::
     DenseHashTable<unsigned_int,std::__ndk1::pair<unsigned_int,short>,std::__ndk1::pair<unsigned_int_const,short>,Luau::detail::ItemInterfaceMap<unsigned_int,short>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>>
     ::rehash(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint **in_x0;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  
  puVar6 = in_x0[1];
  uVar2 = *(uint *)(in_x0 + 3);
  puVar1 = (uint *)0x10;
  if (puVar6 != (uint *)0x0) {
    puVar1 = (uint *)((long)puVar6 << 1);
  }
  if (puVar1 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
    puVar5 = *in_x0;
    uVar3 = uVar2;
  }
  else {
    puVar4 = (uint *)operator_new((long)puVar1 << 3);
    uVar3 = *(uint *)(in_x0 + 3);
    puVar6 = puVar4 + 2;
    puVar5 = puVar1;
    do {
      puVar6[-2] = uVar3;
      puVar5 = (uint *)((long)puVar5 + -2);
      *puVar6 = uVar3;
      *(undefined2 *)(puVar6 + -1) = 0;
      *(undefined2 *)(puVar6 + 1) = 0;
      puVar6 = puVar6 + 4;
    } while (puVar5 != (uint *)0x0);
    puVar5 = *in_x0;
    puVar6 = in_x0[1];
  }
  if (puVar6 == (uint *)0x0) {
    *in_x0 = puVar4;
    in_x0[1] = puVar1;
    if (puVar5 == (uint *)0x0) {
      return;
    }
LAB_00efe680:
    operator_delete(puVar5);
    return;
  }
  puVar7 = (uint *)0x0;
  uVar8 = *puVar5;
  puVar11 = puVar5;
  if (uVar8 == uVar3) goto LAB_00efe63c;
  do {
    uVar9 = (long)puVar1 - 1U & (ulong)uVar8;
    puVar10 = puVar4 + uVar9 * 2;
    if (*puVar10 == uVar2) {
LAB_00efe5ec:
      *puVar10 = uVar8;
      uVar8 = *puVar11;
    }
    else if (*puVar10 != uVar8) {
      lVar12 = 1;
      do {
        uVar9 = uVar9 + lVar12 & (long)puVar1 - 1U;
        puVar10 = puVar4 + uVar9 * 2;
        if (*puVar10 == uVar2) goto LAB_00efe5ec;
        lVar12 = lVar12 + 1;
      } while (*puVar10 != uVar8);
    }
    *puVar10 = uVar8;
    *(undefined2 *)(puVar4 + uVar9 * 2 + 1) = *(undefined2 *)(puVar5 + (long)puVar7 * 2 + 1);
LAB_00efe63c:
    do {
      puVar7 = (uint *)((long)puVar7 + 1);
      if (puVar7 == puVar6) {
        *in_x0 = puVar4;
        in_x0[1] = puVar1;
        goto LAB_00efe680;
      }
      puVar11 = puVar5 + (long)puVar7 * 2;
      uVar8 = *puVar11;
    } while (uVar8 == *(uint *)(in_x0 + 3));
  } while( true );
}


