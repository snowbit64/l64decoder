// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ee704
// Entry Point: 006ee704
// Size: 348 bytes
// Signature: undefined FUN_006ee704(void)


undefined8 FUN_006ee704(long param_1)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  void *__ptr;
  undefined auStack_50 [4];
  undefined auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = AConfiguration_new();
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  AConfiguration_fromAssetManager(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40));
  AConfiguration_getLanguage(*(undefined8 *)(param_1 + 0x20),auStack_4c);
  AConfiguration_getCountry(*(undefined8 *)(param_1 + 0x20),auStack_50);
  *(long *)(param_1 + 0xd8) = param_1;
  *(code **)(param_1 + 0xe0) = FUN_006ee860;
  *(undefined4 *)(param_1 + 0xe8) = 2;
  *(undefined4 *)(param_1 + 0xd0) = 1;
  *(long *)(param_1 + 0xf0) = param_1;
  *(code **)(param_1 + 0xf8) = FUN_006ee948;
  uVar3 = ALooper_prepare(1);
  ALooper_addFd(uVar3,*(undefined4 *)(param_1 + 0xc0),1,1,0,(undefined4 *)(param_1 + 0xd0));
  __mutex = (pthread_mutex_t *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  pthread_mutex_lock(__mutex);
  *(undefined4 *)(param_1 + 0x100) = 1;
  pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x90));
  pthread_mutex_unlock(__mutex);
  android_main(param_1);
  pthread_mutex_lock(__mutex);
  __ptr = *(void **)(param_1 + 0x28);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    *(void **)(param_1 + 0x28) = (void *)0x0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  pthread_mutex_unlock(__mutex);
  pthread_mutex_lock(__mutex);
  if (*(long *)(param_1 + 0x40) != 0) {
    AInputQueue_detachLooper();
  }
  AConfiguration_delete(*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x108) = 1;
  pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x90));
  iVar2 = pthread_mutex_unlock(__mutex);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


