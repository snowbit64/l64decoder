// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MyVertexIndex
// Entry Point: 00ec27e8
// Size: 156 bytes
// Signature: undefined __thiscall ~MyVertexIndex(MyVertexIndex * this)


/* FLOAT_MATH::MyVertexIndex::~MyVertexIndex() */

void __thiscall FLOAT_MATH::MyVertexIndex::~MyVertexIndex(MyVertexIndex *this)

{
  void *pvVar1;
  void **ppvVar2;
  
  *(undefined8 *)(this + 0x30) = 0;
  pvVar1 = *(void **)(this + 0x60);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x48);
  *(undefined ***)this = &PTR_getIndex_01014588;
  *(undefined ***)(this + 0x20) = &PTR_getPositionDouble_01014618;
  *(void **)(this + 0x68) = pvVar1;
  ppvVar2 = (void **)*(void **)(this + 0x38);
  if (*(void **)(this + 0x38) != (void *)0x0) {
    do {
      pvVar1 = *ppvVar2;
      operator_delete(ppvVar2);
      ppvVar2 = (void **)pvVar1;
    } while (pvVar1 != (void *)0x0);
    pvVar1 = *(void **)(this + 0x60);
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


