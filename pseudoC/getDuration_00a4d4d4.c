// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDuration
// Entry Point: 00a4d4d4
// Size: 32 bytes
// Signature: undefined getDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::Element::getDuration() const */

undefined  [16] AudioSourceSample::Element::getDuration(void)

{
  long in_x0;
  undefined auVar1 [16];
  
  if (*(long *)(in_x0 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a4d4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)(**(long **)(*(long *)(in_x0 + 0x20) + 0x48) + 0x30))();
    return auVar1;
  }
  return ZEXT816(0);
}


