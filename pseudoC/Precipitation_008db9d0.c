// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Precipitation
// Entry Point: 008db9d0
// Size: 152 bytes
// Signature: undefined __thiscall ~Precipitation(Precipitation * this)


/* non-virtual thunk to Precipitation::~Precipitation() */

void __thiscall Precipitation::~Precipitation(Precipitation *this)

{
  *(undefined ***)this = &PTR__Precipitation_00fde460;
  *(undefined ***)(this + -0x10) = &PTR__Precipitation_00fde400;
  *(undefined ***)(this + 0x48) = &PTR__Precipitation_00fde480;
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x98));
  }
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 8))();
  }
  if (*(long **)(this + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc0) + 8))();
  }
  if (*(long **)(this + 200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 200) + 8))();
  }
  Streamable::~Streamable((Streamable *)(this + 0x48));
  Geometry::~Geometry((Geometry *)(this + -0x10));
  return;
}


