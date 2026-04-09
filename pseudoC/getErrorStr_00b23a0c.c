// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getErrorStr
// Entry Point: 00b23a0c
// Size: 116 bytes
// Signature: undefined __cdecl getErrorStr(Error param_1)


/* USBUtil::getErrorStr(USBUtil::Error) */

void USBUtil::getErrorStr(Error param_1)

{
  long lVar1;
  char *local_40 [4];
  char *local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_40[0] = "OK";
  local_40[1] = "BAD_PACKET";
  local_40[2] = "WRONG_TYPE";
  local_40[3] = "NOT_FOUND";
  local_20 = "NOT_SUPPORTED";
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40[param_1]);
}


