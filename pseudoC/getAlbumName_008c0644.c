// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAlbumName
// Entry Point: 008c0644
// Size: 32 bytes
// Signature: undefined getAlbumName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamedSample::getAlbumName() */

undefined * StreamedSample::getAlbumName(void)

{
  long in_x0;
  undefined *puVar1;
  
  if (*(long **)(in_x0 + 0x48) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008c0654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(**(code **)(**(long **)(in_x0 + 0x48) + 0x18))();
    return puVar1;
  }
  return &DAT_0050a39f;
}


