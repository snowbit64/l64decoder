// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_hint_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
// Entry Point: 008ec71c
// Size: 216 bytes
// Signature: __tree_iterator __thiscall __emplace_hint_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>> * this, __tree_const_iterator param_1, uint * param_2, pair * param_3)


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
   > > > >::__emplace_hint_unique_key_args<unsigned int, std::__ndk1::pair<unsigned int const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   const&>(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, long>, unsigned int
   const&, std::__ndk1::pair<unsigned int const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::
__emplace_hint_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
          (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           *this,__tree_const_iterator param_1,uint *param_2,pair *param_3)

{
  long lVar1;
  __tree_node_base **pp_Var2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  __tree_node_base *p_Stack_58;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pp_Var2 = __find_equal<unsigned_int>(this,param_1,&local_50,&p_Stack_58,param_2);
  puVar4 = (undefined8 *)*pp_Var2;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x40);
    *(pair *)(puVar4 + 4) = *param_3;
                    /* try { // try from 008ec77c to 008ec783 has its CatchHandler @ 008ec7f4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar4 + 5));
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = local_50;
    *pp_Var2 = (__tree_node_base *)puVar4;
    puVar3 = puVar4;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar3 = (undefined8 *)*pp_Var2;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar3);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (__tree_iterator)puVar4;
}


