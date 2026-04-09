// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 008781a8
// Size: 100 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<AnimalAnimationSystemSource,std::__ndk1::allocator<AnimalAnimationSystemSource>&> * this)


/* std::__ndk1::__split_buffer<AnimalAnimationSystemSource,
   std::__ndk1::allocator<AnimalAnimationSystemSource>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<AnimalAnimationSystemSource,std::__ndk1::allocator<AnimalAnimationSystemSource>&>::
~__split_buffer(__split_buffer<AnimalAnimationSystemSource,std::__ndk1::allocator<AnimalAnimationSystemSource>&>
                *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(AnimalAnimationSystemSource **)(this + 0x10) =
         (AnimalAnimationSystemSource *)(lVar2 + -0x3d20);
    AnimalAnimationSystemSource::~AnimalAnimationSystemSource
              ((AnimalAnimationSystemSource *)(lVar2 + -0x3d20));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


