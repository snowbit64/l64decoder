// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BtSerializerWrapper
// Entry Point: 00bafe28
// Size: 172 bytes
// Signature: undefined __thiscall ~BtSerializerWrapper(BtSerializerWrapper * this)


/* Bt2PhysicsSerialization::BtSerializerWrapper::~BtSerializerWrapper() */

void __thiscall
Bt2PhysicsSerialization::BtSerializerWrapper::~BtSerializerWrapper(BtSerializerWrapper *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(this + 8);
  *(undefined ***)this = &PTR__BtSerializerWrapper_00feb0f8;
  if (*(long *)(this + 0x10) != lVar2) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(lVar2 + uVar4 * 8);
      if (*(void **)(lVar3 + 8) != (void *)0x0) {
        operator_delete__(*(void **)(lVar3 + 8));
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(lVar2 + uVar4 * 8);
      }
      *(undefined8 *)(lVar3 + 8) = 0;
      pvVar1 = *(void **)(lVar2 + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        lVar2 = *(long *)(this + 8);
      }
      *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = (ulong)((int)uVar4 + 1);
      lVar2 = *(long *)(this + 8);
    } while (uVar4 < (ulong)(*(long *)(this + 0x10) - lVar2 >> 3));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<void*,btChunk*>,std::__ndk1::__map_value_compare<void*,std::__ndk1::__value_type<void*,btChunk*>,std::__ndk1::less<void*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<void*,btChunk*>>>
  ::destroy((__tree<std::__ndk1::__value_type<void*,btChunk*>,std::__ndk1::__map_value_compare<void*,std::__ndk1::__value_type<void*,btChunk*>,std::__ndk1::less<void*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<void*,btChunk*>>>
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


