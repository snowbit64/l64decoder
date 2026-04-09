// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVendorString
// Entry Point: 00aa79d0
// Size: 60 bytes
// Signature: undefined getVendorString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderDeviceInformation::getVendorString() const */

char * RenderDeviceInformation::getVendorString(void)

{
  long in_x0;
  
  if (*(char **)(in_x0 + 0x28) != (char *)0x0) {
    return *(char **)(in_x0 + 0x28);
  }
  if (*(uint *)(in_x0 + 0x34) < 5) {
    return &DAT_00522e50 + *(int *)(&DAT_00522e50 + (long)(int)*(uint *)(in_x0 + 0x34) * 4);
  }
  return "Unknown";
}


