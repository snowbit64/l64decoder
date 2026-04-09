// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00866654
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>&> * this)


/* std::__ndk1::__split_buffer<ConditionalAnimationItem,
   std::__ndk1::allocator<ConditionalAnimationItem>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>&>::
~__split_buffer(__split_buffer<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>&>
                *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(ConditionalAnimationItem **)(this + 0x10) = (ConditionalAnimationItem *)(lVar2 + -0xf8);
    ConditionalAnimationItem::~ConditionalAnimationItem((ConditionalAnimationItem *)(lVar2 + -0xf8))
    ;
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


