// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_multi<std::__ndk1::pair<unsigned_int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
// Entry Point: 00a4b00c
// Size: 264 bytes
// Signature: __tree_iterator __thiscall __emplace_multi<std::__ndk1::pair<unsigned_int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>> * this, pair * param_1)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__map_value_compare<unsigned int, std::__ndk1::__value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::less<unsigned int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > > > >::__emplace_multi<std::__ndk1::pair<unsigned int const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   const&>(std::__ndk1::pair<unsigned int const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::
__emplace_multi<std::__ndk1::pair<unsigned_int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
          (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           *this,pair *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)operator_new(0x40);
  *(pair *)(puVar3 + 4) = *param_1;
                    /* try { // try from 00a4b05c to 00a4b063 has its CatchHandler @ 00a4b114 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar3 + 5));
  puVar5 = (undefined8 *)(this + 8);
  puVar6 = puVar5;
  if ((undefined8 *)*puVar5 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar5;
    do {
      while (puVar5 = puVar2, *(uint *)(puVar3 + 4) < *(uint *)(puVar5 + 4)) {
        puVar2 = (undefined8 *)*puVar5;
        puVar6 = puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) goto LAB_00a4b0ac;
      }
      puVar2 = (undefined8 *)puVar5[1];
    } while ((undefined8 *)puVar5[1] != (undefined8 *)0x0);
    puVar6 = puVar5 + 1;
  }
LAB_00a4b0ac:
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = puVar5;
  *puVar6 = puVar3;
  puVar5 = puVar3;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    puVar5 = (undefined8 *)*puVar6;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar5);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (__tree_iterator)puVar3;
}


