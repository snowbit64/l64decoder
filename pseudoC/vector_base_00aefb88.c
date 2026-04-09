// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00aefb88
// Size: 108 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<TextLine,std::__ndk1::allocator<TextLine>> * this)


/* std::__ndk1::__vector_base<TextLine, std::__ndk1::allocator<TextLine> >::~__vector_base() */

void __thiscall
std::__ndk1::__vector_base<TextLine,std::__ndk1::allocator<TextLine>>::~__vector_base
          (__vector_base<TextLine,std::__ndk1::allocator<TextLine>> *this)

{
  TextLine *pTVar1;
  TextLine *this_00;
  TextLine *pTVar2;
  
  pTVar2 = *(TextLine **)this;
  if (pTVar2 == (TextLine *)0x0) {
    return;
  }
  this_00 = *(TextLine **)(this + 8);
  pTVar1 = pTVar2;
  if (this_00 != pTVar2) {
    do {
      this_00 = this_00 + -0x158;
      TextLine::~TextLine(this_00);
    } while (this_00 != pTVar2);
    pTVar1 = *(TextLine **)this;
  }
  *(TextLine **)(this + 8) = pTVar2;
  operator_delete(pTVar1);
  return;
}


