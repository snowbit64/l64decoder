// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00d0f274
// Size: 1136 bytes
// Signature: undefined __thiscall __add_back_capacity(deque<unsigned_int,std::__ndk1::allocator<unsigned_int>> * this, ulong param_1)


/* std::__ndk1::deque<unsigned int, std::__ndk1::allocator<unsigned int>
   >::__add_back_capacity(unsigned long) */

void __thiscall
std::__ndk1::deque<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__add_back_capacity
          (deque<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this,ulong param_1)

{
  void **ppvVar1;
  uint **ppuVar2;
  size_t __n;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint **ppuVar14;
  long lVar15;
  undefined8 *puVar16;
  uint **ppuVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint *local_98;
  undefined8 *local_90;
  uint **local_88;
  uint **ppuStack_80;
  undefined8 *local_78;
  deque<unsigned_int,std::__ndk1::allocator<unsigned_int>> *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ppvVar1 = *(void ***)(this + 8);
  lVar15 = *(long *)(this + 0x10) - (long)ppvVar1;
  if (lVar15 == 0) {
    param_1 = param_1 + 1;
  }
  uVar12 = param_1 >> 10;
  if ((param_1 & 0x3ff) != 0) {
    uVar12 = uVar12 + 1;
  }
  uVar13 = *(ulong *)(this + 0x20) >> 10;
  uVar18 = uVar12;
  if (uVar13 <= uVar12) {
    uVar18 = uVar13;
  }
  uVar12 = uVar12 - uVar18;
  if (uVar12 == 0) {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) + uVar18 * -0x400;
    if (uVar18 != 0) {
      local_90 = (undefined8 *)*ppvVar1;
      *(void ***)(this + 8) = ppvVar1 + 1;
      FUN_00d0f76c(this,&local_90);
      if (uVar18 != 1) {
        lVar15 = -uVar18;
        do {
          lVar15 = lVar15 + 1;
          local_90 = (undefined8 *)**(void ***)(this + 8);
          *(void ***)(this + 8) = *(void ***)(this + 8) + 1;
          FUN_00d0f76c(this,&local_90);
        } while (lVar15 != -1);
      }
    }
  }
  else {
    lVar15 = lVar15 >> 3;
    lVar10 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)((lVar10 >> 3) - lVar15) < uVar12) {
      uVar6 = lVar10 >> 2;
      uVar13 = uVar12 + lVar15;
      if (uVar12 + lVar15 <= uVar6) {
        uVar13 = uVar6;
      }
      local_70 = this + 0x18;
      if (uVar13 == 0) {
        local_90 = (undefined8 *)0x0;
      }
      else {
        if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        local_90 = (undefined8 *)operator_new(uVar13 << 3);
      }
      local_78 = local_90 + uVar13;
      lVar10 = uVar18 * -0x400;
      local_88 = (uint **)(local_90 + (lVar15 - uVar18));
      ppuStack_80 = local_88;
      do {
                    /* try { // try from 00d0f428 to 00d0f43f has its CatchHandler @ 00d0f6f4 */
        local_98 = (uint *)operator_new(0x1000);
        __split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&>::push_back
                  ((__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&> *)&local_90
                   ,&local_98);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (uVar18 != 0) {
        puVar19 = *(undefined8 **)(this + 8);
        do {
          puVar8 = ppuStack_80;
          puVar16 = local_88;
          puVar5 = local_90;
          if (ppuStack_80 == (uint **)local_78) {
            if (local_88 < local_90 || (long)local_88 - (long)local_90 == 0) {
              uVar12 = (long)ppuStack_80 - (long)local_90 >> 2;
              if ((long)ppuStack_80 - (long)local_90 == 0) {
                uVar12 = 1;
              }
              if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 00d0f6c8 to 00d0f6d3 has its CatchHandler @ 00d0f6e4 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00d0f4fc to 00d0f4ff has its CatchHandler @ 00d0f6e8 */
              local_90 = (undefined8 *)operator_new(uVar12 << 3);
              uVar6 = uVar12 >> 2;
              uVar13 = (long)puVar8 - (long)puVar16;
              local_88 = (uint **)(local_90 + uVar6);
              ppuStack_80 = local_88;
              if (uVar13 != 0) {
                ppuStack_80 = (uint **)((long)local_88 + (uVar13 & 0xfffffffffffffff8));
                uVar13 = uVar13 - 8;
                puVar8 = local_88;
                if (0x17 < uVar13) {
                  if (((undefined8 *)((long)puVar16 + (uVar13 & 0xfffffffffffffff8) + 8) <=
                       local_90 + uVar6) ||
                     ((undefined8 *)((long)local_90 + uVar6 * 8 + (uVar13 & 0xfffffffffffffff8) + 8)
                      <= puVar16)) {
                    uVar13 = (uVar13 >> 3) + 1;
                    puVar8 = puVar16 + 2;
                    uVar11 = uVar13 & 0x3ffffffffffffffc;
                    puVar9 = local_90 + uVar6 + 2;
                    puVar16 = puVar16 + uVar11;
                    uVar6 = uVar11;
                    do {
                      puVar4 = puVar8 + -1;
                      uVar20 = puVar8[-2];
                      uVar22 = puVar8[1];
                      uVar21 = *puVar8;
                      puVar8 = puVar8 + 4;
                      uVar6 = uVar6 - 4;
                      puVar9[-1] = *puVar4;
                      puVar9[-2] = uVar20;
                      puVar9[1] = uVar22;
                      *puVar9 = uVar21;
                      puVar9 = puVar9 + 4;
                    } while (uVar6 != 0);
                    puVar8 = local_88 + uVar11;
                    if (uVar13 == uVar11) goto LAB_00d0f5c0;
                  }
                }
                do {
                  puVar9 = puVar8 + 1;
                  *puVar8 = *puVar16;
                  puVar8 = puVar9;
                  puVar16 = puVar16 + 1;
                } while ((uint **)puVar9 != ppuStack_80);
              }
LAB_00d0f5c0:
              local_78 = local_90 + uVar12;
              if (puVar5 != (undefined8 *)0x0) {
                operator_delete(puVar5);
              }
            }
            else {
              lVar7 = (long)local_88 - (long)local_90 >> 3;
              lVar15 = lVar7 + 2;
              if (-1 < lVar7 + 1) {
                lVar15 = lVar7 + 1;
              }
              __n = (long)ppuStack_80 - (long)local_88;
              puVar16 = local_88 + -(lVar15 >> 1);
              if (__n != 0) {
                memmove(puVar16,local_88,__n);
              }
              ppuStack_80 = (uint **)((long)puVar16 + __n);
              local_88 = local_88 + -(lVar15 >> 1);
            }
          }
          uVar18 = uVar18 - 1;
          *ppuStack_80 = (uint *)*puVar19;
          ppuStack_80 = ppuStack_80 + 1;
          puVar19 = (undefined8 *)(*(long *)(this + 8) + 8);
          *(undefined8 **)(this + 8) = puVar19;
        } while (uVar18 != 0);
      }
      ppuVar14 = *(uint ***)(this + 0x10);
      ppuVar17 = ppuVar14 + 1;
      while (ppuVar14 != *(uint ***)(this + 8)) {
        ppuVar14 = ppuVar14 + -1;
        ppuVar17 = ppuVar17 + -1;
                    /* try { // try from 00d0f5fc to 00d0f607 has its CatchHandler @ 00d0f6ec */
        __split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&>::push_front
                  ((__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&> *)&local_90
                   ,ppuVar14);
      }
      puVar19 = *(undefined8 **)this;
      *(undefined8 **)this = local_90;
      ppuVar2 = *(uint ***)(this + 0x10);
      uVar20 = *(undefined8 *)(this + 0x18);
      *(uint ***)(this + 0x10) = ppuStack_80;
      *(uint ***)(this + 8) = local_88;
      *(undefined8 **)(this + 0x18) = local_78;
      *(long *)(this + 0x20) = *(long *)(this + 0x20) + lVar10;
      ppuStack_80 = ppuVar2;
      if (ppuVar14 != ppuVar2) {
        ppuStack_80 = ppuVar2 + ((ulong)((long)ppuVar2 - (long)ppuVar17) >> 3 ^ 0xffffffffffffffff);
      }
      local_90 = puVar19;
      local_88 = ppuVar14;
      local_78 = (undefined8 *)uVar20;
      if (puVar19 != (undefined8 *)0x0) {
        operator_delete(puVar19);
      }
    }
    else {
      uVar13 = uVar12;
      if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
        do {
          local_90 = (undefined8 *)operator_new(0x1000);
          __split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::push_back
                    ((__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)this,
                     (uint **)&local_90);
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            *(ulong *)(this + 0x20) = *(long *)(this + 0x20) + uVar18 * -0x400;
            goto joined_r0x00d0f404;
          }
          uVar13 = uVar12;
        } while (*(long *)(this + 0x18) != *(long *)(this + 0x10));
      }
      do {
        local_90 = (undefined8 *)operator_new(0x1000);
        __split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::push_front
                  ((__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)this,
                   (uint **)&local_90);
        uVar12 = uVar12 - 1;
        lVar10 = *(long *)(this + 0x20);
        lVar15 = 0x3ff;
        if (*(long *)(this + 0x10) - *(long *)(this + 8) != 8) {
          lVar15 = 0x400;
        }
        *(long *)(this + 0x20) = lVar15 + lVar10;
      } while (uVar12 != 0);
      uVar18 = uVar13 + uVar18;
      *(ulong *)(this + 0x20) = lVar15 + lVar10 + uVar18 * -0x400;
joined_r0x00d0f404:
      for (; uVar18 != 0; uVar18 = uVar18 - 1) {
        local_90 = (undefined8 *)**(void ***)(this + 8);
        *(void ***)(this + 8) = *(void ***)(this + 8) + 1;
        FUN_00d0f76c(this,&local_90);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


