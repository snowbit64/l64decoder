// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ee628
// Entry Point: 006ee628
// Size: 220 bytes
// Signature: undefined FUN_006ee628(void)


void FUN_006ee628(long param_1,byte param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  byte local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  __mutex = (pthread_mutex_t *)(param_1 + 0x68);
  local_48 = *(long *)(lVar1 + 0x28);
  pthread_mutex_lock(__mutex);
  local_4c[0] = param_2;
  sVar3 = write(*(int *)(param_1 + 0xc4),local_4c,1);
  if (sVar3 != 1) {
    piVar4 = (int *)__errno();
    pcVar5 = strerror(*piVar4);
    __android_log_print(6,"threaded_app","Failure writing android_app cmd: %s",pcVar5);
  }
  if (*(uint *)(param_1 + 0x60) != (uint)param_2) {
    do {
      pthread_cond_wait((pthread_cond_t *)(param_1 + 0x90),__mutex);
    } while (*(uint *)(param_1 + 0x60) != (uint)param_2);
  }
  iVar2 = pthread_mutex_unlock(__mutex);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


