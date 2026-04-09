// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArtistName
// Entry Point: 00b08d14
// Size: 24 bytes
// Signature: undefined getArtistName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioLoaderOGG::getArtistName() */

long AudioLoaderOGG::getArtistName(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x71;
  if ((*(byte *)(in_x0 + 0x70) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x80);
  }
  return lVar1;
}


