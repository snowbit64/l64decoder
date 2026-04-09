// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flushImpressions
// Entry Point: 00af2afc
// Size: 24 bytes
// Signature: undefined flushImpressions(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsAdsProvider::flushImpressions() */

void GiantsAdsProvider::flushImpressions(void)

{
  long in_x0;
  
  *(undefined4 *)(in_x0 + 0x1b8) = 1;
  Event::post();
  return;
}


