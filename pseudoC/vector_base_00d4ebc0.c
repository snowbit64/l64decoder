// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00d4ebc0
// Size: 212 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>> * this)


/* std::__ndk1::__vector_base<HACD::GraphVertex, std::__ndk1::allocator<HACD::GraphVertex>
   >::~__vector_base() */

void __thiscall
std::__ndk1::__vector_base<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>>::
~__vector_base(__vector_base<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>> *this)

{
  void *pvVar1;
  void **ppvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *(void **)this;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar4 = *(void **)(this + 8);
  if (pvVar4 == pvVar3) {
    *(void **)(this + 8) = pvVar3;
    operator_delete(pvVar3);
    return;
  }
  do {
    if (*(long **)((long)pvVar4 + -0xa0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + -0xa0) + 8))();
    }
    if (*(void **)((long)pvVar4 + -0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar4 + -0x18));
    }
    if (*(long *)((long)pvVar4 + -200) != 0) {
      operator_delete__((void *)(*(long *)((long)pvVar4 + -200) + -8));
    }
    pvVar1 = *(void **)((long)pvVar4 + -0x260);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar4 + -600) = pvVar1;
      operator_delete(pvVar1);
    }
    ppvVar2 = (void **)((long)pvVar4 + -0x280);
    pvVar4 = (void *)((long)pvVar4 + -0x310);
    if (*ppvVar2 != (void *)0x0) {
      operator_delete__(*ppvVar2);
    }
  } while (pvVar4 != pvVar3);
  *(void **)(this + 8) = pvVar3;
  operator_delete(*(void **)this);
  return;
}


