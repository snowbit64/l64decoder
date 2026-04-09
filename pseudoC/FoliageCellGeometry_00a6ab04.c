// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FoliageCellGeometry
// Entry Point: 00a6ab04
// Size: 104 bytes
// Signature: undefined __thiscall ~FoliageCellGeometry(FoliageCellGeometry * this)


/* non-virtual thunk to FoliageCellGeometry::~FoliageCellGeometry() */

void __thiscall FoliageCellGeometry::~FoliageCellGeometry(FoliageCellGeometry *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__FoliageCellGeometry_00fe3c78;
  *(undefined ***)(this + -0x10) = &PTR__FoliageCellGeometry_00fe3c28;
  if (*(void **)(this + 0x90) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x90));
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
  Geometry::~Geometry((Geometry *)(this + -0x10));
  return;
}


