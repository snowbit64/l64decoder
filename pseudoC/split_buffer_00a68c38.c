// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00a68c38
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<FoliageSystemDesc::MultiLayer,std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>&> * this)


/* std::__ndk1::__split_buffer<FoliageSystemDesc::MultiLayer,
   std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<FoliageSystemDesc::MultiLayer,std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>&>
::~__split_buffer(__split_buffer<FoliageSystemDesc::MultiLayer,std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>&>
                  *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(MultiLayer **)(this + 0x10) = (MultiLayer *)(lVar2 + -0x28);
    FoliageSystemDesc::MultiLayer::~MultiLayer((MultiLayer *)(lVar2 + -0x28));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


