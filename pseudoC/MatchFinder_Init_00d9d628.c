// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_Init
// Entry Point: 00d9d628
// Size: 380 bytes
// Signature: undefined MatchFinder_Init(void)


void MatchFinder_Init(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar5 = 0;
    lVar7 = param_1[5];
    do {
      *(undefined4 *)(lVar7 + uVar5 * 4) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x10));
  }
  lVar7 = param_1[8];
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = *(uint *)((long)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = lVar7;
  *(uint *)(param_1 + 2) = uVar1;
  *(uint *)(param_1 + 1) = uVar1;
  if (*(int *)((long)param_1 + 100) == 0) {
    local_30 = (ulong)*(uint *)((long)param_1 + 0x54);
    if (*(uint *)((long)param_1 + 0x54) != 0) {
      do {
        iVar4 = (**(code **)param_1[9])((code **)param_1[9],lVar7,&local_30);
        *(int *)(param_1 + 0x11) = iVar4;
        if (iVar4 != 0) break;
        if (local_30 == 0) goto LAB_00d9d6b8;
        iVar4 = *(int *)(param_1 + 2) + (int)local_30;
        uVar1 = iVar4 - *(int *)(param_1 + 1);
        *(int *)(param_1 + 2) = iVar4;
        if (*(uint *)((long)param_1 + 0x5c) < uVar1) break;
        lVar7 = *param_1 + (ulong)uVar1;
        local_30 = (param_1[8] + (ulong)*(uint *)((long)param_1 + 0x54)) - lVar7;
      } while (local_30 != 0);
    }
  }
  else {
    uVar5 = param_1[0xd];
    uVar6 = (uint)uVar5;
    if (~uVar1 <= uVar5) {
      uVar6 = ~uVar1;
    }
    param_1[0xd] = uVar5 - uVar6;
    *(uint *)(param_1 + 2) = uVar6 + uVar1;
    if (uVar5 - uVar6 == 0) {
LAB_00d9d6b8:
      *(undefined4 *)(param_1 + 10) = 1;
    }
  }
  uVar6 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0x1c) - *(int *)(param_1 + 3);
  if (~uVar6 <= uVar1) {
    uVar1 = ~uVar6;
  }
  uVar2 = *(int *)(param_1 + 2) - uVar6;
  uVar8 = uVar2 - *(uint *)((long)param_1 + 0x5c);
  if (uVar2 < *(uint *)((long)param_1 + 0x5c) || uVar8 == 0) {
    uVar8 = (uint)(uVar2 != 0);
  }
  if (uVar1 <= uVar8) {
    uVar8 = uVar1;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar2 <= *(uint *)(param_1 + 4)) {
    uVar1 = uVar2;
  }
  *(uint *)((long)param_1 + 0x14) = uVar1;
  *(uint *)((long)param_1 + 0xc) = uVar8 + uVar6;
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


