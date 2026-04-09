// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPlaying
// Entry Point: 008c01f0
// Size: 36 bytes
// Signature: undefined isPlaying(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamedSample::isPlaying() */

undefined8 StreamedSample::isPlaying(void)

{
  long in_x0;
  undefined8 uVar1;
  
  if ((*(char *)(in_x0 + 0x28) != '\0') && (*(long **)(in_x0 + 0x38) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x008c0208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(in_x0 + 0x38) + 0x18))();
    return uVar1;
  }
  return 0;
}


