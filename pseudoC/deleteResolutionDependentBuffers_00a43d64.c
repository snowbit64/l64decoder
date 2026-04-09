// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteResolutionDependentBuffers
// Entry Point: 00a43d64
// Size: 156 bytes
// Signature: undefined deleteResolutionDependentBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FFXShadowDenoiser::deleteResolutionDependentBuffers() */

void FFXShadowDenoiser::deleteResolutionDependentBuffers(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x128) + 8))();
  }
  if (*(long **)(in_x0 + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x150) + 8))();
  }
  if (*(long **)(in_x0 + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x158) + 8))();
  }
  if (*(long **)(in_x0 + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x160) + 8))();
  }
  if (*(long **)(in_x0 + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x168) + 8))();
  }
  if (*(long **)(in_x0 + 0x170) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a43df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x170) + 8))();
    return;
  }
  return;
}


