// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00952744
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaterialShaderManager::getInstance() */

undefined * MaterialShaderManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_0210e530 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0210e530), iVar1 != 0)) {
                    /* try { // try from 00952784 to 0095278f has its CatchHandler @ 009527bc */
    MaterialShaderManager((MaterialShaderManager *)&DAT_0210e408);
    __cxa_atexit(~MaterialShaderManager,&DAT_0210e408,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0210e530);
  }
  return &DAT_0210e408;
}


