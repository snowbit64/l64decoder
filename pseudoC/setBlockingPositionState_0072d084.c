// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlockingPositionState
// Entry Point: 0072d084
// Size: 1088 bytes
// Signature: undefined __thiscall setBlockingPositionState(VehicleNavigationMapGenerator * this, uint param_1, float param_2, bool param_3)


/* VehicleNavigationMapGenerator::setBlockingPositionState(unsigned int, float, bool) */

void __thiscall
VehicleNavigationMapGenerator::setBlockingPositionState
          (VehicleNavigationMapGenerator *this,uint param_1,float param_2,bool param_3)

{
  void *__dest;
  float *pfVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  long **__src;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long **pplVar7;
  VehicleNavigationMapGenerator *pVVar8;
  long *plVar9;
  VehicleNavigationMapGenerator *pVVar10;
  ulong uVar11;
  long **pplVar12;
  ulong uVar13;
  long **pplVar14;
  ulong uVar15;
  float fVar16;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  pplVar12 = (long **)(this + 0x238);
  pplVar7 = *(long ***)(this + 0x238);
  if (!param_3) {
    __src = pplVar12;
    if (pplVar7 != (long **)0x0) {
      do {
        if (*(uint *)(pplVar7 + 4) >= param_1) {
          __src = pplVar7;
        }
        pplVar7 = (long **)pplVar7[*(uint *)(pplVar7 + 4) < param_1];
      } while (pplVar7 != (long **)0x0);
      if ((__src != pplVar12) && (*(uint *)(__src + 4) <= param_1)) {
        plVar9 = __src[6];
        lVar2 = (long)__src[7] - (long)plVar9;
        if (lVar2 != 0) {
          uVar13 = 0;
LAB_0072d240:
          if (*(float *)(__src + 5) <= ABS(*(float *)((long)plVar9 + uVar13 * 4) - param_2))
          goto code_r0x0072d250;
          __dest = (void *)((long)plVar9 + uVar13 * 4);
          __n = (long)__src[7] - (long)(void *)((long)__dest + 4);
          if (__n != 0) {
            memmove(__dest,(void *)((long)__dest + 4),__n);
            plVar9 = __src[6];
          }
          __src[7] = (long *)((long)__dest + __n);
          if (plVar9 == (long *)((long)__dest + __n)) {
            pplVar12 = (long **)__src[1];
            if ((long **)__src[1] == (long **)0x0) {
              pplVar12 = __src + 2;
              pplVar7 = (long **)*pplVar12;
              if ((long **)*pplVar7 != __src) {
                do {
                  plVar9 = *pplVar12;
                  pplVar12 = (long **)(plVar9 + 2);
                  pplVar7 = (long **)*pplVar12;
                } while (*pplVar7 != plVar9);
              }
            }
            else {
              do {
                pplVar7 = pplVar12;
                pplVar12 = (long **)*pplVar7;
              } while ((long **)*pplVar7 != (long **)0x0);
            }
            if (*(long ***)(this + 0x230) == __src) {
              *(long ***)(this + 0x230) = pplVar7;
            }
            *(long *)(this + 0x240) = *(long *)(this + 0x240) + -1;
            std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0x238),(__tree_node_base *)__src);
            plVar9 = __src[6];
            if (plVar9 != (long *)0x0) {
              __src[7] = plVar9;
              operator_delete(plVar9);
            }
            goto LAB_0072d47c;
          }
        }
      }
    }
    goto LAB_0072d480;
  }
  pplVar14 = pplVar12;
  if (pplVar7 == (long **)0x0) {
LAB_0072d0fc:
    pVVar10 = *(VehicleNavigationMapGenerator **)(this + 0x250);
    if (pVVar10 == (VehicleNavigationMapGenerator *)0x0) goto LAB_0072d480;
    pVVar8 = this + 0x250;
    do {
      if (*(uint *)(pVVar10 + 0x1c) >= param_1) {
        pVVar8 = pVVar10;
      }
      pVVar10 = *(VehicleNavigationMapGenerator **)
                 (pVVar10 + (ulong)(*(uint *)(pVVar10 + 0x1c) < param_1) * 8);
    } while (pVVar10 != (VehicleNavigationMapGenerator *)0x0);
    if ((pVVar8 == this + 0x250) || (param_1 < *(uint *)(pVVar8 + 0x1c))) goto LAB_0072d480;
    fVar16 = (float)Spline::getLength();
    __src = (long **)operator_new(4);
    *(float *)__src = param_2;
                    /* try { // try from 0072d188 to 0072d18f has its CatchHandler @ 0072d4d0 */
    puVar4 = (undefined4 *)operator_new(4);
    pplVar7 = (long **)*pplVar12;
    *puVar4 = *(undefined4 *)__src;
    if (pplVar7 == (long **)0x0) {
      plVar9 = *pplVar12;
      pplVar14 = pplVar12;
    }
    else {
      pplVar14 = (long **)(this + 0x238);
      do {
        while (pplVar12 = pplVar7, param_1 < *(uint *)(pplVar12 + 4)) {
          pplVar7 = (long **)*pplVar12;
          pplVar14 = pplVar12;
          if ((long **)*pplVar12 == (long **)0x0) {
            plVar9 = *pplVar12;
            goto joined_r0x0072d1ec;
          }
        }
        if (param_1 <= *(uint *)(pplVar12 + 4)) break;
        pplVar14 = pplVar12 + 1;
        pplVar7 = (long **)*pplVar14;
      } while ((long **)*pplVar14 != (long **)0x0);
      plVar9 = *pplVar14;
    }
joined_r0x0072d1ec:
    if (plVar9 == (long *)0x0) {
                    /* try { // try from 0072d35c to 0072d367 has its CatchHandler @ 0072d4c4 */
      puVar5 = (undefined8 *)operator_new(0x48);
      *(uint *)(puVar5 + 4) = param_1;
      *(float *)(puVar5 + 5) = 2.0 / fVar16;
      puVar5[6] = puVar4;
      puVar5[7] = puVar4 + 1;
      puVar5[8] = puVar4 + 1;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = pplVar12;
      *pplVar14 = puVar5;
      if (**(long **)(this + 0x230) != 0) {
        *(long *)(this + 0x230) = **(long **)(this + 0x230);
        puVar5 = *pplVar14;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x238),(__tree_node_base *)puVar5);
      puVar4 = (undefined4 *)0x0;
      *(long *)(this + 0x240) = *(long *)(this + 0x240) + 1;
    }
    if (puVar4 != (undefined4 *)0x0) {
      operator_delete(puVar4);
    }
  }
  else {
    do {
      if (*(uint *)(pplVar7 + 4) >= param_1) {
        pplVar14 = pplVar7;
      }
      pplVar7 = (long **)pplVar7[*(uint *)(pplVar7 + 4) < param_1];
    } while (pplVar7 != (long **)0x0);
    if ((pplVar14 == pplVar12) || (param_1 < *(uint *)(pplVar14 + 4))) goto LAB_0072d0fc;
    __src = (long **)pplVar14[6];
    plVar9 = pplVar14[7];
    uVar13 = (long)plVar9 - (long)__src;
    uVar15 = (long)uVar13 >> 2;
    if (uVar13 != 0) {
      uVar11 = 0;
      do {
        if (ABS(*(float *)((long)__src + uVar11 * 4) - param_2) < *(float *)(pplVar14 + 5))
        goto LAB_0072d480;
        uVar11 = (ulong)((int)uVar11 + 1);
      } while (uVar11 < uVar15);
    }
    if (plVar9 != pplVar14[8]) {
      *(float *)plVar9 = param_2;
      pplVar14[7] = (long *)((long)plVar9 + 4);
      goto LAB_0072d480;
    }
    uVar11 = uVar15 + 1;
    if (uVar11 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar11 <= (ulong)((long)uVar13 >> 1)) {
      uVar11 = (long)uVar13 >> 1;
    }
    if (0x7ffffffffffffffb < uVar13) {
      uVar11 = 0x3fffffffffffffff;
    }
    if (uVar11 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      if (uVar11 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      plVar9 = (long *)operator_new(uVar11 << 2);
    }
    pfVar1 = (float *)((long)plVar9 + uVar15 * 4);
    *pfVar1 = param_2;
    if (0 < (long)uVar13) {
      memcpy(plVar9,__src,uVar13);
    }
    pplVar14[6] = plVar9;
    pplVar14[7] = (long *)(pfVar1 + 1);
    pplVar14[8] = (long *)((long)plVar9 + uVar11 * 4);
  }
  if (__src != (long **)0x0) {
LAB_0072d47c:
    operator_delete(__src);
  }
LAB_0072d480:
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0072d250:
  uVar13 = (ulong)((int)uVar13 + 1);
  if ((ulong)(lVar2 >> 2) <= uVar13) goto LAB_0072d480;
  goto LAB_0072d240;
}


