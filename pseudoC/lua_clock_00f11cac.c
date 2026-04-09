// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_clock
// Entry Point: 00f11cac
// Size: 184 bytes
// Signature: undefined lua_clock(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* lua_clock() */

undefined  [16] lua_clock(void)

{
  long lVar1;
  int iVar2;
  undefined auVar3 [16];
  double dVar4;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_02124af8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02124af8), iVar2 != 0)) {
    DAT_02124af0 = 1e-09;
    __cxa_guard_release(&DAT_02124af8);
  }
  iVar2 = clock_gettime(1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    dVar4 = (double)NEON_fmadd((double)local_38.tv_sec,0x41cdcd6500000000,(double)local_38.tv_nsec);
    auVar3._0_8_ = dVar4 * DAT_02124af0;
    auVar3._8_8_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


