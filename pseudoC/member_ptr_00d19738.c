// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~member_ptr
// Entry Point: 00d19738
// Size: 64 bytes
// Signature: undefined __thiscall ~member_ptr(member_ptr<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>> * this)


/* CryptoPP::member_ptr<std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >
   >::~member_ptr() */

void __thiscall
CryptoPP::member_ptr<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>::
~member_ptr(member_ptr<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>
            *this)

{
  void *pvVar1;
  void **ppvVar2;
  
  ppvVar2 = *(void ***)this;
  if (ppvVar2 != (void **)0x0) {
    pvVar1 = *ppvVar2;
    if (pvVar1 != (void *)0x0) {
      ppvVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(ppvVar2);
    return;
  }
  return;
}


