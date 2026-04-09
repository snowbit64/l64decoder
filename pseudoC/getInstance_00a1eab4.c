// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00a1eab4
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderPathManager::getInstance() */

undefined * RenderPathManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02112c88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02112c88), iVar1 != 0)) {
                    /* try { // try from 00a1eaf4 to 00a1eaff has its CatchHandler @ 00a1eb2c */
    RenderPathManager((RenderPathManager *)&DAT_02112a70);
    __cxa_atexit(~RenderPathManager,&DAT_02112a70,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02112c88);
  }
  return &DAT_02112a70;
}


