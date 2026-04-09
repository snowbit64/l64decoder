// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FoliageCellGeometry
// Entry Point: 00a6aaa0
// Size: 100 bytes
// Signature: undefined __thiscall ~FoliageCellGeometry(FoliageCellGeometry * this)


/* FoliageCellGeometry::~FoliageCellGeometry() */

void __thiscall FoliageCellGeometry::~FoliageCellGeometry(FoliageCellGeometry *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__FoliageCellGeometry_00fe3c28;
  *(undefined ***)(this + 0x10) = &PTR__FoliageCellGeometry_00fe3c78;
  if (*(void **)(this + 0xa0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xa0));
  }
  pvVar1 = *(void **)(this + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x70);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar1;
    operator_delete(pvVar1);
  }
  Geometry::~Geometry((Geometry *)this);
  return;
}


