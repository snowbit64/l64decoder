// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DynamicGeometry
// Entry Point: 008d9c08
// Size: 72 bytes
// Signature: undefined __thiscall ~DynamicGeometry(DynamicGeometry * this)


/* DynamicGeometry::~DynamicGeometry() */

void __thiscall DynamicGeometry::~DynamicGeometry(DynamicGeometry *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x58);
  *(undefined ***)this = &PTR__DynamicGeometry_00fde300;
  *(undefined ***)(this + 0x10) = &PTR__DynamicGeometry_00fde350;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar1;
    operator_delete(pvVar1);
  }
  Geometry::~Geometry((Geometry *)this);
  return;
}


