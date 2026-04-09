// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~I3DUserAttributesFactory
// Entry Point: 0094473c
// Size: 24 bytes
// Signature: undefined __thiscall ~I3DUserAttributesFactory(I3DUserAttributesFactory * this)


/* I3DUserAttributesFactory::~I3DUserAttributesFactory() */

void __thiscall I3DUserAttributesFactory::~I3DUserAttributesFactory(I3DUserAttributesFactory *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


