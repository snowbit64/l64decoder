// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 0074eb38
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::getInstance() */

undefined * EngineManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_010530b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_010530b8), iVar1 != 0)) {
                    /* try { // try from 0074eb78 to 0074eb83 has its CatchHandler @ 0074ebb0 */
    EngineManager((EngineManager *)&DAT_01052d78);
    __cxa_atexit(~EngineManager,&DAT_01052d78,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_010530b8);
  }
  return &DAT_01052d78;
}


