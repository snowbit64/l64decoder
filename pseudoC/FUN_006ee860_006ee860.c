// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ee860
// Entry Point: 006ee860
// Size: 232 bytes
// Signature: undefined FUN_006ee860(void)


void FUN_006ee860(long param_1)

{
  long lVar1;
  ssize_t sVar2;
  void *__ptr;
  char cVar3;
  char local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sVar2 = read(*(int *)(param_1 + 0xc0),local_3c,1);
  if (sVar2 == 1) {
    cVar3 = local_3c[0];
    if (local_3c[0] == '\f') {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x68));
      __ptr = *(void **)(param_1 + 0x28);
      if (__ptr != (void *)0x0) {
        free(__ptr);
        *(void **)(param_1 + 0x28) = (void *)0x0;
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x68));
      cVar3 = '\f';
    }
  }
  else {
    __android_log_print(6,"threaded_app","No data on command pipe!");
    cVar3 = -1;
  }
  android_app_pre_exec_cmd(param_1,cVar3);
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_1,(int)cVar3);
  }
  android_app_post_exec_cmd(param_1,cVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


