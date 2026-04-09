// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSimpleMipChainSize
// Entry Point: 00a98dbc
// Size: 76 bytes
// Signature: undefined __cdecl getSimpleMipChainSize(uint param_1, uint param_2, uint param_3)


/* MipMapUtil::getSimpleMipChainSize(unsigned int, unsigned int, unsigned int) */

int MipMapUtil::getSimpleMipChainSize(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  do {
    uVar4 = param_2;
    param_2 = uVar4 >> 1;
    uVar2 = param_1 >> 1;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    iVar3 = iVar3 + (uVar4 * param_3 * param_1 + 7 >> 3);
    if (param_2 < 2) {
      param_2 = 1;
    }
    bVar1 = 3 < param_1;
    param_1 = uVar2;
  } while ((bVar1) || (3 < uVar4));
  return iVar3;
}


