// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHostAddress
// Entry Point: 00b43464
// Size: 12 bytes
// Signature: undefined getHostAddress(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NetworkAddress::getHostAddress() */

uint NetworkAddress::getHostAddress(void)

{
  uint uVar1;
  uint *in_x0;
  
  uVar1 = (*in_x0 & 0xff00ff00) >> 8 | (*in_x0 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


