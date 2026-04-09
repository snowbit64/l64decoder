// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00964308
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::getInstance() */

undefined * TextureStreamingManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02110160 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02110160), iVar1 != 0)) {
                    /* try { // try from 00964348 to 00964353 has its CatchHandler @ 00964380 */
    TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
    __cxa_atexit(~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02110160);
  }
  return &DAT_0210f8a0;
}


