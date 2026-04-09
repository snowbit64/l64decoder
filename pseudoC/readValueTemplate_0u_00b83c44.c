// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readValueTemplate<0u>
// Entry Point: 00b83c44
// Size: 16 bytes
// Signature: uint __cdecl readValueTemplate<0u>(ChunkedBitSquareChunk * param_1, uint param_2, uint param_3, uint param_4)


/* unsigned int ChunkedBitSquareChunk::readValueTemplate<0u>(ChunkedBitSquareChunk const*, unsigned
   int, unsigned int, unsigned int) */

uint ChunkedBitSquareChunk::readValueTemplate<0u>
               (ChunkedBitSquareChunk *param_1,uint param_2,uint param_3,uint param_4)

{
  return *(ushort *)(param_1 + 0x14) >> (ulong)(param_3 & 0x1f) & param_4;
}


