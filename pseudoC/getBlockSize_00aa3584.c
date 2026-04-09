// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBlockSize
// Entry Point: 00aa3584
// Size: 72 bytes
// Signature: undefined __cdecl getBlockSize(PIXEL_FORMAT param_1, uint * param_2, uint * param_3)


/* ASTCUtil::getBlockSize(PixelFormat::PIXEL_FORMAT, unsigned int&, unsigned int&) */

bool ASTCUtil::getBlockSize(PIXEL_FORMAT param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = param_1 - 0x3b;
  *param_2 = 6;
  *param_3 = 6;
  if (uVar2 < 0x1a) {
    uVar3 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    uVar1 = *(uint *)(&DAT_00520d20 + uVar3);
    *param_2 = *(uint *)(&DAT_00520cb8 + uVar3);
    *param_3 = uVar1;
  }
  return uVar2 < 0x1a;
}


