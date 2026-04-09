// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOverlayWidth
// Entry Point: 006f5020
// Size: 28 bytes
// Signature: undefined getOverlayWidth(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OverlayRenderManager::getOverlayWidth() const */

undefined8 OverlayRenderManager::getOverlayWidth(void)

{
  long in_x0;
  undefined8 uVar1;
  
  if (*(long **)(in_x0 + 0x4008) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006f5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(in_x0 + 0x4008) + 0x20))();
    return uVar1;
  }
  return 1;
}


