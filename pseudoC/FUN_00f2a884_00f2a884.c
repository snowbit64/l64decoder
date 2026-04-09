// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2a884
// Entry Point: 00f2a884
// Size: 756 bytes
// Signature: undefined FUN_00f2a884(void)


undefined8 FUN_00f2a884(long param_1,ulong param_2,long *param_3,uint param_4)

{
  byte bVar1;
  undefined *__src;
  ulong uVar2;
  undefined8 uVar3;
  undefined *__dest;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined auStack_6e8 [32];
  undefined8 local_6c8;
  long local_6b0;
  undefined4 uStack_6a8;
  long local_698;
  long local_690;
  undefined8 uStack_688;
  undefined auStack_680 [16];
  uint local_670;
  
  if (((param_4 != 0) &&
      (uVar2 = FUN_00f2ad38(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar2 & 1) != 0))
     || ((param_3[4] != 0 &&
         (uVar2 = FUN_00f2af00(*(undefined8 *)(param_1 + 8),param_2,param_3[4],
                               *(undefined4 *)(param_3 + 5),&local_6b0,auStack_6e8),
         (uVar2 & 1) != 0)))) {
    bVar1 = 0;
    goto LAB_00f2aa08;
  }
  lVar5 = *param_3;
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_02124b04);
  if (PTR_DAT_01048e10 < PTR_DAT_01048e18) {
    plVar4 = (long *)PTR_DAT_01048e10;
    if (lVar5 == -1) {
      do {
        if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00f2a994;
        plVar4 = plVar4 + 4;
      } while (plVar4 < PTR_DAT_01048e18);
    }
    else {
      do {
        if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
        goto LAB_00f2a994;
        plVar4 = plVar4 + 4;
      } while (plVar4 < PTR_DAT_01048e18);
    }
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_02124b04);
LAB_00f2a9dc:
  uVar2 = FUN_00f2ad38(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  bVar1 = 0;
  if ((uVar2 & 1) == 0) {
    return 0;
  }
LAB_00f2aa08:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar2 = FUN_00f28bc4(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *(undefined8 *)(param_1 + 0x230) = uStack_688;
    *(long *)(param_1 + 0x228) = local_690;
    *(undefined8 *)(param_1 + 0x238) = local_6c8;
    *(ulong *)(param_1 + 0x240) = (ulong)local_670;
    *(undefined4 *)(param_1 + 0x250) = 0x3000000;
    *(long *)(param_1 + 0x220) = local_698;
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(long *)(param_1 + 0x260) = lVar5;
    *(long *)(param_1 + 600) = local_6b0;
    *(undefined4 *)(param_1 + 0x254) = uStack_6a8;
    if ((!(bool)(param_4 != 0 | bVar1)) && (param_3[4] == 0)) {
      lVar5 = *param_3;
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_02124b04);
      __src = PTR_DAT_01048e10;
      if (PTR_gNumSplitImpulseRecoveries_01048e20 <= PTR_DAT_01048e18) {
        __n = (long)PTR_gNumSplitImpulseRecoveries_01048e20 - (long)PTR_DAT_01048e10;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_02124b40) {
          free(__src);
        }
        PTR_gNumSplitImpulseRecoveries_01048e20 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_01048e18 = __dest + ((long)__n >> 5) * 0x20;
        PTR_DAT_01048e10 = __dest;
      }
      *(long *)PTR_DAT_01048e18 = lVar5;
      *(long *)((long)PTR_DAT_01048e18 + 8) = local_698;
      *(long *)((long)PTR_DAT_01048e18 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_01048e18 + 0x10) = local_690;
      PTR_DAT_01048e18 = (undefined *)((long)PTR_DAT_01048e18 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_02124b04);
      uVar3 = 1;
    }
  }
  return uVar3;
LAB_00f2a994:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_02124b04);
  if ((lVar5 != 0) &&
     (uVar2 = FUN_00f2ad38(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar2 & 1) != 0)) {
    bVar1 = 1;
    goto LAB_00f2aa08;
  }
  goto LAB_00f2a9dc;
}


