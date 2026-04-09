// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setChannels
// Entry Point: 00e3a98c
// Size: 44 bytes
// Signature: undefined __thiscall setChannels(Bus * this, uint param_1)


/* SoLoud::Bus::setChannels(unsigned int) */

undefined8 __thiscall SoLoud::Bus::setChannels(Bus *this,uint param_1)

{
  if ((param_1 < 9) && ((param_1 == 8 || ((0xa9U >> (ulong)(param_1 & 0x1f) & 1) == 0)))) {
    *(uint *)(this + 0x18) = param_1;
    return 0;
  }
  return 1;
}


