// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_front_capacity
// Entry Point: 00712a60
// Size: 916 bytes
// Signature: undefined __add_front_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<BTBehavior*, std::__ndk1::allocator<BTBehavior*> >::__add_front_capacity() */

void std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::__add_front_capacity(void)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  long lVar4;
  BTBehavior **ppBVar5;
  void **in_x0;
  BTBehavior **ppBVar6;
  ulong uVar7;
  long lVar8;
  BTBehavior **ppBVar9;
  void **ppvVar10;
  BTBehavior **ppBVar11;
  ulong uVar12;
  BTBehavior **ppBVar13;
  ulong uVar14;
  ulong uVar15;
  BTBehavior **ppBVar16;
  BTBehavior *pBVar17;
  BTBehavior *pBVar18;
  BTBehavior *pBVar19;
  BTBehavior **local_88;
  BTBehavior **local_80;
  BTBehavior **local_78;
  BTBehavior **local_70;
  BTBehavior **local_68;
  void **local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar7 = (long)in_x0[2] - (long)in_x0[1];
  lVar1 = 0;
  if (uVar7 != 0) {
    lVar1 = uVar7 * 0x40 + -1;
  }
  if ((ulong)(lVar1 - ((long)in_x0[5] + (long)in_x0[4])) < 0x200) {
    uVar14 = (long)in_x0[3] - (long)*in_x0;
    if (uVar7 < uVar14) {
      if (in_x0[1] == *in_x0) {
        local_80 = (BTBehavior **)operator_new(0x1000);
        __split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>>::push_back
                  ((__split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>> *)in_x0,
                   &local_80);
        local_80 = *(BTBehavior ***)(void **)((long)in_x0[2] + -8);
        in_x0[2] = (void **)((long)in_x0[2] + -8);
        __split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>>::push_front
                  ((__split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>> *)in_x0,
                   &local_80);
      }
      else {
        local_80 = (BTBehavior **)operator_new(0x1000);
        __split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>>::push_front
                  ((__split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>> *)in_x0,
                   &local_80);
      }
      pvVar2 = (void *)0x100;
      if ((long)in_x0[2] - (long)in_x0[1] != 8) {
        pvVar2 = (void *)((long)in_x0[4] + 0x200);
      }
      in_x0[4] = pvVar2;
    }
    else {
      uVar7 = (long)uVar14 >> 2;
      if (uVar14 == 0) {
        uVar7 = 1;
      }
      local_60 = in_x0 + 3;
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_80 = (BTBehavior **)operator_new(uVar7 * 8);
      local_68 = local_80 + uVar7;
      local_78 = local_80;
      local_70 = local_80;
                    /* try { // try from 00712b44 to 00712b4b has its CatchHandler @ 00712e04 */
      local_88 = (BTBehavior **)operator_new(0x1000);
                    /* try { // try from 00712b54 to 00712b5f has its CatchHandler @ 00712df4 */
      __split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>&>::push_back
                ((__split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>&> *)&local_80,
                 &local_88);
      ppBVar9 = (BTBehavior **)in_x0[1];
      ppBVar16 = ppBVar9;
      if (ppBVar9 != (BTBehavior **)in_x0[2]) {
        do {
          ppBVar11 = local_70;
          ppBVar16 = local_78;
          ppBVar6 = local_80;
          if (local_70 == local_68) {
            if (local_78 < local_80 || (long)local_78 - (long)local_80 == 0) {
              uVar7 = (long)local_70 - (long)local_80 >> 2;
              if ((long)local_70 - (long)local_80 == 0) {
                uVar7 = 1;
              }
              if (uVar7 >> 0x3d != 0) {
                    /* try { // try from 00712dd8 to 00712de3 has its CatchHandler @ 00712e08 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00712c14 to 00712c17 has its CatchHandler @ 00712e0c */
              local_80 = (BTBehavior **)operator_new(uVar7 << 3);
              uVar12 = uVar7 >> 2;
              uVar14 = (long)ppBVar11 - (long)ppBVar16;
              local_78 = local_80 + uVar12;
              local_70 = local_78;
              if (uVar14 != 0) {
                local_70 = (BTBehavior **)((long)local_78 + (uVar14 & 0xfffffffffffffff8));
                uVar14 = uVar14 - 8;
                ppBVar11 = local_78;
                if (0x17 < uVar14) {
                  if (((BTBehavior **)((long)ppBVar16 + (uVar14 & 0xfffffffffffffff8) + 8) <=
                       local_80 + uVar12) ||
                     ((BTBehavior **)
                      ((long)local_80 + uVar12 * 8 + (uVar14 & 0xfffffffffffffff8) + 8) <= ppBVar16)
                     ) {
                    uVar14 = (uVar14 >> 3) + 1;
                    ppBVar11 = ppBVar16 + 2;
                    uVar15 = uVar14 & 0x3ffffffffffffffc;
                    ppBVar13 = local_80 + uVar12 + 2;
                    ppBVar16 = ppBVar16 + uVar15;
                    uVar12 = uVar15;
                    do {
                      ppBVar5 = ppBVar11 + -1;
                      pBVar17 = ppBVar11[-2];
                      pBVar19 = ppBVar11[1];
                      pBVar18 = *ppBVar11;
                      ppBVar11 = ppBVar11 + 4;
                      uVar12 = uVar12 - 4;
                      ppBVar13[-1] = *ppBVar5;
                      ppBVar13[-2] = pBVar17;
                      ppBVar13[1] = pBVar19;
                      *ppBVar13 = pBVar18;
                      ppBVar13 = ppBVar13 + 4;
                    } while (uVar12 != 0);
                    ppBVar11 = local_78 + uVar15;
                    if (uVar14 == uVar15) goto LAB_00712cd8;
                  }
                }
                do {
                  ppBVar13 = ppBVar11 + 1;
                  *ppBVar11 = *ppBVar16;
                  ppBVar11 = ppBVar13;
                  ppBVar16 = ppBVar16 + 1;
                } while (ppBVar13 != local_70);
              }
LAB_00712cd8:
              local_68 = local_80 + uVar7;
              if (ppBVar6 != (BTBehavior **)0x0) {
                operator_delete(ppBVar6);
              }
            }
            else {
              lVar8 = (long)local_78 - (long)local_80 >> 3;
              lVar1 = lVar8 + 2;
              if (-1 < lVar8 + 1) {
                lVar1 = lVar8 + 1;
              }
              __n = (long)local_70 - (long)local_78;
              ppBVar16 = local_78 + -(lVar1 >> 1);
              if (__n != 0) {
                memmove(ppBVar16,local_78,__n);
              }
              local_70 = (BTBehavior **)((long)ppBVar16 + __n);
              local_78 = local_78 + -(lVar1 >> 1);
            }
          }
          ppBVar16 = ppBVar9 + 1;
          *local_70 = *ppBVar9;
          local_70 = local_70 + 1;
          ppBVar9 = ppBVar16;
        } while (ppBVar16 != (BTBehavior **)in_x0[2]);
        ppBVar9 = (BTBehavior **)in_x0[1];
      }
      ppBVar6 = (BTBehavior **)*in_x0;
      *in_x0 = local_80;
      in_x0[1] = local_78;
      pvVar3 = in_x0[3];
      in_x0[2] = local_70;
      in_x0[3] = local_68;
      pvVar2 = (void *)0x100;
      if ((long)local_70 - (long)local_78 != 8) {
        pvVar2 = (void *)((long)in_x0[4] + 0x200);
      }
      in_x0[4] = pvVar2;
      local_70 = ppBVar16;
      if ((long)ppBVar16 - (long)ppBVar9 != 0) {
        local_70 = ppBVar16 + (((long)ppBVar16 - (long)ppBVar9) - 8U >> 3 ^ 0xffffffffffffffff);
      }
      local_80 = ppBVar6;
      local_78 = ppBVar9;
      local_68 = (BTBehavior **)pvVar3;
      if (ppBVar6 != (BTBehavior **)0x0) {
        operator_delete(ppBVar6);
      }
    }
  }
  else {
    in_x0[4] = (void *)((long)in_x0[4] + 0x200);
    ppvVar10 = (void **)((long)in_x0[2] + -8);
    local_80 = (BTBehavior **)*ppvVar10;
    in_x0[2] = ppvVar10;
    __split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>>::push_front
              ((__split_buffer<BTBehavior**,std::__ndk1::allocator<BTBehavior**>> *)in_x0,&local_80)
    ;
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


