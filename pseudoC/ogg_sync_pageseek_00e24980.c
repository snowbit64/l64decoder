// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_sync_pageseek
// Entry Point: 00e24980
// Size: 452 bytes
// Signature: undefined ogg_sync_pageseek(void)


long ogg_sync_pageseek(long *param_1,int **param_2)

{
  byte *pbVar1;
  long lVar2;
  int *piVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  
  if (-1 < *(int *)(param_1 + 1)) {
    lVar5 = (long)*(int *)((long)param_1 + 0x14);
    piVar3 = (int *)(*param_1 + lVar5);
    lVar11 = *(int *)((long)param_1 + 0xc) - lVar5;
    if (*(int *)(param_1 + 3) == 0) {
      if ((int)lVar11 < 0x1b) {
        return 0;
      }
      if (*piVar3 != 0x5367674f) goto LAB_00e24a58;
      lVar2 = (ulong)*(byte *)((long)piVar3 + 0x1a) + 0x1b;
      if (lVar11 < lVar2) {
        return 0;
      }
      if (*(byte *)((long)piVar3 + 0x1a) != 0) {
        uVar10 = 0;
        iVar6 = *(int *)((long)param_1 + 0x1c);
        do {
          pbVar1 = (byte *)(lVar5 + *param_1 + 0x1b + uVar10);
          uVar10 = uVar10 + 1;
          iVar6 = iVar6 + (uint)*pbVar1;
          *(int *)((long)param_1 + 0x1c) = iVar6;
        } while (uVar10 < *(byte *)((long)piVar3 + 0x1a));
      }
      iVar6 = (int)lVar2;
      *(int *)(param_1 + 3) = iVar6;
      iVar6 = iVar6 + *(int *)((long)param_1 + 0x1c);
    }
    else {
      iVar6 = *(int *)(param_1 + 3) + *(int *)((long)param_1 + 0x1c);
    }
    if (iVar6 <= (int)lVar11) {
      iVar9 = *(int *)((long)piVar3 + 0x16);
      *(undefined4 *)((long)piVar3 + 0x16) = 0;
      iVar6 = *(int *)(param_1 + 3);
      uVar4 = *(undefined4 *)((long)param_1 + 0x1c);
      *(undefined4 *)((long)piVar3 + 0x16) = 0;
      uVar7 = FUN_00e23d20(0,piVar3);
      iVar6 = FUN_00e23d20(uVar7,(long)piVar3 + (long)iVar6,uVar4);
      *(int *)((long)piVar3 + 0x16) = iVar6;
      if (iVar9 == iVar6) {
        if (param_2 == (int **)0x0) {
          iVar6 = *(int *)(param_1 + 3);
          iVar9 = *(int *)((long)param_1 + 0x1c);
        }
        else {
          iVar6 = *(int *)(param_1 + 3);
          iVar9 = *(int *)(param_1 + 4);
          *param_2 = piVar3;
          param_2[1] = (int *)(long)iVar6;
          param_2[2] = (int *)((long)piVar3 + (long)(int *)(long)iVar6);
          param_2[3] = (int *)(long)iVar9;
        }
        param_1[3] = 0;
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar9 + iVar6;
        *(undefined4 *)((long)param_1 + 0x14) = 0;
        return (long)(iVar9 + iVar6);
      }
      *(int *)((long)piVar3 + 0x16) = iVar9;
LAB_00e24a58:
      param_1[3] = 0;
      pvVar8 = memchr((void *)((long)piVar3 + 1),0x4f,lVar11 - 1);
      if (pvVar8 == (void *)0x0) {
        pvVar8 = (void *)(*param_1 + (long)*(int *)((long)param_1 + 0xc));
      }
      *(int *)(param_1 + 2) = (int)pvVar8 - (int)*param_1;
      return (long)piVar3 - (long)pvVar8;
    }
  }
  return 0;
}


