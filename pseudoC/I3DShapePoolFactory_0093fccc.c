// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~I3DShapePoolFactory
// Entry Point: 0093fccc
// Size: 88 bytes
// Signature: undefined __thiscall ~I3DShapePoolFactory(I3DShapePoolFactory * this)


/* I3DShapePoolFactory::~I3DShapePoolFactory() */

void __thiscall I3DShapePoolFactory::~I3DShapePoolFactory(I3DShapePoolFactory *this)

{
  void *pvVar1;
  
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


