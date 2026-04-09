// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_impl<std::__ndk1::pair<int,char_const*>>
// Entry Point: 00a773fc
// Size: 308 bytes
// Signature: pair __cdecl __emplace_unique_impl<std::__ndk1::pair<int,char_const*>>(pair * param_1)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__map_value_compare<unsigned int, std::__ndk1::__value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::less<unsigned int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > > > >::__emplace_unique_impl<std::__ndk1::pair<int, char const*> >(std::__ndk1::pair<int, char
   const*>&&) */

pair std::__ndk1::
     __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
     ::__emplace_unique_impl<std::__ndk1::pair<int,char_const*>>(pair *param_1)

{
  long lVar1;
  long lVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  pair pVar7;
  long *plVar8;
  long *local_50;
  char local_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  __construct_node<std::__ndk1::pair<int,char_const*>>(param_1);
  pplVar3 = (long **)(param_1 + 2);
  pplVar4 = (long **)*pplVar3;
  pplVar6 = pplVar3;
  if (pplVar4 != (long **)0x0) {
    pplVar3 = (long **)(param_1 + 2);
    do {
      while (pplVar5 = pplVar4, pplVar6 = pplVar5, *(uint *)(local_50 + 4) < *(uint *)(pplVar5 + 4))
      {
        pplVar3 = pplVar5;
        pplVar4 = (long **)*pplVar5;
        if ((long **)*pplVar5 == (long **)0x0) {
          plVar8 = *pplVar5;
          goto joined_r0x00a77484;
        }
      }
      if (*(uint *)(local_50 + 4) <= *(uint *)(pplVar5 + 4)) break;
      pplVar3 = pplVar5 + 1;
      pplVar4 = (long **)*pplVar3;
    } while ((long **)*pplVar3 != (long **)0x0);
  }
  plVar8 = *pplVar3;
  pplVar5 = pplVar3;
joined_r0x00a77484:
  if (plVar8 == (long *)0x0) {
    *local_50 = 0;
    local_50[1] = 0;
    local_50[2] = (long)pplVar6;
    *pplVar5 = local_50;
    plVar8 = local_50;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      plVar8 = *pplVar5;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 2),(__tree_node_base *)plVar8);
    pVar7 = (pair)local_50;
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
  }
  else {
    pVar7 = (pair)plVar8;
    if (local_50 != (long *)0x0) {
      if ((local_40 != '\0') && ((*(byte *)(local_50 + 5) & 1) != 0)) {
        operator_delete((void *)local_50[7]);
      }
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return pVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


