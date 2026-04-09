// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Precipitation
// Entry Point: 008db93c
// Size: 148 bytes
// Signature: undefined __thiscall ~Precipitation(Precipitation * this)


/* Precipitation::~Precipitation() */

void __thiscall Precipitation::~Precipitation(Precipitation *this)

{
  *(undefined ***)this = &PTR__Precipitation_00fde400;
  *(undefined ***)(this + 0x10) = &PTR__Precipitation_00fde460;
  *(undefined ***)(this + 0x58) = &PTR__Precipitation_00fde480;
  if (*(void **)(this + 0xa8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xa8));
  }
  if (*(long **)(this + 200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 200) + 8))();
  }
  if (*(long **)(this + 0xd0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd0) + 8))();
  }
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 8))();
  }
  Streamable::~Streamable((Streamable *)(this + 0x58));
  Geometry::~Geometry((Geometry *)this);
  return;
}


