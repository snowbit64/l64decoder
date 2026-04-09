// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_front_capacity
// Entry Point: 007469d4
// Size: 916 bytes
// Signature: undefined __add_front_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<VehicleNavigationAgent*, std::__ndk1::allocator<VehicleNavigationAgent*>
   >::__add_front_capacity() */

void std::__ndk1::deque<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>>::
     __add_front_capacity(void)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  long lVar4;
  VehicleNavigationAgent **ppVVar5;
  void **in_x0;
  VehicleNavigationAgent **ppVVar6;
  ulong uVar7;
  long lVar8;
  VehicleNavigationAgent **ppVVar9;
  void **ppvVar10;
  VehicleNavigationAgent **ppVVar11;
  ulong uVar12;
  VehicleNavigationAgent **ppVVar13;
  ulong uVar14;
  ulong uVar15;
  VehicleNavigationAgent **ppVVar16;
  VehicleNavigationAgent *pVVar17;
  VehicleNavigationAgent *pVVar18;
  VehicleNavigationAgent *pVVar19;
  VehicleNavigationAgent **local_88;
  VehicleNavigationAgent **local_80;
  VehicleNavigationAgent **local_78;
  VehicleNavigationAgent **local_70;
  VehicleNavigationAgent **local_68;
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
        local_80 = (VehicleNavigationAgent **)operator_new(0x1000);
        __split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>::
        push_back((__split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>
                   *)in_x0,&local_80);
        local_80 = *(VehicleNavigationAgent ***)(void **)((long)in_x0[2] + -8);
        in_x0[2] = (void **)((long)in_x0[2] + -8);
        __split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>::
        push_front((__split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>
                    *)in_x0,&local_80);
      }
      else {
        local_80 = (VehicleNavigationAgent **)operator_new(0x1000);
        __split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>::
        push_front((__split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>
                    *)in_x0,&local_80);
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
      local_80 = (VehicleNavigationAgent **)operator_new(uVar7 * 8);
      local_68 = local_80 + uVar7;
      local_78 = local_80;
      local_70 = local_80;
                    /* try { // try from 00746ab8 to 00746abf has its CatchHandler @ 00746d78 */
      local_88 = (VehicleNavigationAgent **)operator_new(0x1000);
                    /* try { // try from 00746ac8 to 00746ad3 has its CatchHandler @ 00746d68 */
      __split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>&>::
      push_back((__split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>&>
                 *)&local_80,&local_88);
      ppVVar9 = (VehicleNavigationAgent **)in_x0[1];
      ppVVar16 = ppVVar9;
      if (ppVVar9 != (VehicleNavigationAgent **)in_x0[2]) {
        do {
          ppVVar11 = local_70;
          ppVVar16 = local_78;
          ppVVar6 = local_80;
          if (local_70 == local_68) {
            if (local_78 < local_80 || (long)local_78 - (long)local_80 == 0) {
              uVar7 = (long)local_70 - (long)local_80 >> 2;
              if ((long)local_70 - (long)local_80 == 0) {
                uVar7 = 1;
              }
              if (uVar7 >> 0x3d != 0) {
                    /* try { // try from 00746d4c to 00746d57 has its CatchHandler @ 00746d7c */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00746b88 to 00746b8b has its CatchHandler @ 00746d80 */
              local_80 = (VehicleNavigationAgent **)operator_new(uVar7 << 3);
              uVar12 = uVar7 >> 2;
              uVar14 = (long)ppVVar11 - (long)ppVVar16;
              local_78 = local_80 + uVar12;
              local_70 = local_78;
              if (uVar14 != 0) {
                local_70 = (VehicleNavigationAgent **)
                           ((long)local_78 + (uVar14 & 0xfffffffffffffff8));
                uVar14 = uVar14 - 8;
                ppVVar11 = local_78;
                if (0x17 < uVar14) {
                  if (((VehicleNavigationAgent **)
                       ((long)ppVVar16 + (uVar14 & 0xfffffffffffffff8) + 8) <= local_80 + uVar12) ||
                     ((VehicleNavigationAgent **)
                      ((long)local_80 + uVar12 * 8 + (uVar14 & 0xfffffffffffffff8) + 8) <= ppVVar16)
                     ) {
                    uVar14 = (uVar14 >> 3) + 1;
                    ppVVar11 = ppVVar16 + 2;
                    uVar15 = uVar14 & 0x3ffffffffffffffc;
                    ppVVar13 = local_80 + uVar12 + 2;
                    ppVVar16 = ppVVar16 + uVar15;
                    uVar12 = uVar15;
                    do {
                      ppVVar5 = ppVVar11 + -1;
                      pVVar17 = ppVVar11[-2];
                      pVVar19 = ppVVar11[1];
                      pVVar18 = *ppVVar11;
                      ppVVar11 = ppVVar11 + 4;
                      uVar12 = uVar12 - 4;
                      ppVVar13[-1] = *ppVVar5;
                      ppVVar13[-2] = pVVar17;
                      ppVVar13[1] = pVVar19;
                      *ppVVar13 = pVVar18;
                      ppVVar13 = ppVVar13 + 4;
                    } while (uVar12 != 0);
                    ppVVar11 = local_78 + uVar15;
                    if (uVar14 == uVar15) goto LAB_00746c4c;
                  }
                }
                do {
                  ppVVar13 = ppVVar11 + 1;
                  *ppVVar11 = *ppVVar16;
                  ppVVar11 = ppVVar13;
                  ppVVar16 = ppVVar16 + 1;
                } while (ppVVar13 != local_70);
              }
LAB_00746c4c:
              local_68 = local_80 + uVar7;
              if (ppVVar6 != (VehicleNavigationAgent **)0x0) {
                operator_delete(ppVVar6);
              }
            }
            else {
              lVar8 = (long)local_78 - (long)local_80 >> 3;
              lVar1 = lVar8 + 2;
              if (-1 < lVar8 + 1) {
                lVar1 = lVar8 + 1;
              }
              __n = (long)local_70 - (long)local_78;
              ppVVar16 = local_78 + -(lVar1 >> 1);
              if (__n != 0) {
                memmove(ppVVar16,local_78,__n);
              }
              local_70 = (VehicleNavigationAgent **)((long)ppVVar16 + __n);
              local_78 = local_78 + -(lVar1 >> 1);
            }
          }
          ppVVar16 = ppVVar9 + 1;
          *local_70 = *ppVVar9;
          local_70 = local_70 + 1;
          ppVVar9 = ppVVar16;
        } while (ppVVar16 != (VehicleNavigationAgent **)in_x0[2]);
        ppVVar9 = (VehicleNavigationAgent **)in_x0[1];
      }
      ppVVar6 = (VehicleNavigationAgent **)*in_x0;
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
      local_70 = ppVVar16;
      if ((long)ppVVar16 - (long)ppVVar9 != 0) {
        local_70 = ppVVar16 + (((long)ppVVar16 - (long)ppVVar9) - 8U >> 3 ^ 0xffffffffffffffff);
      }
      local_80 = ppVVar6;
      local_78 = ppVVar9;
      local_68 = (VehicleNavigationAgent **)pvVar3;
      if (ppVVar6 != (VehicleNavigationAgent **)0x0) {
        operator_delete(ppVVar6);
      }
    }
  }
  else {
    in_x0[4] = (void *)((long)in_x0[4] + 0x200);
    ppvVar10 = (void **)((long)in_x0[2] + -8);
    local_80 = (VehicleNavigationAgent **)*ppvVar10;
    in_x0[2] = ppvVar10;
    __split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>::
    push_front((__split_buffer<VehicleNavigationAgent**,std::__ndk1::allocator<VehicleNavigationAgent**>>
                *)in_x0,&local_80);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


