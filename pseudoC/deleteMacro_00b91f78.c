// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteMacro
// Entry Point: 00b91f78
// Size: 228 bytes
// Signature: undefined __thiscall deleteMacro(Preprocessor * this, basic_string * param_1)


/* Preprocessor::deleteMacro(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall Preprocessor::deleteMacro(Preprocessor *this,basic_string *param_1)

{
  __tree_node_base **this_00;
  __tree_iterator _Var1;
  __tree_node_base **pp_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  Macro *this_01;
  __tree_node_base *p_Var2;
  
  this_00 = (__tree_node_base **)(this + 0x18);
  _Var1 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
                      *)this_00,param_1);
  p_Var2 = (__tree_node_base *)(ulong)_Var1;
  if (this + 0x20 == (Preprocessor *)p_Var2) {
    return;
  }
  this_01 = *(Macro **)(p_Var2 + 0x38);
  if (this_01 != (Macro *)0x0) {
    Macro::~Macro(this_01);
    operator_delete(this_01);
  }
  pp_Var4 = *(__tree_node_base ***)(p_Var2 + 8);
  if (*(__tree_node_base ***)(p_Var2 + 8) == (__tree_node_base **)0x0) {
    pp_Var4 = (__tree_node_base **)(p_Var2 + 0x10);
    pp_Var3 = (__tree_node_base **)*pp_Var4;
    if (*pp_Var3 != p_Var2) {
      do {
        p_Var5 = *pp_Var4;
        pp_Var4 = (__tree_node_base **)(p_Var5 + 0x10);
        pp_Var3 = (__tree_node_base **)*pp_Var4;
      } while (*pp_Var3 != p_Var5);
    }
  }
  else {
    do {
      pp_Var3 = pp_Var4;
      pp_Var4 = (__tree_node_base **)*pp_Var3;
    } while ((__tree_node_base **)*pp_Var3 != (__tree_node_base **)0x0);
  }
  if (*this_00 == p_Var2) {
    *this_00 = (__tree_node_base *)pp_Var3;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x20),p_Var2);
  if (((byte)p_Var2[0x20] & 1) != 0) {
    operator_delete(*(void **)(p_Var2 + 0x30));
  }
  operator_delete(p_Var2);
  return;
}


