// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00af02d4
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<TextLine,std::__ndk1::allocator<TextLine>&> * this)


/* std::__ndk1::__split_buffer<TextLine, std::__ndk1::allocator<TextLine>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<TextLine,std::__ndk1::allocator<TextLine>&>::~__split_buffer
          (__split_buffer<TextLine,std::__ndk1::allocator<TextLine>&> *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(TextLine **)(this + 0x10) = (TextLine *)(lVar2 + -0x158);
    TextLine::~TextLine((TextLine *)(lVar2 + -0x158));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


