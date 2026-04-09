// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: optimizeBottomUp
// Entry Point: 00f41440
// Size: 248 bytes
// Signature: undefined optimizeBottomUp(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btDbvt::optimizeBottomUp() */

void btDbvt::optimizeBottomUp(void)

{
  long lVar1;
  long *in_x0;
  long lVar2;
  long *local_48;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*in_x0 != 0) {
    local_48 = (long *)0x0;
    if (0 < (int)*(uint *)((long)in_x0 + 0x14)) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      local_48 = (long *)(*(code *)PTR_FUN_01048e38)((ulong)*(uint *)((long)in_x0 + 0x14) << 3,0x10)
      ;
    }
    FUN_00f41538();
    FUN_00f416ac();
    *in_x0 = *local_48;
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


