// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797694
// Entry Point: 00797694
// Size: 60 bytes
// Signature: undefined FUN_00797694(void)


void FUN_00797694(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = AndroidSysUtil::getModDownloadPath();
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


