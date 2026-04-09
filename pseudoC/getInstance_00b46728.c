// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00b46728
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ENetNetworkManager::getInstance() */

undefined * ENetNetworkManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_0211a8f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0211a8f8), iVar1 != 0)) {
                    /* try { // try from 00b46768 to 00b46773 has its CatchHandler @ 00b467a0 */
    ENetNetworkManager((ENetNetworkManager *)&DAT_0211a728);
    __cxa_atexit(~ENetNetworkManager,&DAT_0211a728,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0211a8f8);
  }
  return &DAT_0211a728;
}


