// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: android_app_pre_exec_cmd
// Entry Point: 006eda80
// Size: 300 bytes
// Signature: undefined android_app_pre_exec_cmd(void)


void android_app_pre_exec_cmd(ulong param_1,char param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined auStack_40 [4];
  undefined auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  switch((int)param_2) {
  case 0:
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x68));
    if (*(long *)(param_1 + 0x40) != 0) {
      AInputQueue_detachLooper();
    }
    lVar3 = *(long *)(param_1 + 0x110);
    *(long *)(param_1 + 0x40) = lVar3;
    if (lVar3 != 0) {
      AInputQueue_attachLooper(lVar3,*(undefined8 *)(param_1 + 0x38),2,0,param_1 + 0xe8);
    }
    goto LAB_006edadc;
  case 1:
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x118);
    goto LAB_006edadc;
  case 2:
    uVar2 = pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x90));
    param_1 = (ulong)uVar2;
    break;
  case 8:
    AConfiguration_fromAssetManager
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40));
    AConfiguration_getLanguage(*(undefined8 *)(param_1 + 0x20),auStack_3c);
    param_1 = AConfiguration_getCountry(*(undefined8 *)(param_1 + 0x20),auStack_40);
    break;
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x68));
    *(int *)(param_1 + 0x60) = (int)param_2;
LAB_006edadc:
    pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x90));
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x68));
    param_1 = (ulong)uVar2;
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 100) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


