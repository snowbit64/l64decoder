// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AnimalSharedContext
// Entry Point: 006fbb30
// Size: 48 bytes
// Signature: undefined __thiscall ~AnimalSharedContext(AnimalSharedContext * this)


/* AnimalSharedContext::~AnimalSharedContext() */

void __thiscall AnimalSharedContext::~AnimalSharedContext(AnimalSharedContext *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x538);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x540) = pvVar1;
    operator_delete(pvVar1);
  }
  BoundingAxisAlignedBox::~BoundingAxisAlignedBox((BoundingAxisAlignedBox *)(this + 0x78));
  return;
}


