// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00bf3ad4
// Entry Point: 00bf3ad4
// Size: 72 bytes
// Signature: undefined FUN_00bf3ad4(void)


void FUN_00bf3ad4(void **param_1)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
                    /* try { // try from 00bf3afc to 00bf3aff has its CatchHandler @ 00bf3b1c */
      std::__ndk1::
      allocator_traits<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,void*>>>
      ::
      destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>>
                ((allocator *)param_1[1],(pair *)((long)pvVar1 + 0x20));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


