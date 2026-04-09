// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTimeSec
// Entry Point: 00c68fe0
// Size: 144 bytes
// Signature: undefined getTimeSec(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Watch::getTimeSec() */

undefined  [16] Watch::getTimeSec(void)

{
  long lVar1;
  int iVar2;
  undefined auVar3 [16];
  timezone tStack_40;
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday(&local_38,&tStack_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    auVar3._0_8_ = ((double)(unkuint9)
                            (ulong)((local_38.tv_usec + local_38.tv_sec * 1000000) - s_timeZero) /
                   1000.0) * 0.001;
    auVar3._8_8_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


