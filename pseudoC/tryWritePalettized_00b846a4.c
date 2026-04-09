// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryWritePalettized
// Entry Point: 00b846a4
// Size: 776 bytes
// Signature: undefined __thiscall tryWritePalettized(ChunkedBitSquareChunk * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* ChunkedBitSquareChunk::tryWritePalettized(unsigned int, unsigned int, unsigned int, unsigned int)
    */

bool __thiscall
ChunkedBitSquareChunk::tryWritePalettized
          (ChunkedBitSquareChunk *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  ChunkedBitSquareChunk CVar1;
  ChunkedBitSquareChunk *pCVar2;
  uint *puVar3;
  ChunkedBitSquareChunk CVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  switch(this[0x10]) {
  case (ChunkedBitSquareChunk)0x0:
    return ((uint)*(ushort *)(this + 0x14) & (param_3 << (ulong)(param_2 & 0x1f) ^ 0xffffffff) |
           (param_4 & param_3) << (ulong)(param_2 & 0x1f)) == (uint)*(ushort *)(this + 0x14);
  case (ChunkedBitSquareChunk)0x1:
    pCVar2 = this + (ulong)(param_1 >> 3) + 0x1c;
    CVar4 = *pCVar2;
    uVar6 = (uint)*(ushort *)((long)(this + 0x14) + ((ulong)((byte)CVar4 >> (param_1 & 7)) & 1) * 2)
            & (param_3 << (ulong)(param_2 & 0x1f) ^ 0xffffffff) |
            (param_4 & param_3) << (ulong)(param_2 & 0x1f);
    if (uVar6 == *(ushort *)(this + 0x14)) {
      CVar4 = (ChunkedBitSquareChunk)((byte)CVar4 & ((byte)(1 << (param_1 & 7)) ^ 0xff));
    }
    else if (uVar6 == *(ushort *)(this + 0x16)) {
      CVar4 = (ChunkedBitSquareChunk)((byte)CVar4 | (byte)(1 << (ulong)(param_1 & 7)));
    }
    else {
      if (this[0x12] != (ChunkedBitSquareChunk)0x1) {
        return false;
      }
      CVar4 = (ChunkedBitSquareChunk)((byte)CVar4 | '\x01' << (ulong)(param_1 & 7));
      *(short *)(this + 0x16) = (short)uVar6;
      this[0x12] = (ChunkedBitSquareChunk)0x2;
    }
    break;
  case (ChunkedBitSquareChunk)0x2:
    iVar5 = (param_1 & 3) << 1;
    pCVar2 = this + (ulong)(param_1 >> 2 & 0x1fffffff) + 0x1c;
    CVar4 = *pCVar2;
    uVar6 = (uint)*(ushort *)((long)(this + 0x14) + ((ulong)((byte)CVar4 >> iVar5) & 3) * 2) &
            (param_3 << (ulong)(param_2 & 0x1f) ^ 0xffffffff) |
            (param_4 & param_3) << (ulong)(param_2 & 0x1f);
    uVar10 = (uint)*(ushort *)(this + 0x1a);
    if (((uVar6 == *(ushort *)(this + 0x14) || uVar6 == *(ushort *)(this + 0x16)) ||
        uVar6 == *(ushort *)(this + 0x18)) || uVar6 == uVar10) {
      uVar7 = 2;
      if (uVar6 != *(ushort *)(this + 0x18) && uVar6 != uVar10) {
        uVar7 = 0;
      }
      uVar9 = (ulong)(uVar7 | (uVar6 == *(ushort *)(this + 0x16) || uVar6 == uVar10));
    }
    else {
      CVar1 = this[0x12];
      uVar9 = (ulong)(byte)CVar1;
      if (3 < (byte)CVar1) {
        return false;
      }
      *(short *)(this + uVar9 * 2 + 0x14) = (short)uVar6;
      CVar4 = *pCVar2;
      this[0x12] = (ChunkedBitSquareChunk)((char)CVar1 + 1);
    }
    CVar4 = (ChunkedBitSquareChunk)
            ((byte)((int)uVar9 << iVar5) | (byte)CVar4 & ((byte)(3 << iVar5) ^ 0xff));
    break;
  case (ChunkedBitSquareChunk)0x3:
    uVar7 = param_1 * 3 & 7;
    puVar3 = (uint *)(this + (ulong)(param_1 * 3 >> 3) + 0x1c);
    uVar6 = *puVar3;
    CVar4 = this[0x12];
    uVar9 = (ulong)(byte)CVar4;
    uVar10 = (uint)*(ushort *)(this + ((ulong)(uVar6 >> uVar7) & 7) * 2 + 0x14) &
             (param_3 << (ulong)(param_2 & 0x1f) ^ 0xffffffff) |
             (param_4 & param_3) << (ulong)(param_2 & 0x1f);
    if (CVar4 != (ChunkedBitSquareChunk)0x0) {
      uVar8 = 0;
      do {
        if (uVar10 == *(ushort *)(this + uVar8 * 2 + 0x14)) {
          if ((int)uVar8 != 4) {
            uVar9 = uVar8 & 0xffffffff;
            goto LAB_00b84978;
          }
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
      if (7 < (byte)CVar4) {
        return false;
      }
    }
    *(short *)(this + uVar9 * 2 + 0x14) = (short)uVar10;
    uVar6 = *puVar3;
    this[0x12] = (ChunkedBitSquareChunk)((char)CVar4 + 1);
LAB_00b84978:
    uVar10 = (int)uVar9 << uVar7;
    uVar6 = uVar6 & ((uint)(byte)this[0x11] << uVar7 ^ 0xffffffff);
    goto LAB_00b8499c;
  default:
    uVar6 = (byte)this[0x10] * param_1;
    uVar7 = uVar6 & 7;
    puVar3 = (uint *)(this + (ulong)(uVar6 >> 3) + 0x1c);
    uVar6 = *puVar3;
    CVar4 = this[0x12];
    uVar10 = (uint)*(ushort *)(this + ((ulong)(uVar6 >> uVar7) & 7) * 2 + 0x14) &
             (param_3 << (ulong)(param_2 & 0x1f) ^ 0xffffffff) |
             (param_4 & param_3) << (ulong)(param_2 & 0x1f);
    if ((byte)CVar4 != 0) {
      uVar9 = 0;
      do {
        if (uVar10 == *(ushort *)(this + uVar9 * 2 + 0x14)) {
          if ((int)uVar9 != 4) {
            CVar1 = this[0x11];
            goto LAB_00b84990;
          }
          break;
        }
        uVar9 = uVar9 + 1;
      } while ((uint)(byte)CVar4 != (uint)uVar9);
    }
    CVar1 = this[0x11];
    if ((uint)(byte)CVar1 < (uint)(byte)CVar4) {
      return false;
    }
    uVar9 = (ulong)(uint)(byte)CVar4;
    *(short *)(this + (ulong)(byte)CVar4 * 2 + 0x14) = (short)uVar10;
    uVar6 = *puVar3;
    this[0x12] = (ChunkedBitSquareChunk)((char)CVar4 + 1);
LAB_00b84990:
    uVar10 = (int)uVar9 << uVar7;
    uVar6 = uVar6 & ((uint)(byte)CVar1 << uVar7 ^ 0xffffffff);
LAB_00b8499c:
    *puVar3 = uVar6 | uVar10;
    return true;
  }
  *pCVar2 = CVar4;
  return true;
}


