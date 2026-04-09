// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConditionalAnimationPlayer
// Entry Point: 00864108
// Size: 132 bytes
// Signature: undefined __thiscall ~ConditionalAnimationPlayer(ConditionalAnimationPlayer * this)


/* ConditionalAnimationPlayer::~ConditionalAnimationPlayer() */

void __thiscall
ConditionalAnimationPlayer::~ConditionalAnimationPlayer(ConditionalAnimationPlayer *this)

{
  ConditionalAnimationItem *pCVar1;
  ConditionalAnimationItem *this_00;
  ConditionalAnimationItem *pCVar2;
  
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>>>
             *)(this + 0x68),*(__tree_node **)(this + 0x70));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>>>
             *)(this + 0x50),*(__tree_node **)(this + 0x58));
  pCVar2 = *(ConditionalAnimationItem **)(this + 8);
  if (pCVar2 == (ConditionalAnimationItem *)0x0) {
    return;
  }
  this_00 = *(ConditionalAnimationItem **)(this + 0x10);
  pCVar1 = pCVar2;
  if (this_00 != pCVar2) {
    do {
      this_00 = this_00 + -0xf8;
      ConditionalAnimationItem::~ConditionalAnimationItem(this_00);
    } while (this_00 != pCVar2);
    pCVar1 = *(ConditionalAnimationItem **)(this + 8);
  }
  *(ConditionalAnimationItem **)(this + 0x10) = pCVar2;
  operator_delete(pCVar1);
  return;
}


