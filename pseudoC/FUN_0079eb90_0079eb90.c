// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079eb90
// Entry Point: 0079eb90
// Size: 52 bytes
// Signature: undefined FUN_0079eb90(void)


void FUN_0079eb90(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x31;
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
  }
  *(undefined4 *)(param_2 + 0x108) = 6;
  *(long *)(param_2 + 0x100) = lVar1;
  *(ushort *)(param_2 + 0x10c) = *(ushort *)(param_2 + 0x10c) & 0xfffe;
  return;
}


