// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00a67a00
// Size: 124 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> * this)


/* std::__ndk1::__vector_base<FoliageSystemDesc::Lod, std::__ndk1::allocator<FoliageSystemDesc::Lod>
   >::~__vector_base() */

void __thiscall
std::__ndk1::__vector_base<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::
~__vector_base(__vector_base<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>
               *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar2;
  pvVar1 = *(void **)(this + 8);
  if (*(void **)(this + 8) != pvVar2) {
    do {
      pvVar3 = (void *)((long)pvVar1 + -0x40);
      if ((*(byte *)((long)pvVar1 + -0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar1 + -0x28));
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
    pvVar3 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar2;
  operator_delete(pvVar3);
  return;
}


