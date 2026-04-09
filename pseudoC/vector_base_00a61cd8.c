// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00a61cd8
// Size: 212 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>> * this)


/* std::__ndk1::__vector_base<FoliageLayerGraphics::State,
   std::__ndk1::allocator<FoliageLayerGraphics::State> >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>::
~__vector_base(__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
               *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar3 = *(void **)this;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar5 = pvVar3;
  pvVar4 = *(void **)(this + 8);
  if (*(void **)(this + 8) != pvVar3) {
    do {
      pvVar5 = *(void **)((long)pvVar4 + -0x20);
      if (pvVar5 != (void *)0x0) {
        pvVar1 = pvVar5;
        pvVar2 = *(void **)((long)pvVar4 + -0x18);
        if (*(void **)((long)pvVar4 + -0x18) != pvVar5) {
          do {
            pvVar1 = *(void **)((long)pvVar2 + -0x18);
            pvVar6 = (void *)((long)pvVar2 + -0x20);
            if (pvVar1 != (void *)0x0) {
              *(void **)((long)pvVar2 + -0x10) = pvVar1;
              operator_delete(pvVar1);
            }
            pvVar2 = pvVar6;
          } while (pvVar6 != pvVar5);
          pvVar1 = *(void **)((long)pvVar4 + -0x20);
        }
        *(void **)((long)pvVar4 + -0x18) = pvVar5;
        operator_delete(pvVar1);
      }
      pvVar5 = (void *)((long)pvVar4 + -0x58);
      if ((*(byte *)((long)pvVar4 + -0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x28));
      }
      pvVar4 = pvVar5;
    } while (pvVar5 != pvVar3);
    pvVar5 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar3;
  operator_delete(pvVar5);
  return;
}


