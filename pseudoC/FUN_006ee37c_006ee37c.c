// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ee37c
// Entry Point: 006ee37c
// Size: 148 bytes
// Signature: undefined FUN_006ee37c(void)


void FUN_006ee37c(long param_1,int param_2)

{
  long lVar1;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  undefined local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = 6;
  if (param_2 == 0) {
    local_2c[0] = 7;
  }
  sVar2 = write(*(int *)(*(long *)(param_1 + 0x38) + 0xc4),local_2c,1);
  if (sVar2 != 1) {
    piVar3 = (int *)__errno();
    pcVar4 = strerror(*piVar3);
    __android_log_print(6,"threaded_app","Failure writing android_app cmd: %s",pcVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


