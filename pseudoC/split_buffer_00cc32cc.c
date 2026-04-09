// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00cc32cc
// Size: 88 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>&> * this)


/* std::__ndk1::__split_buffer<CryptoPP::EC2NPoint,
   std::__ndk1::allocator<CryptoPP::EC2NPoint>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>&>::
~__split_buffer(__split_buffer<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>&>
                *this)

{
  long lVar1;
  long lVar2;
  code **ppcVar3;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    ppcVar3 = *(code ***)(undefined8 *)(lVar2 + -0x50);
    *(undefined8 **)(this + 0x10) = (undefined8 *)(lVar2 + -0x50);
    (**ppcVar3)();
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


