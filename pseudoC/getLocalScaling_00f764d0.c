// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLocalScaling
// Entry Point: 00f764d0
// Size: 92 bytes
// Signature: undefined getLocalScaling(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBodyCollisionShape::getLocalScaling() const */

undefined1 * btSoftBodyCollisionShape::getLocalScaling(void)

{
  int iVar1;
  
  if (((getLocalScaling()::dummy & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&getLocalScaling()::dummy), iVar1 != 0)) {
    getLocalScaling()::dummy._8_8_ = 0x3f800000;
    getLocalScaling()::dummy._0_8_ = 0x3f8000003f800000;
    __cxa_guard_release(&getLocalScaling()::dummy);
  }
  return getLocalScaling()::dummy;
}


