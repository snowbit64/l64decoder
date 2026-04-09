// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readValueTemplate<1u>
// Entry Point: 00b83c54
// Size: 44 bytes
// Signature: uint __cdecl readValueTemplate<1u>(ChunkedBitSquareChunk * param_1, uint param_2, uint param_3, uint param_4)


/* unsigned int ChunkedBitSquareChunk::readValueTemplate<1u>(ChunkedBitSquareChunk const*, unsigned
   int, unsigned int, unsigned int) */

uint ChunkedBitSquareChunk::readValueTemplate<1u>
               (ChunkedBitSquareChunk *param_1,uint param_2,uint param_3,uint param_4)

{
  return *(ushort *)
          (param_1 +
          ((ulong)((byte)param_1[(ulong)(param_2 >> 3) + 0x1c] >> (param_2 & 7)) & 1) * 2 + 0x14) >>
         (ulong)(param_3 & 0x1f) & param_4;
}


