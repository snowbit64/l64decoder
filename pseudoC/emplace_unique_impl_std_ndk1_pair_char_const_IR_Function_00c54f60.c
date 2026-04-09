// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_impl<std::__ndk1::pair<char_const*,IR_Function*>>
// Entry Point: 00c54f60
// Size: 232 bytes
// Signature: pair __cdecl __emplace_unique_impl<std::__ndk1::pair<char_const*,IR_Function*>>(pair * param_1)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, IR_Function*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, IR_Function*>, void*>*, long>,
   bool> std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, IR_Function*>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, IR_Function*>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, IR_Function*> >
   >::__emplace_unique_impl<std::__ndk1::pair<char const*, IR_Function*> >(std::__ndk1::pair<char
   const*, IR_Function*>&&) */

pair std::__ndk1::
     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>>>
     ::__emplace_unique_impl<std::__ndk1::pair<char_const*,IR_Function*>>(pair *param_1)

{
  long lVar1;
  __tree_node_base **pp_Var2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  __tree_end_node *local_58;
  undefined8 *local_50;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __construct_node<std::__ndk1::pair<char_const*,IR_Function*>>(param_1);
                    /* try { // try from 00c54f94 to 00c54f9f has its CatchHandler @ 00c55048 */
  pp_Var2 = __find_equal<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>>>
                        *)param_1,&local_58,(__value_type *)(local_50 + 4));
  puVar3 = local_50;
  puVar4 = (undefined8 *)*pp_Var2;
  if (puVar4 == (undefined8 *)0x0) {
    *local_50 = 0;
    local_50[1] = 0;
    local_50[2] = local_58;
    *pp_Var2 = (__tree_node_base *)local_50;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      puVar3 = (undefined8 *)*pp_Var2;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 2),(__tree_node_base *)puVar3);
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
    puVar4 = local_50;
  }
  else {
    local_50 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      if ((local_40 != '\0') && ((*(byte *)(puVar3 + 4) & 1) != 0)) {
        operator_delete((void *)puVar3[6]);
      }
      operator_delete(puVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (pair)puVar4;
}


