// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00a680e8
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>&> * this)


/* std::__ndk1::__split_buffer<FoliageSystemDesc::Layer,
   std::__ndk1::allocator<FoliageSystemDesc::Layer>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>&>::
~__split_buffer(__split_buffer<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>&>
                *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(Layer **)(this + 0x10) = (Layer *)(lVar2 + -0x70);
    FoliageSystemDesc::Layer::~Layer((Layer *)(lVar2 + -0x70));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


