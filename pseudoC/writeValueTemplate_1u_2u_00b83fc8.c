// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeValueTemplate<1u,2u>
// Entry Point: 00b83fc8
// Size: 232 bytes
// Signature: ChunkedBitSquareChunk * __cdecl writeValueTemplate<1u,2u>(ChunkedBitSquareChunk * param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* ChunkedBitSquareChunk* ChunkedBitSquareChunk::writeValueTemplate<1u, 2u>(ChunkedBitSquareChunk*,
   unsigned int, unsigned int, unsigned int, unsigned int) */

ChunkedBitSquareChunk *
ChunkedBitSquareChunk::writeValueTemplate<1u,2u>
          (ChunkedBitSquareChunk *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ChunkedBitSquareChunk *pCVar2;
  ChunkedBitSquareChunk CVar3;
  
  CVar3 = param_1[(ulong)(param_2 >> 3) + 0x1c];
  uVar1 = (uint)*(ushort *)
                 ((long)(param_1 + 0x14) + ((ulong)((byte)CVar3 >> (param_2 & 7)) & 1) * 2) &
          (param_4 << (ulong)(param_3 & 0x1f) ^ 0xffffffff) |
          (param_5 & param_4) << (ulong)(param_3 & 0x1f);
  if (uVar1 == *(ushort *)(param_1 + 0x14)) {
    CVar3 = (ChunkedBitSquareChunk)((byte)CVar3 & ((byte)(1 << (param_2 & 7)) ^ 0xff));
  }
  else if (uVar1 == *(ushort *)(param_1 + 0x16)) {
    CVar3 = (ChunkedBitSquareChunk)((byte)CVar3 | (byte)(1 << (ulong)(param_2 & 7)));
  }
  else {
    if (param_1[0x12] != (ChunkedBitSquareChunk)0x1) {
      pCVar2 = (ChunkedBitSquareChunk *)expandChunkBpp(param_1,2);
      pCVar2 = writeValueTemplate<2u,2u>(pCVar2,param_2,param_3,param_4,param_5);
      return pCVar2;
    }
    CVar3 = (ChunkedBitSquareChunk)((byte)CVar3 | '\x01' << (ulong)(param_2 & 7));
    *(short *)(param_1 + 0x16) = (short)uVar1;
    param_1[0x12] = (ChunkedBitSquareChunk)0x2;
  }
  param_1[(ulong)(param_2 >> 3) + 0x1c] = CVar3;
  return param_1;
}


