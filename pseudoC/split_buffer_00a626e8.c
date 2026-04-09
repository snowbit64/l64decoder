// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00a626e8
// Size: 196 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>&> * this)


/* std::__ndk1::__split_buffer<FoliageLayerGraphics::State,
   std::__ndk1::allocator<FoliageLayerGraphics::State>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>&>::
~__split_buffer(__split_buffer<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>&>
                *this)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  lVar1 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  while (lVar4 != lVar1) {
    pvVar5 = *(void **)(lVar4 + -0x20);
    *(long *)(this + 0x10) = lVar4 + -0x58;
    if (pvVar5 != (void *)0x0) {
      pvVar2 = pvVar5;
      pvVar3 = *(void **)(lVar4 + -0x18);
      if (*(void **)(lVar4 + -0x18) != pvVar5) {
        do {
          pvVar2 = *(void **)((long)pvVar3 + -0x18);
          pvVar6 = (void *)((long)pvVar3 + -0x20);
          if (pvVar2 != (void *)0x0) {
            *(void **)((long)pvVar3 + -0x10) = pvVar2;
            operator_delete(pvVar2);
          }
          pvVar3 = pvVar6;
        } while (pvVar6 != pvVar5);
        pvVar2 = *(void **)(lVar4 + -0x20);
      }
      *(void **)(lVar4 + -0x18) = pvVar5;
      operator_delete(pvVar2);
    }
    if ((*(byte *)(lVar4 + -0x38) & 1) != 0) {
      operator_delete(*(void **)(lVar4 + -0x28));
    }
    lVar4 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


