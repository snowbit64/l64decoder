// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: floodShells
// Entry Point: 00b63814
// Size: 852 bytes
// Signature: undefined floodShells(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Brep::floodShells() */

void Brep::floodShells(void)

{
  ulong uVar1;
  ushort *puVar2;
  uint uVar3;
  long lVar4;
  long in_x0;
  ushort **ppuVar5;
  ushort **ppuVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ushort **ppuVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ushort *puVar16;
  ushort **local_80;
  ushort **local_70;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  lVar13 = *(long *)(in_x0 + 0x2f68);
  uVar8 = *(long *)(in_x0 + 0x2f70) - lVar13;
  uVar15 = uVar8 >> 5 & 0xffffffff;
  iVar12 = (int)(uVar8 >> 5);
  if (iVar12 != 0) {
    if (uVar15 < 2) {
      lVar9 = 0;
    }
    else {
      uVar8 = uVar8 >> 5 & 1;
      lVar9 = uVar15 - uVar8;
      puVar16 = (ushort *)(lVar13 + 0x20);
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + -2;
        puVar16[-0x10] = puVar16[-0x10] | 0x3fff;
        *puVar16 = *puVar16 | 0x3fff;
        puVar16 = puVar16 + 0x20;
      } while (lVar10 != 0);
      if (uVar8 == 0) goto LAB_00b638bc;
    }
    lVar10 = uVar15 - lVar9;
    puVar16 = (ushort *)(lVar13 + lVar9 * 0x20);
    do {
      lVar10 = lVar10 + -1;
      *puVar16 = *puVar16 | 0x3fff;
      puVar16 = puVar16 + 0x10;
    } while (lVar10 != 0);
  }
LAB_00b638bc:
  local_70 = (ushort **)0x0;
  if (uVar15 == 0) {
    ppuVar5 = (ushort **)0x0;
    *(undefined4 *)(in_x0 + 0x2fb0) = 0;
  }
  else {
                    /* try { // try from 00b638cc to 00b638cf has its CatchHandler @ 00b63b68 */
    ppuVar5 = (ushort **)operator_new(uVar15 << 3);
    local_70 = ppuVar5 + uVar15;
    *(undefined4 *)(in_x0 + 0x2fb0) = 0;
  }
  if (iVar12 != 0) {
    uVar8 = 0;
    ppuVar11 = ppuVar5;
    ppuVar6 = ppuVar5;
    local_80 = ppuVar5;
    while( true ) {
      puVar16 = (ushort *)(lVar13 + uVar8 * 0x20);
      ppuVar5 = ppuVar11;
      if ((*puVar16 & 0x7fff) == 0x3fff) {
        iVar12 = *(int *)(in_x0 + 0x2fb0);
        *(int *)(in_x0 + 0x2fb0) = iVar12 + 1;
        if (ppuVar11 == local_70) {
          uVar14 = (long)ppuVar11 - (long)ppuVar6;
          uVar1 = ((long)uVar14 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00b63b50 to 00b63b63 has its CatchHandler @ 00b63b70 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)uVar14 >> 2)) {
            uVar1 = (long)uVar14 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar14) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            local_80 = (ushort **)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00b63988 to 00b6398b has its CatchHandler @ 00b63b6c */
            local_80 = (ushort **)operator_new(uVar1 << 3);
          }
          ppuVar5 = local_80 + ((long)uVar14 >> 3) + 1;
          local_80[(long)uVar14 >> 3] = puVar16;
          if (0 < (long)uVar14) {
            memcpy(local_80,ppuVar6,uVar14);
          }
          local_70 = local_80 + uVar1;
          if (ppuVar6 != (ushort **)0x0) {
            operator_delete(ppuVar6);
          }
        }
        else {
          ppuVar5 = ppuVar11 + 1;
          *ppuVar11 = puVar16;
        }
        do {
          puVar16 = ppuVar5[-1];
          lVar13 = 0;
          *puVar16 = *puVar16 & 0xc000 | (ushort)iVar12;
          ppuVar11 = ppuVar5 + -1;
          do {
            uVar3 = *(uint *)((long)puVar16 + lVar13 + 0xc);
            ppuVar5 = ppuVar11;
            ppuVar6 = local_80;
            if ((uVar3 != 0xffffffff) &&
               (puVar2 = (ushort *)(*(long *)(in_x0 + 0x2f68) + ((ulong)uVar3 & 0xfffffffc) * 8),
               (*puVar2 & 0x7fff) == 0x3fff)) {
              if (ppuVar11 == local_70) {
                uVar14 = (long)ppuVar11 - (long)local_80;
                uVar1 = ((long)uVar14 >> 3) + 1;
                if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00b63b3c to 00b63b4f has its CatchHandler @ 00b63b78 */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                if (uVar1 <= (ulong)((long)uVar14 >> 2)) {
                  uVar1 = (long)uVar14 >> 2;
                }
                if (0x7ffffffffffffff7 < uVar14) {
                  uVar1 = 0x1fffffffffffffff;
                }
                if (uVar1 == 0) {
                  ppuVar6 = (ushort **)0x0;
                }
                else {
                  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 00b63a98 to 00b63a9b has its CatchHandler @ 00b63b74 */
                  ppuVar6 = (ushort **)operator_new(uVar1 << 3);
                }
                ppuVar5 = ppuVar6 + ((long)uVar14 >> 3) + 1;
                ppuVar6[(long)uVar14 >> 3] = puVar2;
                if (0 < (long)uVar14) {
                  memcpy(ppuVar6,local_80,uVar14);
                }
                local_70 = ppuVar6 + uVar1;
                if (local_80 != (ushort **)0x0) {
                  operator_delete(local_80);
                }
              }
              else {
                ppuVar5 = ppuVar11 + 1;
                *ppuVar11 = puVar2;
              }
            }
            local_80 = ppuVar6;
            lVar13 = lVar13 + 8;
            ppuVar11 = ppuVar5;
          } while (lVar13 != 0x18);
          ppuVar6 = ppuVar5;
        } while (local_80 != ppuVar5);
      }
      uVar8 = uVar8 + 1;
      if (uVar8 == uVar15) break;
      lVar13 = *(long *)(in_x0 + 0x2f68);
      ppuVar11 = ppuVar5;
    }
  }
  if (ppuVar5 != (ushort **)0x0) {
    operator_delete(ppuVar5);
  }
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


