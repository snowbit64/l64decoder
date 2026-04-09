// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlockBC1Y
// Entry Point: 00a958b0
// Size: 36 bytes
// Signature: undefined __cdecl flipBlockBC1Y(BC1Block * param_1)


/* ImageUtil::flipBlockBC1Y(ImageUtil::BC1Block*) */

void ImageUtil::flipBlockBC1Y(BC1Block *param_1)

{
  BC1Block BVar1;
  BC1Block BVar2;
  
  BVar1 = param_1[7];
  BVar2 = param_1[6];
  param_1[7] = param_1[4];
  param_1[4] = BVar1;
  param_1[6] = param_1[5];
  param_1[5] = BVar2;
  return;
}


