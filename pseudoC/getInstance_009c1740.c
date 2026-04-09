// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 009c1740
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementCacheManager::getInstance() */

undefined * ProceduralPlacementCacheManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02111bc0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02111bc0), iVar1 != 0)) {
                    /* try { // try from 009c1780 to 009c178b has its CatchHandler @ 009c17b8 */
    ProceduralPlacementCacheManager((ProceduralPlacementCacheManager *)&DAT_021119d0);
    __cxa_atexit(~ProceduralPlacementCacheManager,&DAT_021119d0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02111bc0);
  }
  return &DAT_021119d0;
}


