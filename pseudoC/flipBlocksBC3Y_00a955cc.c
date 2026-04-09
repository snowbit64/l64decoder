// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlocksBC3Y
// Entry Point: 00a955cc
// Size: 100 bytes
// Signature: undefined __cdecl flipBlocksBC3Y(uchar * param_1, uint param_2, bool * param_3)


/* ImageUtil::flipBlocksBC3Y(unsigned char*, unsigned int, bool&) */

void ImageUtil::flipBlocksBC3Y(uchar *param_1,uint param_2,bool *param_3)

{
  uchar uVar1;
  uchar uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    do {
      uVar3 = *(ulong *)param_1;
      param_2 = param_2 - 1;
      uVar1 = *(uchar *)((long)param_1 + 0xf);
      *(uchar *)((long)param_1 + 0xf) = *(uchar *)((long)param_1 + 0xc);
      uVar2 = *(uchar *)((long)param_1 + 0xe);
      *(uchar *)((long)param_1 + 0xc) = uVar1;
      *(uchar *)((long)param_1 + 0xe) = *(uchar *)((long)param_1 + 0xd);
      *(uchar *)((long)param_1 + 0xd) = uVar2;
      *(ulong *)param_1 =
           (uVar3 >> 0x10) << 0x34 | uVar3 & 0xffff | (uVar3 >> 0x1c & 0xfff) << 0x28 |
           uVar3 >> 0xc & 0xfff0000000 | uVar3 >> 0x24 & 0xfff0000;
      param_1 = (uchar *)((long)param_1 + 0x10);
    } while (param_2 != 0);
  }
  return;
}


