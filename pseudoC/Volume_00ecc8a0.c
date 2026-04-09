// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Volume
// Entry Point: 00ecc8a0
// Size: 16 bytes
// Signature: undefined __thiscall ~Volume(Volume * this)


/* VHACD::Volume::~Volume() */

void __thiscall VHACD::Volume::~Volume(Volume *this)

{
  if (*(void **)(this + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x70));
    return;
  }
  return;
}


