// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSeedMax
// Entry Point: 00b070b8
// Size: 32 bytes
// Signature: undefined getSeedMax(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UGCProtection::getSeedMax() */

int UGCProtection::getSeedMax(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = CustomStreamCipher::getKeyLength();
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = 0x4000 / uVar2;
  }
  return uVar1 - 1;
}


