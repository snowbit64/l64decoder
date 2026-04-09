// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryWritePalettizedTemplate<0u>
// Entry Point: 00b841e0
// Size: 36 bytes
// Signature: bool __thiscall tryWritePalettizedTemplate<0u>(ChunkedBitSquareChunk * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* bool ChunkedBitSquareChunk::tryWritePalettizedTemplate<0u>(unsigned int, unsigned int, unsigned
   int, unsigned int) */

bool __thiscall
ChunkedBitSquareChunk::tryWritePalettizedTemplate<0u>
          (ChunkedBitSquareChunk *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  return ((uint)*(ushort *)(this + 0x14) & (param_3 << (ulong)(param_2 & 0x1f) ^ 0xffffffff) |
         (param_4 & param_3) << (ulong)(param_2 & 0x1f)) == (uint)*(ushort *)(this + 0x14);
}


