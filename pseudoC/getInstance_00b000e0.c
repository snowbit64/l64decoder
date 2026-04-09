// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00b000e0
// Size: 128 bytes
// Signature: undefined getInstance(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LocalizationManager::getInstance() */

undefined * LocalizationManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02115190 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02115190), iVar1 != 0)) {
    DAT_02115160 = 0x3f800000;
    uRam0000000002115158 = 0;
    _DAT_02115150 = 0;
    uRam0000000002115148 = 0;
    _DAT_02115140 = 0;
    uRam0000000002115170 = 0;
    _DAT_02115168 = 0;
    uRam0000000002115180 = 0;
    _DAT_02115178 = 0;
    DAT_02115188 = 0x3f800000;
    __cxa_atexit(~LocalizationManager,&DAT_02115138,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02115190);
  }
  return &DAT_02115138;
}


