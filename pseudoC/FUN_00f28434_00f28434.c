// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f28434
// Entry Point: 00f28434
// Size: 536 bytes
// Signature: undefined FUN_00f28434(void)


void FUN_00f28434(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined auStack_6e0 [32];
  long local_6c0;
  long local_6a8;
  undefined4 uStack_6a0;
  long local_690;
  long lStack_688;
  long local_680;
  undefined auStack_678 [16];
  long local_668;
  long local_648;
  undefined *puStack_640;
  ulong local_638;
  
  *(undefined *)((long)param_1 + 0x26a) = 0;
  lVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (lVar2 != 0) {
    local_648 = param_1[1];
    uVar6 = lVar2 - (param_2 & 1);
    puStack_640 = auStack_678;
    local_638 = uVar6;
    iVar1 = dl_iterate_phdr(FUN_00f2ab78,&local_648);
    if (((iVar1 == 0) || (local_668 == 0)) ||
       (uVar3 = FUN_00f2a884(param_1,uVar6,auStack_678,0), (uVar3 & 1) == 0)) {
      pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_02124b04);
      for (puVar5 = PTR_DAT_01048e10; puVar5 < PTR_DAT_01048e18; puVar5 = puVar5 + 0x20) {
        if ((*(ulong *)(puVar5 + 8) <= uVar6) && (uVar6 < *(ulong *)(puVar5 + 0x10))) {
          lVar2 = *(long *)(puVar5 + 0x18);
          pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_02124b04);
          if ((lVar2 != 0) &&
             (lVar2 = FUN_00f27bc8(param_1[1],lVar2,&local_6a8,auStack_6e0,0), lVar2 == 0)) {
            memset(&local_648,0,0x618);
            uVar6 = FUN_00f28bc4(param_1[1],&local_6a8,auStack_6e0,uVar6,4,&local_648);
            if ((uVar6 & 1) != 0) {
              param_1[0x4c] = 0;
              param_1[0x46] = local_680;
              param_1[0x47] = local_6c0;
              param_1[0x48] = local_638 & 0xffffffff;
              *(undefined4 *)(param_1 + 0x4a) = 0x3000000;
              param_1[0x45] = lStack_688;
              param_1[0x44] = local_690;
              param_1[0x49] = 0;
              param_1[0x4b] = local_6a8;
              *(undefined4 *)((long)param_1 + 0x254) = uStack_6a0;
              return;
            }
          }
          goto LAB_00f285c0;
        }
      }
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_02124b04);
LAB_00f285c0:
      piVar4 = (int *)(**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
      if ((*piVar4 != -0x2d7fee98) || (piVar4[1] != -0x2bffffff)) goto LAB_00f2862c;
      param_1[0x4c] = 0;
      *(undefined *)((long)param_1 + 0x26a) = 1;
      param_1[0x49] = 0;
      param_1[0x48] = 0;
      param_1[0x4b] = 0;
      param_1[0x4a] = 0;
      param_1[0x45] = 0;
      param_1[0x44] = 0;
      param_1[0x47] = 0;
      param_1[0x46] = 0;
    }
    return;
  }
LAB_00f2862c:
  *(undefined *)(param_1 + 0x4d) = 1;
  return;
}


