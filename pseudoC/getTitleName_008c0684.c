// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTitleName
// Entry Point: 008c0684
// Size: 32 bytes
// Signature: undefined getTitleName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamedSample::getTitleName() */

undefined * StreamedSample::getTitleName(void)

{
  long in_x0;
  undefined *puVar1;
  
  if (*(long **)(in_x0 + 0x48) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008c0694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(**(code **)(**(long **)(in_x0 + 0x48) + 0x20))();
    return puVar1;
  }
  return &DAT_0050a39f;
}


