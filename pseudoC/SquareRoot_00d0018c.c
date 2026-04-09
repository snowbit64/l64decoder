// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SquareRoot
// Entry Point: 00d0018c
// Size: 1404 bytes
// Signature: undefined SquareRoot(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Integer::SquareRoot() const */

void CryptoPP::Integer::SquareRoot(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  Integer *in_x0;
  int iVar6;
  Integer *in_x8;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_148;
  ulong uStack_140;
  void *local_138;
  undefined **local_128 [2];
  ulong local_118;
  ulong uStack_110;
  void *local_108;
  undefined **local_f8 [2];
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  undefined **local_c8;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> aSStack_c0 [8];
  ulong local_b8;
  ulong local_b0;
  void *local_a8;
  int local_a0;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  undefined8 *local_78;
  int local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(int *)(in_x0 + 0x28) == 1) {
LAB_00d001c8:
    Integer(in_x8,(Integer *)&DAT_02120810);
  }
  else {
    if (**(int **)(in_x0 + 0x20) == 0) {
      lVar10 = *(long *)(in_x0 + 0x18);
      do {
        if (lVar10 == 0) goto LAB_00d001c8;
        lVar9 = lVar10 + -1;
        lVar4 = lVar10 + -1;
        lVar10 = lVar9;
      } while ((*(int **)(in_x0 + 0x20))[lVar4] == 0);
      if ((int)lVar9 == -1) goto LAB_00d001c8;
    }
    DataMemoryBarrier(2,3);
    if ((DAT_02120808 & 1) == 0) {
      DAT_02120978 = Baseline_MultiplyTop2;
      DAT_02120980 = Baseline_MultiplyTop4;
      DAT_021208a0 = Baseline_Multiply2;
      DAT_021208a8 = Baseline_Multiply4;
      DAT_021208b0 = Baseline_Multiply8;
      DAT_02120930 = Baseline_MultiplyBottom2;
      DAT_02120938 = Baseline_MultiplyBottom4;
      DAT_02120940 = Baseline_MultiplyBottom8;
      DAT_021208e8 = Baseline_Square2;
      DAT_021208f0 = Baseline_Square4;
      DAT_021208f8 = Baseline_Square8;
      DAT_02120988 = Baseline_MultiplyTop8;
      DAT_021208c0 = Baseline_Multiply16;
      DAT_02120950 = Baseline_MultiplyBottom16;
      DAT_02120908 = Baseline_Square16;
      DAT_02120998 = Baseline_MultiplyTop16;
      DAT_02120808 = 1;
      DataMemoryBarrier(2,3);
    }
    local_98[0] = &PTR__Integer_0100c890;
    uStack_80 = 2;
    local_88 = 0x3fffffffffffffff;
    local_78 = (undefined8 *)UnalignedAllocate(8);
    local_70 = 0;
    *local_78 = 0;
    iVar6 = (int)*(ulong *)(in_x0 + 0x18) * -0x20;
    uVar15 = *(ulong *)(in_x0 + 0x18);
    do {
      if (uVar15 == 0) goto LAB_00d00354;
      uVar13 = uVar15 - 1;
      lVar10 = uVar15 * 4;
      iVar6 = iVar6 + 0x20;
      uVar15 = uVar13;
    } while (*(int *)(*(long *)(in_x0 + 0x20) + -4 + lVar10) == 0);
    if ((int)uVar13 == -1) {
LAB_00d00354:
      iVar6 = 0;
    }
    else {
      uVar1 = *(uint *)(*(long *)(in_x0 + 0x20) + (uVar13 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        uVar8 = 0;
      }
      else {
        uVar11 = 0;
        uVar7 = 0x20;
        do {
          uVar2 = uVar11 + uVar7 >> 1;
          uVar8 = uVar2;
          if (uVar1 >> (ulong)(uVar2 & 0x1f) != 0) {
            uVar8 = uVar7;
            uVar11 = uVar2;
          }
          uVar7 = uVar8;
        } while (1 < uVar8 - uVar11);
      }
      iVar6 = uVar8 - iVar6;
    }
    uVar1 = iVar6 + 1;
    uVar15 = (ulong)(uVar1 >> 1) + 0x20 >> 5;
                    /* try { // try from 00d0039c to 00d003af has its CatchHandler @ 00d00718 */
    Integer((Integer *)&local_c8,0,uVar15);
    if (uVar1 < 0x200) {
      uVar15 = (ulong)(uint)(&DAT_005443f4)[uVar15];
    }
    else if (uVar1 < 0x400) {
      uVar15 = 0x10;
    }
    else if (uVar1 < 0x800) {
      uVar15 = 0x20;
    }
    else if (uVar1 < 0x1000) {
      uVar15 = 0x40;
    }
    else {
      uVar8 = 0;
      uVar13 = 0x40;
      do {
        uVar7 = uVar8 + (uint)uVar13 >> 1;
        uVar11 = uVar7;
        if (uVar15 - 1 >> ((ulong)uVar7 & 0x3f) != 0) {
          uVar11 = (uint)uVar13;
          uVar8 = uVar7;
        }
        uVar13 = (ulong)uVar11;
      } while (1 < uVar11 - uVar8);
      uVar15 = 1L << (uVar13 & 0x3f);
    }
                    /* try { // try from 00d00434 to 00d00437 has its CatchHandler @ 00d00714 */
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              (aSStack_c0,uVar15);
    uVar15 = (ulong)(uVar1 >> 4) & 0xffffffc;
    *(uint *)((long)local_a8 + uVar15) =
         *(uint *)((long)local_a8 + uVar15) | 1 << (ulong)(uVar1 >> 1 & 0x1f);
LAB_00d0045c:
    do {
      while( true ) {
                    /* try { // try from 00d0045c to 00d00467 has its CatchHandler @ 00d00760 */
        operator=((Integer *)local_98,(Integer *)&local_c8);
                    /* try { // try from 00d00468 to 00d00477 has its CatchHandler @ 00d0075c */
        DividedBy(in_x0);
                    /* try { // try from 00d00478 to 00d00487 has its CatchHandler @ 00d0074c */
        Plus((Integer *)local_98);
                    /* try { // try from 00d00488 to 00d00497 has its CatchHandler @ 00d0073c */
        operator>>((Integer *)local_128,1);
                    /* try { // try from 00d00498 to 00d004a3 has its CatchHandler @ 00d0072c */
        operator=((Integer *)&local_c8,(Integer *)local_f8);
        uVar15 = local_e8;
        if (uStack_e0 <= local_e8) {
          uVar15 = uStack_e0;
        }
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)((long)local_d8 + uVar15 * 4 + -4) = 0;
        }
        local_f8[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d004d0 to 00d004d3 has its CatchHandler @ 00d00728 */
        UnalignedDeallocate(local_d8);
        local_128[0] = &PTR__Integer_0100c890;
        uVar15 = local_118;
        if (uStack_110 <= local_118) {
          uVar15 = uStack_110;
        }
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)((long)local_108 + uVar15 * 4 + -4) = 0;
        }
                    /* try { // try from 00d00504 to 00d00507 has its CatchHandler @ 00d00724 */
        UnalignedDeallocate(local_108);
        uVar15 = local_148;
        if (uStack_140 <= local_148) {
          uVar15 = uStack_140;
        }
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)((long)local_138 + uVar15 * 4 + -4) = 0;
        }
                    /* try { // try from 00d00538 to 00d0053b has its CatchHandler @ 00d00720 */
        UnalignedDeallocate(local_138);
        if (local_a0 != 1) break;
        uVar15 = local_b0;
        uVar13 = local_b0;
        if (local_70 == 1) {
          do {
            uVar14 = uVar13;
            uVar12 = uVar15 & 0xffffffff;
            uVar5 = uStack_80;
            if (uVar14 == 0) break;
            uVar15 = (ulong)((int)uVar15 - 1);
            uVar13 = uVar14 - 1;
          } while (*(int *)((long)local_a8 + uVar14 * 4 + -4) == 0);
          do {
            uVar15 = uVar5;
            if (uVar15 == 0) break;
            uVar5 = uVar15 - 1;
          } while (*(int *)((long)local_78 + uVar15 * 4 + -4) == 0);
          if ((uint)uVar14 == (uint)uVar15) {
            lVar10 = uVar12 << 2;
            while( true ) {
              if (lVar10 == 0) goto LAB_00d00660;
              uVar1 = *(uint *)((long)local_a8 + lVar10 + -4);
              uVar8 = *(uint *)((long)local_78 + lVar10 + -4);
              if (uVar8 < uVar1) break;
              lVar10 = lVar10 + -4;
              if (uVar1 < uVar8) goto LAB_00d00660;
            }
          }
          else if ((uint)uVar14 <= (uint)uVar15) goto LAB_00d00660;
        }
      }
      uVar15 = local_b0;
      uVar13 = local_b0;
      if (local_70 == 1) break;
      do {
        uVar14 = uVar13;
        uVar12 = uVar15 & 0xffffffff;
        uVar5 = uStack_80;
        if (uVar14 == 0) break;
        uVar15 = (ulong)((int)uVar15 - 1);
        uVar13 = uVar14 - 1;
      } while (*(int *)((long)local_a8 + uVar14 * 4 + -4) == 0);
      do {
        uVar15 = uVar5;
        if (uVar15 == 0) break;
        uVar5 = uVar15 - 1;
      } while (*(int *)((long)local_78 + uVar15 * 4 + -4) == 0);
      if ((uint)uVar14 == (uint)uVar15) {
        lVar10 = uVar12 << 2;
        do {
          if (lVar10 == 0) goto LAB_00d00660;
          uVar1 = *(uint *)((long)local_a8 + lVar10 + -4);
          uVar8 = *(uint *)((long)local_78 + lVar10 + -4);
          if (uVar8 < uVar1) goto LAB_00d00660;
          lVar10 = lVar10 + -4;
        } while (uVar8 <= uVar1);
        goto LAB_00d0045c;
      }
    } while ((uint)uVar14 <= (uint)uVar15);
LAB_00d00660:
                    /* try { // try from 00d00660 to 00d0066b has its CatchHandler @ 00d00710 */
    Integer(in_x8,(Integer *)local_98);
    local_c8 = &PTR__Integer_0100c890;
    if (local_b0 <= local_b8) {
      local_b8 = local_b0;
    }
    for (; local_b8 != 0; local_b8 = local_b8 - 1) {
      *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d0069c to 00d0069f has its CatchHandler @ 00d0070c */
    UnalignedDeallocate(local_a8);
    local_98[0] = &PTR__Integer_0100c890;
    uVar15 = local_88;
    if (uStack_80 <= local_88) {
      uVar15 = uStack_80;
    }
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)((long)local_78 + uVar15 * 4 + -4) = 0;
    }
                    /* try { // try from 00d006d0 to 00d006d3 has its CatchHandler @ 00d00708 */
    UnalignedDeallocate(local_78);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


