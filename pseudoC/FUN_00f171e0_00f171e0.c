// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f171e0
// Entry Point: 00f171e0
// Size: 540 bytes
// Signature: undefined FUN_00f171e0(void)


undefined * FUN_00f171e0(long param_1,double *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  double dVar6;
  
  iVar2 = *(int *)((long)param_2 + 0xc);
  if (iVar2 == 0) {
LAB_00f173b0:
    return &DAT_0056fdf8;
  }
  if (iVar2 == 3) {
    iVar2 = (int)*param_2;
    dVar6 = (double)iVar2;
    if (*param_2 == dVar6) {
      uVar3 = iVar2 - 1;
      if (uVar3 < *(uint *)(param_1 + 8)) {
        return (undefined *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 0x10);
      }
      puVar5 = *(undefined1 **)(param_1 + 0x20);
      if (puVar5 != luaH_dummynode) {
        uVar1 = (uint)((ulong)dVar6 >> 0x20) & 0x7fffffff;
        uVar3 = (SUB84(dVar6,0) ^ uVar1 >> 0x12) * 0x5bd1e995;
        uVar1 = (uVar1 ^ uVar3 >> 0x16) * 0x5bd1e995;
        uVar3 = (uVar1 ^ (uVar3 ^ uVar1 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
                (-1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f) ^ 0xffffffffU);
        while( true ) {
          puVar5 = puVar5 + (long)(int)uVar3 * 0x20;
          uVar1 = *(uint *)(puVar5 + 0x1c);
          if (((uVar1 & 0xf) == 3) && (*(double *)(puVar5 + 0x10) == dVar6)) break;
          uVar3 = (int)uVar1 >> 4;
          if (uVar1 < 0x10) {
            return &DAT_0056fdf8;
          }
        }
        return puVar5;
      }
      goto LAB_00f173b0;
    }
  }
  else if (iVar2 == 5) {
    puVar4 = *(undefined **)(param_1 + 0x20);
    uVar3 = *(uint *)((long)*param_2 + 0x10) &
            (-1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f) ^ 0xffffffffU);
    while( true ) {
      puVar4 = puVar4 + (long)(int)uVar3 * 0x20;
      uVar1 = *(uint *)(puVar4 + 0x1c);
      if (((uVar1 & 0xf) == 5) && (*(double *)(puVar4 + 0x10) == *param_2)) break;
      uVar3 = (int)uVar1 >> 4;
      if (uVar1 < 0x10) {
        return &DAT_0056fdf8;
      }
    }
    return puVar4;
  }
  puVar4 = (undefined *)FUN_00f173fc(param_1,param_2);
  iVar2 = FUN_00f110d8(puVar4 + 0x10,param_2);
  while( true ) {
    if (iVar2 != 0) {
      return puVar4;
    }
    if (*(uint *)(puVar4 + 0x1c) < 0x10) break;
    puVar4 = puVar4 + ((long)((ulong)*(uint *)(puVar4 + 0x1c) << 0x20) >> 0x24) * 0x20;
    iVar2 = FUN_00f110d8(puVar4 + 0x10,param_2);
  }
  return &DAT_0056fdf8;
}


