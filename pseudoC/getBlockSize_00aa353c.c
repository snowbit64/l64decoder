// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBlockSize
// Entry Point: 00aa353c
// Size: 72 bytes
// Signature: undefined __cdecl getBlockSize(FORMAT param_1, uint * param_2, uint * param_3)


/* ASTCUtil::getBlockSize(ImageDesc::FORMAT, unsigned int&, unsigned int&) */

bool ASTCUtil::getBlockSize(FORMAT param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = param_1 - 0x1f;
  *param_2 = 6;
  *param_3 = 6;
  if (uVar2 < 0xd) {
    uVar3 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    uVar1 = *(uint *)(&DAT_00520c84 + uVar3);
    *param_2 = *(uint *)(&DAT_00520c50 + uVar3);
    *param_3 = uVar1;
  }
  return uVar2 < 0xd;
}


