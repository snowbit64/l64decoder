// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Get_Time_Since_Reset
// Entry Point: 00fa81b4
// Size: 152 bytes
// Signature: undefined Get_Time_Since_Reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileManager::Get_Time_Since_Reset() */

float CProfileManager::Get_Time_Since_Reset(void)

{
  long lVar1;
  int iVar2;
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday(&local_38,(__timezone_ptr_t)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (float)(unkuint9)
                  (ulong)((local_38.tv_usec + (local_38.tv_sec - *DAT_02125d68) * 1000000) -
                         (DAT_02125d68[1] + ResetTime)) * 0.001;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


