// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetCurrentTimerValue
// Entry Point: 00cee3f8
// Size: 76 bytes
// Signature: undefined GetCurrentTimerValue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ThreadUserTimer::GetCurrentTimerValue() */

void CryptoPP::ThreadUserTimer::GetCurrentTimerValue(void)

{
  long lVar1;
  tms local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  times(&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48.tms_utime);
}


