// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FoliageCellGeometry
// Entry Point: 00a6abd8
// Size: 112 bytes
// Signature: undefined __thiscall ~FoliageCellGeometry(FoliageCellGeometry * this)


/* non-virtual thunk to FoliageCellGeometry::~FoliageCellGeometry() */

void __thiscall FoliageCellGeometry::~FoliageCellGeometry(FoliageCellGeometry *this)

{
  void *pvVar1;
  undefined8 *this_00;
  
  *(undefined ***)this = &PTR__FoliageCellGeometry_00fe3c78;
  this_00 = (undefined8 *)(this + -0x10);
  *this_00 = &PTR__FoliageCellGeometry_00fe3c28;
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
  Geometry::~Geometry((Geometry *)this_00);
  operator_delete(this_00);
  return;
}


