// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unload
// Entry Point: 00b855c4
// Size: 88 bytes
// Signature: undefined unload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DensityMap::unload() */

void DensityMap::unload(void)

{
  long in_x0;
  ChunkedBitSquare *this;
  BitVector *this_00;
  
  this = *(ChunkedBitSquare **)(in_x0 + 0x98);
  if (this != (ChunkedBitSquare *)0x0) {
    ChunkedBitSquare::~ChunkedBitSquare(this);
    operator_delete(this);
  }
  this_00 = *(BitVector **)(in_x0 + 0xa0);
  *(undefined8 *)(in_x0 + 0x98) = 0;
  if (this_00 != (BitVector *)0x0) {
    BitVector::~BitVector(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(in_x0 + 0xa0) = 0;
  *(undefined *)(in_x0 + 0x20) = 0;
  return;
}


