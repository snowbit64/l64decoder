// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempData
// Entry Point: 00a0a380
// Size: 148 bytes
// Signature: undefined __thiscall ~TempData(TempData * this)


/* RenderQueueItemAllocator::TempData::~TempData() */

void __thiscall RenderQueueItemAllocator::TempData::~TempData(TempData *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x90);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x98) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x78);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x60);
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
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


