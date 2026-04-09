// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00b01f20
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamManager::getInstance() */

undefined * StreamManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02115340 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02115340), iVar1 != 0)) {
                    /* try { // try from 00b01f60 to 00b01f6b has its CatchHandler @ 00b01f98 */
    StreamManager((StreamManager *)&DAT_02115240);
    __cxa_atexit(~StreamManager,&DAT_02115240,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02115340);
  }
  return &DAT_02115240;
}


