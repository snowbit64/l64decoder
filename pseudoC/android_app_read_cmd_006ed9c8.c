// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: android_app_read_cmd
// Entry Point: 006ed9c8
// Size: 184 bytes
// Signature: undefined android_app_read_cmd(void)


void android_app_read_cmd(long param_1)

{
  long lVar1;
  ssize_t sVar2;
  void *__ptr;
  char local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sVar2 = read(*(int *)(param_1 + 0xc0),local_3c,1);
  if (sVar2 == 1) {
    if (local_3c[0] == '\f') {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x68));
      __ptr = *(void **)(param_1 + 0x28);
      if (__ptr != (void *)0x0) {
        free(__ptr);
        *(void **)(param_1 + 0x28) = (void *)0x0;
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x68));
      local_3c[0] = '\f';
    }
  }
  else {
    __android_log_print(6,"threaded_app","No data on command pipe!");
    local_3c[0] = -1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_3c[0]);
}


