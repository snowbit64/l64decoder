// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
// Entry Point: 00c34fe4
// Size: 208 bytes
// Signature: __tree_iterator __cdecl __emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>(__tree_const_iterator param_1, basic_string * param_2, basic_string * param_3)


/* std::__ndk1::__tree_iterator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__tree_node<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >
   >::__emplace_hint_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>(std::__ndk1::__tree_const_iterator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__tree_node<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, void*>*, long>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

__tree_iterator
std::__ndk1::
__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
__emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
          (__tree_const_iterator param_1,basic_string *param_2,basic_string *param_3)

{
  long lVar1;
  long **this;
  __tree_node_base **pp_Var2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  __tree_node_base *p_Stack_58;
  __tree_end_node *local_50;
  long local_48;
  
  this = (long **)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pp_Var2 = __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                        *)this,(__tree_const_iterator)param_2,&local_50,&p_Stack_58,param_3);
  puVar4 = (undefined8 *)*pp_Var2;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x38);
                    /* try { // try from 00c3503c to 00c35043 has its CatchHandler @ 00c350b4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar4 + 4));
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = local_50;
    *pp_Var2 = (__tree_node_base *)puVar4;
    puVar3 = puVar4;
    if ((long *)**this != (long *)0x0) {
      *this = (long *)**this;
      puVar3 = (undefined8 *)*pp_Var2;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)this[1],(__tree_node_base *)puVar3);
    this[2] = (long *)((long)this[2] + 1);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (__tree_iterator)puVar4;
}


