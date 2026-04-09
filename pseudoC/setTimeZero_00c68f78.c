// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTimeZero
// Entry Point: 00c68f78
// Size: 104 bytes
// Signature: undefined setTimeZero(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Watch::setTimeZero() */

void Watch::setTimeZero(void)

{
  long lVar1;
  int iVar2;
  timezone tStack_40;
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday(&local_38,&tStack_40);
  s_timeZero = local_38.tv_usec + local_38.tv_sec * 1000000;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


