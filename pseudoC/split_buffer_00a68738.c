// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00a68738
// Size: 196 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>&> * this)


/* std::__ndk1::__split_buffer<FoliageSystemDesc::Shape,
   std::__ndk1::allocator<FoliageSystemDesc::Shape>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>&>::
~__split_buffer(__split_buffer<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>&>
                *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar4 = lVar2, lVar4 != lVar1) {
    while( true ) {
      pvVar5 = *(void **)(lVar4 + -0x18);
      *(long *)(this + 0x10) = lVar4 + -0x20;
      lVar2 = lVar4 + -0x20;
      if (pvVar5 == (void *)0x0) break;
      pvVar6 = pvVar5;
      pvVar3 = *(void **)(lVar4 + -0x10);
      if (*(void **)(lVar4 + -0x10) != pvVar5) {
        do {
          pvVar6 = (void *)((long)pvVar3 + -0x40);
          if ((*(byte *)((long)pvVar3 + -0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar3 + -0x28));
          }
          pvVar3 = pvVar6;
        } while (pvVar6 != pvVar5);
        pvVar6 = *(void **)(lVar4 + -0x18);
      }
      *(void **)(lVar4 + -0x10) = pvVar5;
      operator_delete(pvVar6);
      lVar4 = *(long *)(this + 0x10);
      if (lVar4 == lVar1) goto LAB_00a687cc;
    }
  }
LAB_00a687cc:
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


