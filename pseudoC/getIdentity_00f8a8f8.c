// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIdentity
// Entry Point: 00f8a8f8
// Size: 116 bytes
// Signature: undefined getIdentity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btMatrix3x3::getIdentity() */

undefined4 * btMatrix3x3::getIdentity(void)

{
  int iVar1;
  
  if (((getIdentity()::identityMatrix & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&getIdentity()::identityMatrix), iVar1 != 0)) {
    getIdentity()::identityMatrix = 0x3f800000;
    DAT_02125914 = 0;
    DAT_0212590c = 0;
    DAT_0212591c = 0x3f800000;
    DAT_02125920 = 0;
    DAT_02125928 = 0;
    DAT_02125930 = 0x3f800000;
    __cxa_guard_release(&getIdentity()::identityMatrix);
  }
  return &getIdentity()::identityMatrix;
}


