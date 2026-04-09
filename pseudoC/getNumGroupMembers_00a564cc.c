// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumGroupMembers
// Entry Point: 00a564cc
// Size: 16 bytes
// Signature: undefined getNumGroupMembers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::MergedShadowGroup::getNumGroupMembers() */

ulong LightSource::MergedShadowGroup::getNumGroupMembers(void)

{
  long *in_x0;
  
  return (ulong)(in_x0[1] - *in_x0) >> 3;
}


