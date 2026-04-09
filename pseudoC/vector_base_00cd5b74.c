// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00cd5b74
// Size: 144 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>> * this)


/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int>
   >, std::__ndk1::allocator<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int>
   > > >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
::~__vector_base(__vector_base<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
                 *this)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  ppvVar3 = *(void ***)this;
  if (ppvVar3 == (void **)0x0) {
    return;
  }
  ppvVar2 = *(void ***)(this + 8);
  if (ppvVar2 == ppvVar3) {
    *(void ***)(this + 8) = ppvVar3;
    operator_delete(ppvVar3);
    return;
  }
  do {
    ppvVar4 = ppvVar2 + -3;
    pvVar1 = *ppvVar4;
    if (pvVar1 != (void *)0x0) {
      ppvVar2[-2] = pvVar1;
      operator_delete(pvVar1);
    }
    ppvVar2 = ppvVar4;
  } while (ppvVar4 != ppvVar3);
  *(void ***)(this + 8) = ppvVar3;
  operator_delete(*(void **)this);
  return;
}


