// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ee410
// Entry Point: 006ee410
// Size: 220 bytes
// Signature: undefined FUN_006ee410(void)


void FUN_006ee410(long param_1,undefined8 param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  undefined local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  __mutex = (pthread_mutex_t *)(param_1 + 0x68);
  local_38 = *(long *)(lVar1 + 0x28);
  pthread_mutex_lock(__mutex);
  *(undefined8 *)(param_1 + 0x110) = param_2;
  local_3c[0] = 0;
  sVar3 = write(*(int *)(param_1 + 0xc4),local_3c,1);
  if (sVar3 != 1) {
    piVar4 = (int *)__errno();
    pcVar5 = strerror(*piVar4);
    __android_log_print(6,"threaded_app","Failure writing android_app cmd: %s",pcVar5);
  }
  if (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x110)) {
    do {
      pthread_cond_wait((pthread_cond_t *)(param_1 + 0x90),__mutex);
    } while (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x110));
  }
  iVar2 = pthread_mutex_unlock(__mutex);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


