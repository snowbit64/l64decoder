// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b87734
// Size: 20 bytes
// Signature: undefined __cdecl update(float param_1)


/* DensityMap::update(float) */

void DensityMap::update(float param_1)

{
  long in_x0;
  
  if (*(ChunkedBitSquare **)(in_x0 + 0x98) != (ChunkedBitSquare *)0x0) {
    ChunkedBitSquare::updateCompaction(*(ChunkedBitSquare **)(in_x0 + 0x98),1);
    return;
  }
  return;
}


