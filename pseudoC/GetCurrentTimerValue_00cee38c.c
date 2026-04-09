// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetCurrentTimerValue
// Entry Point: 00cee38c
// Size: 96 bytes
// Signature: undefined GetCurrentTimerValue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Timer::GetCurrentTimerValue() */

long CryptoPP::Timer::GetCurrentTimerValue(void)

{
  long lVar1;
  int iVar2;
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday(&local_38,(__timezone_ptr_t)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_38.tv_usec + local_38.tv_sec * 1000000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


