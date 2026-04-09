// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setHotspotMode
// Entry Point: 00bbd2d4
// Size: 80 bytes
// Signature: undefined setHotspotMode(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuaScriptProfiler::setHotspotMode() */

void LuaScriptProfiler::setHotspotMode(void)

{
  char *in_x0;
  __tree_node **pp_Var1;
  
  in_x0[3] = '\0';
  if (*in_x0 != '\0') {
    pp_Var1 = (__tree_node **)(in_x0 + 0x10);
    *in_x0 = '\0';
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
               *)(in_x0 + 8),*pp_Var1);
    *(__tree_node ***)(in_x0 + 8) = pp_Var1;
    *(undefined8 *)(in_x0 + 0x18) = 0;
    *pp_Var1 = (__tree_node *)0x0;
    *in_x0 = '\x01';
  }
  return;
}


