// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~I3DIndexedMeshSetFactory
// Entry Point: 009013d8
// Size: 104 bytes
// Signature: undefined __thiscall ~I3DIndexedMeshSetFactory(I3DIndexedMeshSetFactory * this)


/* I3DIndexedMeshSetFactory::~I3DIndexedMeshSetFactory() */

void __thiscall I3DIndexedMeshSetFactory::~I3DIndexedMeshSetFactory(I3DIndexedMeshSetFactory *this)

{
  void *pvVar1;
  
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


