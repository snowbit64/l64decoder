// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConditionalAnimationEntity
// Entry Point: 008641f0
// Size: 152 bytes
// Signature: undefined __thiscall ~ConditionalAnimationEntity(ConditionalAnimationEntity * this)


/* ConditionalAnimationEntity::~ConditionalAnimationEntity() */

void __thiscall
ConditionalAnimationEntity::~ConditionalAnimationEntity(ConditionalAnimationEntity *this)

{
  ConditionalAnimationItem *pCVar1;
  ConditionalAnimationItem *this_00;
  ConditionalAnimationItem *pCVar2;
  
  *(undefined ***)this = &PTR__ConditionalAnimationEntity_00fdbe48;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>>>
             *)(this + 0xa8),*(__tree_node **)(this + 0xb0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>>>
             *)(this + 0x88),*(__tree_node **)(this + 0x90));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>>>
             *)(this + 0x70),*(__tree_node **)(this + 0x78));
  pCVar2 = *(ConditionalAnimationItem **)(this + 0x28);
  if (pCVar2 != (ConditionalAnimationItem *)0x0) {
    this_00 = *(ConditionalAnimationItem **)(this + 0x30);
    pCVar1 = pCVar2;
    if (this_00 != pCVar2) {
      do {
        this_00 = this_00 + -0xf8;
        ConditionalAnimationItem::~ConditionalAnimationItem(this_00);
      } while (this_00 != pCVar2);
      pCVar1 = *(ConditionalAnimationItem **)(this + 0x28);
    }
    *(ConditionalAnimationItem **)(this + 0x30) = pCVar2;
    operator_delete(pCVar1);
  }
  Entity::~Entity((Entity *)this);
  return;
}


