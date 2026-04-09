// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDuration
// Entry Point: 008b3744
// Size: 32 bytes
// Signature: undefined getDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSample::getDuration() const */

undefined  [16] StaticSample::getDuration(void)

{
  long in_x0;
  undefined auVar1 [16];
  
  if (*(long *)(in_x0 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x008b3758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)(**(long **)(*(long *)(in_x0 + 0x70) + 0x48) + 0x30))();
    return auVar1;
  }
  return ZEXT816(0);
}


