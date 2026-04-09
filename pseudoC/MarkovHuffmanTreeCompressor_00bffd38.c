// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MarkovHuffmanTreeCompressor
// Entry Point: 00bffd38
// Size: 180 bytes
// Signature: undefined __thiscall MarkovHuffmanTreeCompressor(MarkovHuffmanTreeCompressor * this, MarkovHuffmanTree * param_1)


/* MarkovHuffmanTreeCompressor::MarkovHuffmanTreeCompressor(MarkovHuffmanTree*) */

void __thiscall
MarkovHuffmanTreeCompressor::MarkovHuffmanTreeCompressor
          (MarkovHuffmanTreeCompressor *this,MarkovHuffmanTree *param_1)

{
  long *plVar1;
  uint uVar2;
  void *__s;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = (ulong)uVar2;
  *(MarkovHuffmanTree **)this = param_1;
  __s = operator_new__(uVar3 << 10);
  *(void **)(this + 8) = __s;
  if (uVar2 != 0) {
    memset(__s,0,0x400);
    if (uVar2 != 1) {
      lVar4 = uVar3 - 1;
      lVar6 = 0x400;
      do {
        memset((void *)(*(long *)(this + 8) + lVar6),0,0x400);
        lVar4 = lVar4 + -1;
        lVar6 = lVar6 + 0x400;
      } while (lVar4 != 0);
    }
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        plVar1 = *(long **)this;
        uVar2 = *(uint *)(*plVar1 + uVar5 * 4);
        generateTreeCodes((MarkovHuffmanTree *)plVar1,uVar2,
                          *(ushort *)(plVar1[2] + (ulong)uVar2) & 0x1ff,
                          (Codes *)(*(long *)(this + 8) + uVar5 * 0x400),0,0);
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar3);
    }
  }
  return;
}


