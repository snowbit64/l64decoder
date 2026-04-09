// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00878b8c
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<AnimalSoundSystem,std::__ndk1::allocator<AnimalSoundSystem>&> * this)


/* std::__ndk1::__split_buffer<AnimalSoundSystem,
   std::__ndk1::allocator<AnimalSoundSystem>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<AnimalSoundSystem,std::__ndk1::allocator<AnimalSoundSystem>&>::
~__split_buffer(__split_buffer<AnimalSoundSystem,std::__ndk1::allocator<AnimalSoundSystem>&> *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(AnimalSoundSystem **)(this + 0x10) = (AnimalSoundSystem *)(lVar2 + -0x58);
    AnimalSoundSystem::~AnimalSoundSystem((AnimalSoundSystem *)(lVar2 + -0x58));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


