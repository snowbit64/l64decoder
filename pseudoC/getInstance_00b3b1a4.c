// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00b3b1a4
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::getInstance() */

undefined * MasterServerManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02118e50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02118e50), iVar1 != 0)) {
                    /* try { // try from 00b3b1e4 to 00b3b1ef has its CatchHandler @ 00b3b21c */
    MasterServerManager((MasterServerManager *)&DAT_02118950);
    __cxa_atexit(~MasterServerManager,&DAT_02118950,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02118e50);
  }
  return &DAT_02118950;
}


