// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DrawData
// Entry Point: 009f0cb8
// Size: 116 bytes
// Signature: undefined __thiscall ~DrawData(DrawData * this)


/* DeferredDebugRenderer::DrawData::~DrawData() */

void __thiscall DeferredDebugRenderer::DrawData::~DrawData(DrawData *this)

{
  void *pvVar1;
  
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


