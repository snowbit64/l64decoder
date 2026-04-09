// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00adf4a8
// Entry Point: 00adf4a8
// Size: 112 bytes
// Signature: undefined FUN_00adf4a8(void)


void FUN_00adf4a8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x158) + 4);
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffffe;
  if ((iVar1 == 0x1e) && (*(int *)(param_1 + 0x148) != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      FUN_00adf4a8(*(long *)(param_1 + 0x150) + lVar2);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x160;
    } while (uVar3 < *(uint *)(param_1 + 0x148));
  }
  return;
}


