// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlockBC3AlphaY
// Entry Point: 00a958f4
// Size: 56 bytes
// Signature: undefined __cdecl flipBlockBC3AlphaY(BC3AlphaBlock * param_1)


/* ImageUtil::flipBlockBC3AlphaY(ImageUtil::BC3AlphaBlock*) */

void ImageUtil::flipBlockBC3AlphaY(BC3AlphaBlock *param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)param_1;
  *(ulong *)param_1 =
       (uVar1 >> 0x10) << 0x34 | uVar1 & 0xffff | (uVar1 >> 0x1c & 0xfff) << 0x28 |
       uVar1 >> 0xc & 0xfff0000000 | uVar1 >> 0x24 & 0xfff0000;
  return;
}


