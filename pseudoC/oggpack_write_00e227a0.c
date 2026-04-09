// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_write
// Entry Point: 00e227a0
// Size: 400 bytes
// Signature: undefined oggpack_write(void)


void oggpack_write(long *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  undefined uVar4;
  byte *pbVar5;
  
  if (0x20 < param_3) {
LAB_00e227bc:
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
  pbVar5 = (byte *)param_1[3];
  lVar2 = param_1[4];
  if (lVar2 + -4 <= *param_1) {
    if (pbVar5 == (byte *)0x0) {
      return;
    }
    if ((0x7ffffffffffffeff < lVar2) ||
       (pvVar3 = realloc((void *)param_1[2],lVar2 + 0x100), pvVar3 == (void *)0x0))
    goto LAB_00e227bc;
    param_1[2] = (long)pvVar3;
    pbVar5 = (byte *)((long)pvVar3 + *param_1);
    param_1[3] = (long)pbVar5;
    param_1[4] = param_1[4] + 0x100;
  }
  param_2 = *(ulong *)(&DAT_0055a320 + (ulong)param_3 * 8) & param_2;
  param_3 = *(uint *)(param_1 + 1) + param_3;
  *pbVar5 = *pbVar5 | (byte)(param_2 << ((ulong)*(uint *)(param_1 + 1) & 0x3f));
  if ((((7 < (int)param_3) &&
       (*(char *)(param_1[3] + 1) = (char)(param_2 >> ((ulong)(8 - *(int *)(param_1 + 1)) & 0x3f)),
       0xf < param_3)) &&
      (*(char *)(param_1[3] + 2) = (char)(param_2 >> ((ulong)(0x10 - *(int *)(param_1 + 1)) & 0x3f))
      , 0x17 < param_3)) &&
     (*(char *)(param_1[3] + 3) = (char)(param_2 >> ((ulong)(0x18 - *(int *)(param_1 + 1)) & 0x3f)),
     0x1f < param_3)) {
    uVar4 = 0;
    if (*(int *)(param_1 + 1) != 0) {
      uVar4 = (undefined)(param_2 >> ((ulong)(0x20 - *(int *)(param_1 + 1)) & 0x3f));
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


