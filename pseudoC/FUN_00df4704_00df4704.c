// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df4704
// Entry Point: 00df4704
// Size: 84 bytes
// Signature: undefined FUN_00df4704(void)


int FUN_00df4704(char *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != '\0') {
    iVar1 = FUN_00df4704(*(undefined8 *)(param_1 + 8));
    iVar2 = FUN_00df4704(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    return iVar2 + 1;
  }
  return 0;
}


