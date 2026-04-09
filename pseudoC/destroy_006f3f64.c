// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 006f3f64
// Size: 196 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OverlayRenderManager::destroy() */

void OverlayRenderManager::destroy(void)

{
  long **in_x0;
  
  if (*in_x0 != (long *)0x0) {
    (**(code **)(**in_x0 + 8))();
  }
  if (in_x0[0x801] != (long *)0x0) {
    (**(code **)(*in_x0[0x801] + 8))();
  }
  if (in_x0[0x803] != (long *)0x0) {
    (**(code **)(*in_x0[0x803] + 8))();
  }
  if (in_x0[0x804] != (long *)0x0) {
    (**(code **)(*in_x0[0x804] + 8))();
  }
  if (in_x0[0x805] != (long *)0x0) {
    (**(code **)(*in_x0[0x805] + 8))();
  }
  if (in_x0[0x806] != (long *)0x0) {
    (**(code **)(*in_x0[0x806] + 8))();
  }
  if (in_x0[0x802] != (long *)0x0) {
    (**(code **)(*in_x0[0x802] + 8))();
  }
  if (in_x0[0x807] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006f4018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_x0[0x807] + 8))();
    return;
  }
  return;
}


