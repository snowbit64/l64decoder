// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shutdown
// Entry Point: 00c625c4
// Size: 24 bytes
// Signature: undefined shutdown(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Network::shutdown() */

void Network::shutdown(void)

{
  if (s_isInitialized != '\0') {
    s_isInitialized = '\0';
  }
  return;
}


