// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00878fac
// Size: 140 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>> * this)


/* std::__ndk1::__vector_base<AnimalSoundSystem::SoundGroup,
   std::__ndk1::allocator<AnimalSoundSystem::SoundGroup> >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>>::
~__vector_base(__vector_base<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>>
               *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar2;
  pvVar3 = *(void **)(this + 8);
  if (*(void **)(this + 8) != pvVar2) {
    do {
      pvVar1 = *(void **)((long)pvVar3 + -0x38);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x30) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = (void *)((long)pvVar3 + -0x58);
      if ((*(byte *)((long)pvVar3 + -0x50) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + -0x40));
      }
      pvVar3 = pvVar1;
    } while (pvVar1 != pvVar2);
    pvVar1 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar2;
  operator_delete(pvVar1);
  return;
}


