// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlockBC4Y
// Entry Point: 00a9592c
// Size: 56 bytes
// Signature: undefined __cdecl flipBlockBC4Y(BC4Block * param_1)


/* ImageUtil::flipBlockBC4Y(ImageUtil::BC4Block*) */

void ImageUtil::flipBlockBC4Y(BC4Block *param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)param_1;
  *(ulong *)param_1 =
       (uVar1 >> 0x10) << 0x34 |
       uVar1 & 0xffff | uVar1 >> 0x24 & 0xfff0000 | (uVar1 >> 0x1c & 0xfff) << 0x28 |
       uVar1 >> 0xc & 0xfff0000000;
  return;
}


