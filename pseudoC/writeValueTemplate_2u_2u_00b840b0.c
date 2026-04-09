// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeValueTemplate<2u,2u>
// Entry Point: 00b840b0
// Size: 304 bytes
// Signature: ChunkedBitSquareChunk * __cdecl writeValueTemplate<2u,2u>(ChunkedBitSquareChunk * param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* ChunkedBitSquareChunk* ChunkedBitSquareChunk::writeValueTemplate<2u, 2u>(ChunkedBitSquareChunk*,
   unsigned int, unsigned int, unsigned int, unsigned int) */

ChunkedBitSquareChunk *
ChunkedBitSquareChunk::writeValueTemplate<2u,2u>
          (ChunkedBitSquareChunk *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ChunkedBitSquareChunk CVar1;
  ChunkedBitSquareChunk CVar2;
  uint uVar3;
  ChunkedBitSquareChunk *pCVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = (param_2 & 3) << 1;
  pCVar4 = param_1 + (ulong)(param_2 >> 2 & 0x1fffffff) + 0x1c;
  CVar1 = *pCVar4;
  uVar3 = (uint)*(ushort *)((long)(param_1 + 0x14) + ((ulong)((byte)CVar1 >> iVar5) & 3) * 2) &
          (param_4 << (ulong)(param_3 & 0x1f) ^ 0xffffffff) |
          (param_5 & param_4) << (ulong)(param_3 & 0x1f);
  uVar8 = (uint)*(ushort *)(param_1 + 0x1a);
  if (((uVar3 == *(ushort *)(param_1 + 0x14) || uVar3 == *(ushort *)(param_1 + 0x16)) ||
      uVar3 == *(ushort *)(param_1 + 0x18)) || uVar3 == uVar8) {
    uVar7 = 2;
    if (uVar3 != *(ushort *)(param_1 + 0x18) && uVar3 != uVar8) {
      uVar7 = 0;
    }
    uVar6 = (ulong)(uVar7 | (uVar3 == *(ushort *)(param_1 + 0x16) || uVar3 == uVar8));
  }
  else {
    CVar2 = param_1[0x12];
    uVar6 = (ulong)(byte)CVar2;
    if (3 < (byte)CVar2) {
      pCVar4 = (ChunkedBitSquareChunk *)expandChunkBpp(param_1,(byte)param_1[0x13] + 2);
      uVar3 = param_3 + (byte)pCVar4[0x10] * param_2;
      uVar8 = uVar3 >> 3;
      uVar3 = uVar3 & 7;
      *(uint *)(pCVar4 + (ulong)uVar8 + 0x1c) =
           *(uint *)(pCVar4 + (ulong)uVar8 + 0x1c) & (param_4 << (ulong)uVar3 ^ 0xffffffff) |
           (param_5 & param_4) << (ulong)uVar3;
      return pCVar4;
    }
    *(short *)(param_1 + uVar6 * 2 + 0x14) = (short)uVar3;
    CVar1 = *pCVar4;
    param_1[0x12] = (ChunkedBitSquareChunk)((char)CVar2 + 1);
  }
  *pCVar4 = (ChunkedBitSquareChunk)
            ((byte)((int)uVar6 << iVar5) | (byte)CVar1 & ((byte)(3 << iVar5) ^ 0xff));
  return param_1;
}


