// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00cd5c04
// Size: 128 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,std::__ndk1::allocator<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>>> * this)


/* std::__ndk1::__vector_base<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   std::__ndk1::allocator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> > >
   >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,std::__ndk1::allocator<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>>>
::~__vector_base(__vector_base<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,std::__ndk1::allocator<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>>>
                 *this)

{
  void **ppvVar1;
  void **ppvVar2;
  
  ppvVar1 = *(void ***)this;
  if (ppvVar1 == (void **)0x0) {
    return;
  }
  ppvVar2 = *(void ***)(this + 8);
  if (ppvVar2 == ppvVar1) {
    *(void ***)(this + 8) = ppvVar1;
    operator_delete(ppvVar1);
    return;
  }
  do {
    ppvVar2 = ppvVar2 + -3;
    if (*ppvVar2 != (void *)0x0) {
      operator_delete(*ppvVar2);
    }
  } while (ppvVar2 != ppvVar1);
  *(void ***)(this + 8) = ppvVar1;
  operator_delete(*(void **)this);
  return;
}


