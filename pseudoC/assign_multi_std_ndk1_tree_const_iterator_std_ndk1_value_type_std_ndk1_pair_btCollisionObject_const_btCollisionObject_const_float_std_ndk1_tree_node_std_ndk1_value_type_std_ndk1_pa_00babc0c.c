// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,void*>*,long>>
// Entry Point: 00babc0c
// Size: 884 bytes
// Signature: void __thiscall __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,void*>*,long>>(__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>> * this, __tree_const_iterator param_1, __tree_const_iterator param_2)


/* void std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject const*,
   btCollisionObject const*>, float>,
   std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject const*, btCollisionObject
   const*>, std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject const*, btCollisionObject
   const*>, float>, std::__ndk1::less<std::__ndk1::pair<btCollisionObject const*, btCollisionObject
   const*> >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject const*,
   btCollisionObject const*>, float> >
   >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject
   const*, btCollisionObject const*>, float>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject const*,
   btCollisionObject const*>, float>, void*>*, long>
   >(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject
   const*, btCollisionObject const*>, float>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject const*,
   btCollisionObject const*>, float>, void*>*, long>,
   std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject
   const*, btCollisionObject const*>, float>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject const*,
   btCollisionObject const*>, float>, void*>*, long>) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
::
__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,void*>*,long>>
          (__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
           *this,__tree_const_iterator param_1,__tree_const_iterator param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong **ppuVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong **ppuVar10;
  long **pplVar11;
  long **pplVar12;
  undefined8 *puVar13;
  ulong **ppuVar14;
  ulong *puVar15;
  ulong **ppuVar16;
  long **pplVar17;
  long **pplVar18;
  undefined4 uVar19;
  ulong *puVar20;
  
  ppuVar4 = (ulong **)(ulong)param_2;
  ppuVar16 = (ulong **)(ulong)param_1;
  if (*(long *)(this + 0x10) != 0) {
    pplVar11 = *(long ***)this;
    pplVar18 = (long **)(this + 8);
    *(long ***)this = pplVar18;
    (*pplVar18)[2] = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *pplVar18 = (long *)0x0;
    plVar5 = (long *)((long *)pplVar11)[1];
    if (plVar5 != (long *)0x0) {
      pplVar11 = (long **)plVar5;
    }
    if (pplVar11 == (long **)0x0) {
      pplVar6 = (long **)0x0;
    }
    else {
      pplVar17 = (long **)((long *)pplVar11)[2];
      if (pplVar17 != (long **)0x0) {
        pplVar6 = (long **)*pplVar17;
        if (pplVar6 == pplVar11) {
          pplVar6 = (long **)pplVar17[1];
          *pplVar17 = (long *)0x0;
          while (pplVar6 != (long **)0x0) {
            do {
              pplVar17 = pplVar6;
              pplVar6 = (long **)*pplVar17;
            } while (*pplVar17 != (long *)0x0);
            pplVar6 = (long **)pplVar17[1];
          }
        }
        else {
          pplVar17[1] = (long *)0x0;
          while (pplVar6 != (long **)0x0) {
            do {
              pplVar17 = pplVar6;
              pplVar6 = (long **)*pplVar17;
            } while (*pplVar17 != (long *)0x0);
            pplVar6 = (long **)pplVar17[1];
          }
        }
      }
      do {
        pplVar6 = pplVar17;
        if (ppuVar16 == ppuVar4) break;
        puVar15 = ppuVar16[4];
        puVar20 = ppuVar16[5];
        uVar19 = *(undefined4 *)(ppuVar16 + 6);
        pplVar7 = (long **)*pplVar18;
        ((long *)pplVar11)[4] = (long)puVar15;
        ((long *)pplVar11)[5] = (long)puVar20;
        *(undefined4 *)((long *)pplVar11 + 6) = uVar19;
        pplVar6 = pplVar18;
        while (pplVar12 = pplVar6, pplVar7 != (long **)0x0) {
          while ((pplVar6 = pplVar7, pplVar6[4] <= puVar15 &&
                 ((pplVar6[4] < puVar15 || (pplVar6[5] <= puVar20))))) {
            pplVar7 = (long **)pplVar6[1];
            if ((long **)pplVar6[1] == (long **)0x0) {
              pplVar12 = pplVar6 + 1;
              goto LAB_00babd34;
            }
          }
          pplVar7 = (long **)*pplVar6;
        }
LAB_00babd34:
        *pplVar11 = (long *)0x0;
        ((long *)pplVar11)[1] = 0;
        ((long *)pplVar11)[2] = (long)pplVar6;
        *pplVar12 = (long *)pplVar11;
        if (**(long **)this != 0) {
          *(long *)this = **(long **)this;
          pplVar11 = (long **)*pplVar12;
        }
        __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 8),(__tree_node_base *)pplVar11);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
        if (pplVar17 == (long **)0x0) {
          pplVar6 = (long **)0x0;
        }
        else {
          pplVar6 = (long **)pplVar17[2];
          if (pplVar6 != (long **)0x0) {
            pplVar11 = (long **)*pplVar6;
            if (pplVar11 == pplVar17) {
              pplVar11 = (long **)pplVar6[1];
              *pplVar6 = (long *)0x0;
              while (pplVar11 != (long **)0x0) {
                do {
                  pplVar6 = pplVar11;
                  pplVar11 = (long **)*pplVar6;
                } while ((long **)*pplVar6 != (long **)0x0);
                pplVar11 = (long **)pplVar6[1];
              }
            }
            else {
              pplVar6[1] = (long *)0x0;
              while (pplVar11 != (long **)0x0) {
                do {
                  pplVar6 = pplVar11;
                  pplVar11 = (long **)*pplVar6;
                } while ((long **)*pplVar6 != (long **)0x0);
                pplVar11 = (long **)pplVar6[1];
              }
            }
          }
        }
        ppuVar10 = (ulong **)ppuVar16[1];
        if ((ulong **)ppuVar16[1] == (ulong **)0x0) {
          ppuVar10 = ppuVar16 + 2;
          bVar2 = (ulong **)**ppuVar10 != ppuVar16;
          ppuVar16 = (ulong **)*ppuVar10;
          if (bVar2) {
            do {
              puVar15 = *ppuVar10;
              ppuVar10 = (ulong **)(puVar15 + 2);
              ppuVar16 = (ulong **)*ppuVar10;
            } while (*ppuVar16 != puVar15);
          }
        }
        else {
          do {
            ppuVar16 = ppuVar10;
            ppuVar10 = (ulong **)*ppuVar16;
          } while ((ulong **)*ppuVar16 != (ulong **)0x0);
        }
        bVar2 = pplVar17 != (long **)0x0;
        pplVar11 = pplVar17;
        pplVar17 = pplVar6;
      } while (bVar2);
      destroy(this,(__tree_node *)pplVar11);
      if (pplVar6 == (long **)0x0) goto LAB_00babe5c;
      pplVar11 = (long **)pplVar6[2];
      while (pplVar18 = pplVar11, pplVar18 != (long **)0x0) {
        pplVar6 = pplVar18;
        pplVar11 = (long **)pplVar18[2];
      }
    }
    destroy(this,(__tree_node *)pplVar6);
  }
LAB_00babe5c:
  if (ppuVar16 != ppuVar4) {
    puVar1 = (undefined8 *)(this + 8);
    do {
      puVar3 = (undefined8 *)operator_new(0x38);
      puVar20 = ppuVar16[5];
      puVar15 = ppuVar16[4];
      puVar8 = (undefined8 *)*puVar1;
      puVar3[6] = ppuVar16[6];
      puVar3[5] = puVar20;
      puVar3[4] = puVar15;
      puVar9 = puVar1;
      puVar13 = puVar1;
      if (puVar8 != (undefined8 *)0x0) {
        do {
          while ((puVar9 = puVar8, (ulong)puVar9[4] <= (ulong)puVar3[4] &&
                 (((ulong)puVar9[4] < (ulong)puVar3[4] || ((ulong)puVar9[5] <= (ulong)puVar3[5])))))
          {
            puVar8 = (undefined8 *)puVar9[1];
            if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
              puVar13 = puVar9 + 1;
              goto LAB_00babef0;
            }
          }
          puVar8 = (undefined8 *)*puVar9;
          puVar13 = puVar9;
        } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
      }
LAB_00babef0:
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar9;
      *puVar13 = puVar3;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar3 = (undefined8 *)*puVar13;
      }
      __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar3);
      ppuVar10 = (ulong **)ppuVar16[1];
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
      if (ppuVar10 == (ulong **)0x0) {
        ppuVar10 = ppuVar16 + 2;
        ppuVar14 = (ulong **)*ppuVar10;
        if ((ulong **)*ppuVar14 != ppuVar16) {
          do {
            puVar15 = *ppuVar10;
            ppuVar10 = (ulong **)(puVar15 + 2);
            ppuVar14 = (ulong **)*ppuVar10;
          } while (*ppuVar14 != puVar15);
        }
      }
      else {
        do {
          ppuVar14 = ppuVar10;
          ppuVar10 = (ulong **)*ppuVar14;
        } while ((ulong **)*ppuVar14 != (ulong **)0x0);
      }
      ppuVar16 = ppuVar14;
    } while (ppuVar14 != ppuVar4);
  }
  return;
}


