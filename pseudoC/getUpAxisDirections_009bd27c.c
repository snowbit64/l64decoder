// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUpAxisDirections
// Entry Point: 009bd27c
// Size: 116 bytes
// Signature: undefined getUpAxisDirections(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2KinematicCharacterController::getUpAxisDirections() */

undefined4 * Bt2KinematicCharacterController::getUpAxisDirections(void)

{
  int iVar1;
  
  if (((DAT_021119c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_021119c8), iVar1 != 0)) {
    DAT_021119a4 = 0;
    DAT_0211199c = 0;
    DAT_02111998 = 0x3f800000;
    DAT_021119ac = 0x3f800000;
    DAT_021119b0 = 0;
    DAT_021119b8 = 0;
    DAT_021119c0 = 0x3f800000;
    __cxa_guard_release(&DAT_021119c8);
  }
  return &DAT_02111998;
}


