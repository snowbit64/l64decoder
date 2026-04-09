// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006edf9c
// Entry Point: 006edf9c
// Size: 240 bytes
// Signature: undefined FUN_006edf9c(void)


void FUN_006edf9c(long param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long lVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  void *__ptr;
  undefined local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __ptr = *(void **)(param_1 + 0x38);
  __mutex = (pthread_mutex_t *)((long)__ptr + 0x68);
  pthread_mutex_lock(__mutex);
  local_3c[0] = 0xf;
  sVar3 = write(*(int *)((long)__ptr + 0xc4),local_3c,1);
  if (sVar3 != 1) {
    piVar4 = (int *)__errno();
    pcVar5 = strerror(*piVar4);
    __android_log_print(6,"threaded_app","Failure writing android_app cmd: %s",pcVar5);
  }
  iVar1 = *(int *)((long)__ptr + 0x108);
  while (iVar1 == 0) {
    pthread_cond_wait((pthread_cond_t *)((long)__ptr + 0x90),__mutex);
    iVar1 = *(int *)((long)__ptr + 0x108);
  }
  pthread_mutex_unlock(__mutex);
  close(*(int *)((long)__ptr + 0xc0));
  close(*(int *)((long)__ptr + 0xc4));
  pthread_cond_destroy((pthread_cond_t *)((long)__ptr + 0x90));
  pthread_mutex_destroy(__mutex);
  free(__ptr);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


