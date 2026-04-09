// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTitleName
// Entry Point: 00b08d44
// Size: 24 bytes
// Signature: undefined getTitleName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioLoaderOGG::getTitleName() */

long AudioLoaderOGG::getTitleName(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0xa1;
  if ((*(byte *)(in_x0 + 0xa0) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0xb0);
  }
  return lVar1;
}


