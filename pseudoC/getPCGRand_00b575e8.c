// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPCGRand
// Entry Point: 00b575e8
// Size: 88 bytes
// Signature: undefined getPCGRand(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MathUtil::getPCGRand() */

void MathUtil::getPCGRand(void)

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
  return;
}


