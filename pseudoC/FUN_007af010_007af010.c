// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af010
// Entry Point: 007af010
// Size: 52 bytes
// Signature: undefined FUN_007af010(void)


void FUN_007af010(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x29;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
  }
  *(undefined4 *)(param_2 + 0x108) = 6;
  *(long *)(param_2 + 0x100) = lVar1;
  *(ushort *)(param_2 + 0x10c) = *(ushort *)(param_2 + 0x10c) & 0xfffe;
  return;
}


