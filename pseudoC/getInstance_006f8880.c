// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 006f8880
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AdsBrockerManager::getInstance() */

undefined * AdsBrockerManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_01052b08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01052b08), iVar1 != 0)) {
                    /* try { // try from 006f88c0 to 006f88cb has its CatchHandler @ 006f88f8 */
    AdsBrockerManager((AdsBrockerManager *)&DAT_01052228);
    __cxa_atexit(~AdsBrockerManager,&DAT_01052228,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_01052b08);
  }
  return &DAT_01052228;
}


