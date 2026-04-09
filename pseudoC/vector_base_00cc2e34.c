// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00cc2e34
// Size: 208 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>,std::__ndk1::allocator<std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>>> * this)


/* std::__ndk1::__vector_base<std::__ndk1::vector<CryptoPP::EC2NPoint,
   std::__ndk1::allocator<CryptoPP::EC2NPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<CryptoPP::EC2NPoint,
   std::__ndk1::allocator<CryptoPP::EC2NPoint> > > >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>,std::__ndk1::allocator<std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>>>
::~__vector_base(__vector_base<std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>,std::__ndk1::allocator<std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>>>
                 *this)

{
  undefined8 *puVar1;
  void **ppvVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  void **ppvVar5;
  undefined8 *puVar6;
  
  ppvVar4 = *(void ***)this;
  if (ppvVar4 == (void **)0x0) {
    return;
  }
  ppvVar5 = *(void ***)(this + 8);
  ppvVar2 = ppvVar4;
  if (ppvVar5 != ppvVar4) {
    do {
      ppvVar2 = ppvVar5 + -3;
      puVar6 = (undefined8 *)*ppvVar2;
      if (puVar6 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)ppvVar5[-2];
        puVar1 = puVar6;
        if (puVar3 != puVar6) {
          do {
            puVar3 = puVar3 + -10;
            (**(code **)*puVar3)(puVar3);
          } while (puVar3 != puVar6);
          puVar1 = (undefined8 *)*ppvVar2;
        }
        ppvVar5[-2] = puVar6;
        operator_delete(puVar1);
      }
      ppvVar5 = ppvVar2;
    } while (ppvVar2 != ppvVar4);
    ppvVar2 = *(void ***)this;
  }
  *(void ***)(this + 8) = ppvVar4;
  operator_delete(ppvVar2);
  return;
}


