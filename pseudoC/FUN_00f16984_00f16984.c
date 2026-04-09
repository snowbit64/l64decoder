// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f16984
// Entry Point: 00f16984
// Size: 396 bytes
// Signature: undefined FUN_00f16984(void)


ulong FUN_00f16984(long param_1,ulong param_2,double *param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  
  puVar5 = *(undefined **)(param_1 + 0x20);
  uVar4 = (uint)param_2;
  if (puVar5 == luaH_dummynode) {
    bVar1 = (int)uVar4 < *(int *)(param_1 + 8);
  }
  else {
    bVar1 = true;
  }
  if ((param_3 == (double *)0x0) || (*(int *)((long)param_3 + 0xc) != 3)) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*param_3;
    if (*param_3 != (double)uVar7) {
      uVar7 = 0xffffffff;
    }
  }
  if (!bVar1) {
    if (uVar4 + 1 != uVar7) {
      uVar7 = uVar4;
    }
    return (ulong)uVar7;
  }
  if (puVar5 == luaH_dummynode) {
    lVar6 = (long)(int)uVar4 << 4;
    do {
      uVar4 = (uint)param_2;
      if (uVar7 - 1 != uVar4) {
        puVar5 = &DAT_0056fdf8;
        if (uVar4 < *(uint *)(param_1 + 8)) {
          puVar5 = (undefined *)(*(long *)(param_1 + 0x18) + lVar6);
        }
        if (*(int *)(puVar5 + 0xc) == 0) goto LAB_00f16ac0;
      }
      param_2 = (ulong)(uVar4 + 1);
      lVar6 = lVar6 + 0x10;
    } while( true );
  }
  uVar2 = (long)(int)uVar4;
  do {
    do {
      param_2 = uVar2;
      uVar2 = param_2 + 1;
    } while (uVar7 == (uint)uVar2);
    if ((uint)param_2 < *(uint *)(param_1 + 8)) {
      puVar8 = (undefined *)(*(long *)(param_1 + 0x18) + param_2 * 0x10);
    }
    else {
      dVar10 = (double)(uint)uVar2;
      uVar3 = (uint)((ulong)dVar10 >> 0x20) & 0x7fffffff;
      uVar4 = (SUB84(dVar10,0) ^ uVar3 >> 0x12) * 0x5bd1e995;
      uVar3 = (uVar3 ^ uVar4 >> 0x16) * 0x5bd1e995;
      uVar4 = (uVar3 ^ (uVar4 ^ uVar3 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
              (-1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f) ^ 0xffffffffU);
      puVar9 = puVar5;
      do {
        puVar9 = puVar9 + (long)(int)uVar4 * 0x20;
        uVar3 = *(uint *)(puVar9 + 0x1c);
        if (((uVar3 & 0xf) == 3) && (puVar8 = puVar9, *(double *)(puVar9 + 0x10) == dVar10)) break;
        uVar4 = (int)uVar3 >> 4;
        puVar8 = &DAT_0056fdf8;
      } while (0xf < uVar3);
    }
  } while (*(int *)(puVar8 + 0xc) != 0);
LAB_00f16ac0:
  return param_2 & 0xffffffff;
}


