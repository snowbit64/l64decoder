// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00a67c2c
// Size: 192 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> * this)


/* std::__ndk1::__vector_base<FoliageSystemDesc::Shape,
   std::__ndk1::allocator<FoliageSystemDesc::Shape> >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>::
~__vector_base(__vector_base<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
               *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar4 = pvVar2;
  pvVar3 = *(void **)(this + 8);
  if (*(void **)(this + 8) != pvVar2) {
    do {
      pvVar5 = *(void **)((long)pvVar3 + -0x18);
      pvVar4 = (void *)((long)pvVar3 + -0x20);
      if (pvVar5 != (void *)0x0) {
        pvVar6 = pvVar5;
        pvVar1 = *(void **)((long)pvVar3 + -0x10);
        if (*(void **)((long)pvVar3 + -0x10) != pvVar5) {
          do {
            pvVar6 = (void *)((long)pvVar1 + -0x40);
            if ((*(byte *)((long)pvVar1 + -0x38) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar1 + -0x28));
            }
            pvVar1 = pvVar6;
          } while (pvVar6 != pvVar5);
          pvVar6 = *(void **)((long)pvVar3 + -0x18);
        }
        *(void **)((long)pvVar3 + -0x10) = pvVar5;
        operator_delete(pvVar6);
      }
      pvVar3 = pvVar4;
    } while (pvVar4 != pvVar2);
    pvVar4 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar2;
  operator_delete(pvVar4);
  return;
}


