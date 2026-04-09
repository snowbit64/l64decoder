// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00711374
// Size: 124 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>&> * this)


/* std::__ndk1::__split_buffer<AnimalSoundSystem::SoundGroup,
   std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>&>
::~__split_buffer(__split_buffer<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>&>
                  *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 8);
  lVar3 = *(long *)(this + 0x10);
  while (lVar3 != lVar1) {
    pvVar2 = *(void **)(lVar3 + -0x38);
    *(long *)(this + 0x10) = lVar3 + -0x58;
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x30) = pvVar2;
      operator_delete(pvVar2);
    }
    if ((*(byte *)(lVar3 + -0x50) & 1) != 0) {
      operator_delete(*(void **)(lVar3 + -0x40));
    }
    lVar3 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


