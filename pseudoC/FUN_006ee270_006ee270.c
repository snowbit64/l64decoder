// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ee270
// Entry Point: 006ee270
// Size: 244 bytes
// Signature: undefined FUN_006ee270(void)


long FUN_006ee270(long param_1,undefined8 *param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x38);
  __mutex = (pthread_mutex_t *)(lVar7 + 0x68);
  pthread_mutex_lock(__mutex);
  *(undefined4 *)(lVar7 + 0x104) = 0;
  local_4c[0] = 0xc;
  sVar3 = write(*(int *)(lVar7 + 0xc4),local_4c,1);
  if (sVar3 != 1) {
    piVar4 = (int *)__errno();
    pcVar5 = strerror(*piVar4);
    __android_log_print(6,"threaded_app","Failure writing android_app cmd: %s",pcVar5);
  }
  if (*(int *)(lVar7 + 0x104) == 0) {
    do {
      pthread_cond_wait((pthread_cond_t *)(lVar7 + 0x90),__mutex);
    } while (*(int *)(lVar7 + 0x104) == 0);
  }
  lVar6 = *(long *)(lVar7 + 0x28);
  if (lVar6 != 0) {
    *param_2 = *(undefined8 *)(lVar7 + 0x30);
    *(long *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
  }
  iVar2 = pthread_mutex_unlock(__mutex);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


