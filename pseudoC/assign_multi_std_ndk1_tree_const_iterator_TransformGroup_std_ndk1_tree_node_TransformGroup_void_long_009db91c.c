// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __assign_multi<std::__ndk1::__tree_const_iterator<TransformGroup*,std::__ndk1::__tree_node<TransformGroup*,void*>*,long>>
// Entry Point: 009db91c
// Size: 820 bytes
// Signature: void __thiscall __assign_multi<std::__ndk1::__tree_const_iterator<TransformGroup*,std::__ndk1::__tree_node<TransformGroup*,void*>*,long>>(__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>> * this, __tree_const_iterator param_1, __tree_const_iterator param_2)


/* void std::__ndk1::__tree<TransformGroup*, std::__ndk1::less<TransformGroup*>,
   std::__ndk1::allocator<TransformGroup*>
   >::__assign_multi<std::__ndk1::__tree_const_iterator<TransformGroup*,
   std::__ndk1::__tree_node<TransformGroup*, void*>*, long>
   >(std::__ndk1::__tree_const_iterator<TransformGroup*, std::__ndk1::__tree_node<TransformGroup*,
   void*>*, long>, std::__ndk1::__tree_const_iterator<TransformGroup*,
   std::__ndk1::__tree_node<TransformGroup*, void*>*, long>) */

void __thiscall
std::__ndk1::
__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>::
__assign_multi<std::__ndk1::__tree_const_iterator<TransformGroup*,std::__ndk1::__tree_node<TransformGroup*,void*>*,long>>
          (__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
           *this,__tree_const_iterator param_1,__tree_const_iterator param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong **ppuVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong **ppuVar9;
  long **pplVar10;
  ulong *puVar11;
  long **pplVar12;
  undefined8 *puVar13;
  ulong **ppuVar14;
  ulong **ppuVar15;
  long **pplVar16;
  long **pplVar17;
  
  ppuVar3 = (ulong **)(ulong)param_2;
  ppuVar15 = (ulong **)(ulong)param_1;
  if (*(long *)(this + 0x10) != 0) {
    pplVar10 = *(long ***)this;
    pplVar17 = (long **)(this + 8);
    *(long ***)this = pplVar17;
    (*pplVar17)[2] = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *pplVar17 = (long *)0x0;
    plVar4 = (long *)((long *)pplVar10)[1];
    if (plVar4 != (long *)0x0) {
      pplVar10 = (long **)plVar4;
    }
    if (pplVar10 == (long **)0x0) {
      pplVar5 = (long **)0x0;
    }
    else {
      pplVar16 = (long **)((long *)pplVar10)[2];
      if (pplVar16 != (long **)0x0) {
        pplVar5 = (long **)*pplVar16;
        if (pplVar5 == pplVar10) {
          pplVar5 = (long **)pplVar16[1];
          *pplVar16 = (long *)0x0;
          while (pplVar5 != (long **)0x0) {
            do {
              pplVar16 = pplVar5;
              pplVar5 = (long **)*pplVar16;
            } while (*pplVar16 != (long *)0x0);
            pplVar5 = (long **)pplVar16[1];
          }
        }
        else {
          pplVar16[1] = (long *)0x0;
          while (pplVar5 != (long **)0x0) {
            do {
              pplVar16 = pplVar5;
              pplVar5 = (long **)*pplVar16;
            } while (*pplVar16 != (long *)0x0);
            pplVar5 = (long **)pplVar16[1];
          }
        }
      }
      do {
        pplVar5 = pplVar16;
        if (ppuVar15 == ppuVar3) break;
        puVar11 = ppuVar15[4];
        pplVar6 = (long **)*pplVar17;
        ((long *)pplVar10)[4] = (long)puVar11;
        pplVar5 = pplVar17;
        while (pplVar12 = pplVar5, pplVar6 != (long **)0x0) {
          while (pplVar5 = pplVar6, pplVar5[4] <= puVar11) {
            pplVar6 = (long **)pplVar5[1];
            if ((long **)pplVar5[1] == (long **)0x0) {
              pplVar12 = pplVar5 + 1;
              goto LAB_009dba28;
            }
          }
          pplVar6 = (long **)*pplVar5;
        }
LAB_009dba28:
        *pplVar10 = (long *)0x0;
        ((long *)pplVar10)[1] = 0;
        ((long *)pplVar10)[2] = (long)pplVar5;
        *pplVar12 = (long *)pplVar10;
        if (**(long **)this != 0) {
          *(long *)this = **(long **)this;
          pplVar10 = (long **)*pplVar12;
        }
        __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 8),(__tree_node_base *)pplVar10);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
        if (pplVar16 == (long **)0x0) {
          pplVar5 = (long **)0x0;
        }
        else {
          pplVar5 = (long **)pplVar16[2];
          if (pplVar5 != (long **)0x0) {
            pplVar10 = (long **)*pplVar5;
            if (pplVar10 == pplVar16) {
              pplVar10 = (long **)pplVar5[1];
              *pplVar5 = (long *)0x0;
              while (pplVar10 != (long **)0x0) {
                do {
                  pplVar5 = pplVar10;
                  pplVar10 = (long **)*pplVar5;
                } while ((long **)*pplVar5 != (long **)0x0);
                pplVar10 = (long **)pplVar5[1];
              }
            }
            else {
              pplVar5[1] = (long *)0x0;
              while (pplVar10 != (long **)0x0) {
                do {
                  pplVar5 = pplVar10;
                  pplVar10 = (long **)*pplVar5;
                } while ((long **)*pplVar5 != (long **)0x0);
                pplVar10 = (long **)pplVar5[1];
              }
            }
          }
        }
        ppuVar9 = (ulong **)ppuVar15[1];
        if ((ulong **)ppuVar15[1] == (ulong **)0x0) {
          ppuVar9 = ppuVar15 + 2;
          bVar1 = (ulong **)**ppuVar9 != ppuVar15;
          ppuVar15 = (ulong **)*ppuVar9;
          if (bVar1) {
            do {
              puVar11 = *ppuVar9;
              ppuVar9 = (ulong **)(puVar11 + 2);
              ppuVar15 = (ulong **)*ppuVar9;
            } while (*ppuVar15 != puVar11);
          }
        }
        else {
          do {
            ppuVar15 = ppuVar9;
            ppuVar9 = (ulong **)*ppuVar15;
          } while ((ulong **)*ppuVar15 != (ulong **)0x0);
        }
        bVar1 = pplVar16 != (long **)0x0;
        pplVar10 = pplVar16;
        pplVar16 = pplVar5;
      } while (bVar1);
      destroy(this,(__tree_node *)pplVar10);
      if (pplVar5 == (long **)0x0) goto LAB_009dbb50;
      pplVar10 = (long **)pplVar5[2];
      while (pplVar17 = pplVar10, pplVar17 != (long **)0x0) {
        pplVar5 = pplVar17;
        pplVar10 = (long **)pplVar17[2];
      }
    }
    destroy(this,(__tree_node *)pplVar5);
  }
LAB_009dbb50:
  if (ppuVar15 != ppuVar3) {
    do {
      puVar2 = (undefined8 *)operator_new(0x28);
      puVar11 = ppuVar15[4];
      puVar7 = *(undefined8 **)(this + 8);
      puVar2[4] = puVar11;
      puVar8 = (undefined8 *)(this + 8);
      while (puVar13 = puVar8, puVar7 != (undefined8 *)0x0) {
        while (puVar8 = puVar7, (ulong *)puVar8[4] <= puVar11) {
          puVar7 = (undefined8 *)puVar8[1];
          if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
            puVar13 = puVar8 + 1;
            goto LAB_009dbbc0;
          }
        }
        puVar7 = (undefined8 *)*puVar8;
      }
LAB_009dbbc0:
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = puVar8;
      *puVar13 = puVar2;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar2 = (undefined8 *)*puVar13;
      }
      __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar2);
      ppuVar9 = (ulong **)ppuVar15[1];
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
      if (ppuVar9 == (ulong **)0x0) {
        ppuVar9 = ppuVar15 + 2;
        ppuVar14 = (ulong **)*ppuVar9;
        if ((ulong **)*ppuVar14 != ppuVar15) {
          do {
            puVar11 = *ppuVar9;
            ppuVar9 = (ulong **)(puVar11 + 2);
            ppuVar14 = (ulong **)*ppuVar9;
          } while (*ppuVar14 != puVar11);
        }
      }
      else {
        do {
          ppuVar14 = ppuVar9;
          ppuVar9 = (ulong **)*ppuVar14;
        } while ((ulong **)*ppuVar14 != (ulong **)0x0);
      }
      ppuVar15 = ppuVar14;
    } while (ppuVar14 != ppuVar3);
  }
  return;
}


