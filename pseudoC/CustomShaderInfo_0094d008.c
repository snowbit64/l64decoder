// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CustomShaderInfo
// Entry Point: 0094d008
// Size: 232 bytes
// Signature: undefined __thiscall ~CustomShaderInfo(CustomShaderInfo * this)


/* MaterialShaderManager::CustomShaderInfo::~CustomShaderInfo() */

void __thiscall MaterialShaderManager::CustomShaderInfo::~CustomShaderInfo(CustomShaderInfo *this)

{
  CustomShaderInfo CVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (((byte)this[0x80] & 1) == 0) {
    CVar1 = this[0x68];
  }
  else {
    operator_delete(*(void **)(this + 0x90));
    CVar1 = this[0x68];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    CVar1 = this[0x50];
  }
  if (((byte)CVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)(this + 0x38),*(__tree_node **)(this + 0x40));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar4 = pvVar2;
  pvVar3 = *(void **)(this + 0x10);
  if (*(void **)(this + 0x10) != pvVar2) {
    do {
      if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + -8));
      }
      pvVar4 = (void *)((long)pvVar3 + -0x30);
      if ((*(byte *)((long)pvVar3 + -0x30) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + -0x20));
      }
      pvVar3 = pvVar4;
    } while (pvVar4 != pvVar2);
    pvVar4 = *(void **)(this + 8);
  }
  *(void **)(this + 0x10) = pvVar2;
  operator_delete(pvVar4);
  return;
}


