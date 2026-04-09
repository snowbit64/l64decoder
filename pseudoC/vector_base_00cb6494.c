// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00cb6494
// Size: 140 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> * this)


/* std::__ndk1::__vector_base<CryptoPP::Integer, std::__ndk1::allocator<CryptoPP::Integer>
   >::~__vector_base() */

void __thiscall
std::__ndk1::__vector_base<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::
~__vector_base(__vector_base<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 == puVar2) {
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    return;
  }
  do {
    puVar1 = puVar1 + -6;
    (**(code **)*puVar1)(puVar1);
  } while (puVar1 != puVar2);
  *(undefined8 **)(this + 8) = puVar2;
  operator_delete(*(void **)this);
  return;
}


