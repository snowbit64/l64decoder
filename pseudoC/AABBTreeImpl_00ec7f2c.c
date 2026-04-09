// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AABBTreeImpl
// Entry Point: 00ec7f2c
// Size: 96 bytes
// Signature: undefined __thiscall ~AABBTreeImpl(AABBTreeImpl * this)


/* aabbtree::AABBTreeImpl::~AABBTreeImpl() */

void __thiscall aabbtree::AABBTreeImpl::~AABBTreeImpl(AABBTreeImpl *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x60);
  *(undefined ***)this = &PTR_raycast_01014780;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


