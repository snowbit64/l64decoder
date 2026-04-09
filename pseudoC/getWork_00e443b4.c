// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWork
// Entry Point: 00e443b4
// Size: 128 bytes
// Signature: undefined getWork(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Thread::Pool::getWork() */

undefined8 SoLoud::Thread::Pool::getWork(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long in_x0;
  pthread_mutex_t *__mutex;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(pthread_mutex_t **)(in_x0 + 0x10) != (pthread_mutex_t *)0x0) {
    pthread_mutex_lock(*(pthread_mutex_t **)(in_x0 + 0x10));
  }
  iVar2 = *(int *)(in_x0 + 0x2018);
  if (iVar2 < 1) {
    uVar8 = 0;
    __mutex = *(pthread_mutex_t **)(in_x0 + 0x10);
  }
  else {
    iVar3 = *(int *)(in_x0 + 0x201c);
    *(uint *)(in_x0 + 0x2018) = iVar2 - 1U;
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = iVar3 / iVar2;
    }
    uVar4 = iVar3 - iVar5 * iVar2;
    lVar1 = in_x0 + 0x18;
    uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
    uVar7 = *(undefined8 *)(lVar1 + (ulong)(iVar2 - 1U) * 8);
    *(int *)(in_x0 + 0x201c) = iVar3 + 1;
    uVar8 = *(undefined8 *)(lVar1 + uVar6);
    *(undefined8 *)(lVar1 + uVar6) = uVar7;
    __mutex = *(pthread_mutex_t **)(in_x0 + 0x10);
  }
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
  }
  return uVar8;
}


