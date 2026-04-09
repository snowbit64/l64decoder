// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1517c
// Entry Point: 00e1517c
// Size: 572 bytes
// Signature: undefined FUN_00e1517c(void)


uint * FUN_00e1517c(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *__ptr;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  __ptr = (uint *)calloc(1,0xc88);
  if (0 < *(int *)(param_1 + 4)) {
    lVar7 = *(long *)(param_1 + 0x30);
    iVar1 = oggpack_read(param_2,1);
    if (-1 < iVar1) {
      if (iVar1 == 0) {
        uVar8 = 1;
        *__ptr = 1;
        iVar1 = oggpack_read(param_2,1);
      }
      else {
        uVar2 = oggpack_read(param_2,4);
        uVar8 = uVar2 + 1;
        *__ptr = uVar8;
        if (0x7ffffffe < uVar2) goto LAB_00e1520c;
        iVar1 = oggpack_read(param_2,1);
      }
      if (iVar1 < 0) goto LAB_00e1520c;
      if (iVar1 != 0) {
        uVar2 = oggpack_read(param_2,8);
        __ptr[0x121] = uVar2 + 1;
        if (0x7ffffffe < uVar2) goto LAB_00e1520c;
        iVar1 = *(int *)(param_1 + 4);
        lVar9 = 0;
        do {
          uVar3 = ov_ilog(iVar1 + -1);
          uVar4 = oggpack_read(param_2,uVar3);
          iVar1 = *(int *)(param_1 + 4);
          __ptr[lVar9 + 0x122] = uVar4;
          uVar3 = ov_ilog(iVar1 + -1);
          uVar5 = oggpack_read(param_2,uVar3);
          __ptr[lVar9 + 0x222] = uVar5;
          if (((((int)uVar4 < 0) || ((int)uVar5 < 0)) || (uVar4 == uVar5)) ||
             ((iVar1 = *(int *)(param_1 + 4), iVar1 <= (int)uVar4 || (iVar1 <= (int)uVar5))))
          goto LAB_00e1520c;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)(uVar2 + 1));
      }
      lVar9 = oggpack_read(param_2,2);
      if (lVar9 != 0) goto LAB_00e1520c;
      if ((int)uVar8 < 2) {
LAB_00e15344:
        if ((int)uVar8 < 1) {
          return __ptr;
        }
      }
      else if (0 < *(int *)(param_1 + 4)) {
        lVar9 = 0;
        do {
          uVar2 = oggpack_read(param_2,4);
          __ptr[lVar9 + 1] = uVar2;
          if (((int)uVar2 < 0) || ((int)uVar8 <= (int)uVar2)) goto LAB_00e1520c;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(param_1 + 4));
        goto LAB_00e15344;
      }
      uVar6 = 0;
      while( true ) {
        oggpack_read(param_2,8);
        uVar2 = oggpack_read(param_2,8);
        __ptr[uVar6 + 0x101] = uVar2;
        if (((int)uVar2 < 0) || (*(int *)(lVar7 + 0x18) <= (int)uVar2)) break;
        uVar2 = oggpack_read(param_2,8);
        __ptr[uVar6 + 0x111] = uVar2;
        if (((int)uVar2 < 0) || (*(int *)(lVar7 + 0x1c) <= (int)uVar2)) break;
        uVar6 = uVar6 + 1;
        if (uVar8 == uVar6) {
          return __ptr;
        }
      }
      goto LAB_00e1520c;
    }
  }
  if (__ptr == (uint *)0x0) {
    return (uint *)0x0;
  }
LAB_00e1520c:
  free(__ptr);
  return (uint *)0x0;
}


