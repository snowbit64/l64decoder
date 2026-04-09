// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00b4598c
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextFilterManager::getInstance() */

undefined * TextFilterManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_0211a718 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0211a718), iVar1 != 0)) {
                    /* try { // try from 00b459cc to 00b459d7 has its CatchHandler @ 00b45a04 */
    TextFilterManager((TextFilterManager *)&DAT_02118e58);
    __cxa_atexit(~TextFilterManager,&DAT_02118e58,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0211a718);
  }
  return &DAT_02118e58;
}


