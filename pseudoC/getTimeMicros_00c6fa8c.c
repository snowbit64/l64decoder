// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTimeMicros
// Entry Point: 00c6fa8c
// Size: 120 bytes
// Signature: undefined getTimeMicros(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::getTimeMicros() */

long AndroidSysUtil::getTimeMicros(void)

{
  long lVar1;
  int iVar2;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = clock_gettime(1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_38.tv_sec * 1000000 + (ulong)local_38.tv_nsec / 1000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


