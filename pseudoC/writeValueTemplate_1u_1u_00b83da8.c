// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeValueTemplate<1u,1u>
// Entry Point: 00b83da8
// Size: 256 bytes
// Signature: ChunkedBitSquareChunk * __cdecl writeValueTemplate<1u,1u>(ChunkedBitSquareChunk * param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* ChunkedBitSquareChunk* ChunkedBitSquareChunk::writeValueTemplate<1u, 1u>(ChunkedBitSquareChunk*,
   unsigned int, unsigned int, unsigned int, unsigned int) */

ChunkedBitSquareChunk *
ChunkedBitSquareChunk::writeValueTemplate<1u,1u>
          (ChunkedBitSquareChunk *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ChunkedBitSquareChunk CVar1;
  uint uVar2;
  uint uVar3;
  ChunkedBitSquareChunk *pCVar4;
  
  pCVar4 = param_1 + (ulong)(param_2 >> 3) + 0x1c;
  CVar1 = *pCVar4;
  uVar3 = (uint)*(ushort *)
                 ((long)(param_1 + 0x14) + ((ulong)((byte)CVar1 >> (param_2 & 7)) & 1) * 2) &
          (param_4 << (ulong)(param_3 & 0x1f) ^ 0xffffffff) |
          (param_5 & param_4) << (ulong)(param_3 & 0x1f);
  if (uVar3 == *(ushort *)(param_1 + 0x14)) {
    *pCVar4 = (ChunkedBitSquareChunk)((byte)CVar1 & ((byte)(1 << (param_2 & 7)) ^ 0xff));
  }
  else if (uVar3 == *(ushort *)(param_1 + 0x16)) {
    *pCVar4 = (ChunkedBitSquareChunk)((byte)CVar1 | (byte)(1 << (ulong)(param_2 & 7)));
  }
  else if (param_1[0x12] == (ChunkedBitSquareChunk)0x1) {
    *(short *)(param_1 + 0x16) = (short)uVar3;
    param_1[0x12] = (ChunkedBitSquareChunk)0x2;
    *pCVar4 = (ChunkedBitSquareChunk)((byte)CVar1 | '\x01' << (ulong)(param_2 & 7));
  }
  else {
    param_1 = (ChunkedBitSquareChunk *)expandChunkBpp(param_1,(byte)param_1[0x13] + 1);
    uVar3 = param_3 + (byte)param_1[0x10] * param_2;
    uVar2 = uVar3 >> 3;
    uVar3 = uVar3 & 7;
    *(uint *)(param_1 + (ulong)uVar2 + 0x1c) =
         *(uint *)(param_1 + (ulong)uVar2 + 0x1c) & (param_4 << (ulong)uVar3 ^ 0xffffffff) |
         (param_5 & param_4) << (ulong)uVar3;
  }
  return param_1;
}


