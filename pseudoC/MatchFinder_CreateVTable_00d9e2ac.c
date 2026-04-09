// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_CreateVTable
// Entry Point: 00d9e2ac
// Size: 164 bytes
// Signature: undefined MatchFinder_CreateVTable(void)


void MatchFinder_CreateVTable(long param_1,code **param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x70);
  *param_2 = MatchFinder_Init;
  param_2[1] = MatchFinder_GetIndexByte;
  param_2[2] = MatchFinder_GetNumAvailableBytes;
  param_2[3] = MatchFinder_GetPointerToCurrentPos;
  if (iVar1 == 0) {
    param_2[4] = FUN_00d9e350;
    param_2[5] = FUN_00d9e674;
    return;
  }
  if (*(int *)(param_1 + 0x60) != 2) {
    if (*(int *)(param_1 + 0x60) == 3) {
      param_2[4] = FUN_00d9eb68;
      param_2[5] = FUN_00d9ef48;
      return;
    }
    param_2[4] = FUN_00d9f11c;
    param_2[5] = FUN_00d9f584;
    return;
  }
  param_2[4] = FUN_00d9e788;
  param_2[5] = FUN_00d9e9bc;
  return;
}


