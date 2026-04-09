// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeValueNoPalette
// Entry Point: 0085add0
// Size: 52 bytes
// Signature: undefined __cdecl writeValueNoPalette(ChunkedBitSquareChunk * param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* ChunkedBitSquareChunk::writeValueNoPalette(ChunkedBitSquareChunk*, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void ChunkedBitSquareChunk::writeValueNoPalette
               (ChunkedBitSquareChunk *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 + (byte)param_1[0x10] * param_2;
  uVar1 = uVar2 >> 3;
  uVar2 = uVar2 & 7;
  *(uint *)(param_1 + (ulong)uVar1 + 0x1c) =
       *(uint *)(param_1 + (ulong)uVar1 + 0x1c) & (param_4 << (ulong)uVar2 ^ 0xffffffff) |
       (param_5 & param_4) << (ulong)uVar2;
  return;
}


