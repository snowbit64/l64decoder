// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reset
// Entry Point: 00fa80ac
// Size: 240 bytes
// Signature: undefined Reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileManager::Reset() */

void CProfileManager::Reset(void)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  timeval local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  gettimeofday(DAT_02125d68,(__timezone_ptr_t)0x0);
  CProfileNode::Reset();
  DAT_02125d78 = DAT_02125d78 + 1;
  iVar3 = DAT_02125d88 + 1;
  bVar1 = DAT_02125d88 == 0;
  DAT_02125d88 = iVar3;
  if (bVar1) {
    gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    DAT_02125d80 = (local_48.tv_usec - DAT_02125d68->tv_usec) +
                   (local_48.tv_sec - DAT_02125d68->tv_sec) * 1000000;
  }
  FrameCounter = 0;
  iVar3 = gettimeofday(&local_48,(__timezone_ptr_t)0x0);
  ResetTime = (local_48.tv_usec - DAT_02125d68->tv_usec) +
              (local_48.tv_sec - DAT_02125d68->tv_sec) * 1000000;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


