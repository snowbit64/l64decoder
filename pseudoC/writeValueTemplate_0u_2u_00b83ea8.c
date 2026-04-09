// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeValueTemplate<0u,2u>
// Entry Point: 00b83ea8
// Size: 288 bytes
// Signature: ChunkedBitSquareChunk * __cdecl writeValueTemplate<0u,2u>(ChunkedBitSquareChunk * param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* ChunkedBitSquareChunk* ChunkedBitSquareChunk::writeValueTemplate<0u, 2u>(ChunkedBitSquareChunk*,
   unsigned int, unsigned int, unsigned int, unsigned int) */

ChunkedBitSquareChunk *
ChunkedBitSquareChunk::writeValueTemplate<0u,2u>
          (ChunkedBitSquareChunk *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  ChunkedBitSquareChunk *pCVar3;
  ChunkedBitSquareChunk CVar4;
  
  uVar1 = param_4 << (ulong)(param_3 & 0x1f);
  uVar2 = (param_5 & param_4) << (ulong)(param_3 & 0x1f);
  if (((uint)*(ushort *)(param_1 + 0x14) & (uVar1 ^ 0xffffffff) | uVar2) !=
      (uint)*(ushort *)(param_1 + 0x14)) {
    param_1 = (ChunkedBitSquareChunk *)expandChunkBpp(param_1,1);
    CVar4 = param_1[(ulong)(param_2 >> 3) + 0x1c];
    uVar2 = (uint)*(ushort *)
                   ((long)(param_1 + 0x14) + ((ulong)((byte)CVar4 >> (param_2 & 7)) & 1) * 2) &
            ~uVar1 | uVar2;
    if (uVar2 == *(ushort *)(param_1 + 0x14)) {
      CVar4 = (ChunkedBitSquareChunk)((byte)CVar4 & ((byte)(1 << (param_2 & 7)) ^ 0xff));
    }
    else if (uVar2 == *(ushort *)(param_1 + 0x16)) {
      CVar4 = (ChunkedBitSquareChunk)((byte)CVar4 | (byte)(1 << (ulong)(param_2 & 7)));
    }
    else {
      if (param_1[0x12] != (ChunkedBitSquareChunk)0x1) {
        pCVar3 = (ChunkedBitSquareChunk *)expandChunkBpp(param_1,2);
        pCVar3 = writeValueTemplate<2u,2u>(pCVar3,param_2,param_3,param_4,param_5);
        return pCVar3;
      }
      CVar4 = (ChunkedBitSquareChunk)((byte)CVar4 | '\x01' << (ulong)(param_2 & 7));
      *(short *)(param_1 + 0x16) = (short)uVar2;
      param_1[0x12] = (ChunkedBitSquareChunk)0x2;
    }
    param_1[(ulong)(param_2 >> 3) + 0x1c] = CVar4;
  }
  return param_1;
}


