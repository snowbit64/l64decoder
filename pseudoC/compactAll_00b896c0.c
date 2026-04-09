// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compactAll
// Entry Point: 00b896c0
// Size: 132 bytes
// Signature: undefined compactAll(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ChunkedBitSquare::compactAll() */

void ChunkedBitSquare::compactAll(void)

{
  uint uVar1;
  long in_x0;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(in_x0 + 0xc);
  if (uVar4 != 0) {
    uVar5 = 0;
    uVar3 = *(uint *)(in_x0 + 0x34);
    do {
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          uVar2 = ChunkedBitSquareChunk::reduceChunkBpp();
          uVar3 = *(uint *)(in_x0 + 0x34);
          uVar1 = uVar4 + uVar5 * uVar3;
          uVar4 = uVar4 + 1;
          *(undefined8 *)(*(long *)(in_x0 + 0x28) + (ulong)uVar1 * 8) = uVar2;
        } while (uVar4 < uVar3);
        uVar4 = *(uint *)(in_x0 + 0xc);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  *(undefined4 *)(in_x0 + 0x30) = 0;
  return;
}


