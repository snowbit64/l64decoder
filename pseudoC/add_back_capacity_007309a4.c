// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 007309a4
// Size: 1124 bytes
// Signature: undefined __thiscall __add_back_capacity(deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>> * this, ulong param_1)


/* std::__ndk1::deque<std::__ndk1::pair<unsigned short, unsigned short>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned short, unsigned short> >
   >::__add_back_capacity(unsigned long) */

void __thiscall
std::__ndk1::
deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
::__add_back_capacity
          (deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
           *this,ulong param_1)

{
  void **ppvVar1;
  pair **pppVar2;
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
  pair **pppVar14;
  long lVar15;
  undefined8 *puVar16;
  pair **pppVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  pair *local_98;
  undefined8 *local_90;
  pair **local_88;
  pair **pppStack_80;
  undefined8 *local_78;
  deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
  *local_70;
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
      FUN_0072fea4(this,&local_90);
      if (uVar18 != 1) {
        lVar15 = -uVar18;
        do {
          lVar15 = lVar15 + 1;
          local_90 = (undefined8 *)**(void ***)(this + 8);
          *(void ***)(this + 8) = *(void ***)(this + 8) + 1;
          FUN_0072fea4(this,&local_90);
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
      local_88 = (pair **)(local_90 + (lVar15 - uVar18));
      pppStack_80 = local_88;
      do {
                    /* try { // try from 00730b4c to 00730b63 has its CatchHandler @ 00730e18 */
        local_98 = (pair *)operator_new(0x1000);
        __split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>&>
        ::push_back((__split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>&>
                     *)&local_90,&local_98);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (uVar18 != 0) {
        puVar19 = *(undefined8 **)(this + 8);
        do {
          puVar8 = pppStack_80;
          puVar16 = local_88;
          puVar5 = local_90;
          if (pppStack_80 == (pair **)local_78) {
            if (local_88 < local_90 || (long)local_88 - (long)local_90 == 0) {
              uVar12 = (long)pppStack_80 - (long)local_90 >> 2;
              if ((long)pppStack_80 - (long)local_90 == 0) {
                uVar12 = 1;
              }
              if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 00730dec to 00730df7 has its CatchHandler @ 00730e08 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00730c20 to 00730c23 has its CatchHandler @ 00730e0c */
              local_90 = (undefined8 *)operator_new(uVar12 << 3);
              uVar6 = uVar12 >> 2;
              uVar13 = (long)puVar8 - (long)puVar16;
              local_88 = (pair **)(local_90 + uVar6);
              pppStack_80 = local_88;
              if (uVar13 != 0) {
                pppStack_80 = (pair **)((long)local_88 + (uVar13 & 0xfffffffffffffff8));
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
                    if (uVar13 == uVar11) goto LAB_00730ce4;
                  }
                }
                do {
                  puVar9 = puVar8 + 1;
                  *puVar8 = *puVar16;
                  puVar8 = puVar9;
                  puVar16 = puVar16 + 1;
                } while ((pair **)puVar9 != pppStack_80);
              }
LAB_00730ce4:
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
              __n = (long)pppStack_80 - (long)local_88;
              puVar16 = local_88 + -(lVar15 >> 1);
              if (__n != 0) {
                memmove(puVar16,local_88,__n);
              }
              pppStack_80 = (pair **)((long)puVar16 + __n);
              local_88 = local_88 + -(lVar15 >> 1);
            }
          }
          uVar18 = uVar18 - 1;
          *pppStack_80 = (pair *)*puVar19;
          pppStack_80 = pppStack_80 + 1;
          puVar19 = (undefined8 *)(*(long *)(this + 8) + 8);
          *(undefined8 **)(this + 8) = puVar19;
        } while (uVar18 != 0);
      }
      pppVar14 = *(pair ***)(this + 0x10);
      pppVar17 = pppVar14 + 1;
      while (pppVar14 != *(pair ***)(this + 8)) {
        pppVar14 = pppVar14 + -1;
        pppVar17 = pppVar17 + -1;
                    /* try { // try from 00730d20 to 00730d2b has its CatchHandler @ 00730e10 */
        __split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>&>
        ::push_front((__split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>&>
                      *)&local_90,pppVar14);
      }
      puVar19 = *(undefined8 **)this;
      *(undefined8 **)this = local_90;
      pppVar2 = *(pair ***)(this + 0x10);
      uVar20 = *(undefined8 *)(this + 0x18);
      *(pair ***)(this + 0x10) = pppStack_80;
      *(pair ***)(this + 8) = local_88;
      *(undefined8 **)(this + 0x18) = local_78;
      *(long *)(this + 0x20) = *(long *)(this + 0x20) + lVar10;
      pppStack_80 = pppVar2;
      if (pppVar14 != pppVar2) {
        pppStack_80 = pppVar2 + ((ulong)((long)pppVar2 - (long)pppVar17) >> 3 ^ 0xffffffffffffffff);
      }
      local_90 = puVar19;
      local_88 = pppVar14;
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
          __split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>>
          ::push_back((__split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>>
                       *)this,(pair **)&local_90);
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            lVar15 = *(long *)(this + 0x20);
            goto LAB_00730d8c;
          }
          uVar13 = uVar12;
        } while (*(long *)(this + 0x18) != *(long *)(this + 0x10));
      }
      do {
        local_90 = (undefined8 *)operator_new(0x1000);
        __split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>>
        ::push_front((__split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>>
                      *)this,(pair **)&local_90);
        uVar12 = uVar12 - 1;
        lVar15 = 0x3ff;
        if (*(long *)(this + 0x10) - *(long *)(this + 8) != 8) {
          lVar15 = 0x400;
        }
        lVar15 = lVar15 + *(long *)(this + 0x20);
        *(long *)(this + 0x20) = lVar15;
      } while (uVar12 != 0);
      uVar18 = uVar13 + uVar18;
LAB_00730d8c:
      *(ulong *)(this + 0x20) = lVar15 + uVar18 * -0x400;
      for (; uVar18 != 0; uVar18 = uVar18 - 1) {
        local_90 = (undefined8 *)**(void ***)(this + 8);
        *(void ***)(this + 8) = *(void ***)(this + 8) + 1;
        FUN_0072fea4(this,&local_90);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


