// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIdentity
// Entry Point: 00f8e7e8
// Size: 112 bytes
// Signature: undefined getIdentity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btTransform::getIdentity() */

undefined1 * btTransform::getIdentity(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((getIdentity()::identityTransform & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&getIdentity()::identityTransform), iVar1 != 0)) {
    puVar2 = (undefined8 *)btMatrix3x3::getIdentity();
    getIdentity()::identityTransform._8_8_ = puVar2[1];
    getIdentity()::identityTransform._0_8_ = *puVar2;
    getIdentity()::identityTransform._24_8_ = puVar2[3];
    getIdentity()::identityTransform._16_8_ = puVar2[2];
    getIdentity()::identityTransform._40_8_ = puVar2[5];
    getIdentity()::identityTransform._32_8_ = puVar2[4];
    getIdentity()::identityTransform._48_8_ = 0;
    getIdentity()::identityTransform._56_8_ = 0;
    __cxa_guard_release(&getIdentity()::identityTransform);
  }
  return getIdentity()::identityTransform;
}


