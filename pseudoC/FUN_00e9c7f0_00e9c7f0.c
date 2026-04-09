// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e9c7f0
// Entry Point: 00e9c7f0
// Size: 1312 bytes
// Signature: undefined FUN_00e9c7f0(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined4 param_10, undefined4 param_11, undefined8 param_12)


undefined4
FUN_00e9c7f0(long *param_1,void *param_2,void *param_3,uint param_4,ulong param_5,undefined4 param_6
            ,int *param_7,undefined2 *param_8,undefined4 *param_9,undefined4 param_10,int param_11,
            int *param_12)

{
  ulong uVar1;
  void *__dest;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  short sVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  undefined **ppuVar17;
  ulong uVar18;
  int iVar19;
  void *pvVar20;
  undefined *puVar21;
  ulong __n;
  undefined *puVar22;
  size_t __n_00;
  undefined auStack_110 [4];
  int local_10c;
  undefined8 local_108;
  long local_100;
  undefined4 *local_f8;
  long local_f0;
  int *local_e8;
  undefined2 *local_e0;
  undefined8 local_d8;
  int *local_d0;
  ulong local_c8;
  int local_bc;
  void *local_b8;
  undefined4 local_ac;
  long local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  int local_84;
  undefined *local_80 [2];
  long local_70;
  
  local_a8 = (long)(int)param_5;
  local_f0 = tpidr_el0;
  uVar1 = local_a8 + 0x400;
  local_bc = param_11;
  local_d0 = param_12;
  local_70 = *(long *)(local_f0 + 0x28);
  uVar8 = (int)uVar1 * param_4;
  local_d8 = CONCAT44(local_d8._4_4_,param_10);
  local_98 = *param_1;
  local_f8 = param_9;
  local_90 = (long)*(int *)(local_98 + 4);
  puVar21 = auStack_110 +
            -((-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2) + 0xf &
             0xfffffffffffffff0);
  uVar8 = *(int *)(local_98 + 4) + (int)param_5;
  __n = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
  uVar4 = param_4;
  if ((int)param_4 < 2) {
    uVar4 = 1;
  }
  uVar18 = (ulong)uVar4;
  local_100 = (long)(int)uVar8;
  pvVar20 = (void *)((long)param_2 + local_90 * 4);
  local_80[0] = puVar21;
  local_80[1] = puVar21 + uVar1 * 4;
  ppuVar17 = local_80;
  local_e8 = param_7;
  local_e0 = param_8;
  local_c8 = uVar18;
  local_b8 = param_3;
  local_ac = param_6;
  local_a0 = param_5;
  local_108._4_4_ = param_4;
  do {
    puVar22 = *ppuVar17;
    memcpy(puVar22,param_3,0x1000);
    memcpy(puVar22 + 0x1000,pvVar20,__n);
    param_3 = (void *)((long)param_3 + 0x1000);
    pvVar20 = (void *)((long)pvVar20 +
                      (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2));
    uVar18 = uVar18 - 1;
    ppuVar17 = ppuVar17 + 1;
  } while (uVar18 != 0);
  if ((int)local_d8 == 0) {
    sVar13 = 0;
    local_84 = 0xf;
    iVar15 = *local_d0;
    uVar1 = local_c8;
  }
  else {
    uVar8 = (int)uVar1 >> 1;
    puVar21 = puVar21 + -((-(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar8 << 1) + 0xf &
                         0xfffffffffffffff0);
    pitch_downsample(local_80,puVar21,uVar1 & 0xffffffff,local_108._4_4_,
                     *(undefined4 *)((long)param_1 + 0x4c));
    uVar1 = local_a0;
    pitch_search(puVar21 + 0x400,puVar21,local_a0 & 0xffffffff,0x3d3,&local_84,
                 *(undefined4 *)((long)param_1 + 0x4c));
    local_84 = 0x400 - local_84;
    sVar13 = remove_doubling(puVar21,0x400,0xf,uVar1 & 0xffffffff,&local_84,
                             *(undefined4 *)((long)param_1 + 0x6c),*(undefined2 *)(param_1 + 0xe),
                             *(undefined4 *)((long)param_1 + 0x4c));
    if (0x3fe < local_84) {
      local_84 = 0x3fe;
    }
    iVar15 = *(int *)((long)param_1 + 0x3c);
    sVar2 = (short)(sVar13 * 0xb334 >> 0x11);
    if (iVar15 < 3) {
      sVar2 = (short)((uint)(sVar13 * 0x599a) >> 0xf);
    }
    sVar13 = 0;
    if (iVar15 < 9) {
      sVar13 = (short)((int)sVar2 >> (4 < iVar15));
    }
    iVar15 = *local_d0;
    uVar1 = local_c8;
  }
  if (iVar15 != 0) {
    sVar13 = (short)(int)((float)local_d0[10] * (float)(int)sVar13);
  }
  iVar16 = *(int *)((long)param_1 + 0x6c);
  iVar10 = (int)sVar13;
  iVar9 = local_84 - iVar16;
  iVar15 = -iVar9;
  if (-1 < iVar9) {
    iVar15 = iVar9;
  }
  uVar7 = 0x3334;
  if (iVar15 * 10 <= local_84) {
    uVar7 = 0x199a;
  }
  uVar3 = uVar7 + 0xccd;
  if (0x18 < local_bc) {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 + 0xccd;
  if (0x22 < local_bc) {
    uVar7 = uVar3;
  }
  uVar3 = uVar7 - 0xccd;
  if (*(short *)(param_1 + 0xe) < 0x3334) {
    uVar3 = uVar7;
  }
  iVar15 = (int)*(short *)(param_1 + 0xe);
  uVar7 = uVar3 - 0xccd;
  if (iVar15 < 0x4667) {
    uVar7 = uVar3;
  }
  if (uVar7 < 0x199b) {
    uVar7 = 0x199a;
  }
  if (iVar10 < (int)(uint)uVar7) {
    local_108 = 0;
    local_10c = 0;
  }
  else {
    uVar4 = iVar10 - iVar15;
    uVar8 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar8 = uVar4;
    }
    if (0xccc < uVar8) {
      iVar15 = iVar10;
    }
    uVar8 = (iVar15 + 0x600 >> 10) * 0x56;
    iVar15 = (int)(char)(((byte)(uVar8 >> 0xf) & 1) + (char)(uVar8 >> 8));
    if (7 < iVar15) {
      iVar15 = 8;
    }
    if (iVar15 < 2) {
      iVar15 = 1;
    }
    local_10c = iVar15 * 0xc00;
    local_108 = CONCAT44(1,iVar15 + -1);
  }
  local_bc = -local_10c;
  uVar18 = 0;
  pvVar20 = (void *)((long)param_1 + 0xfc);
  ppuVar17 = local_80;
  __n_00 = local_90 * 4;
  local_d0 = (int *)((ulong)(0x400 - (int)local_a0) << 2);
  local_c8 = local_100 << 2;
  local_d8 = -local_a8;
  while( true ) {
    iVar15 = *(int *)(local_98 + 0x28);
    if (iVar16 < 0x10) {
      iVar16 = 0xf;
    }
    iVar9 = iVar15 - (int)local_90;
    *(int *)((long)param_1 + 0x6c) = iVar16;
    memcpy(param_2,pvVar20,__n_00);
    if (iVar9 != 0) {
      puVar22 = *ppuVar17;
      uVar7 = *(ushort *)(param_1 + 0xe);
      uVar5 = *(undefined4 *)((long)param_1 + 0x6c);
      uVar6 = *(undefined4 *)((long)param_1 + 0x74);
      *(undefined4 *)(puVar21 + -8) = *(undefined4 *)((long)param_1 + 0x4c);
      *(undefined4 *)(puVar21 + -0x10) = 0;
      *(undefined8 *)(puVar21 + -0x18) = 0;
      *(undefined4 *)(puVar21 + -0x20) = uVar6;
      comb_filter((void *)((long)param_2 + __n_00),puVar22 + 0x1000,uVar5,uVar5,iVar9,-(uint)uVar7,
                  -(uint)uVar7);
    }
    iVar10 = local_84;
    puVar22 = *ppuVar17;
    uVar7 = *(ushort *)(param_1 + 0xe);
    uVar5 = *(undefined4 *)((long)param_1 + 0x6c);
    uVar6 = *(undefined4 *)((long)param_1 + 0x74);
    iVar19 = (int)local_a0;
    uVar14 = *(undefined8 *)(local_98 + 0x40);
    *(undefined4 *)(puVar21 + -8) = *(undefined4 *)((long)param_1 + 0x4c);
    lVar12 = local_90;
    iVar16 = local_bc;
    *(undefined8 *)(puVar21 + -0x18) = uVar14;
    uVar11 = local_ac;
    *(int *)(puVar21 + -0x10) = (int)lVar12;
    *(undefined4 *)(puVar21 + -0x20) = uVar11;
    comb_filter((void *)((long)param_2 + (long)iVar15 * 4),puVar22 + (long)iVar9 * 4 + 0x1000,uVar5,
                iVar10,iVar19 - iVar9,-(uint)uVar7,iVar16,uVar6);
    memcpy(pvVar20,(void *)((long)param_2 + __n),__n_00);
    __dest = (void *)((long)local_b8 + (uVar18 & 0xfffffc00) * 4);
    if (iVar19 < 0x401) {
      memmove(__dest,(void *)((long)__dest + local_a8 * 4),(size_t)local_d0);
      memcpy((void *)((long)__dest + local_d8 * 4 + 0x1000),*ppuVar17 + 0x1000,__n);
    }
    else {
      memcpy(__dest,*ppuVar17 + local_a8 * 4,0x1000);
    }
    if (uVar1 * 0x400 - 0x400 == uVar18) break;
    uVar18 = uVar18 + 0x400;
    iVar16 = *(int *)((long)param_1 + 0x6c);
    ppuVar17 = ppuVar17 + 1;
    pvVar20 = (void *)((long)pvVar20 + __n_00);
    param_2 = (void *)((long)param_2 + local_c8);
  }
  *local_e0 = (short)local_10c;
  *local_e8 = local_84;
  *local_f8 = (undefined4)local_108;
  if (*(long *)(local_f0 + 0x28) == local_70) {
    local_108._4_4_ = (uint)((ulong)local_108 >> 0x20);
    return local_108._4_4_;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


