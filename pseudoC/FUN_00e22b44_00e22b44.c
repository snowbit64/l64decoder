// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e22b44
// Entry Point: 00e22b44
// Size: 420 bytes
// Signature: undefined FUN_00e22b44(void)


void FUN_00e22b44(long *param_1,undefined *param_2,long param_3,code *UNRECOVERED_JUMPTABLE,
                 int param_5)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  size_t sVar7;
  size_t __n;
  undefined *puVar8;
  
  iVar4 = *(int *)(param_1 + 1);
  lVar6 = param_3 + 7;
  if (-1 < param_3) {
    lVar6 = param_3;
  }
  lVar1 = iVar4 + param_3;
  lVar2 = lVar1 + 7;
  if (-1 < lVar1) {
    lVar2 = lVar1;
  }
  lVar1 = *param_1 + (lVar2 >> 3);
  __n = lVar6 >> 3;
  if (param_1[4] <= lVar1) {
    if ((param_1[3] != 0) && (sVar7 = lVar1 + 0x100, param_1[4] <= (long)sVar7)) {
      param_1[4] = sVar7;
      pvVar5 = realloc((void *)param_1[2],sVar7);
      if (pvVar5 != (void *)0x0) {
        iVar4 = *(int *)(param_1 + 1);
        param_1[2] = (long)pvVar5;
        param_1[3] = (long)pvVar5 + *param_1;
        goto joined_r0x00e22c48;
      }
    }
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
    }
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
joined_r0x00e22c48:
  if (iVar4 == 0) {
    memmove((void *)param_1[3],param_2,__n);
    lVar6 = param_1[3];
    param_1[3] = lVar6 + __n;
    *param_1 = *param_1 + __n;
    *(undefined *)(lVar6 + __n) = 0;
  }
  else {
    sVar7 = __n;
    puVar8 = param_2;
    if (7 < param_3) {
      do {
        (*UNRECOVERED_JUMPTABLE)(param_1,*puVar8,8);
        sVar7 = sVar7 - 1;
        puVar8 = puVar8 + 1;
      } while (sVar7 != 0);
    }
  }
  if (param_3 % 8 != 0) {
    bVar3 = param_2[__n];
    if (param_5 != 0) {
      bVar3 = bVar3 >> ((ulong)(8 - (int)(param_3 % 8)) & 0x3f);
    }
                    /* WARNING: Could not recover jumptable at 0x00e22cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,bVar3,param_3 % 8 & 0xffffffff);
    return;
  }
  return;
}


