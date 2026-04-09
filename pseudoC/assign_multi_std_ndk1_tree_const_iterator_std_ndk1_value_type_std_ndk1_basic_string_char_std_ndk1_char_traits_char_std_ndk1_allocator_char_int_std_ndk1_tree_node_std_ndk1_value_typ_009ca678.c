// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,void*>*,long>>
// Entry Point: 009ca678
// Size: 672 bytes
// Signature: void __thiscall __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,void*>*,long>>(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>> * this, __tree_const_iterator param_1, __tree_const_iterator param_2)


/* void std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int> >
   >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>, void*>*, long>
   >(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>, void*>*, long>,
   std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>, void*>*, long>) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
::
__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,void*>*,long>>
          (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
           *this,__tree_const_iterator param_1,__tree_const_iterator param_2)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  __tree_iterator _Var4;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
  *p_Var5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong **ppuVar10;
  ulong *puVar11;
  ulong **ppuVar12;
  undefined8 *local_60;
  
  ppuVar12 = (ulong **)(ulong)param_1;
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  p_Var5 = this;
  if (*(long *)(this + 0x10) != 0) {
    local_60 = *(undefined8 **)this;
    plVar7 = (long *)(this + 8);
    *(long **)this = plVar7;
    *(undefined8 *)(*plVar7 + 0x10) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *plVar7 = 0;
    puVar8 = (undefined8 *)local_60[1];
    if (puVar8 != (undefined8 *)0x0) {
      local_60 = puVar8;
    }
    if (local_60 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)local_60[2];
      puVar2 = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)*puVar8;
        if (puVar9 == local_60) {
          puVar9 = (undefined8 *)puVar8[1];
          *puVar8 = 0;
          while (puVar2 = puVar8, puVar9 != (undefined8 *)0x0) {
            do {
              puVar8 = puVar9;
              puVar9 = (undefined8 *)*puVar8;
            } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
            puVar9 = (undefined8 *)puVar8[1];
          }
        }
        else {
          puVar8[1] = 0;
          while (puVar2 = puVar8, puVar9 != (undefined8 *)0x0) {
            do {
              puVar8 = puVar9;
              puVar9 = (undefined8 *)*puVar8;
            } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
            puVar9 = (undefined8 *)puVar8[1];
          }
        }
      }
      do {
        if (ppuVar12 == (ulong **)(ulong)param_2) break;
                    /* try { // try from 009ca768 to 009ca77f has its CatchHandler @ 009ca918 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(local_60 + 4),(basic_string *)(ppuVar12 + 4));
        *(undefined4 *)(local_60 + 7) = *(undefined4 *)(ppuVar12 + 7);
        FUN_009ca92c(this,local_60);
        if (puVar2 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          ppuVar10 = (ulong **)ppuVar12[1];
          if ((ulong **)ppuVar12[1] == (ulong **)0x0) goto LAB_009ca80c;
LAB_009ca7fc:
          do {
            ppuVar12 = ppuVar10;
            ppuVar10 = (ulong **)*ppuVar12;
          } while (ppuVar10 != (ulong **)0x0);
        }
        else {
          puVar9 = (undefined8 *)puVar2[2];
          if (puVar9 != (undefined8 *)0x0) {
            puVar8 = (undefined8 *)*puVar9;
            if (puVar8 == puVar2) {
              puVar8 = (undefined8 *)puVar9[1];
              *puVar9 = 0;
              while (puVar8 != (undefined8 *)0x0) {
                do {
                  puVar9 = puVar8;
                  puVar8 = (undefined8 *)*puVar9;
                } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
                puVar8 = (undefined8 *)puVar9[1];
              }
            }
            else {
              puVar9[1] = 0;
              while (puVar8 != (undefined8 *)0x0) {
                do {
                  puVar9 = puVar8;
                  puVar8 = (undefined8 *)*puVar9;
                } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
                puVar8 = (undefined8 *)puVar9[1];
              }
            }
          }
          ppuVar10 = (ulong **)ppuVar12[1];
          puVar8 = puVar9;
          if ((ulong **)ppuVar12[1] != (ulong **)0x0) goto LAB_009ca7fc;
LAB_009ca80c:
          ppuVar10 = ppuVar12 + 2;
          bVar3 = (ulong **)**ppuVar10 != ppuVar12;
          ppuVar12 = (ulong **)*ppuVar10;
          if (bVar3) {
            do {
              puVar11 = *ppuVar10;
              ppuVar10 = (ulong **)(puVar11 + 2);
              ppuVar12 = (ulong **)*ppuVar10;
            } while ((ulong *)**ppuVar10 != puVar11);
          }
        }
        bVar3 = puVar2 != (undefined8 *)0x0;
        local_60 = puVar2;
        puVar2 = puVar9;
      } while (bVar3);
      p_Var5 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                *)destroy(this,(__tree_node *)local_60);
      if (puVar8 == (undefined8 *)0x0) goto LAB_009ca88c;
      puVar2 = (undefined8 *)puVar8[2];
      while (puVar9 = puVar2, puVar9 != (undefined8 *)0x0) {
        puVar8 = puVar9;
        puVar2 = (undefined8 *)puVar9[2];
      }
    }
    p_Var5 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
              *)destroy(this,(__tree_node *)puVar8);
  }
LAB_009ca88c:
  while (ppuVar12 != (ulong **)(ulong)param_2) {
    _Var4 = __emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,int>const&>
                      (this,(pair *)(ppuVar12 + 4));
    p_Var5 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
              *)(ulong)_Var4;
    ppuVar10 = (ulong **)ppuVar12[1];
    if ((ulong **)ppuVar12[1] == (ulong **)0x0) {
      ppuVar10 = ppuVar12 + 2;
      bVar3 = (ulong **)**ppuVar10 != ppuVar12;
      ppuVar12 = (ulong **)*ppuVar10;
      if (bVar3) {
        do {
          puVar11 = *ppuVar10;
          ppuVar10 = (ulong **)(puVar11 + 2);
          ppuVar12 = (ulong **)*ppuVar10;
        } while (*ppuVar12 != puVar11);
      }
    }
    else {
      do {
        ppuVar12 = ppuVar10;
        ppuVar10 = (ulong **)*ppuVar12;
      } while ((ulong **)*ppuVar12 != (ulong **)0x0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(p_Var5);
}


