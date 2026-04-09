// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8e2b0
// Entry Point: 00d8e2b0
// Size: 892 bytes
// Signature: undefined FUN_00d8e2b0(void)


long FUN_00d8e2b0(long *param_1,long *param_2,uint param_3,uint param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  code **ppcVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = (ulong)param_3;
  uVar1 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar1) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 0x17;
    (**ppcVar3)(param_1);
    uVar5 = *(uint *)((long)param_2 + 0x1c);
    if (uVar5 <= param_3) goto LAB_00d8e33c;
LAB_00d8e34c:
    if (*(char *)((long)param_2 + 0x26) == '\0') {
      ppcVar3 = (code **)*param_1;
      *(undefined4 *)(ppcVar3 + 5) = 0x47;
      (**ppcVar3)(param_1);
    }
    if (*(char *)((long)param_2 + 0x25) != '\0') {
      uVar5 = *(uint *)((long)param_2 + 0x14);
      if (uVar5 != 0) {
        uVar6 = (ulong)*(uint *)((long)param_2 + 0x1c);
        uVar4 = (ulong)*(uint *)(param_2 + 3);
        if ((ulong)uVar5 <= (ulong)*(uint *)(param_2 + 3)) {
          uVar4 = (ulong)uVar5;
        }
        if ((long)(*(uint *)(param_2 + 4) - uVar6) <= (long)uVar4) {
          uVar4 = *(uint *)(param_2 + 4) - uVar6;
        }
        if ((long)(*(uint *)(param_2 + 1) - uVar6) <= (long)uVar4) {
          uVar4 = *(uint *)(param_2 + 1) - uVar6;
        }
        if (0 < (long)uVar4) {
          uVar5 = *(uint *)((long)param_2 + 0xc);
          uVar11 = 0;
          lVar9 = uVar6 * uVar5;
          do {
            lVar10 = uVar4 * uVar5;
            (*(code *)param_2[7])
                      (param_1,param_2 + 6,*(undefined8 *)(*param_2 + uVar11 * 8),lVar9,lVar10);
            uVar4 = (ulong)*(uint *)(param_2 + 3);
            uVar11 = uVar11 + uVar4;
            if (*(uint *)((long)param_2 + 0x14) <= uVar11) break;
            uVar6 = *(uint *)((long)param_2 + 0x14) - uVar11;
            lVar9 = lVar10 + lVar9;
            if ((long)uVar6 <= (long)uVar4) {
              uVar4 = uVar6;
            }
            lVar10 = uVar11 + *(uint *)((long)param_2 + 0x1c);
            uVar6 = (ulong)*(uint *)(param_2 + 4) - lVar10;
            if ((long)uVar6 <= (long)uVar4) {
              uVar4 = uVar6;
            }
            uVar6 = (ulong)*(uint *)(param_2 + 1) - lVar10;
            if ((long)uVar6 <= (long)uVar4) {
              uVar4 = uVar6;
            }
          } while (0 < (long)uVar4);
        }
      }
      *(undefined *)((long)param_2 + 0x25) = 0;
    }
    if (*(uint *)((long)param_2 + 0x1c) < param_3) {
      uVar2 = *(uint *)((long)param_2 + 0x14);
      uVar4 = (ulong)uVar2;
      *(uint *)((long)param_2 + 0x1c) = param_3;
    }
    else {
      uVar2 = *(uint *)((long)param_2 + 0x14);
      uVar4 = (ulong)uVar2;
      uVar5 = (uint)(uVar1 - uVar4);
      if ((long)(uVar1 - uVar4) < 1) {
        uVar5 = 0;
      }
      uVar7 = (ulong)uVar5;
      *(uint *)((long)param_2 + 0x1c) = uVar5;
    }
    if (uVar2 != 0) {
      uVar6 = (ulong)*(uint *)(param_2 + 3);
      if (uVar4 <= *(uint *)(param_2 + 3)) {
        uVar6 = uVar4;
      }
      if ((long)(*(uint *)(param_2 + 4) - uVar7) <= (long)uVar6) {
        uVar6 = *(uint *)(param_2 + 4) - uVar7;
      }
      if ((long)(*(uint *)(param_2 + 1) - uVar7) <= (long)uVar6) {
        uVar6 = *(uint *)(param_2 + 1) - uVar7;
      }
      if (0 < (long)uVar6) {
        uVar5 = *(uint *)((long)param_2 + 0xc);
        uVar4 = 0;
        lVar9 = uVar5 * uVar7;
        do {
          lVar10 = uVar6 * uVar5;
          (*(code *)param_2[6])
                    (param_1,param_2 + 6,*(undefined8 *)(*param_2 + uVar4 * 8),lVar9,lVar10);
          uVar6 = (ulong)*(uint *)(param_2 + 3);
          uVar4 = uVar4 + uVar6;
          if (*(uint *)((long)param_2 + 0x14) <= uVar4) break;
          uVar7 = *(uint *)((long)param_2 + 0x14) - uVar4;
          lVar9 = lVar10 + lVar9;
          if ((long)uVar7 <= (long)uVar6) {
            uVar6 = uVar7;
          }
          lVar10 = uVar4 + *(uint *)((long)param_2 + 0x1c);
          uVar7 = (ulong)*(uint *)(param_2 + 4) - lVar10;
          if ((long)uVar7 <= (long)uVar6) {
            uVar6 = uVar7;
          }
          uVar7 = (ulong)*(uint *)(param_2 + 1) - lVar10;
          if ((long)uVar7 <= (long)uVar6) {
            uVar6 = uVar7;
          }
        } while (0 < (long)uVar6);
      }
    }
  }
  else {
    uVar5 = *(uint *)((long)param_2 + 0x1c);
    if (param_3 < uVar5) goto LAB_00d8e34c;
LAB_00d8e33c:
    if (*(int *)((long)param_2 + 0x14) + uVar5 < uVar1) goto LAB_00d8e34c;
  }
  uVar5 = *(uint *)(param_2 + 4);
  if (uVar5 < uVar1) {
    if (uVar5 < param_3) {
      uVar5 = param_3;
      if (param_5 != '\0') {
        ppcVar3 = (code **)*param_1;
        *(undefined4 *)(ppcVar3 + 5) = 0x17;
        (**ppcVar3)(param_1);
        goto LAB_00d8e574;
      }
LAB_00d8e584:
      if (*(char *)((long)param_2 + 0x24) == '\0') {
        ppcVar3 = (code **)*param_1;
        *(undefined4 *)(ppcVar3 + 5) = 0x17;
        (**ppcVar3)(param_1);
        goto LAB_00d8e5e0;
      }
LAB_00d8e58c:
      uVar2 = uVar5 - *(int *)((long)param_2 + 0x1c);
      if (uVar2 < uVar1 - *(int *)((long)param_2 + 0x1c)) {
        uVar1 = *(uint *)((long)param_2 + 0xc);
        lVar9 = (ulong)uVar2 << 3;
        iVar8 = (param_4 + param_3) - uVar5;
        do {
          memset(*(void **)(*param_2 + lVar9),0,(ulong)uVar1);
          lVar9 = lVar9 + 8;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      goto LAB_00d8e5d0;
    }
    if (param_5 == '\0') goto LAB_00d8e584;
LAB_00d8e574:
    *(uint *)(param_2 + 4) = uVar1;
    if (*(char *)((long)param_2 + 0x24) != '\0') goto LAB_00d8e58c;
  }
  else {
LAB_00d8e5d0:
    if (param_5 == '\0') goto LAB_00d8e5e0;
  }
  *(undefined *)((long)param_2 + 0x25) = 1;
LAB_00d8e5e0:
  return *param_2 + (ulong)(param_3 - *(int *)((long)param_2 + 0x1c)) * 8;
}


