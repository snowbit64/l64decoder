// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilename
// Entry Point: 008b398c
// Size: 24 bytes
// Signature: undefined getFilename(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSample::getFilename() const */

long StaticSample::getFilename(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x81;
  if ((*(byte *)(in_x0 + 0x80) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x90);
  }
  return lVar1;
}


