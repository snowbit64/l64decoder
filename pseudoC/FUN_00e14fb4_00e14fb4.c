// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e14fb4
// Entry Point: 00e14fb4
// Size: 456 bytes
// Signature: undefined FUN_00e14fb4(void)


void FUN_00e14fb4(long param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*param_2 < 2) {
    oggpack_write(param_3,0,1);
    if (param_2[0x121] < 1) goto LAB_00e15014;
LAB_00e15040:
    oggpack_write(param_3,1,1);
    oggpack_write(param_3,(long)param_2[0x121] + -1,8);
    if (0 < param_2[0x121]) {
      lVar3 = 0;
      do {
        iVar1 = param_2[lVar3 + 0x122];
        uVar2 = ov_ilog(*(int *)(param_1 + 4) + -1);
        oggpack_write(param_3,(long)iVar1,uVar2);
        iVar1 = param_2[lVar3 + 0x222];
        uVar2 = ov_ilog(*(int *)(param_1 + 4) + -1);
        oggpack_write(param_3,(long)iVar1,uVar2);
        lVar3 = lVar3 + 1;
      } while (lVar3 < param_2[0x121]);
    }
  }
  else {
    oggpack_write(param_3,1,1);
    oggpack_write(param_3,(long)*param_2 + -1,4);
    if (0 < param_2[0x121]) goto LAB_00e15040;
LAB_00e15014:
    oggpack_write(param_3,0,1);
  }
  oggpack_write(param_3,0,2);
  iVar1 = *param_2;
  if (1 < iVar1) {
    if (*(int *)(param_1 + 4) < 1) goto LAB_00e15120;
    lVar3 = 0;
    do {
      oggpack_write(param_3,(long)param_2[lVar3 + 1],4);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 4));
    iVar1 = *param_2;
  }
  if (iVar1 < 1) {
    return;
  }
LAB_00e15120:
  lVar3 = 0;
  do {
    oggpack_write(param_3,0,8);
    oggpack_write(param_3,(long)param_2[lVar3 + 0x101],8);
    oggpack_write(param_3,(long)param_2[lVar3 + 0x111],8);
    lVar3 = lVar3 + 1;
  } while (lVar3 < *param_2);
  return;
}


