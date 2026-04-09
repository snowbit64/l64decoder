// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLayer
// Entry Point: 006f3a28
// Size: 8 bytes
// Signature: undefined __thiscall setLayer(Overlay * this, uint param_1)


/* Overlay::setLayer(unsigned int) */

void __thiscall Overlay::setLayer(Overlay *this,uint param_1)

{
  *(uint *)(this + 0x50) = param_1;
  return;
}


