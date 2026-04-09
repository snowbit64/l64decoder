// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOverlayHeight
// Entry Point: 006f503c
// Size: 28 bytes
// Signature: undefined getOverlayHeight(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OverlayRenderManager::getOverlayHeight() const */

undefined8 OverlayRenderManager::getOverlayHeight(void)

{
  long in_x0;
  undefined8 uVar1;
  
  if (*(long **)(in_x0 + 0x4008) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006f504c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(in_x0 + 0x4008) + 0x28))();
    return uVar1;
  }
  return 1;
}


