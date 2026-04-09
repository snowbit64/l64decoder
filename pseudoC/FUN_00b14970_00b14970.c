// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b14970
// Entry Point: 00b14970
// Size: 152 bytes
// Signature: undefined FUN_00b14970(void)


void FUN_00b14970(void **param_1)

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
      __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
      destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
               *)((long)pvVar2 + -0x40),*(__tree_node **)((long)pvVar2 + -0x38));
      if ((*(byte *)((long)pvVar2 + -0x58) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x48));
      }
      pvVar3 = (void *)((long)pvVar2 + -0x70);
      if ((*(byte *)((long)pvVar2 + -0x70) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x60));
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    pvVar3 = *param_1;
  }
  param_1[1] = pvVar1;
  operator_delete(pvVar3);
  return;
}


