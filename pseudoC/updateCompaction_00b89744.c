// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCompaction
// Entry Point: 00b89744
// Size: 152 bytes
// Signature: undefined __thiscall updateCompaction(ChunkedBitSquare * this, uint param_1)


/* ChunkedBitSquare::updateCompaction(unsigned int) */

void __thiscall ChunkedBitSquare::updateCompaction(ChunkedBitSquare *this,uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((*(long *)(this + 0x28) != 0) && (param_1 != 0)) {
    uVar5 = 0;
    uVar3 = *(uint *)(this + 0x34);
    do {
      iVar4 = *(int *)(this + 0x30);
      if (uVar3 != 0) {
        uVar6 = 0;
        do {
          uVar2 = ChunkedBitSquareChunk::reduceChunkBpp();
          iVar4 = *(int *)(this + 0x30);
          uVar3 = *(uint *)(this + 0x34);
          uVar1 = uVar6 + uVar3 * iVar4;
          uVar6 = uVar6 + 1;
          *(undefined8 *)(*(long *)(this + 0x28) + (ulong)uVar1 * 8) = uVar2;
        } while (uVar6 < uVar3);
      }
      uVar5 = uVar5 + 1;
      *(uint *)(this + 0x30) = iVar4 + 1U & *(uint *)(this + 0x10);
    } while (uVar5 != param_1);
  }
  return;
}


