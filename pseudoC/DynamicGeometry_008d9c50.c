// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DynamicGeometry
// Entry Point: 008d9c50
// Size: 76 bytes
// Signature: undefined __thiscall ~DynamicGeometry(DynamicGeometry * this)


/* non-virtual thunk to DynamicGeometry::~DynamicGeometry() */

void __thiscall DynamicGeometry::~DynamicGeometry(DynamicGeometry *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x48);
  *(undefined ***)this = &PTR__DynamicGeometry_00fde350;
  *(undefined ***)(this + -0x10) = &PTR__DynamicGeometry_00fde300;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar1;
    operator_delete(pvVar1);
  }
  Geometry::~Geometry((Geometry *)(this + -0x10));
  return;
}


