// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: whiteout
// Entry Point: 00b92348
// Size: 264 bytes
// Signature: undefined __thiscall whiteout(Preprocessor * this, uint * param_1, uint * param_2)


/* Preprocessor::whiteout(unsigned int*, unsigned int*) */

bool __thiscall Preprocessor::whiteout(Preprocessor *this,uint *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  if (uVar2 < uVar3) {
    do {
      uVar1 = getChar(this,uVar2);
      if ((0x20 < ((uint)uVar1 & 0xff)) || ((1L << (uVar1 & 0x3f) & 0x100000600U) == 0)) {
        uVar2 = *param_1;
        uVar3 = *param_2;
        if (uVar2 < uVar3) goto LAB_00b923d4;
        goto LAB_00b92434;
      }
      uVar2 = *param_1 + 1;
      *param_1 = uVar2;
      uVar3 = *param_2;
    } while (uVar2 < uVar3);
  }
  if (uVar2 < uVar3) {
LAB_00b923d4:
    do {
      uVar1 = getChar(this,uVar3 - 1);
      if (0x20 < ((uint)uVar1 & 0xff) || (1L << (uVar1 & 0x3f) & 0x100000600U) == 0) {
        uVar2 = *param_1;
        uVar3 = *param_2;
        break;
      }
      uVar3 = *param_2 - 1;
      *param_2 = uVar3;
      uVar2 = *param_1;
    } while (uVar2 < uVar3);
  }
LAB_00b92434:
  return uVar2 < uVar3;
}


