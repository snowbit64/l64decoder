// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 006eceec
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LogManager::getInstance() */

undefined8 * LogManager::getInstance(void)

{
  int iVar1;
  
  if (((getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 006ecf2c to 006ecf37 has its CatchHandler @ 006ecf64 */
    LogManager((LogManager *)&getInstance()::singletonLogManager);
    __cxa_atexit(~LogManager,&getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&getInstance()::singletonLogManager);
  }
  return &getInstance()::singletonLogManager;
}


