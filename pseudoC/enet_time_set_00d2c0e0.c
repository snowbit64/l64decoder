// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_time_set
// Entry Point: 00d2c0e0
// Size: 140 bytes
// Signature: undefined enet_time_set(void)


void enet_time_set(int param_1)

{
  long lVar1;
  int iVar2;
  int local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday((timeval *)&local_38,(__timezone_ptr_t)0x0);
  DAT_02122ea0 = (((int)(SUB168(SEXT816(local_30) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                  (SUB164(SEXT816(local_30) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f)) +
                 local_38 * 1000) - param_1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


