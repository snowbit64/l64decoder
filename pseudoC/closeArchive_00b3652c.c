// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closeArchive
// Entry Point: 00b3652c
// Size: 72 bytes
// Signature: undefined closeArchive(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ZipArchiveWriter::closeArchive() */

undefined8 ZipArchiveWriter::closeArchive(void)

{
  int iVar1;
  long *in_x0;
  undefined8 uVar2;
  
  if (*in_x0 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = zipClose(*in_x0,0);
    if (iVar1 == 0) {
      uVar2 = 1;
      *in_x0 = 0;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


