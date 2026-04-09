// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00a7785c
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EntityRegistryManager::getInstance() */

undefined * EntityRegistryManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02112d30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02112d30), iVar1 != 0)) {
                    /* try { // try from 00a7789c to 00a778a7 has its CatchHandler @ 00a778d4 */
    EntityRegistryManager((EntityRegistryManager *)&DAT_02112cd8);
    __cxa_atexit(~EntityRegistryManager,&DAT_02112cd8,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02112d30);
  }
  return &DAT_02112cd8;
}


