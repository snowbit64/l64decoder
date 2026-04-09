// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00bea854
// Size: 124 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> * this)


/* std::__ndk1::__vector_base<CryptoPP::ECPPoint, std::__ndk1::allocator<CryptoPP::ECPPoint>
   >::~__vector_base() */

void __thiscall
std::__ndk1::__vector_base<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::
~__vector_base(__vector_base<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)this;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = *(undefined8 **)(this + 8);
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -0xe;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar3;
  operator_delete(puVar1);
  return;
}


