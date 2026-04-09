// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00877b30
// Size: 140 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>&> * this)


/* std::__ndk1::__split_buffer<ObstacleAvoidance,
   std::__ndk1::allocator<ObstacleAvoidance>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>&>::
~__split_buffer(__split_buffer<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>&> *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 8);
  lVar3 = *(long *)(this + 0x10);
  while (lVar3 != lVar1) {
    pvVar2 = *(void **)(lVar3 + -0x28);
    *(void ***)(this + 0x10) = (void **)(lVar3 + -0x58);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x20) = pvVar2;
      operator_delete(pvVar2);
    }
    pvVar2 = *(void **)(lVar3 + -0x40);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x38) = pvVar2;
      operator_delete(pvVar2);
    }
    pvVar2 = *(void **)(lVar3 + -0x58);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x50) = pvVar2;
      operator_delete(pvVar2);
    }
    lVar3 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


