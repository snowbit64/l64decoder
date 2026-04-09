// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00878624
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<AnimalAnimationSystem,std::__ndk1::allocator<AnimalAnimationSystem>&> * this)


/* std::__ndk1::__split_buffer<AnimalAnimationSystem,
   std::__ndk1::allocator<AnimalAnimationSystem>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<AnimalAnimationSystem,std::__ndk1::allocator<AnimalAnimationSystem>&>::
~__split_buffer(__split_buffer<AnimalAnimationSystem,std::__ndk1::allocator<AnimalAnimationSystem>&>
                *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(AnimalAnimationSystem **)(this + 0x10) = (AnimalAnimationSystem *)(lVar2 + -0x338);
    AnimalAnimationSystem::~AnimalAnimationSystem((AnimalAnimationSystem *)(lVar2 + -0x338));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


