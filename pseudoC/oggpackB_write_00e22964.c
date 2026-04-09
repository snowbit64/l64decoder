// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_write
// Entry Point: 00e22964
// Size: 400 bytes
// Signature: undefined oggpackB_write(void)


void oggpackB_write(long *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  undefined uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  if (0x20 < param_3) {
LAB_00e22980:
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
  pbVar6 = (byte *)param_1[3];
  lVar2 = param_1[4];
  if (lVar2 + -4 <= *param_1) {
    if (pbVar6 == (byte *)0x0) {
      return;
    }
    if ((0x7ffffffffffffeff < lVar2) ||
       (pvVar3 = realloc((void *)param_1[2],lVar2 + 0x100), pvVar3 == (void *)0x0))
    goto LAB_00e22980;
    param_1[2] = (long)pvVar3;
    pbVar6 = (byte *)((long)pvVar3 + *param_1);
    param_1[3] = (long)pbVar6;
    param_1[4] = param_1[4] + 0x100;
  }
  uVar5 = (*(ulong *)(&DAT_0055a320 + (ulong)param_3 * 8) & param_2) <<
          ((ulong)(0x20 - param_3) & 0x3f);
  param_3 = *(int *)(param_1 + 1) + param_3;
  *pbVar6 = *pbVar6 | (byte)(uVar5 >> ((ulong)(*(int *)(param_1 + 1) + 0x18) & 0x3f));
  if ((((7 < (int)param_3) &&
       (*(char *)(param_1[3] + 1) = (char)(uVar5 >> ((ulong)(*(int *)(param_1 + 1) + 0x10) & 0x3f)),
       0xf < param_3)) &&
      (*(char *)(param_1[3] + 2) = (char)(uVar5 >> ((ulong)(*(int *)(param_1 + 1) + 8) & 0x3f)),
      0x17 < param_3)) &&
     (*(char *)(param_1[3] + 3) = (char)(uVar5 >> ((ulong)*(uint *)(param_1 + 1) & 0x3f)),
     0x1f < param_3)) {
    uVar4 = 0;
    if (*(int *)(param_1 + 1) != 0) {
      uVar4 = (undefined)(uVar5 << ((ulong)(8 - *(int *)(param_1 + 1)) & 0x3f));
    }
    *(undefined *)(param_1[3] + 4) = uVar4;
  }
  uVar1 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  *(uint *)(param_1 + 1) = param_3 & 7;
  *param_1 = *param_1 + lVar2;
  param_1[3] = param_1[3] + lVar2;
  return;
}


