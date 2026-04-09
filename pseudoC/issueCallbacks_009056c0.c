// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueCallbacks
// Entry Point: 009056c0
// Size: 1152 bytes
// Signature: undefined __thiscall issueCallbacks(I3DManager * this, float param_1, uint param_2)


/* I3DManager::issueCallbacks(float, unsigned int) */

void __thiscall I3DManager::issueCallbacks(I3DManager *this,float param_1,uint param_2)

{
  long **pplVar1;
  uint uVar2;
  long lVar3;
  void *__dest;
  uint **ppuVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint **ppuVar8;
  uint **ppuVar9;
  uint *puVar10;
  void *__src;
  size_t __n;
  ulong __n_00;
  long **pplVar11;
  long **pplVar12;
  ulong uVar13;
  long **pplVar14;
  long lVar15;
  uint **ppuVar16;
  uint **local_90;
  uint **local_88;
  uint **local_80;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  ppuVar8 = *(uint ***)this;
  local_90 = (uint **)0x0;
  local_88 = (uint **)0x0;
  puVar7 = (undefined8 *)(this + 8);
  ppuVar16 = (uint **)*puVar7;
  local_80 = (uint **)0x0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *puVar7 = 0;
  if (ppuVar8 != ppuVar16) {
    pplVar1 = (long **)(this + 0x20);
    ppuVar9 = ppuVar8;
    do {
      puVar10 = *ppuVar9;
      if (*(char *)(puVar10 + 0xc) == '\0') {
        puVar10[0xe] = (uint)((float)puVar10[0xe] + param_1);
        ppuVar4 = *(uint ***)(this + 8);
        if (ppuVar4 == *(uint ***)(this + 0x10)) {
          __src = *(void **)this;
          __n = (long)ppuVar4 - (long)__src;
          lVar15 = (long)__n >> 3;
          uVar13 = lVar15 + 1;
          if (uVar13 >> 0x3d != 0) {
                    /* try { // try from 00905b00 to 00905b3b has its CatchHandler @ 00905b48 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar13 <= (ulong)((long)__n >> 2)) {
            uVar13 = (long)__n >> 2;
          }
          if (0x7ffffffffffffff7 < __n) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 == 0) {
LAB_0090590c:
            __dest = (void *)0x0;
          }
          else {
            if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00905878 to 0090587b has its CatchHandler @ 00905b44 */
            __dest = operator_new(uVar13 << 3);
          }
          goto LAB_00905910;
        }
LAB_00905750:
        *ppuVar4 = puVar10;
        *puVar7 = ppuVar4 + 1;
      }
      else if ((float)puVar10[0xd] <= param_1 && param_2 != 0) {
        if (puVar10[0xf] == 0) {
          lVar15 = *(long *)(puVar10 + 2);
          if (lVar15 != 0) {
            uVar2 = *puVar10;
            pplVar12 = (long **)*pplVar1;
            pplVar11 = pplVar1;
            pplVar14 = pplVar1;
            while (pplVar12 != (long **)0x0) {
              while (pplVar14 = pplVar12, uVar2 < *(uint *)(pplVar14 + 4)) {
                pplVar11 = pplVar14;
                pplVar12 = (long **)*pplVar14;
                if ((long **)*pplVar14 == (long **)0x0) {
                  plVar6 = *pplVar14;
                  goto joined_r0x00905a4c;
                }
              }
              if (uVar2 <= *(uint *)(pplVar14 + 4)) break;
              pplVar11 = pplVar14 + 1;
              pplVar12 = (long **)*pplVar11;
            }
            plVar6 = *pplVar11;
joined_r0x00905a4c:
            if (plVar6 == (long *)0x0) {
                    /* try { // try from 009059b0 to 009059bb has its CatchHandler @ 00905b40 */
              plVar6 = (long *)operator_new(0x30);
              *(uint *)(plVar6 + 4) = uVar2;
              plVar6[5] = lVar15;
              *plVar6 = 0;
              plVar6[1] = 0;
              plVar6[2] = (long)pplVar14;
              *pplVar11 = plVar6;
              if (**(long **)(this + 0x18) != 0) {
                *(long *)(this + 0x18) = **(long **)(this + 0x18);
                plVar6 = *pplVar11;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (*(__tree_node_base **)(this + 0x20),(__tree_node_base *)plVar6);
              *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
            }
          }
        }
        else {
          if (*(long **)(puVar10 + 10) != (long *)0x0) {
            (**(code **)(**(long **)(puVar10 + 10) + 8))();
          }
          *(undefined8 *)(puVar10 + 10) = 0;
        }
        if (*(long *)(puVar10 + 8) == 0) {
          if (*(long **)(puVar10 + 10) != (long *)0x0) {
            (**(code **)(**(long **)(puVar10 + 10) + 8))();
            if (*(long **)(puVar10 + 8) != (long *)0x0) {
              (**(code **)(**(long **)(puVar10 + 8) + 8))();
            }
          }
          operator_delete(puVar10);
        }
        else if (local_88 == local_80) {
          __n_00 = (long)local_88 - (long)local_90;
          uVar13 = ((long)__n_00 >> 3) + 1;
          if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar13 <= (ulong)((long)__n_00 >> 2)) {
            uVar13 = (long)__n_00 >> 2;
          }
          if (0x7ffffffffffffff7 < __n_00) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 == 0) {
            ppuVar4 = (uint **)0x0;
          }
          else {
            if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00905994 to 00905997 has its CatchHandler @ 00905b44 */
            ppuVar4 = (uint **)operator_new(uVar13 << 3);
          }
          local_88 = ppuVar4 + ((long)__n_00 >> 3) + 1;
          ppuVar4[(long)__n_00 >> 3] = puVar10;
          if (0 < (long)__n_00) {
            memcpy(ppuVar4,local_90,__n_00);
          }
          local_80 = ppuVar4 + uVar13;
          if (local_90 != (uint **)0x0) {
            operator_delete(local_90);
          }
          param_2 = param_2 - 1;
          local_90 = ppuVar4;
        }
        else {
          *local_88 = puVar10;
          param_2 = param_2 - 1;
          local_88 = local_88 + 1;
        }
      }
      else {
        puVar10[0xd] = (uint)((float)puVar10[0xd] - param_1);
        puVar10[0xe] = (uint)((float)puVar10[0xe] + param_1);
        ppuVar4 = *(uint ***)(this + 8);
        if (ppuVar4 != *(uint ***)(this + 0x10)) goto LAB_00905750;
        __src = *(void **)this;
        __n = (long)ppuVar4 - (long)__src;
        lVar15 = (long)__n >> 3;
        uVar13 = lVar15 + 1;
        if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar13 <= (ulong)((long)__n >> 2)) {
          uVar13 = (long)__n >> 2;
        }
        if (0x7ffffffffffffff7 < __n) {
          uVar13 = 0x1fffffffffffffff;
        }
        if (uVar13 == 0) goto LAB_0090590c;
        if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009057e8 to 009057eb has its CatchHandler @ 00905b44 */
        __dest = operator_new(uVar13 << 3);
LAB_00905910:
        ppuVar4 = (uint **)((long)__dest + lVar15 * 8);
        *ppuVar4 = puVar10;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)this = __dest;
        *(uint ***)(this + 8) = ppuVar4 + 1;
        *(void **)(this + 0x10) = (void *)((long)__dest + uVar13 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      ppuVar9 = ppuVar9 + 1;
      ppuVar4 = local_90;
    } while (ppuVar9 != ppuVar16);
    for (; ppuVar4 != local_88; ppuVar4 = ppuVar4 + 1) {
      puVar10 = *ppuVar4;
                    /* try { // try from 00905a94 to 00905a97 has its CatchHandler @ 00905b4c */
      (**(code **)(**(long **)(puVar10 + 8) + 0x10))
                (*(long **)(puVar10 + 8),*puVar10,*(undefined8 *)(puVar10 + 10),puVar10[0xf]);
      if (*(long **)(puVar10 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(puVar10 + 8) + 8))();
      }
      operator_delete(puVar10);
    }
    if (local_90 != (uint **)0x0) {
      operator_delete(local_90);
    }
  }
  if (ppuVar8 != (uint **)0x0) {
    operator_delete(ppuVar8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


