// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getModDownloadPath
// Entry Point: 00c6f928
// Size: 40 bytes
// Signature: undefined getModDownloadPath(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::getModDownloadPath() */

undefined * AndroidSysUtil::getModDownloadPath(void)

{
  if (s_pApp != 0) {
    return *(undefined **)(*(long *)(s_pApp + 0x18) + 0x28);
  }
  return &DAT_0050a39f;
}


