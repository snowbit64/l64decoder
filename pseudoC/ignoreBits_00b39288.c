// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ignoreBits
// Entry Point: 00b39288
// Size: 16 bytes
// Signature: undefined __thiscall ignoreBits(GsBitStream * this, uint param_1)


/* GsBitStream::ignoreBits(unsigned int) */

void __thiscall GsBitStream::ignoreBits(GsBitStream *this,uint param_1)

{
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + param_1;
  return;
}


