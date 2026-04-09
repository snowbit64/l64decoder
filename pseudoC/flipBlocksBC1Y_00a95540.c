// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlocksBC1Y
// Entry Point: 00a95540
// Size: 56 bytes
// Signature: undefined __cdecl flipBlocksBC1Y(uchar * param_1, uint param_2, bool * param_3)


/* ImageUtil::flipBlocksBC1Y(unsigned char*, unsigned int, bool&) */

void ImageUtil::flipBlocksBC1Y(uchar *param_1,uint param_2,bool *param_3)

{
  uchar uVar1;
  uchar uVar2;
  uchar *puVar3;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 7;
    do {
      param_2 = param_2 - 1;
      uVar1 = *puVar3;
      uVar2 = puVar3[-1];
      *puVar3 = puVar3[-3];
      puVar3[-3] = uVar1;
      puVar3[-1] = puVar3[-2];
      puVar3[-2] = uVar2;
      puVar3 = puVar3 + 8;
    } while (param_2 != 0);
  }
  return;
}


