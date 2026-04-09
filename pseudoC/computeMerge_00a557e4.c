// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMerge
// Entry Point: 00a557e4
// Size: 156 bytes
// Signature: undefined computeMerge(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::MergedShadowGroup::computeMerge() */

void LightSource::MergedShadowGroup::computeMerge(void)

{
  long lVar1;
  MergedShadowGroup *in_x0;
  MergedShadowAABB aMStack_f8 [144];
  Vector3 aVStack_68 [16];
  Vector3 aVStack_58 [16];
  Vector3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  computeMergedShadowAxes(in_x0,aVStack_68,aVStack_48,aVStack_58);
  computeFit((Vector3 *)in_x0,aVStack_68,aVStack_58,(MergedShadowClippingPlaneCorners *)aVStack_48,
             aMStack_f8);
  setupMergedShadowLight
            ((Vector3 *)in_x0,aVStack_68,aVStack_58,(MergedShadowClippingPlaneCorners *)aVStack_48,
             aMStack_f8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


