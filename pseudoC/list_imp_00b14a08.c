// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__list_imp
// Entry Point: 00b14a08
// Size: 92 bytes
// Signature: undefined __thiscall ~__list_imp(__list_imp<unsigned_char,std::__ndk1::allocator<unsigned_char>> * this)


/* std::__ndk1::__list_imp<unsigned char, std::__ndk1::allocator<unsigned char> >::~__list_imp() */

void __thiscall
std::__ndk1::__list_imp<unsigned_char,std::__ndk1::allocator<unsigned_char>>::~__list_imp
          (__list_imp<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (*(long *)(this + 0x10) != 0) {
    lVar1 = *(long *)this;
    plVar2 = *(long **)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    while (plVar2 != (long *)this) {
      plVar4 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  return;
}


