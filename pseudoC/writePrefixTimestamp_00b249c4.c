// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writePrefixTimestamp
// Entry Point: 00b249c4
// Size: 120 bytes
// Signature: undefined writePrefixTimestamp(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AsyncFileLogSink::writePrefixTimestamp() */

void AsyncFileLogSink::writePrefixTimestamp(void)

{
  long lVar1;
  uint uVar2;
  AsyncFileLogSink *in_x0;
  longlong lVar3;
  char acStack_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = EnvUtil::getTime();
  EnvUtil::formatDateString(lVar3,"%Y-%m-%d %H:%M ",acStack_a8,0x80);
  uVar2 = __strlen_chk(acStack_a8,0x80);
  write(in_x0,acStack_a8,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


