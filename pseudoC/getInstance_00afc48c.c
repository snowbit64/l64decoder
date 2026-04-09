// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00afc48c
// Size: 176 bytes
// Signature: undefined getInstance(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsNotificationManager::getInstance() */

undefined4 * GiantsNotificationManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02113d38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02113d38), iVar1 != 0)) {
    DAT_02113c48 = 0;
    DAT_02113c50 = 0;
    DAT_02113c68 = 0;
    DAT_02113c58 = 0;
    DAT_02113c60 = &DAT_02113c68;
    DAT_02113c70 = 0;
    DAT_02113c88 = 0;
    DAT_02113c90 = 0;
    DAT_02113c80 = 0;
    uRam0000000002113cb8 = 0;
    _DAT_02113cb0 = 0;
    uRam0000000002113cc8 = 0;
    _DAT_02113cc0 = 0;
    uRam0000000002113cd8 = 0;
    _DAT_02113cd0 = 0;
    uRam0000000002113ce8 = 0;
    _DAT_02113ce0 = 0;
    uRam0000000002113cf8 = 0;
    _DAT_02113cf0 = 0;
    uRam0000000002113d08 = 0;
    _DAT_02113d00 = 0;
    uRam0000000002113d18 = 0;
    _DAT_02113d10 = 0;
    DAT_02113d20 = 0;
    DAT_02113d30 = 0;
    DAT_02113c40 = 0x1010100;
    DAT_02113c78 = 0;
    DAT_02113c98 = 0;
    __cxa_atexit(~GiantsNotificationManager,&DAT_02113c40,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02113d38);
  }
  return &DAT_02113c40;
}


