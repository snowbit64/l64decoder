// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: what
// Entry Point: 00ee9250
// Size: 24 bytes
// Signature: undefined what(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::ParseErrors::what() const */

long Luau::ParseErrors::what(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x21;
  if ((*(byte *)(in_x0 + 0x20) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x30);
  }
  return lVar1;
}


