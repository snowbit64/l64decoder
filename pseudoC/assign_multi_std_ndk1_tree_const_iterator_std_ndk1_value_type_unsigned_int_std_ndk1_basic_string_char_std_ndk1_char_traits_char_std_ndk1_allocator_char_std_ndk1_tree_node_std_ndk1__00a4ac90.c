// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,void*>*,long>>
// Entry Point: 00a4ac90
// Size: 784 bytes
// Signature: void __thiscall __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,void*>*,long>>(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>> * this, __tree_const_iterator param_1, __tree_const_iterator param_2)


/* void std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__map_value_compare<unsigned int, std::__ndk1::__value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::less<unsigned int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > > > >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > >, std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   void*>*, long> >(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, long>,
   std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, long>) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::
__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,void*>*,long>>
          (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           *this,__tree_const_iterator param_1,__tree_const_iterator param_2)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  long *plVar5;
  bool bVar6;
  __tree_iterator _Var7;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var8;
  long lVar9;
  long **pplVar10;
  long **pplVar11;
  ulong **ppuVar12;
  long **pplVar13;
  ulong *puVar14;
  ulong **ppuVar15;
  long **pplVar16;
  long **local_68;
  
  ppuVar15 = (ulong **)(ulong)param_1;
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
  p_Var8 = this;
  if (*(long *)(this + 0x10) != 0) {
    pplVar13 = *(long ***)this;
    pplVar16 = (long **)(this + 8);
    *(long ***)this = pplVar16;
    (*pplVar16)[2] = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *pplVar16 = (long *)0x0;
    pplVar10 = (long **)pplVar13[1];
    if (pplVar10 != (long **)0x0) {
      pplVar13 = pplVar10;
    }
    if (pplVar13 == (long **)0x0) {
      pplVar10 = (long **)0x0;
    }
    else {
      pplVar10 = (long **)pplVar13[2];
      pplVar3 = pplVar10;
      if (pplVar10 != (long **)0x0) {
        pplVar11 = (long **)*pplVar10;
        if (pplVar11 == pplVar13) {
          pplVar11 = (long **)pplVar10[1];
          *pplVar10 = (long *)0x0;
          while (pplVar3 = pplVar10, pplVar11 != (long **)0x0) {
            do {
              pplVar10 = pplVar11;
              pplVar11 = (long **)*pplVar10;
            } while (*pplVar10 != (long *)0x0);
            pplVar11 = (long **)pplVar10[1];
          }
        }
        else {
          pplVar10[1] = (long *)0x0;
          while (pplVar3 = pplVar10, pplVar11 != (long **)0x0) {
            do {
              pplVar10 = pplVar11;
              pplVar11 = (long **)*pplVar10;
            } while (*pplVar10 != (long *)0x0);
            pplVar11 = (long **)pplVar10[1];
          }
        }
      }
      do {
        if (ppuVar15 == (ulong **)(ulong)param_2) break;
        *(undefined4 *)(pplVar13 + 4) = *(undefined4 *)(ppuVar15 + 4);
                    /* try { // try from 00a4ad7c to 00a4ad7f has its CatchHandler @ 00a4afa0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(pplVar13 + 5),(basic_string *)(ppuVar15 + 5));
        pplVar10 = pplVar16;
        pplVar11 = pplVar16;
        if ((long **)*pplVar16 != (long **)0x0) {
          pplVar4 = (long **)*pplVar16;
          do {
            while (pplVar10 = pplVar4, *(uint *)(pplVar10 + 4) <= *(uint *)(pplVar13 + 4)) {
              pplVar4 = (long **)pplVar10[1];
              if ((long **)pplVar10[1] == (long **)0x0) {
                pplVar11 = pplVar10 + 1;
                goto LAB_00a4adc8;
              }
            }
            pplVar4 = (long **)*pplVar10;
            pplVar11 = pplVar10;
          } while ((long **)*pplVar10 != (long **)0x0);
        }
LAB_00a4adc8:
        *pplVar13 = (long *)0x0;
        pplVar13[1] = (long *)0x0;
        pplVar13[2] = (long *)pplVar10;
        *pplVar11 = (long *)pplVar13;
        if (**(long **)this != 0) {
          *(long *)this = **(long **)this;
          pplVar13 = (long **)*pplVar11;
        }
        __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 8),(__tree_node_base *)pplVar13);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
        if (pplVar3 == (long **)0x0) {
          pplVar10 = (long **)0x0;
          ppuVar12 = (ulong **)ppuVar15[1];
          local_68 = pplVar3;
          if ((ulong **)ppuVar15[1] != (ulong **)0x0) goto LAB_00a4ae7c;
LAB_00a4ae8c:
          ppuVar12 = ppuVar15 + 2;
          bVar6 = (ulong **)**ppuVar12 != ppuVar15;
          ppuVar15 = (ulong **)*ppuVar12;
          if (bVar6) {
            do {
              puVar14 = *ppuVar12;
              ppuVar12 = (ulong **)(puVar14 + 2);
              ppuVar15 = (ulong **)*ppuVar12;
            } while (*ppuVar15 != puVar14);
          }
        }
        else {
          pplVar10 = (long **)pplVar3[2];
          if (pplVar10 != (long **)0x0) {
            pplVar13 = (long **)*pplVar10;
            if (pplVar13 == pplVar3) {
              pplVar13 = (long **)pplVar10[1];
              *pplVar10 = (long *)0x0;
              while (pplVar13 != (long **)0x0) {
                do {
                  pplVar10 = pplVar13;
                  pplVar13 = (long **)*pplVar10;
                } while ((long **)*pplVar10 != (long **)0x0);
                pplVar13 = (long **)pplVar10[1];
              }
            }
            else {
              pplVar10[1] = (long *)0x0;
              while (pplVar13 != (long **)0x0) {
                do {
                  pplVar10 = pplVar13;
                  pplVar13 = (long **)*pplVar10;
                } while ((long **)*pplVar10 != (long **)0x0);
                pplVar13 = (long **)pplVar10[1];
              }
            }
          }
          ppuVar12 = (ulong **)ppuVar15[1];
          local_68 = pplVar10;
          if ((ulong **)ppuVar15[1] == (ulong **)0x0) goto LAB_00a4ae8c;
LAB_00a4ae7c:
          do {
            ppuVar15 = ppuVar12;
            ppuVar12 = (ulong **)*ppuVar15;
          } while ((ulong **)*ppuVar15 != (ulong **)0x0);
        }
        bVar6 = pplVar3 != (long **)0x0;
        pplVar13 = pplVar3;
        pplVar3 = local_68;
      } while (bVar6);
      p_Var8 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)destroy(this,(__tree_node *)pplVar13);
      if (pplVar10 == (long **)0x0) goto LAB_00a4af14;
      plVar5 = (long *)((long *)pplVar10)[2];
      while (plVar2 = plVar5, plVar2 != (long *)0x0) {
        pplVar10 = (long **)plVar2;
        plVar5 = (long *)plVar2[2];
      }
    }
    p_Var8 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              *)destroy(this,(__tree_node *)pplVar10);
  }
LAB_00a4af14:
  while (ppuVar15 != (ulong **)(ulong)param_2) {
    _Var7 = __emplace_multi<std::__ndk1::pair<unsigned_int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
                      (this,(pair *)(ppuVar15 + 4));
    p_Var8 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              *)(ulong)_Var7;
    ppuVar12 = (ulong **)ppuVar15[1];
    if ((ulong **)ppuVar15[1] == (ulong **)0x0) {
      ppuVar12 = ppuVar15 + 2;
      bVar6 = (ulong **)**ppuVar12 != ppuVar15;
      ppuVar15 = (ulong **)*ppuVar12;
      if (bVar6) {
        do {
          puVar14 = *ppuVar12;
          ppuVar12 = (ulong **)(puVar14 + 2);
          ppuVar15 = (ulong **)*ppuVar12;
        } while (*ppuVar15 != puVar14);
      }
    }
    else {
      do {
        ppuVar15 = ppuVar12;
        ppuVar12 = (ulong **)*ppuVar15;
      } while ((ulong **)*ppuVar15 != (ulong **)0x0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(p_Var8);
  }
  return;
}


