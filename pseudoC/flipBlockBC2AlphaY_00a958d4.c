// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlockBC2AlphaY
// Entry Point: 00a958d4
// Size: 32 bytes
// Signature: undefined __cdecl flipBlockBC2AlphaY(BC2AlphaBlock * param_1)


/* ImageUtil::flipBlockBC2AlphaY(ImageUtil::BC2AlphaBlock*) */

void ImageUtil::flipBlockBC2AlphaY(BC2AlphaBlock *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)param_1;
  *(undefined2 *)param_1 = uVar1;
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) >> 0x10 | *(uint *)(param_1 + 2) << 0x10;
  return;
}


