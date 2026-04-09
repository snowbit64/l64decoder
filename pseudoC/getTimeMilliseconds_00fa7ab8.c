// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTimeMilliseconds
// Entry Point: 00fa7ab8
// Size: 136 bytes
// Signature: undefined getTimeMilliseconds(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btClock::getTimeMilliseconds() */

long btClock::getTimeMilliseconds(void)

{
  long lVar1;
  int iVar2;
  long **in_x0;
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday(&local_38,(__timezone_ptr_t)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (local_38.tv_usec - (*in_x0)[1]) / 1000 + (local_38.tv_sec - **in_x0) * 1000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


