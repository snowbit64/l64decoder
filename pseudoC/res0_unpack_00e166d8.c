// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res0_unpack
// Entry Point: 00e166d8
// Size: 528 bytes
// Signature: undefined res0_unpack(void)


undefined8 * res0_unpack(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *__ptr;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  __ptr = (undefined8 *)calloc(1,0xb20);
  lVar10 = *(long *)(param_1 + 0x30);
  uVar5 = oggpack_read(param_2,0x18);
  *__ptr = uVar5;
  uVar5 = oggpack_read(param_2,0x18);
  __ptr[1] = uVar5;
  iVar2 = oggpack_read(param_2,0x18);
  *(int *)(__ptr + 2) = iVar2 + 1;
  uVar3 = oggpack_read(param_2,6);
  uVar1 = uVar3 + 1;
  *(uint *)((long)__ptr + 0x14) = uVar1;
  uVar4 = oggpack_read(param_2,8);
  *(uint *)((long)__ptr + 0x1c) = uVar4;
  if (-1 < (int)uVar4) {
    if (uVar3 < 0x7fffffff) {
      uVar12 = 0;
      uVar11 = 0;
      do {
        uVar6 = oggpack_read(param_2,3);
        iVar2 = oggpack_read(param_2,1);
        if (iVar2 < 0) goto LAB_00e168bc;
        if (iVar2 != 0) {
          iVar2 = oggpack_read(param_2,5);
          if (iVar2 < 0) goto LAB_00e168bc;
          uVar6 = (ulong)((uint)uVar6 | iVar2 << 3);
        }
        *(int *)((long)__ptr + uVar12 * 4 + 0x20) = (int)uVar6;
        iVar2 = 0;
        iVar8 = 0;
        if ((int)uVar6 != 0) {
          do {
            uVar3 = (uint)uVar6;
            iVar2 = (uVar3 & 1) + iVar8;
            uVar6 = uVar6 >> 1 & 0x7fffffff;
            iVar8 = iVar2;
          } while (1 < uVar3);
        }
        uVar3 = iVar2 + (int)uVar11;
        uVar11 = (ulong)uVar3;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar1);
      if (0 < (int)uVar3) {
        puVar9 = __ptr + 0x24;
        uVar12 = uVar11;
        do {
          iVar2 = oggpack_read(param_2,8);
          if (iVar2 < 0) goto LAB_00e168bc;
          uVar12 = uVar12 - 1;
          *(int *)puVar9 = iVar2;
          puVar9 = (undefined8 *)((long)puVar9 + 4);
        } while (uVar12 != 0);
      }
      if (*(int *)(lVar10 + 0x20) <= (int)uVar4) goto LAB_00e168c0;
      if (0 < (int)uVar3) {
        puVar9 = __ptr + 0x24;
        do {
          if ((*(int *)(lVar10 + 0x20) <= *(int *)puVar9) ||
             (*(int *)(*(long *)(lVar10 + (long)*(int *)puVar9 * 8 + 0xb28) + 0x18) == 0))
          goto LAB_00e168c0;
          puVar9 = (undefined8 *)((long)puVar9 + 4);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    else if (*(int *)(lVar10 + 0x20) <= (int)uVar4) goto LAB_00e168c0;
    piVar7 = *(int **)(lVar10 + ((long)((ulong)uVar4 << 0x20) >> 0x1d) + 0xb28);
    iVar2 = *piVar7;
    if (0 < iVar2) {
      iVar2 = iVar2 + 1;
      iVar8 = 1;
      while (iVar8 = uVar1 * iVar8, iVar8 <= piVar7[2]) {
        iVar2 = iVar2 + -1;
        if (iVar2 < 2) {
          *(int *)(__ptr + 3) = iVar8;
          return __ptr;
        }
      }
    }
  }
  goto LAB_00e168c0;
LAB_00e168bc:
  if (__ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
LAB_00e168c0:
  free(__ptr);
  return (undefined8 *)0x0;
}


