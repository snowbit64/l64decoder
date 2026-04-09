// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_ReadIfRequired
// Entry Point: 00d9d118
// Size: 268 bytes
// Signature: undefined MatchFinder_ReadIfRequired(void)


void MatchFinder_ReadIfRequired(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 10) == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    iVar3 = *(int *)(param_1 + 1);
    if ((uVar4 - iVar3 <= *(uint *)((long)param_1 + 0x5c)) && (*(int *)(param_1 + 0x11) == 0)) {
      if (*(int *)((long)param_1 + 100) == 0) {
        do {
          lVar1 = *param_1 + (ulong)(uVar4 - iVar3);
          local_30 = (param_1[8] + (ulong)*(uint *)((long)param_1 + 0x54)) - lVar1;
          if (local_30 == 0) break;
          iVar3 = (**(code **)param_1[9])((code **)param_1[9],lVar1,&local_30);
          *(int *)(param_1 + 0x11) = iVar3;
          if (iVar3 != 0) break;
          if (local_30 == 0) goto LAB_00d9d1ac;
          iVar3 = *(int *)(param_1 + 1);
          uVar4 = *(int *)(param_1 + 2) + (int)local_30;
          *(uint *)(param_1 + 2) = uVar4;
        } while (uVar4 - iVar3 <= *(uint *)((long)param_1 + 0x5c));
      }
      else {
        uVar6 = param_1[0xd];
        uVar5 = (uint)uVar6;
        if (~uVar4 <= uVar6) {
          uVar5 = ~uVar4;
        }
        param_1[0xd] = uVar6 - uVar5;
        *(uint *)(param_1 + 2) = uVar5 + uVar4;
        if (uVar6 - uVar5 == 0) {
LAB_00d9d1ac:
          *(undefined4 *)(param_1 + 10) = 1;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


