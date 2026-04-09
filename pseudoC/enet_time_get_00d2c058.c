// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_time_get
// Entry Point: 00d2c058
// Size: 136 bytes
// Signature: undefined enet_time_get(void)


int enet_time_get(void)

{
  long lVar1;
  int iVar2;
  int local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday((timeval *)&local_38,(__timezone_ptr_t)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (((int)(SUB168(SEXT816(local_30) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
            (SUB164(SEXT816(local_30) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f)) + local_38 * 1000
           ) - DAT_02122ea0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


