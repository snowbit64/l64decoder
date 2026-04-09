// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00d4f014
// Size: 180 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>&> * this)


/* std::__ndk1::__split_buffer<HACD::GraphVertex,
   std::__ndk1::allocator<HACD::GraphVertex>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>&>::
~__split_buffer(__split_buffer<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>&> *this)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  while (lVar4 != lVar1) {
    plVar2 = *(long **)(lVar4 + -0xa0);
    *(long *)(this + 0x10) = lVar4 + -0x310;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (*(void **)(lVar4 + -0x18) != (void *)0x0) {
      operator_delete__(*(void **)(lVar4 + -0x18));
    }
    if (*(long *)(lVar4 + -200) != 0) {
      operator_delete__((void *)(*(long *)(lVar4 + -200) + -8));
    }
    pvVar3 = *(void **)(lVar4 + -0x260);
    if (pvVar3 != (void *)0x0) {
      *(void **)(lVar4 + -600) = pvVar3;
      operator_delete(pvVar3);
    }
    if (*(void **)(lVar4 + -0x280) != (void *)0x0) {
      operator_delete__(*(void **)(lVar4 + -0x280));
    }
    lVar4 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


