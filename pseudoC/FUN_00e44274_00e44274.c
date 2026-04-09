// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e44274
// Entry Point: 00e44274
// Size: 184 bytes
// Signature: undefined FUN_00e44274(void)


ulong FUN_00e44274(ulong param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  pthread_mutex_t *__mutex;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  iVar2 = *(int *)(param_1 + 0x2020);
  uVar6 = param_1;
  do {
    if (iVar2 == 0) {
      return uVar6;
    }
    while( true ) {
      if (*(pthread_mutex_t **)(param_1 + 0x10) != (pthread_mutex_t *)0x0) {
        pthread_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x10));
      }
      iVar2 = *(int *)(param_1 + 0x2018);
      if (iVar2 < 1) {
        puVar8 = (undefined8 *)0x0;
        __mutex = *(pthread_mutex_t **)(param_1 + 0x10);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x201c);
        *(uint *)(param_1 + 0x2018) = iVar2 - 1U;
        iVar4 = 0;
        if (iVar2 != 0) {
          iVar4 = iVar3 / iVar2;
        }
        uVar5 = iVar3 - iVar4 * iVar2;
        lVar1 = param_1 + 0x18;
        uVar6 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3;
        uVar7 = *(undefined8 *)(lVar1 + (ulong)(iVar2 - 1U) * 8);
        *(int *)(param_1 + 0x201c) = iVar3 + 1;
        puVar8 = *(undefined8 **)(lVar1 + uVar6);
        *(undefined8 *)(lVar1 + uVar6) = uVar7;
        __mutex = *(pthread_mutex_t **)(param_1 + 0x10);
      }
      if (__mutex != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(__mutex);
      }
      if (puVar8 != (undefined8 *)0x0) break;
      uVar5 = usleep(1000);
      if (*(int *)(param_1 + 0x2020) == 0) {
        return (ulong)uVar5;
      }
    }
    uVar6 = (**(code **)*puVar8)(puVar8);
    iVar2 = *(int *)(param_1 + 0x2020);
  } while( true );
}


