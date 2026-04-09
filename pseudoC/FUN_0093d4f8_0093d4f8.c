// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0093d4f8
// Entry Point: 0093d4f8
// Size: 152 bytes
// Signature: undefined FUN_0093d4f8(void)


void FUN_0093d4f8(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar1;
  pvVar2 = param_1[1];
  if (param_1[1] != pvVar1) {
    do {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 *)((long)pvVar2 + -0x18),*(__tree_node **)((long)pvVar2 + -0x10));
      if ((*(byte *)((long)pvVar2 + -0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x28));
      }
      pvVar3 = (void *)((long)pvVar2 + -0x50);
      if ((*(byte *)((long)pvVar2 + -0x50) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x40));
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    pvVar3 = *param_1;
  }
  param_1[1] = pvVar1;
  operator_delete(pvVar3);
  return;
}


