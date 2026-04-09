// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetStorageRequirements
// Entry Point: 00de7cf0
// Size: 84 bytes
// Signature: undefined __cdecl GetStorageRequirements(int param_1, int param_2, int param_3)


/* squish::GetStorageRequirements(int, int, int) */

int squish::GetStorageRequirements(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 + 6;
  if (-1 < param_1 + 3) {
    iVar1 = param_1 + 3;
  }
  iVar2 = param_2 + 6;
  if (-1 < param_2 + 3) {
    iVar2 = param_2 + 3;
  }
  iVar3 = 0x10;
  if ((param_3 & 7U) != 4 && (param_3 & 7U) != 2 || (param_3 & 1U) != 0) {
    iVar3 = 8;
  }
  return (iVar2 >> 2) * (iVar1 >> 2) * iVar3;
}


