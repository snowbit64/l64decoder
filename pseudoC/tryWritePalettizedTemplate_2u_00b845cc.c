// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryWritePalettizedTemplate<2u>
// Entry Point: 00b845cc
// Size: 216 bytes
// Signature: bool __thiscall tryWritePalettizedTemplate<2u>(ChunkedBitSquareChunk * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* bool ChunkedBitSquareChunk::tryWritePalettizedTemplate<2u>(unsigned int, unsigned int, unsigned
   int, unsigned int) */

bool __thiscall
ChunkedBitSquareChunk::tryWritePalettizedTemplate<2u>
          (ChunkedBitSquareChunk *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  ChunkedBitSquareChunk CVar1;
  ChunkedBitSquareChunk CVar2;
  uint uVar3;
  ChunkedBitSquareChunk *pCVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = (param_1 & 3) << 1;
  pCVar4 = this + (ulong)(param_1 >> 2 & 0x1fffffff) + 0x1c;
  CVar1 = *pCVar4;
  uVar3 = (uint)*(ushort *)((long)(this + 0x14) + ((ulong)((byte)CVar1 >> iVar5) & 3) * 2) &
          (param_3 << (ulong)(param_2 & 0x1f) ^ 0xffffffff) |
          (param_4 & param_3) << (ulong)(param_2 & 0x1f);
  uVar8 = (uint)*(ushort *)(this + 0x1a);
  if (((uVar3 == *(ushort *)(this + 0x14) || uVar3 == *(ushort *)(this + 0x16)) ||
      uVar3 == *(ushort *)(this + 0x18)) || uVar3 == uVar8) {
    uVar7 = 2;
    if (uVar3 != *(ushort *)(this + 0x18) && uVar3 != uVar8) {
      uVar7 = 0;
    }
    uVar6 = (ulong)(uVar7 | (uVar3 == *(ushort *)(this + 0x16) || uVar3 == uVar8));
  }
  else {
    CVar2 = this[0x12];
    uVar6 = (ulong)(byte)CVar2;
    if (3 < (byte)CVar2) {
      return false;
    }
    *(short *)(this + uVar6 * 2 + 0x14) = (short)uVar3;
    CVar1 = *pCVar4;
    this[0x12] = (ChunkedBitSquareChunk)((char)CVar2 + 1);
  }
  *pCVar4 = (ChunkedBitSquareChunk)
            ((byte)CVar1 & ((byte)(3 << iVar5) ^ 0xff) | (byte)((int)uVar6 << iVar5));
  return true;
}


