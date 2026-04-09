// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isVisible
// Entry Point: 00748e5c
// Size: 16 bytes
// Signature: undefined __thiscall isVisible(CharacterSet * this, uint param_1)


/* CharacterSet::isVisible(unsigned int) const */

uint __thiscall CharacterSet::isVisible(CharacterSet *this,uint param_1)

{
  return *(uint *)(this + (ulong)param_1 * 4 + 0x54) >> 1 & 1;
}


