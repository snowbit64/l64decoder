// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3fb0
// Entry Point: 007b3fb0
// Size: 52 bytes
// Signature: undefined FUN_007b3fb0(void)


void FUN_007b3fb0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x469;
  if ((*(byte *)(param_1 + 0x468) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x478);
  }
  *(undefined4 *)(param_2 + 0x108) = 6;
  *(long *)(param_2 + 0x100) = lVar1;
  *(ushort *)(param_2 + 0x10c) = *(ushort *)(param_2 + 0x10c) & 0xfffe;
  return;
}


