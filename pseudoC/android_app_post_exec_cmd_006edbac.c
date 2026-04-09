// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: android_app_post_exec_cmd
// Entry Point: 006edbac
// Size: 164 bytes
// Signature: undefined android_app_post_exec_cmd(void)


ulong android_app_post_exec_cmd(ulong param_1,char param_2)

{
  uint uVar1;
  void *__ptr;
  
  if (param_2 == '\f') {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x104) = 1;
    pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x90));
  }
  else if (param_2 == '\v') {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x68));
    __ptr = *(void **)(param_1 + 0x28);
    if (__ptr != (void *)0x0) {
      free(__ptr);
      *(void **)(param_1 + 0x28) = (void *)0x0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  else {
    if (param_2 != '\x02') {
      return param_1;
    }
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x48) = 0;
    pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x90));
  }
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x68));
  return (ulong)uVar1;
}


