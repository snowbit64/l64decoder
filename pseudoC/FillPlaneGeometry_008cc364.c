// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FillPlaneGeometry
// Entry Point: 008cc364
// Size: 244 bytes
// Signature: undefined __thiscall ~FillPlaneGeometry(FillPlaneGeometry * this)


/* FillPlaneGeometry::~FillPlaneGeometry() */

void __thiscall FillPlaneGeometry::~FillPlaneGeometry(FillPlaneGeometry *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__FillPlaneGeometry_00fde040;
  *(undefined ***)(this + 0x10) = &PTR__FillPlaneGeometry_00fde090;
  if (*(long **)(this + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x188) + 8))();
  }
  if (*(long **)(this + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x70) + 8))();
  }
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 8))();
  }
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  pvVar1 = *(void **)(this + 0x170);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x178) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x158);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x160) = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(void **)(this + 0x140) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x140));
  }
  pvVar1 = *(void **)(this + 0xf8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x100) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xe0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xe8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 200);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xb0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar1;
    operator_delete(pvVar1);
  }
  Geometry::~Geometry((Geometry *)this);
  return;
}


