// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMergedShadow
// Entry Point: 00a55744
// Size: 160 bytes
// Signature: undefined computeMergedShadow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::computeMergedShadow() const */

void LightSource::computeMergedShadow(void)

{
  long lVar1;
  long in_x0;
  MergedShadowGroup *this;
  MergedShadowAABB aMStack_f8 [144];
  Vector3 aVStack_68 [16];
  Vector3 aVStack_58 [16];
  Vector3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = *(MergedShadowGroup **)(in_x0 + 0x158);
  MergedShadowGroup::computeMergedShadowAxes(this,aVStack_68,aVStack_48,aVStack_58);
  MergedShadowGroup::computeFit
            ((Vector3 *)this,aVStack_68,aVStack_58,(MergedShadowClippingPlaneCorners *)aVStack_48,
             aMStack_f8);
  MergedShadowGroup::setupMergedShadowLight
            ((Vector3 *)this,aVStack_68,aVStack_58,(MergedShadowClippingPlaneCorners *)aVStack_48,
             aMStack_f8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


