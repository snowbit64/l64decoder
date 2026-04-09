// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: what
// Entry Point: 00ee8fbc
// Size: 24 bytes
// Signature: undefined what(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::ParseError::what() const */

long Luau::ParseError::what(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x19;
  if ((*(byte *)(in_x0 + 0x18) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x28);
  }
  return lVar1;
}


