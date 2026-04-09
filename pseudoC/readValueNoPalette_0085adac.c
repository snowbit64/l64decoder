// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readValueNoPalette
// Entry Point: 0085adac
// Size: 36 bytes
// Signature: undefined __cdecl readValueNoPalette(ChunkedBitSquareChunk * param_1, uint param_2, uint param_3, uint param_4)


/* ChunkedBitSquareChunk::readValueNoPalette(ChunkedBitSquareChunk const*, unsigned int, unsigned
   int, unsigned int) */

uint ChunkedBitSquareChunk::readValueNoPalette
               (ChunkedBitSquareChunk *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_3 + (byte)param_1[0x10] * param_2;
  return *(uint *)(param_1 + (ulong)(uVar1 >> 3) + 0x1c) >> (ulong)(uVar1 & 7) & param_4;
}


