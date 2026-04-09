// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00c625a4
// Size: 32 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Network::init() */

void Network::init(void)

{
  if (s_isInitialized != '\0') {
    return;
  }
  s_isInitialized = 1;
  return;
}


