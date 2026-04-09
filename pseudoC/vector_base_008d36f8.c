// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 008d36f8
// Size: 128 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>> * this)


/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned
   short> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> > > >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
::~__vector_base(__vector_base<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                 *this)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  ppvVar4 = *(void ***)this;
  if (ppvVar4 == (void **)0x0) {
    return;
  }
  ppvVar3 = *(void ***)(this + 8);
  ppvVar2 = ppvVar4;
  if (ppvVar3 != ppvVar4) {
    do {
      ppvVar2 = ppvVar3 + -3;
      pvVar1 = *ppvVar2;
      if (pvVar1 != (void *)0x0) {
        ppvVar3[-2] = pvVar1;
        operator_delete(pvVar1);
      }
      ppvVar3 = ppvVar2;
    } while (ppvVar2 != ppvVar4);
    ppvVar2 = *(void ***)this;
  }
  *(void ***)(this + 8) = ppvVar4;
  operator_delete(ppvVar2);
  return;
}


