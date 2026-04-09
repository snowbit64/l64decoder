// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArtistName
// Entry Point: 008c0604
// Size: 32 bytes
// Signature: undefined getArtistName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamedSample::getArtistName() */

undefined * StreamedSample::getArtistName(void)

{
  long in_x0;
  undefined *puVar1;
  
  if (*(long **)(in_x0 + 0x48) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008c0614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(**(code **)(**(long **)(in_x0 + 0x48) + 0x10))();
    return puVar1;
  }
  return &DAT_0050a39f;
}


