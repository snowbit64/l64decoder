// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00d0eba4
// Size: 1136 bytes
// Signature: undefined __thiscall __add_back_capacity(deque<unsigned_long,std::__ndk1::allocator<unsigned_long>> * this, ulong param_1)


/* std::__ndk1::deque<unsigned long, std::__ndk1::allocator<unsigned long>
   >::__add_back_capacity(unsigned long) */

void __thiscall
std::__ndk1::deque<unsigned_long,std::__ndk1::allocator<unsigned_long>>::__add_back_capacity
          (deque<unsigned_long,std::__ndk1::allocator<unsigned_long>> *this,ulong param_1)

{
  ulong **ppuVar1;
  undefined8 uVar2;
  size_t __n;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong **ppuVar14;
  long lVar15;
  ulong *puVar16;
  ulong **ppuVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *local_98;
  ulong *local_90;
  ulong **local_88;
  ulong **ppuStack_80;
  ulong *local_78;
  deque<unsigned_long,std::__ndk1::allocator<unsigned_long>> *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ppuVar17 = *(ulong ***)(this + 8);
  lVar15 = *(long *)(this + 0x10) - (long)ppuVar17;
  if (lVar15 == 0) {
    param_1 = param_1 + 1;
  }
  uVar12 = param_1 >> 9;
  if ((param_1 & 0x1ff) != 0) {
    uVar12 = uVar12 + 1;
  }
  uVar13 = *(ulong *)(this + 0x20) >> 9;
  uVar18 = uVar12;
  if (uVar13 <= uVar12) {
    uVar18 = uVar13;
  }
  uVar12 = uVar12 - uVar18;
  if (uVar12 == 0) {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) + uVar18 * -0x200;
    if (uVar18 != 0) {
      local_90 = *ppuVar17;
      *(ulong ***)(this + 8) = ppuVar17 + 1;
      FUN_00d0dd84(this,&local_90);
      if (uVar18 != 1) {
        lVar15 = -uVar18;
        do {
          lVar15 = lVar15 + 1;
          local_90 = **(ulong ***)(this + 8);
          *(ulong ***)(this + 8) = *(ulong ***)(this + 8) + 1;
          FUN_00d0dd84(this,&local_90);
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
        local_90 = (ulong *)0x0;
      }
      else {
        if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        local_90 = (ulong *)operator_new(uVar13 << 3);
      }
      local_78 = local_90 + uVar13;
      lVar10 = uVar18 * -0x200;
      local_88 = (ulong **)(local_90 + (lVar15 - uVar18));
      ppuStack_80 = local_88;
      do {
                    /* try { // try from 00d0ed58 to 00d0ed6f has its CatchHandler @ 00d0f024 */
        local_98 = (ulong *)operator_new(0x1000);
        __split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>&>::push_back
                  ((__split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>&> *)
                   &local_90,&local_98);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (uVar18 != 0) {
        puVar19 = *(ulong **)(this + 8);
        do {
          puVar8 = (ulong *)ppuStack_80;
          puVar16 = (ulong *)local_88;
          puVar5 = local_90;
          if (ppuStack_80 == (ulong **)local_78) {
            if (local_88 < local_90 || (long)local_88 - (long)local_90 == 0) {
              uVar12 = (long)ppuStack_80 - (long)local_90 >> 2;
              if ((long)ppuStack_80 - (long)local_90 == 0) {
                uVar12 = 1;
              }
              if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 00d0eff8 to 00d0f003 has its CatchHandler @ 00d0f014 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00d0ee2c to 00d0ee2f has its CatchHandler @ 00d0f018 */
              local_90 = (ulong *)operator_new(uVar12 << 3);
              uVar6 = uVar12 >> 2;
              uVar13 = (long)puVar8 - (long)puVar16;
              local_88 = (ulong **)(local_90 + uVar6);
              ppuStack_80 = local_88;
              if (uVar13 != 0) {
                ppuStack_80 = (ulong **)((long)local_88 + (uVar13 & 0xfffffffffffffff8));
                uVar13 = uVar13 - 8;
                puVar8 = (ulong *)local_88;
                if (0x17 < uVar13) {
                  if (((ulong *)((long)puVar16 + (uVar13 & 0xfffffffffffffff8) + 8) <=
                       local_90 + uVar6) ||
                     ((ulong *)((long)local_90 + uVar6 * 8 + (uVar13 & 0xfffffffffffffff8) + 8) <=
                      puVar16)) {
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
                    puVar8 = (ulong *)(local_88 + uVar11);
                    if (uVar13 == uVar11) goto LAB_00d0eef0;
                  }
                }
                do {
                  puVar9 = puVar8 + 1;
                  *puVar8 = *puVar16;
                  puVar8 = puVar9;
                  puVar16 = puVar16 + 1;
                } while ((ulong **)puVar9 != ppuStack_80);
              }
LAB_00d0eef0:
              local_78 = local_90 + uVar12;
              if (puVar5 != (ulong *)0x0) {
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
              puVar16 = (ulong *)(local_88 + -(lVar15 >> 1));
              if (__n != 0) {
                memmove(puVar16,local_88,__n);
              }
              ppuStack_80 = (ulong **)((long)puVar16 + __n);
              local_88 = local_88 + -(lVar15 >> 1);
            }
          }
          uVar18 = uVar18 - 1;
          *ppuStack_80 = (ulong *)*puVar19;
          ppuStack_80 = ppuStack_80 + 1;
          puVar19 = (ulong *)(*(long *)(this + 8) + 8);
          *(ulong **)(this + 8) = puVar19;
        } while (uVar18 != 0);
      }
      ppuVar14 = *(ulong ***)(this + 0x10);
      ppuVar17 = ppuVar14 + 1;
      while (ppuVar14 != *(ulong ***)(this + 8)) {
        ppuVar14 = ppuVar14 + -1;
        ppuVar17 = ppuVar17 + -1;
                    /* try { // try from 00d0ef2c to 00d0ef37 has its CatchHandler @ 00d0f01c */
        __split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>&>::push_front
                  ((__split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>&> *)
                   &local_90,ppuVar14);
      }
      puVar19 = *(ulong **)this;
      *(ulong **)this = local_90;
      ppuVar1 = *(ulong ***)(this + 0x10);
      uVar2 = *(undefined8 *)(this + 0x18);
      *(ulong ***)(this + 0x10) = ppuStack_80;
      *(ulong ***)(this + 8) = local_88;
      *(ulong **)(this + 0x18) = local_78;
      *(long *)(this + 0x20) = *(long *)(this + 0x20) + lVar10;
      ppuStack_80 = ppuVar1;
      if (ppuVar14 != ppuVar1) {
        ppuStack_80 = ppuVar1 + ((ulong)((long)ppuVar1 - (long)ppuVar17) >> 3 ^ 0xffffffffffffffff);
      }
      local_90 = puVar19;
      local_88 = ppuVar14;
      local_78 = (ulong *)uVar2;
      if (puVar19 != (ulong *)0x0) {
        operator_delete(puVar19);
      }
    }
    else {
      uVar13 = uVar12;
      if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
        do {
          local_90 = (ulong *)operator_new(0x1000);
          __split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>>::push_back
                    ((__split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>> *)this,
                     &local_90);
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            *(ulong *)(this + 0x20) = *(long *)(this + 0x20) + uVar18 * -0x200;
            goto joined_r0x00d0ed34;
          }
          uVar13 = uVar12;
        } while (*(long *)(this + 0x18) != *(long *)(this + 0x10));
      }
      do {
        local_90 = (ulong *)operator_new(0x1000);
        __split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>>::push_front
                  ((__split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>> *)this,
                   &local_90);
        uVar12 = uVar12 - 1;
        lVar10 = *(long *)(this + 0x20);
        lVar15 = 0x1ff;
        if (*(long *)(this + 0x10) - *(long *)(this + 8) != 8) {
          lVar15 = 0x200;
        }
        *(long *)(this + 0x20) = lVar15 + lVar10;
      } while (uVar12 != 0);
      uVar18 = uVar13 + uVar18;
      *(ulong *)(this + 0x20) = lVar15 + lVar10 + uVar18 * -0x200;
joined_r0x00d0ed34:
      for (; uVar18 != 0; uVar18 = uVar18 - 1) {
        local_90 = **(ulong ***)(this + 8);
        *(ulong ***)(this + 8) = *(ulong ***)(this + 8) + 1;
        FUN_00d0dd84(this,&local_90);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


