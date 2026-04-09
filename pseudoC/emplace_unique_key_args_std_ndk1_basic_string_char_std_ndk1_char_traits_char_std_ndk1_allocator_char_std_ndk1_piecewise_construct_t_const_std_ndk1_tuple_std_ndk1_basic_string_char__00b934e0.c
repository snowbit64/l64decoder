// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
// Entry Point: 00b934e0
// Size: 220 bytes
// Signature: pair __cdecl __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>(basic_string * param_1, piecewise_construct_t * param_2, tuple * param_3, tuple * param_4)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Preprocessor::Macro*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Preprocessor::Macro*>, void*>*,
   long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Preprocessor::Macro*>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Preprocessor::Macro*>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Preprocessor::Macro*> >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>&&, std::__ndk1::tuple<>&&)
    */

pair std::__ndk1::
     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
     ::
     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
               (basic_string *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  long lVar1;
  __tree_node_base **pp_Var2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pp_Var2 = __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
                        *)param_1,&local_50,(basic_string *)param_2);
  puVar4 = (undefined8 *)*pp_Var2;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x40);
                    /* try { // try from 00b93540 to 00b93543 has its CatchHandler @ 00b935bc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar4 + 4));
    puVar4[7] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = local_50;
    *pp_Var2 = (__tree_node_base *)puVar4;
    puVar3 = puVar4;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      puVar3 = (undefined8 *)*pp_Var2;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 2),(__tree_node_base *)puVar3);
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (pair)puVar4;
}


