// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 0075f4dc
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScriptingNetworkManager::getInstance() */

undefined8 * ScriptingNetworkManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_01053c80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01053c80), iVar1 != 0)) {
                    /* try { // try from 0075f51c to 0075f527 has its CatchHandler @ 0075f554 */
    ScriptingNetworkManager((ScriptingNetworkManager *)&DAT_01053c40);
    __cxa_atexit(~ScriptingNetworkManager,&DAT_01053c40,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_01053c80);
  }
  return &DAT_01053c40;
}


