// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ee4ec
// Entry Point: 006ee4ec
// Size: 316 bytes
// Signature: undefined FUN_006ee4ec(void)


void FUN_006ee4ec(long param_1,long param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  undefined local_40 [4];
  undefined local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  __mutex = (pthread_mutex_t *)(param_1 + 0x68);
  local_38 = *(long *)(lVar1 + 0x28);
  pthread_mutex_lock(__mutex);
  if (*(long *)(param_1 + 0x118) != 0) {
    local_40[0] = 2;
    sVar3 = write(*(int *)(param_1 + 0xc4),local_40,1);
    if (sVar3 != 1) {
      piVar4 = (int *)__errno();
      pcVar5 = strerror(*piVar4);
      __android_log_print(6,"threaded_app","Failure writing android_app cmd: %s",pcVar5);
    }
  }
  *(long *)(param_1 + 0x118) = param_2;
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    local_3c[0] = 1;
    sVar3 = write(*(int *)(param_1 + 0xc4),local_3c,1);
    if (sVar3 != 1) {
      piVar4 = (int *)__errno();
      pcVar5 = strerror(*piVar4);
      __android_log_print(6,"threaded_app","Failure writing android_app cmd: %s",pcVar5);
    }
    lVar6 = *(long *)(param_1 + 0x118);
  }
  if (*(long *)(param_1 + 0x48) != lVar6) {
    do {
      pthread_cond_wait((pthread_cond_t *)(param_1 + 0x90),__mutex);
    } while (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 0x118));
  }
  iVar2 = pthread_mutex_unlock(__mutex);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


