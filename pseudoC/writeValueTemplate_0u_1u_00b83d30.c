// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeValueTemplate<0u,1u>
// Entry Point: 00b83d30
// Size: 120 bytes
// Signature: ChunkedBitSquareChunk * __cdecl writeValueTemplate<0u,1u>(ChunkedBitSquareChunk * param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* ChunkedBitSquareChunk* ChunkedBitSquareChunk::writeValueTemplate<0u, 1u>(ChunkedBitSquareChunk*,
   unsigned int, unsigned int, unsigned int, unsigned int) */

ChunkedBitSquareChunk *
ChunkedBitSquareChunk::writeValueTemplate<0u,1u>
          (ChunkedBitSquareChunk *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ChunkedBitSquareChunk *pCVar1;
  
  if (((uint)*(ushort *)(param_1 + 0x14) & (param_4 << (ulong)(param_3 & 0x1f) ^ 0xffffffff) |
      (param_5 & param_4) << (ulong)(param_3 & 0x1f)) == (uint)*(ushort *)(param_1 + 0x14)) {
    return param_1;
  }
  pCVar1 = (ChunkedBitSquareChunk *)expandChunkBpp(param_1,1);
  pCVar1 = writeValueTemplate<1u,1u>(pCVar1,param_2,param_3,param_4,param_5);
  return pCVar1;
}


