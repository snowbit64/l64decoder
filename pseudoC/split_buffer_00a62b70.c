// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00a62b70
// Size: 116 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<FoliageLayerGraphics::Layer,std::__ndk1::allocator<FoliageLayerGraphics::Layer>&> * this)


/* std::__ndk1::__split_buffer<FoliageLayerGraphics::Layer,
   std::__ndk1::allocator<FoliageLayerGraphics::Layer>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<FoliageLayerGraphics::Layer,std::__ndk1::allocator<FoliageLayerGraphics::Layer>&>::
~__split_buffer(__split_buffer<FoliageLayerGraphics::Layer,std::__ndk1::allocator<FoliageLayerGraphics::Layer>&>
                *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(long *)(this + 0x10) = lVar2 + -0x58;
    __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>::
    ~__vector_base((__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
                    *)(lVar2 + -0x28));
    if ((*(byte *)(lVar2 + -0x50) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x40));
    }
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


