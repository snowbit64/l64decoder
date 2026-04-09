// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomMinMax
// Entry Point: 00b5770c
// Size: 52 bytes
// Signature: undefined __cdecl getRandomMinMax(int param_1, int param_2)


/* MathUtil::getRandomMinMax(int, int) */

int MathUtil::getRandomMinMax(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_2 - param_1) + 1;
  iVar3 = rand();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar3 / iVar1;
  }
  return (iVar3 - iVar2 * iVar1) + param_1;
}


