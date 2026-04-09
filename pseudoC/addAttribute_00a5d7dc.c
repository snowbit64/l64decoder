// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAttribute
// Entry Point: 00a5d7dc
// Size: 144 bytes
// Signature: undefined __thiscall addAttribute(UserAttributes * this, char * param_1, TYPE param_2)


/* UserAttributes::addAttribute(char const*, UserAttribute::TYPE) */

UserAttribute * __thiscall
UserAttributes::addAttribute(UserAttributes *this,char *param_1,TYPE param_2)

{
  long lVar1;
  pair pVar2;
  UserAttribute *pUVar3;
  UserAttribute *this_00;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pUVar3 = (UserAttribute *)getAttribute(this,param_1);
  this_00 = pUVar3;
  if (pUVar3 == (UserAttribute *)0x0) {
    this_00 = (UserAttribute *)operator_new(0x10);
                    /* try { // try from 00a5d824 to 00a5d82b has its CatchHandler @ 00a5d86c */
    UserAttribute::UserAttribute(this_00,param_2);
    pVar2 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
            ::__emplace_unique_impl<std::__ndk1::pair<char_const*,UserAttribute*>>((pair *)this);
    pUVar3 = (UserAttribute *)(ulong)pVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pUVar3);
}


