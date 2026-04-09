// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DivideByPowerOf2
// Entry Point: 00cff0f0
// Size: 1348 bytes
// Signature: undefined __cdecl DivideByPowerOf2(Integer * param_1, Integer * param_2, Integer * param_3, uint param_4)


/* CryptoPP::Integer::DivideByPowerOf2(CryptoPP::Integer&, CryptoPP::Integer&, CryptoPP::Integer
   const&, unsigned int) */

void CryptoPP::Integer::DivideByPowerOf2
               (Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *__src;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **local_c8;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> aSStack_c0 [8];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar12 = (ulong)param_4;
  operator=(param_2,param_3);
  operator>>=(param_2,uVar12);
  uVar14 = uVar12 + 0x1f >> 5;
  uVar8 = *(ulong *)(param_3 + 0x18);
  do {
    uVar13 = uVar8;
    if (uVar13 == 0) break;
    uVar8 = uVar13 - 1;
  } while (*(int *)(*(long *)(param_3 + 0x20) + -4 + uVar13 * 4) == 0);
  uVar8 = *(ulong *)(param_3 + 0x18);
  if ((uVar13 & 0xffffffff) < uVar14) {
    do {
      if (uVar8 == 0) goto LAB_00cff19c;
      uVar14 = uVar8 - 1;
      lVar9 = uVar8 * 4;
      uVar8 = uVar14;
    } while (*(int *)(*(long *)(param_3 + 0x20) + -4 + lVar9) == 0);
    uVar10 = (int)uVar14 + 1;
    uVar8 = (ulong)uVar10;
    if (uVar10 < 9) {
LAB_00cff19c:
      uVar8 = (ulong)(uint)(&DAT_005443f4)[uVar8];
    }
    else if (uVar8 < 0x11) {
      uVar8 = 0x10;
    }
    else if (uVar8 < 0x21) {
      uVar8 = 0x20;
    }
    else if (uVar8 < 0x41) {
      uVar8 = 0x40;
    }
    else {
      uVar10 = 0;
      uVar14 = 0x40;
      do {
        uVar3 = uVar10 + (uint)uVar14 >> 1;
        uVar1 = uVar3;
        if (uVar8 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
          uVar1 = (uint)uVar14;
          uVar10 = uVar3;
        }
        uVar14 = (ulong)uVar1;
      } while (1 < uVar1 - uVar10);
      uVar8 = 1L << (uVar14 & 0x3f);
    }
    uVar14 = *(ulong *)(param_1 + 0x18);
    pvVar7 = *(void **)(param_1 + 0x20);
    if (uVar14 == uVar8) {
      *(ulong *)(param_1 + 0x18) = uVar8;
      *(void **)(param_1 + 0x20) = pvVar7;
      *(undefined8 *)(param_1 + 0x10) = 0x3fffffffffffffff;
      __src = *(void **)(param_3 + 0x20);
      pvVar6 = pvVar7;
      if (pvVar7 != __src) {
LAB_00cff354:
        memcpy(pvVar6,__src,uVar8 << 2);
      }
    }
    else {
      AllocatorBase<unsigned_int>::CheckSize(uVar8);
      if (uVar8 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = (void *)UnalignedAllocate(uVar8 << 2);
        if ((pvVar7 != (void *)0x0) && (pvVar6 != (void *)0x0)) {
          uVar13 = uVar8;
          if (uVar14 <= uVar8) {
            uVar13 = uVar14;
          }
          memcpy(pvVar6,pvVar7,uVar13 << 2);
        }
      }
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)((long)pvVar7 + uVar14 * 4 + -4) = 0;
      }
      UnalignedDeallocate(pvVar7);
      *(ulong *)(param_1 + 0x18) = uVar8;
      *(void **)(param_1 + 0x20) = pvVar6;
      *(undefined8 *)(param_1 + 0x10) = 0x3fffffffffffffff;
      __src = *(void **)(param_3 + 0x20);
      if (pvVar6 != __src) goto LAB_00cff354;
    }
  }
  else {
    if (param_4 < 0x101) {
      uVar13 = (ulong)(uint)(&DAT_005443f4)[uVar14];
      uVar8 = *(ulong *)(param_1 + 0x18);
      pvVar7 = *(void **)(param_1 + 0x20);
      pvVar6 = pvVar7;
      if (uVar8 != uVar13) goto LAB_00cff2b0;
LAB_00cff1f4:
      *(ulong *)(param_1 + 0x18) = uVar13;
      *(void **)(param_1 + 0x20) = pvVar6;
      *(undefined8 *)(param_1 + 0x10) = 0x3fffffffffffffff;
      pvVar7 = *(void **)(param_3 + 0x20);
      if (pvVar6 != pvVar7) {
LAB_00cff210:
        memcpy(pvVar6,pvVar7,uVar14 << 2);
        uVar13 = *(ulong *)(param_1 + 0x18);
        pvVar6 = *(void **)(param_1 + 0x20);
      }
    }
    else {
      if (param_4 < 0x201) {
        uVar13 = 0x10;
        uVar8 = *(ulong *)(param_1 + 0x18);
        pvVar7 = *(void **)(param_1 + 0x20);
        pvVar6 = pvVar7;
        if (uVar8 != 0x10) goto LAB_00cff2b0;
        goto LAB_00cff1f4;
      }
      if (param_4 < 0x401) {
        uVar13 = 0x20;
        uVar8 = *(ulong *)(param_1 + 0x18);
        pvVar7 = *(void **)(param_1 + 0x20);
        pvVar6 = pvVar7;
        if (uVar8 != 0x20) goto LAB_00cff2b0;
        goto LAB_00cff1f4;
      }
      if (0x800 < param_4) {
        uVar10 = 0;
        uVar8 = 0x40;
        do {
          uVar3 = uVar10 + (uint)uVar8 >> 1;
          uVar1 = uVar3;
          if (uVar14 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
            uVar1 = (uint)uVar8;
            uVar10 = uVar3;
          }
          uVar8 = (ulong)uVar1;
        } while (1 < uVar1 - uVar10);
        uVar13 = 1L << (uVar8 & 0x3f);
        uVar8 = *(ulong *)(param_1 + 0x18);
        pvVar7 = *(void **)(param_1 + 0x20);
        pvVar6 = pvVar7;
        if (uVar8 != uVar13) goto LAB_00cff2b0;
        goto LAB_00cff1f4;
      }
      uVar13 = 0x40;
      uVar8 = *(ulong *)(param_1 + 0x18);
      pvVar7 = *(void **)(param_1 + 0x20);
      pvVar6 = pvVar7;
      if (uVar8 == 0x40) goto LAB_00cff1f4;
LAB_00cff2b0:
      AllocatorBase<unsigned_int>::CheckSize(uVar13);
      if (uVar13 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = (void *)UnalignedAllocate(uVar13 << 2);
        if ((pvVar7 != (void *)0x0) && (pvVar6 != (void *)0x0)) {
          uVar2 = uVar13;
          if (uVar8 <= uVar13) {
            uVar2 = uVar8;
          }
          memcpy(pvVar6,pvVar7,uVar2 << 2);
        }
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)pvVar7 + uVar8 * 4 + -4) = 0;
      }
      UnalignedDeallocate(pvVar7);
      *(ulong *)(param_1 + 0x18) = uVar13;
      *(void **)(param_1 + 0x20) = pvVar6;
      *(undefined8 *)(param_1 + 0x10) = 0x3fffffffffffffff;
      pvVar7 = *(void **)(param_3 + 0x20);
      if (pvVar6 != pvVar7) goto LAB_00cff210;
    }
    if (uVar13 - uVar14 != 0) {
      memset((void *)((long)pvVar6 + uVar14 * 4),0,(uVar13 - uVar14) * 4);
    }
    if ((param_4 & 0x1f) != 0) {
      *(uint *)((long)pvVar6 + uVar14 * 4 + -4) =
           *(uint *)((long)pvVar6 + uVar14 * 4 + -4) & (-1 << (ulong)(param_4 & 0x1f) ^ 0xffffffffU)
      ;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_3 + 0x28) == 1) {
    if (**(int **)(param_1 + 0x20) == 0) {
      lVar9 = *(long *)(param_1 + 0x18);
      do {
        if (lVar9 == 0) goto LAB_00cff5c0;
        lVar11 = lVar9 + -1;
        lVar5 = lVar9 + -1;
        lVar9 = lVar11;
      } while ((*(int **)(param_1 + 0x20))[lVar5] == 0);
      if ((int)lVar11 == -1) goto LAB_00cff5c0;
    }
    operator--(param_2);
    uVar8 = uVar12 + 0x20 >> 5;
    Integer((Integer *)&local_c8,0,uVar8);
    if (param_4 < 0x100) {
      uVar8 = (ulong)(uint)(&DAT_005443f4)[uVar8];
    }
    else if (param_4 < 0x200) {
      uVar8 = 0x10;
    }
    else if (param_4 < 0x400) {
      uVar8 = 0x20;
    }
    else if (param_4 < 0x800) {
      uVar8 = 0x40;
    }
    else {
      uVar10 = 0;
      uVar12 = 0x40;
      do {
        uVar3 = uVar10 + (uint)uVar12 >> 1;
        uVar1 = uVar3;
        if (uVar8 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
          uVar1 = (uint)uVar12;
          uVar10 = uVar3;
        }
        uVar12 = (ulong)uVar1;
      } while (1 < uVar1 - uVar10);
      uVar8 = 1L << (uVar12 & 0x3f);
    }
                    /* try { // try from 00cff510 to 00cff513 has its CatchHandler @ 00cff650 */
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              (aSStack_c0,uVar8);
    uVar8 = (ulong)(param_4 >> 3) & 0x1ffffffc;
    *(uint *)((long)local_a8 + uVar8) =
         *(uint *)((long)local_a8 + uVar8) | 1 << (ulong)(param_4 & 0x1f);
                    /* try { // try from 00cff534 to 00cff543 has its CatchHandler @ 00cff64c */
    Minus((Integer *)&local_c8);
                    /* try { // try from 00cff544 to 00cff54f has its CatchHandler @ 00cff63c */
    operator=(param_1,(Integer *)local_98);
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    local_98[0] = &PTR__Integer_0100c890;
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00cff588 to 00cff58b has its CatchHandler @ 00cff638 */
    UnalignedDeallocate(local_78);
    local_c8 = &PTR__Integer_0100c890;
    if (uStack_b0 <= local_b8) {
      local_b8 = uStack_b0;
    }
    for (; local_b8 != 0; local_b8 = local_b8 - 1) {
      *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
    }
                    /* try { // try from 00cff5bc to 00cff5bf has its CatchHandler @ 00cff634 */
    UnalignedDeallocate(local_a8);
  }
LAB_00cff5c0:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


