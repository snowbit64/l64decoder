// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00a61c5c
// Size: 124 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>> * this)


/* std::__ndk1::__vector_base<FoliageLayerGraphics::Shape,
   std::__ndk1::allocator<FoliageLayerGraphics::Shape> >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>::
~__vector_base(__vector_base<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>
               *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *(void **)this;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar3;
  pvVar2 = *(void **)(this + 8);
  if (*(void **)(this + 8) != pvVar3) {
    do {
      pvVar1 = *(void **)((long)pvVar2 + -0x18);
      pvVar4 = (void *)((long)pvVar2 + -0x20);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar2 + -0x10) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar2 = pvVar4;
    } while (pvVar4 != pvVar3);
    pvVar1 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar3;
  operator_delete(pvVar1);
  return;
}


