// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOverlayType
// Entry Point: 00a9ae9c
// Size: 12 bytes
// Signature: undefined __cdecl getOverlayType(uint param_1)


/* Display2D::getOverlayType(unsigned int) const */

byte Display2D::getOverlayType(uint param_1)

{
  return *(byte *)((ulong)param_1 + 0x18) ^ 1;
}


