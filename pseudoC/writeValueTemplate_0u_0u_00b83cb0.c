// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeValueTemplate<0u,0u>
// Entry Point: 00b83cb0
// Size: 128 bytes
// Signature: ChunkedBitSquareChunk * __cdecl writeValueTemplate<0u,0u>(ChunkedBitSquareChunk * param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* ChunkedBitSquareChunk* ChunkedBitSquareChunk::writeValueTemplate<0u, 0u>(ChunkedBitSquareChunk*,
   unsigned int, unsigned int, unsigned int, unsigned int) */

ChunkedBitSquareChunk *
ChunkedBitSquareChunk::writeValueTemplate<0u,0u>
          (ChunkedBitSquareChunk *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (((uint)*(ushort *)(param_1 + 0x14) & (param_4 << (ulong)(param_3 & 0x1f) ^ 0xffffffff) |
      (param_5 & param_4) << (ulong)(param_3 & 0x1f)) != (uint)*(ushort *)(param_1 + 0x14)) {
    param_1 = (ChunkedBitSquareChunk *)expandChunkBpp(param_1,(uint)(byte)param_1[0x13]);
    uVar2 = param_3 + (byte)param_1[0x10] * param_2;
    uVar1 = uVar2 >> 3;
    uVar2 = uVar2 & 7;
    *(uint *)(param_1 + (ulong)uVar1 + 0x1c) =
         *(uint *)(param_1 + (ulong)uVar1 + 0x1c) & (param_4 << (ulong)uVar2 ^ 0xffffffff) |
         (param_5 & param_4) << (ulong)uVar2;
  }
  return param_1;
}


