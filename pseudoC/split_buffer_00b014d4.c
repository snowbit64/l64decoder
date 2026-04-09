// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00b014d4
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<ProfiledSection,std::__ndk1::allocator<ProfiledSection>&> * this)


/* std::__ndk1::__split_buffer<ProfiledSection,
   std::__ndk1::allocator<ProfiledSection>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<ProfiledSection,std::__ndk1::allocator<ProfiledSection>&>::
~__split_buffer(__split_buffer<ProfiledSection,std::__ndk1::allocator<ProfiledSection>&> *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(ProfiledSection **)(this + 0x10) = (ProfiledSection *)(lVar2 + -0x140);
    ProfiledSection::~ProfiledSection((ProfiledSection *)(lVar2 + -0x140));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


