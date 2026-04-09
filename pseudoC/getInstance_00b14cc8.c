// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00b14cc8
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VoiceChatManager::getInstance() */

undefined * VoiceChatManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02116e40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02116e40), iVar1 != 0)) {
                    /* try { // try from 00b14d08 to 00b14d13 has its CatchHandler @ 00b14d40 */
    VoiceChatManager((VoiceChatManager *)&DAT_021157e8);
    __cxa_atexit(~VoiceChatManager,&DAT_021157e8,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02116e40);
  }
  return &DAT_021157e8;
}


