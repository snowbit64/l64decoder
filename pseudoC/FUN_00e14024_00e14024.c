// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e14024
// Entry Point: 00e14024
// Size: 540 bytes
// Signature: undefined FUN_00e14024(void)


void FUN_00e14024(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  iVar5 = param_1[0xd2];
  oggpack_write(param_2,(long)*param_1,5);
  if (0 < *param_1) {
    lVar7 = 0;
    iVar3 = -1;
    do {
      oggpack_write(param_2,(long)param_1[lVar7 + 1],4);
      lVar2 = lVar7 + 1;
      lVar7 = lVar7 + 1;
      iVar6 = param_1[lVar2];
      if (param_1[lVar2] <= iVar3) {
        iVar6 = iVar3;
      }
      iVar3 = iVar6;
    } while (lVar7 < *param_1);
    if (-1 < iVar6) {
      uVar8 = 0;
      piVar9 = param_1 + 0x50;
      do {
        oggpack_write(param_2,(long)param_1[uVar8 + 0x20] + -1,3);
        oggpack_write(param_2,(long)param_1[uVar8 + 0x30],2);
        if ((param_1[uVar8 + 0x30] == 0) ||
           (oggpack_write(param_2,(long)param_1[uVar8 + 0x40],8), param_1[uVar8 + 0x30] != 0x1f)) {
          lVar7 = 0;
          do {
            oggpack_write(param_2,(long)piVar9[lVar7] + 1,8);
            lVar7 = lVar7 + 1;
          } while (lVar7 < 1 << (ulong)(param_1[uVar8 + 0x30] & 0x1f));
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 8;
      } while (uVar8 != iVar6 + 1);
    }
  }
  oggpack_write(param_2,(long)param_1[0xd0] + -1,2);
  iVar3 = ov_ilog(iVar5 + -1);
  oggpack_write(param_2,(long)iVar3,4);
  uVar4 = ov_ilog(iVar5 + -1);
  iVar5 = *param_1;
  if (0 < iVar5) {
    lVar7 = 0;
    iVar3 = 0;
    iVar6 = 0;
    do {
      iVar1 = param_1[(long)param_1[lVar7 + 1] + 0x20] + iVar6;
      if (iVar3 < iVar1) {
        iVar5 = (iVar6 + param_1[(long)param_1[lVar7 + 1] + 0x20]) - iVar3;
        piVar9 = param_1 + (long)iVar3 + 0xd3;
        do {
          oggpack_write(param_2,(long)*piVar9,uVar4);
          iVar5 = iVar5 + -1;
          piVar9 = piVar9 + 1;
        } while (iVar5 != 0);
        iVar5 = *param_1;
        iVar3 = iVar1;
      }
      lVar7 = lVar7 + 1;
      iVar6 = iVar1;
    } while (lVar7 < iVar5);
  }
  return;
}


