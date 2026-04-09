// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAlbumName
// Entry Point: 00b08d2c
// Size: 24 bytes
// Signature: undefined getAlbumName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioLoaderOGG::getAlbumName() */

long AudioLoaderOGG::getAlbumName(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x89;
  if ((*(byte *)(in_x0 + 0x88) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x98);
  }
  return lVar1;
}


