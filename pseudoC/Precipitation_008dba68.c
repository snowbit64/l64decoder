// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Precipitation
// Entry Point: 008dba68
// Size: 148 bytes
// Signature: undefined __thiscall ~Precipitation(Precipitation * this)


/* non-virtual thunk to Precipitation::~Precipitation() */

void __thiscall Precipitation::~Precipitation(Precipitation *this)

{
  *(undefined ***)(this + -0x58) = &PTR__Precipitation_00fde400;
  *(undefined ***)(this + -0x48) = &PTR__Precipitation_00fde460;
  *(undefined ***)this = &PTR__Precipitation_00fde480;
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  if (*(long **)(this + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x70) + 8))();
  }
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 8))();
  }
  if (*(long **)(this + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x80) + 8))();
  }
  Streamable::~Streamable((Streamable *)this);
  Geometry::~Geometry((Geometry *)(this + -0x58));
  return;
}


