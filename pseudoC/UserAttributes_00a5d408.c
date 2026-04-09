// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~UserAttributes
// Entry Point: 00a5d408
// Size: 164 bytes
// Signature: undefined __thiscall ~UserAttributes(UserAttributes * this)


/* UserAttributes::~UserAttributes() */

void __thiscall UserAttributes::~UserAttributes(UserAttributes *this)

{
  bool bVar1;
  UserAttributes **ppUVar2;
  UserAttributes *pUVar3;
  UserAttribute *this_00;
  UserAttributes **ppUVar4;
  
  ppUVar4 = *(UserAttributes ***)this;
  while (ppUVar4 != (UserAttributes **)(this + 8)) {
    this_00 = (UserAttribute *)ppUVar4[7];
    if (this_00 != (UserAttribute *)0x0) {
      UserAttribute::~UserAttribute(this_00);
      operator_delete(this_00);
    }
    ppUVar2 = (UserAttributes **)ppUVar4[1];
    if ((UserAttributes **)ppUVar4[1] == (UserAttributes **)0x0) {
      ppUVar2 = ppUVar4 + 2;
      bVar1 = *(UserAttributes ***)*ppUVar2 != ppUVar4;
      ppUVar4 = (UserAttributes **)*ppUVar2;
      if (bVar1) {
        do {
          pUVar3 = *ppUVar2;
          ppUVar2 = (UserAttributes **)(pUVar3 + 0x10);
          ppUVar4 = (UserAttributes **)*ppUVar2;
        } while (*ppUVar4 != pUVar3);
      }
    }
    else {
      do {
        ppUVar4 = ppUVar2;
        ppUVar2 = (UserAttributes **)*ppUVar4;
      } while ((UserAttributes **)*ppUVar4 != (UserAttributes **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
             *)this,*(__tree_node **)(this + 8));
  return;
}


