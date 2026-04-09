// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFunction
// Entry Point: 00c54688
// Size: 80 bytes
// Signature: undefined __cdecl addFunction(char * param_1, IR_Function * param_2)


/* IR_TypeSet::addFunction(char const*, IR_Function*) */

void IR_TypeSet::addFunction(char *param_1,IR_Function *param_2)

{
  long lVar1;
  pair pVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IR_Function*>>>
          ::__emplace_unique_impl<std::__ndk1::pair<char_const*,IR_Function*>>
                    ((pair *)(param_1 + 0xdb8));
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pVar2);
}


