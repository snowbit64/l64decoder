// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TMMTriangle
// Entry Point: 00d53250
// Size: 16 bytes
// Signature: undefined __thiscall ~TMMTriangle(TMMTriangle * this)


/* HACD::TMMTriangle::~TMMTriangle() */

void __thiscall HACD::TMMTriangle::~TMMTriangle(TMMTriangle *this)

{
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xb8));
    return;
  }
  return;
}


