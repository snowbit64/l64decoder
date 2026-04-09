// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeSingleTree
// Entry Point: 00bff340
// Size: 1064 bytes
// Signature: undefined __cdecl makeSingleTree(Counts * param_1)


/* MarkovHuffmanTree::makeSingleTree(MarkovHuffmanTree::Counts const&) */

undefined8 * MarkovHuffmanTree::makeSingleTree(Counts *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  long lVar8;
  byte bVar9;
  ulong *puVar10;
  ulong *puVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong *puVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  uint local_490;
  int iStack_48c;
  ulong *local_488;
  ulong *local_480;
  ulong *local_478;
  ushort local_470 [512];
  long local_70;
  
  lVar8 = tpidr_el0;
  uVar23 = 0;
  lVar24 = 0;
  local_70 = *(long *)(lVar8 + 0x28);
  local_488 = (ulong *)0x0;
  local_480 = (ulong *)0x0;
  local_478 = (ulong *)0x0;
  puVar10 = (ulong *)0x0;
  do {
    puVar11 = local_488;
    uVar20 = *(uint *)(param_1 + lVar24);
    puVar19 = puVar10;
    if (uVar20 != 0) {
      if (puVar10 == local_478) {
        uVar22 = (long)puVar10 - (long)local_488;
        uVar16 = ((long)uVar22 >> 3) + 1;
        if (uVar16 >> 0x3d != 0) {
                    /* try { // try from 00bff73c to 00bff74f has its CatchHandler @ 00bff784 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar16 <= (ulong)((long)uVar22 >> 2)) {
          uVar16 = (long)uVar22 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          uVar16 = 0x1fffffffffffffff;
        }
        if (uVar16 == 0) {
          puVar10 = (ulong *)0x0;
        }
        else {
          if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00bff404 to 00bff407 has its CatchHandler @ 00bff780 */
          puVar10 = (ulong *)operator_new(uVar16 << 3);
        }
        puVar19 = puVar10 + ((long)uVar22 >> 3) + 1;
        puVar10[(long)uVar22 >> 3] = uVar23 | uVar20;
        if (0 < (long)uVar22) {
          memcpy(puVar10,puVar11,uVar22);
        }
        local_478 = puVar10 + uVar16;
        local_488 = puVar10;
        local_480 = puVar19;
        if (puVar11 != (ulong *)0x0) {
          operator_delete(puVar11);
        }
      }
      else {
        puVar19 = puVar10 + 1;
        *puVar10 = uVar23 | uVar20;
        local_480 = puVar19;
      }
    }
    lVar24 = lVar24 + 4;
    uVar23 = uVar23 + 0x100000000;
    puVar10 = puVar19;
  } while (lVar24 != 0x400);
  if ((ulong)((long)puVar19 - (long)local_488) < 0x10) {
    if (puVar19 == local_488) {
      uVar20 = 0;
      iVar21 = 0;
      local_470[0] = 0;
    }
    else {
      uVar20 = *(uint *)((long)local_488 + 4);
      iVar21 = 0;
      local_470[0] = (ushort)uVar20;
    }
  }
  else {
                    /* try { // try from 00bff478 to 00bff483 has its CatchHandler @ 00bff768 */
    std::__ndk1::
    __sort<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
              ((HEntry *)local_488,(HEntry *)puVar19,(__less *)&local_490);
    if ((ulong)((long)local_480 - (long)local_488) < 9) {
      iVar21 = 0;
    }
    else {
      iVar21 = 0;
      do {
        puVar10 = local_488;
        iVar2 = *(int *)local_488;
        iVar3 = *(int *)((long)local_488 + 4);
        puVar11 = local_488 + 1;
        iVar4 = *(int *)puVar11;
        local_470[iVar21 * 2 + 2] = (ushort)*(int *)((long)local_488 + 0xc);
        iStack_48c = iVar21 + 0x100;
        local_470[iVar21 << 1 | 1] = (ushort)iVar3;
        local_490 = iVar4 + iVar2;
        sVar7 = (long)local_480 - (long)puVar11;
        if (sVar7 != 0) {
          memmove(local_488,puVar11,sVar7);
        }
        puVar11 = local_488;
        local_480 = (ulong *)((long)puVar10 + sVar7);
        sVar7 = (long)local_480 - (long)(local_488 + 1);
        if (sVar7 != 0) {
          memmove(local_488,local_488 + 1,sVar7);
        }
        puVar10 = local_488;
        local_480 = (ulong *)((long)puVar11 + sVar7);
        uVar23 = (long)local_480 - (long)local_488;
        uVar16 = (long)uVar23 >> 3;
        if (uVar23 != 0) {
          uVar22 = 0;
          do {
            if (local_490 < *(uint *)(local_488 + uVar22)) {
                    /* try { // try from 00bff4a8 to 00bff4b3 has its CatchHandler @ 00bff778 */
              std::__ndk1::
              vector<MarkovHuffmanTree::HEntry,std::__ndk1::allocator<MarkovHuffmanTree::HEntry>>::
              insert((vector<MarkovHuffmanTree::HEntry,std::__ndk1::allocator<MarkovHuffmanTree::HEntry>>
                      *)&local_488,(__wrap_iter)(local_488 + uVar22),(HEntry *)&local_490);
              goto LAB_00bff4b4;
            }
            uVar22 = (ulong)((int)uVar22 + 1);
          } while (uVar22 < uVar16);
        }
        if (local_480 == local_478) {
          uVar22 = uVar16 + 1;
          if (uVar22 >> 0x3d != 0) {
                    /* try { // try from 00bff750 to 00bff763 has its CatchHandler @ 00bff77c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar22 <= (ulong)((long)uVar23 >> 2)) {
            uVar22 = (long)uVar23 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar23) {
            uVar22 = 0x1fffffffffffffff;
          }
          if (uVar22 == 0) {
            puVar11 = (ulong *)0x0;
          }
          else {
            if (uVar22 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00bff5c4 to 00bff5c7 has its CatchHandler @ 00bff774 */
            puVar11 = (ulong *)operator_new(uVar22 << 3);
          }
          puVar19 = puVar11 + uVar16;
          *puVar19 = CONCAT44(iStack_48c,local_490);
          if (0 < (long)uVar23) {
            memcpy(puVar11,puVar10,uVar23);
          }
          local_478 = puVar11 + uVar22;
          local_488 = puVar11;
          local_480 = puVar19 + 1;
          if (puVar10 != (ulong *)0x0) {
            operator_delete(puVar10);
          }
        }
        else {
          *local_480 = CONCAT44(iStack_48c,local_490);
          local_480 = local_480 + 1;
        }
LAB_00bff4b4:
        iVar21 = iVar21 + 1;
      } while (8 < (ulong)((long)local_480 - (long)local_488));
    }
    uVar20 = *(uint *)((long)local_488 + 4);
    local_470[0] = (ushort)uVar20;
  }
  uVar6 = iVar21 * 0x12 + 0x10U >> 3;
                    /* try { // try from 00bff640 to 00bff647 has its CatchHandler @ 00bff770 */
  pbVar12 = (byte *)operator_new__((ulong)uVar6);
  uVar23 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar16 = (ulong)(iVar21 << 1 | 1);
  pbVar17 = pbVar12;
  do {
    uVar1 = uVar15 & 0xff;
    uVar5 = uVar15 & 0x1f;
    uVar15 = uVar15 + 1;
    bVar9 = (byte)uVar14;
    uVar23 = uVar23 + 1;
    uVar14 = (uVar20 & 0xffff) >> (ulong)(8 - uVar1 & 0x1f);
    pbVar18 = pbVar17 + 1;
    *pbVar17 = bVar9 | (byte)((uVar20 & 0xffff) << (ulong)uVar5);
    if ((uVar15 & 0xff) == 8) {
      pbVar17[1] = (byte)uVar14;
      if (uVar23 == uVar16) goto LAB_00bff6d8;
      uVar15 = 0;
      uVar14 = 0;
      pbVar18 = pbVar17 + 2;
    }
    else if (uVar23 == uVar16) {
      if ((uVar15 & 0xff) != 0) {
        *pbVar18 = (byte)uVar14;
      }
LAB_00bff6d8:
                    /* try { // try from 00bff6d8 to 00bff6df has its CatchHandler @ 00bff76c */
      puVar13 = (undefined8 *)operator_new(0x20);
      *(undefined4 *)(puVar13 + 1) = 0;
      *puVar13 = 0;
      puVar13[2] = pbVar12;
      *(uint *)(puVar13 + 3) = uVar6;
      if (local_488 != (ulong *)0x0) {
        local_480 = local_488;
        operator_delete(local_488);
      }
      if (*(long *)(lVar8 + 0x28) == local_70) {
        return puVar13;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar20 = (uint)local_470[uVar23];
    pbVar17 = pbVar18;
  } while( true );
}


