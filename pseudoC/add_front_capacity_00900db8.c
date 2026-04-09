// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_front_capacity
// Entry Point: 00900db8
// Size: 916 bytes
// Signature: undefined __add_front_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<TransformGroup*, std::__ndk1::allocator<TransformGroup*>
   >::__add_front_capacity() */

void std::__ndk1::deque<TransformGroup*,std::__ndk1::allocator<TransformGroup*>>::
     __add_front_capacity(void)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  long lVar4;
  TransformGroup **ppTVar5;
  void **in_x0;
  TransformGroup **ppTVar6;
  ulong uVar7;
  long lVar8;
  TransformGroup **ppTVar9;
  void **ppvVar10;
  TransformGroup **ppTVar11;
  ulong uVar12;
  TransformGroup **ppTVar13;
  ulong uVar14;
  ulong uVar15;
  TransformGroup **ppTVar16;
  TransformGroup *pTVar17;
  TransformGroup *pTVar18;
  TransformGroup *pTVar19;
  TransformGroup **local_88;
  TransformGroup **local_80;
  TransformGroup **local_78;
  TransformGroup **local_70;
  TransformGroup **local_68;
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
        local_80 = (TransformGroup **)operator_new(0x1000);
        __split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>>::push_back
                  ((__split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>> *)
                   in_x0,&local_80);
        local_80 = *(TransformGroup ***)(void **)((long)in_x0[2] + -8);
        in_x0[2] = (void **)((long)in_x0[2] + -8);
        __split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>>::push_front
                  ((__split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>> *)
                   in_x0,&local_80);
      }
      else {
        local_80 = (TransformGroup **)operator_new(0x1000);
        __split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>>::push_front
                  ((__split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>> *)
                   in_x0,&local_80);
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
      local_80 = (TransformGroup **)operator_new(uVar7 * 8);
      local_68 = local_80 + uVar7;
      local_78 = local_80;
      local_70 = local_80;
                    /* try { // try from 00900e9c to 00900ea3 has its CatchHandler @ 0090115c */
      local_88 = (TransformGroup **)operator_new(0x1000);
                    /* try { // try from 00900eac to 00900eb7 has its CatchHandler @ 0090114c */
      __split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>&>::push_back
                ((__split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>&> *)
                 &local_80,&local_88);
      ppTVar9 = (TransformGroup **)in_x0[1];
      ppTVar16 = ppTVar9;
      if (ppTVar9 != (TransformGroup **)in_x0[2]) {
        do {
          ppTVar11 = local_70;
          ppTVar16 = local_78;
          ppTVar6 = local_80;
          if (local_70 == local_68) {
            if (local_78 < local_80 || (long)local_78 - (long)local_80 == 0) {
              uVar7 = (long)local_70 - (long)local_80 >> 2;
              if ((long)local_70 - (long)local_80 == 0) {
                uVar7 = 1;
              }
              if (uVar7 >> 0x3d != 0) {
                    /* try { // try from 00901130 to 0090113b has its CatchHandler @ 00901160 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00900f6c to 00900f6f has its CatchHandler @ 00901164 */
              local_80 = (TransformGroup **)operator_new(uVar7 << 3);
              uVar12 = uVar7 >> 2;
              uVar14 = (long)ppTVar11 - (long)ppTVar16;
              local_78 = local_80 + uVar12;
              local_70 = local_78;
              if (uVar14 != 0) {
                local_70 = (TransformGroup **)((long)local_78 + (uVar14 & 0xfffffffffffffff8));
                uVar14 = uVar14 - 8;
                ppTVar11 = local_78;
                if (0x17 < uVar14) {
                  if (((TransformGroup **)((long)ppTVar16 + (uVar14 & 0xfffffffffffffff8) + 8) <=
                       local_80 + uVar12) ||
                     ((TransformGroup **)
                      ((long)local_80 + uVar12 * 8 + (uVar14 & 0xfffffffffffffff8) + 8) <= ppTVar16)
                     ) {
                    uVar14 = (uVar14 >> 3) + 1;
                    ppTVar11 = ppTVar16 + 2;
                    uVar15 = uVar14 & 0x3ffffffffffffffc;
                    ppTVar13 = local_80 + uVar12 + 2;
                    ppTVar16 = ppTVar16 + uVar15;
                    uVar12 = uVar15;
                    do {
                      ppTVar5 = ppTVar11 + -1;
                      pTVar17 = ppTVar11[-2];
                      pTVar19 = ppTVar11[1];
                      pTVar18 = *ppTVar11;
                      ppTVar11 = ppTVar11 + 4;
                      uVar12 = uVar12 - 4;
                      ppTVar13[-1] = *ppTVar5;
                      ppTVar13[-2] = pTVar17;
                      ppTVar13[1] = pTVar19;
                      *ppTVar13 = pTVar18;
                      ppTVar13 = ppTVar13 + 4;
                    } while (uVar12 != 0);
                    ppTVar11 = local_78 + uVar15;
                    if (uVar14 == uVar15) goto LAB_00901030;
                  }
                }
                do {
                  ppTVar13 = ppTVar11 + 1;
                  *ppTVar11 = *ppTVar16;
                  ppTVar11 = ppTVar13;
                  ppTVar16 = ppTVar16 + 1;
                } while (ppTVar13 != local_70);
              }
LAB_00901030:
              local_68 = local_80 + uVar7;
              if (ppTVar6 != (TransformGroup **)0x0) {
                operator_delete(ppTVar6);
              }
            }
            else {
              lVar8 = (long)local_78 - (long)local_80 >> 3;
              lVar1 = lVar8 + 2;
              if (-1 < lVar8 + 1) {
                lVar1 = lVar8 + 1;
              }
              __n = (long)local_70 - (long)local_78;
              ppTVar16 = local_78 + -(lVar1 >> 1);
              if (__n != 0) {
                memmove(ppTVar16,local_78,__n);
              }
              local_70 = (TransformGroup **)((long)ppTVar16 + __n);
              local_78 = local_78 + -(lVar1 >> 1);
            }
          }
          ppTVar16 = ppTVar9 + 1;
          *local_70 = *ppTVar9;
          local_70 = local_70 + 1;
          ppTVar9 = ppTVar16;
        } while (ppTVar16 != (TransformGroup **)in_x0[2]);
        ppTVar9 = (TransformGroup **)in_x0[1];
      }
      ppTVar6 = (TransformGroup **)*in_x0;
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
      local_70 = ppTVar16;
      if ((long)ppTVar16 - (long)ppTVar9 != 0) {
        local_70 = ppTVar16 + (((long)ppTVar16 - (long)ppTVar9) - 8U >> 3 ^ 0xffffffffffffffff);
      }
      local_80 = ppTVar6;
      local_78 = ppTVar9;
      local_68 = (TransformGroup **)pvVar3;
      if (ppTVar6 != (TransformGroup **)0x0) {
        operator_delete(ppTVar6);
      }
    }
  }
  else {
    in_x0[4] = (void *)((long)in_x0[4] + 0x200);
    ppvVar10 = (void **)((long)in_x0[2] + -8);
    local_80 = (TransformGroup **)*ppvVar10;
    in_x0[2] = ppvVar10;
    __split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>>::push_front
              ((__split_buffer<TransformGroup**,std::__ndk1::allocator<TransformGroup**>> *)in_x0,
               &local_80);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


