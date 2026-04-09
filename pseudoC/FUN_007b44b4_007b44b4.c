// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b44b4
// Entry Point: 007b44b4
// Size: 52 bytes
// Signature: undefined FUN_007b44b4(void)


void FUN_007b44b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x4b1;
  if ((*(byte *)(param_1 + 0x4b0) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x4c0);
  }
  *(undefined4 *)(param_2 + 0x108) = 6;
  *(long *)(param_2 + 0x100) = lVar1;
  *(ushort *)(param_2 + 0x10c) = *(ushort *)(param_2 + 0x10c) & 0xfffe;
  return;
}


