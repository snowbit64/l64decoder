// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GiantsAdPlacement
// Entry Point: 00af1abc
// Size: 44 bytes
// Signature: undefined __thiscall ~GiantsAdPlacement(GiantsAdPlacement * this)


/* GiantsAdPlacement::~GiantsAdPlacement() */

void __thiscall GiantsAdPlacement::~GiantsAdPlacement(GiantsAdPlacement *this)

{
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


