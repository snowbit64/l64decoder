// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00a68410
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>&> * this)


/* std::__ndk1::__split_buffer<FoliageSystemDesc::State,
   std::__ndk1::allocator<FoliageSystemDesc::State>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>&>::
~__split_buffer(__split_buffer<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>&>
                *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(State **)(this + 0x10) = (State *)(lVar2 + -0x68);
    FoliageSystemDesc::State::~State((State *)(lVar2 + -0x68));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


