// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStream
// Entry Point: 0085ae04
// Size: 292 bytes
// Signature: undefined __thiscall writeToStream(ChunkedBitSquareChunk * this, GsBitStream * param_1, uint param_2)


/* ChunkedBitSquareChunk::writeToStream(GsBitStream*, unsigned int) const */

void __thiscall
ChunkedBitSquareChunk::writeToStream(ChunkedBitSquareChunk *this,GsBitStream *param_1,uint param_2)

{
  long lVar1;
  ChunkedBitSquareChunk *pCVar2;
  ChunkedBitSquareChunk *pCVar3;
  ulong uVar4;
  ChunkedBitSquareChunk local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pCVar3 = this + 0x10;
  pCVar2 = pCVar3;
  if (6 < (byte)*pCVar3) {
    local_5c[0] = (ChunkedBitSquareChunk)0x7;
    pCVar2 = local_5c;
  }
  GsBitStream::writeBits(param_1,(uchar *)pCVar2,3,true);
  if (*pCVar3 == (ChunkedBitSquareChunk)0x0) {
    pCVar2 = this + 0x14;
  }
  else {
    if (this[0x13] != (ChunkedBitSquareChunk)0x0) {
      GsBitStream::writeBits(param_1,(uchar *)(this + 0x12),3,true);
      if (this[0x12] != (ChunkedBitSquareChunk)0x0) {
        uVar4 = 0;
        pCVar2 = this + 0x14;
        do {
          GsBitStream::writeBits(param_1,(uchar *)pCVar2,param_2,true);
          uVar4 = uVar4 + 1;
          pCVar2 = pCVar2 + 2;
        } while (uVar4 < (byte)this[0x12]);
      }
    }
    pCVar2 = this + 0x1c;
    param_2 = (uint)(byte)this[0x10] << 10;
  }
  GsBitStream::writeBits(param_1,(uchar *)pCVar2,param_2,true);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


