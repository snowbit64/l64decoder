// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getModInstallPath
// Entry Point: 00c6f950
// Size: 40 bytes
// Signature: undefined getModInstallPath(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::getModInstallPath() */

undefined * AndroidSysUtil::getModInstallPath(void)

{
  if (s_pApp != 0) {
    return *(undefined **)(*(long *)(s_pApp + 0x18) + 0x28);
  }
  return &DAT_0050a39f;
}


