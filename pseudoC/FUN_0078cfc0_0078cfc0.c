// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078cfc0
// Entry Point: 0078cfc0
// Size: 68 bytes
// Signature: undefined FUN_0078cfc0(void)


void FUN_0078cfc0(uint *param_1)

{
  char *pcVar1;
  
  if ((int)*param_1 < 0xb) {
    pcVar1 = *(char **)(SysUtilBase::getDeviceTypeFromPlatformId(SysUtilBase::PLATFORM_ID)::strs +
                       (ulong)*param_1 * 8);
  }
  else {
    pcVar1 = "Invalid";
  }
  *(char **)(param_1 + 0x40) = pcVar1;
  param_1[0x42] = 6;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  return;
}


