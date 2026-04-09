// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00efe23c
// Size: 796 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::BytecodeBuilder::TableShape,
   std::__ndk1::pair<Luau::BytecodeBuilder::TableShape, int>,
   std::__ndk1::pair<Luau::BytecodeBuilder::TableShape const, int>,
   Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::TableShape, int>,
   Luau::BytecodeBuilder::TableShapeHash, std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>
   >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::BytecodeBuilder::TableShape,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape,int>,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape_const,int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::TableShape,int>,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
     ::rehash(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint **in_x0;
  ulong uVar8;
  uint **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  uint **__s1;
  size_t __n;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint **local_118;
  uint *local_f8;
  uint *puStack_f0;
  uint *local_e8;
  uint *puStack_e0;
  uint *local_d8;
  uint *puStack_d0;
  uint *local_c8;
  uint *puStack_c0;
  uint *local_b8;
  uint *puStack_b0;
  uint *local_a8;
  uint *puStack_a0;
  uint *local_98;
  uint *puStack_90;
  uint *local_88;
  uint *puStack_80;
  uint local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  puStack_a0 = in_x0[0xe];
  local_a8 = in_x0[0xd];
  puStack_90 = in_x0[0x10];
  local_98 = in_x0[0xf];
  puVar13 = in_x0[1];
  puStack_80 = in_x0[0x12];
  local_88 = in_x0[0x11];
  puStack_e0 = in_x0[6];
  local_e8 = in_x0[5];
  puStack_d0 = in_x0[8];
  local_d8 = in_x0[7];
  puStack_c0 = in_x0[10];
  local_c8 = in_x0[9];
  puVar1 = (uint *)0x10;
  if (puVar13 != (uint *)0x0) {
    puVar1 = (uint *)((long)puVar13 << 1);
  }
  local_78 = *(uint *)(in_x0 + 0x13);
  puStack_b0 = in_x0[0xc];
  local_b8 = in_x0[0xb];
  puStack_f0 = in_x0[4];
  local_f8 = in_x0[3];
  if (puVar1 == (uint *)0x0) {
    local_118 = (uint **)0x0;
    puVar15 = *in_x0;
    if (puVar13 != (uint *)0x0) goto LAB_00efe328;
LAB_00efe510:
    *in_x0 = (uint *)local_118;
    in_x0[1] = puVar1;
    if (puVar15 == (uint *)0x0) goto LAB_00efe524;
  }
  else {
    local_118 = (uint **)operator_new((long)puVar1 * 0x88);
    puVar13 = puVar1;
    ppuVar9 = local_118;
    do {
      puVar15 = in_x0[0xf];
      puVar19 = in_x0[0x12];
      puVar12 = in_x0[0x11];
      puVar13 = (uint *)((long)puVar13 + -1);
      puVar18 = in_x0[8];
      puVar17 = in_x0[7];
      puVar21 = in_x0[10];
      puVar20 = in_x0[9];
      ppuVar9[0xd] = in_x0[0x10];
      ppuVar9[0xc] = puVar15;
      ppuVar9[0xf] = puVar19;
      ppuVar9[0xe] = puVar12;
      puVar16 = in_x0[0xc];
      puVar19 = in_x0[0xb];
      puVar12 = in_x0[0xe];
      puVar15 = in_x0[0xd];
      ppuVar9[5] = puVar18;
      ppuVar9[4] = puVar17;
      ppuVar9[7] = puVar21;
      ppuVar9[6] = puVar20;
      puVar21 = in_x0[4];
      puVar20 = in_x0[3];
      puVar18 = in_x0[6];
      puVar17 = in_x0[5];
      ppuVar9[9] = puVar16;
      ppuVar9[8] = puVar19;
      ppuVar9[0xb] = puVar12;
      ppuVar9[10] = puVar15;
      uVar2 = *(uint *)(in_x0 + 0x13);
      ppuVar9[1] = puVar21;
      *ppuVar9 = puVar20;
      ppuVar9[3] = puVar18;
      ppuVar9[2] = puVar17;
      *(uint *)(ppuVar9 + 0x10) = uVar2;
      *(uint *)((long)ppuVar9 + 0x84) = 0;
      ppuVar9 = ppuVar9 + 0x11;
    } while (puVar13 != (uint *)0x0);
    puVar15 = *in_x0;
    puVar13 = in_x0[1];
    if (puVar13 == (uint *)0x0) goto LAB_00efe510;
LAB_00efe328:
    uVar6 = local_78;
    uVar10 = (ulong)local_78;
    uVar2 = *(uint *)(in_x0 + 0x13);
    puVar12 = (uint *)0x0;
    puVar19 = puVar15;
    do {
      ppuVar9 = (uint **)(puVar15 + (long)puVar12 * 0x22);
      uVar3 = *(uint *)(ppuVar9 + 0x10);
      uVar11 = (ulong)uVar3;
      __n = uVar11 << 2;
      if ((uVar3 != uVar2) || (iVar7 = memcmp(ppuVar9,in_x0 + 3,__n), iVar7 != 0)) {
        uVar8 = 0x811c9dc5;
        puVar16 = puVar19;
        if (uVar3 != 0) {
          do {
            uVar11 = uVar11 - 1;
            uVar8 = (ulong)((*puVar16 ^ (uint)uVar8) * 0x1000193);
            puVar16 = puVar16 + 1;
          } while (uVar11 != 0);
        }
        lVar14 = 0;
        while( true ) {
          uVar8 = uVar8 & (long)puVar1 - 1U;
          __s1 = local_118 + uVar8 * 0x11;
          uVar4 = *(uint *)(__s1 + 0x10);
          if ((uVar4 == uVar6) && (iVar7 = memcmp(__s1,&local_f8,uVar10 << 2), iVar7 == 0)) break;
          if ((uVar4 == uVar3) && (iVar7 = memcmp(__s1,ppuVar9,__n), iVar7 == 0)) goto LAB_00efe3b0;
          lVar14 = lVar14 + 1;
          uVar8 = lVar14 + uVar8;
        }
        puVar16 = *ppuVar9;
        __s1[1] = ppuVar9[1];
        *__s1 = puVar16;
        puVar18 = ppuVar9[6];
        puVar17 = ppuVar9[9];
        puVar16 = ppuVar9[8];
        puVar23 = ppuVar9[3];
        puVar22 = ppuVar9[2];
        puVar21 = ppuVar9[5];
        puVar20 = ppuVar9[4];
        __s1[7] = ppuVar9[7];
        __s1[6] = puVar18;
        __s1[9] = puVar17;
        __s1[8] = puVar16;
        __s1[3] = puVar23;
        __s1[2] = puVar22;
        __s1[5] = puVar21;
        __s1[4] = puVar20;
        puVar20 = ppuVar9[0xd];
        puVar18 = ppuVar9[0xc];
        puVar17 = ppuVar9[0xf];
        puVar16 = ppuVar9[0xe];
        puVar22 = ppuVar9[0xb];
        puVar21 = ppuVar9[10];
        *(uint *)(__s1 + 0x10) = *(uint *)(ppuVar9 + 0x10);
        __s1[0xd] = puVar20;
        __s1[0xc] = puVar18;
        __s1[0xf] = puVar17;
        __s1[0xe] = puVar16;
        __s1[0xb] = puVar22;
        __s1[10] = puVar21;
LAB_00efe3b0:
        ppuVar9 = (uint **)(puVar15 + (long)puVar12 * 0x22);
        puVar16 = *ppuVar9;
        __s1[1] = ppuVar9[1];
        *__s1 = puVar16;
        puVar18 = ppuVar9[6];
        puVar17 = ppuVar9[9];
        puVar16 = ppuVar9[8];
        puVar23 = ppuVar9[3];
        puVar22 = ppuVar9[2];
        puVar21 = ppuVar9[5];
        puVar20 = ppuVar9[4];
        __s1[7] = ppuVar9[7];
        __s1[6] = puVar18;
        __s1[9] = puVar17;
        __s1[8] = puVar16;
        __s1[3] = puVar23;
        __s1[2] = puVar22;
        __s1[5] = puVar21;
        __s1[4] = puVar20;
        puVar20 = ppuVar9[0xd];
        puVar18 = ppuVar9[0xc];
        puVar17 = ppuVar9[0xf];
        puVar16 = ppuVar9[0xe];
        puVar22 = ppuVar9[0xb];
        puVar21 = ppuVar9[10];
        *(uint *)(__s1 + 0x10) = *(uint *)(ppuVar9 + 0x10);
        __s1[0xd] = puVar20;
        __s1[0xc] = puVar18;
        __s1[0xf] = puVar17;
        __s1[0xe] = puVar16;
        __s1[0xb] = puVar22;
        __s1[10] = puVar21;
        *(undefined4 *)((long)local_118 + uVar8 * 0x88 + 0x84) =
             *(undefined4 *)((long)ppuVar9 + 0x84);
      }
      puVar12 = (uint *)((long)puVar12 + 1);
      puVar19 = puVar19 + 0x22;
    } while (puVar12 < puVar13);
    *in_x0 = (uint *)local_118;
    in_x0[1] = puVar1;
  }
  operator_delete(puVar15);
LAB_00efe524:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


