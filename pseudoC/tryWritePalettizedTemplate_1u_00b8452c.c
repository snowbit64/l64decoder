// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryWritePalettizedTemplate<1u>
// Entry Point: 00b8452c
// Size: 160 bytes
// Signature: bool __thiscall tryWritePalettizedTemplate<1u>(ChunkedBitSquareChunk * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* bool ChunkedBitSquareChunk::tryWritePalettizedTemplate<1u>(unsigned int, unsigned int, unsigned
   int, unsigned int) */

bool __thiscall
ChunkedBitSquareChunk::tryWritePalettizedTemplate<1u>
          (ChunkedBitSquareChunk *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ChunkedBitSquareChunk CVar2;
  
  CVar2 = this[(ulong)(param_1 >> 3) + 0x1c];
  uVar1 = (uint)*(ushort *)((long)(this + 0x14) + ((ulong)((byte)CVar2 >> (param_1 & 7)) & 1) * 2) &
          (param_3 << (ulong)(param_2 & 0x1f) ^ 0xffffffff) |
          (param_4 & param_3) << (ulong)(param_2 & 0x1f);
  if (uVar1 == *(ushort *)(this + 0x14)) {
    CVar2 = (ChunkedBitSquareChunk)((byte)CVar2 & ((byte)(1 << (param_1 & 7)) ^ 0xff));
  }
  else if (uVar1 == *(ushort *)(this + 0x16)) {
    CVar2 = (ChunkedBitSquareChunk)((byte)CVar2 | (byte)(1 << (ulong)(param_1 & 7)));
  }
  else {
    if (this[0x12] != (ChunkedBitSquareChunk)0x1) {
      return false;
    }
    CVar2 = (ChunkedBitSquareChunk)((byte)CVar2 | '\x01' << (ulong)(param_1 & 7));
    *(short *)(this + 0x16) = (short)uVar1;
    this[0x12] = (ChunkedBitSquareChunk)0x2;
  }
  this[(ulong)(param_1 >> 3) + 0x1c] = CVar2;
  return true;
}


