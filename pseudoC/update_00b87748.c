// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b87748
// Size: 20 bytes
// Signature: undefined __thiscall update(DensityMap * this, float param_1)


/* non-virtual thunk to DensityMap::update(float) */

void __thiscall DensityMap::update(DensityMap *this,float param_1)

{
  if (*(ChunkedBitSquare **)(this + 0x50) != (ChunkedBitSquare *)0x0) {
    ChunkedBitSquare::updateCompaction(*(ChunkedBitSquare **)(this + 0x50),1);
    return;
  }
  return;
}


