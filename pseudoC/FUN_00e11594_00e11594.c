// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e11594
// Entry Point: 00e11594
// Size: 320 bytes
// Signature: undefined FUN_00e11594(void)


int * FUN_00e11594(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *__ptr;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x30);
  __ptr = (int *)malloc(0x70);
  iVar1 = oggpack_read(param_2,8);
  *__ptr = iVar1;
  lVar5 = oggpack_read(param_2,0x10);
  *(long *)(__ptr + 2) = lVar5;
  lVar6 = oggpack_read(param_2,0x10);
  *(long *)(__ptr + 4) = lVar6;
  iVar2 = oggpack_read(param_2,6);
  __ptr[6] = iVar2;
  iVar2 = oggpack_read(param_2,8);
  __ptr[7] = iVar2;
  uVar3 = oggpack_read(param_2,4);
  __ptr[8] = uVar3 + 1;
  if ((((iVar1 < 1) || (lVar5 < 1)) || (lVar6 < 1)) || (0x7ffffffe < uVar3)) {
LAB_00e116ac:
    free(__ptr);
    __ptr = (int *)0x0;
  }
  else {
    uVar8 = 0;
    do {
      uVar4 = oggpack_read(param_2,8);
      __ptr[uVar8 + 9] = uVar4;
      if ((((int)uVar4 < 0) || (*(int *)(lVar9 + 0x20) <= (int)uVar4)) ||
         ((plVar7 = *(long **)(lVar9 + ((long)((ulong)uVar4 << 0x20) >> 0x1d) + 0xb28),
          *(int *)(plVar7 + 3) == 0 || (*plVar7 < 1)))) goto LAB_00e116ac;
      uVar8 = uVar8 + 1;
    } while (uVar3 + 1 != uVar8);
  }
  return __ptr;
}


