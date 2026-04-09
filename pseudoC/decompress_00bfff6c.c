// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompress
// Entry Point: 00bfff6c
// Size: 200 bytes
// Signature: undefined __thiscall decompress(MarkovHuffmanTree * this, uchar * param_1, uint param_2, uchar * param_3, uint param_4)


/* MarkovHuffmanTree::decompress(unsigned char const*, unsigned int, unsigned char*, unsigned int)
    */

void __thiscall
MarkovHuffmanTree::decompress
          (MarkovHuffmanTree *this,uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  if (param_4 != 0) {
    cVar6 = '\0';
    lVar7 = *(long *)(this + 0x10);
    uVar5 = 0;
    uVar4 = 0;
    uVar9 = (ulong)**(uint **)this;
    iVar2 = *(int *)(this + 8);
    uVar8 = *(ushort *)(lVar7 + uVar9) & 0x1ff;
    do {
      while (uVar8 < 0x100) {
        param_4 = param_4 - 1;
        *param_3 = (uchar)uVar8;
        if (param_4 == 0) {
          return;
        }
        uVar4 = (uVar8 | uVar4 << 8) & iVar2 - 1U;
        uVar9 = (ulong)*(uint *)(*(long *)this + (ulong)uVar4 * 4);
        lVar7 = *(long *)(this + 0x10);
        param_3 = param_3 + 1;
        uVar8 = *(ushort *)(lVar7 + uVar9) & 0x1ff;
      }
      pbVar3 = param_1;
      do {
        param_1 = pbVar3;
        if (cVar6 == '\0') {
          param_1 = pbVar3 + 1;
          uVar5 = (uint)*pbVar3;
          cVar6 = '\b';
        }
        cVar6 = cVar6 + -1;
        uVar1 = uVar5 >> 7;
        uVar5 = uVar5 << 1;
        uVar8 = ((uVar8 & 0xff) << 1 | uVar1 & 1) * 9 + 9;
        uVar8 = *(ushort *)(lVar7 + uVar9 + (ulong)(uVar8 >> 3)) >> (ulong)(uVar8 & 7) & 0x1ff;
        pbVar3 = param_1;
      } while (0xff < uVar8);
    } while (param_4 != 0);
  }
  return;
}


