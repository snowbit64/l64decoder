// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandom
// Entry Point: 00b57640
// Size: 88 bytes
// Signature: undefined getRandom(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MathUtil::getRandom() */

void MathUtil::getRandom(void)

{
  byte *pbVar1;
  undefined *puVar2;
  
  pbVar1 = (byte *)__emutls_get_address(&DAT_01045218);
  if ((*pbVar1 & 1) == 0) {
    __emutls_get_address(&DAT_010451f8);
    PCGRand::seedFromWatch();
    puVar2 = (undefined *)__emutls_get_address(&DAT_01045218);
    *puVar2 = 1;
  }
  __emutls_get_address(&DAT_010451f8);
  PCGRand::getRandomFloatExclusive();
  return;
}


