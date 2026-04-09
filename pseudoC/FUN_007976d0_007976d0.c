// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007976d0
// Entry Point: 007976d0
// Size: 60 bytes
// Signature: undefined FUN_007976d0(void)


void FUN_007976d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = AndroidSysUtil::getModInstallPath();
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


