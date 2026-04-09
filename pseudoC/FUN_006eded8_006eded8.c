// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006eded8
// Entry Point: 006eded8
// Size: 196 bytes
// Signature: undefined FUN_006eded8(void)


void FUN_006eded8(long param_1,undefined8 *param_2)

{
  long lVar1;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x38);
  pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x68));
  uVar6 = *param_2;
  *(undefined8 *)(lVar5 + 0x58) = param_2[1];
  *(undefined8 *)(lVar5 + 0x50) = uVar6;
  pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x68));
  local_4c[0] = 5;
  sVar2 = write(*(int *)(*(long *)(param_1 + 0x38) + 0xc4),local_4c,1);
  if (sVar2 != 1) {
    piVar3 = (int *)__errno();
    pcVar4 = strerror(*piVar3);
    __android_log_print(6,"threaded_app","Failure writing android_app cmd: %s",pcVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


