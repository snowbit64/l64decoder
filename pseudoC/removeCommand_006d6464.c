// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCommand
// Entry Point: 006d6464
// Size: 404 bytes
// Signature: undefined __thiscall removeCommand(Console * this, char * param_1)


/* Console::removeCommand(char const*) */

void __thiscall Console::removeCommand(Console *this,char *param_1)

{
  __tree_node_base **this_00;
  long lVar1;
  __tree_iterator _Var2;
  size_t __n;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  __tree_node_base *p_Var6;
  void *__dest;
  ulong uVar7;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  __tree_node_base *p_Var3;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  this_00 = (__tree_node_base **)(this + 0x28);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_006d64fc;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_70 = uVar7 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_006d64fc:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 006d6500 to 006d650b has its CatchHandler @ 006d65f8 */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
                      *)this_00,(basic_string *)&local_70);
  p_Var3 = (__tree_node_base *)(ulong)_Var2;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (this + 0x30 != (Console *)p_Var3) {
    if (*(long **)(p_Var3 + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(p_Var3 + 0x38) + 8))();
    }
    pp_Var5 = *(__tree_node_base ***)(p_Var3 + 8);
    if (*(__tree_node_base ***)(p_Var3 + 8) == (__tree_node_base **)0x0) {
      pp_Var5 = (__tree_node_base **)(p_Var3 + 0x10);
      pp_Var4 = (__tree_node_base **)*pp_Var5;
      if (*pp_Var4 != p_Var3) {
        do {
          p_Var6 = *pp_Var5;
          pp_Var5 = (__tree_node_base **)(p_Var6 + 0x10);
          pp_Var4 = (__tree_node_base **)*pp_Var5;
        } while (*pp_Var4 != p_Var6);
      }
    }
    else {
      do {
        pp_Var4 = pp_Var5;
        pp_Var5 = (__tree_node_base **)*pp_Var4;
      } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
    }
    if (*this_00 == p_Var3) {
      *this_00 = (__tree_node_base *)pp_Var4;
    }
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),p_Var3);
    if (((byte)p_Var3[0x20] & 1) != 0) {
      operator_delete(*(void **)(p_Var3 + 0x30));
    }
    operator_delete(p_Var3);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


