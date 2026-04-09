// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e289b8
// Entry Point: 00e289b8
// Size: 800 bytes
// Signature: undefined FUN_00e289b8(void)


undefined4 FUN_00e289b8(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  short sVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  while ((*(int *)((long)param_1 + 0xb4) != 0 ||
         (FUN_00e266d4(param_1), *(int *)((long)param_1 + 0xb4) != 0))) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar3 = *(uint *)((long)param_1 + 0x170c);
    bVar6 = *(byte *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac));
    lVar10 = param_1[0x2e0];
    *(undefined2 *)(param_1[0x2e2] + (ulong)uVar3 * 2) = 0;
    *(uint *)((long)param_1 + 0x170c) = uVar3 + 1;
    *(byte *)(lVar10 + (ulong)uVar3) = bVar6;
    sVar7 = *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0xd4);
    iVar4 = *(int *)(param_1 + 0x2e1);
    iVar5 = *(int *)((long)param_1 + 0x170c);
    uVar3 = *(int *)((long)param_1 + 0xac) + 1;
    *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
    *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0xd4) = sVar7 + 1;
    *(uint *)((long)param_1 + 0xac) = uVar3;
    if (iVar5 == iVar4 + -1) {
      uVar9 = param_1[0x13];
      if ((long)uVar9 < 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = param_1[0xc] + (uVar9 & 0xffffffff);
      }
      _tr_flush_block(param_1,lVar10,uVar3 - uVar9,0);
      lVar11 = *param_1;
      lVar10 = *(long *)(lVar11 + 0x38);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      _tr_flush_bits(lVar10);
      uVar3 = *(uint *)(lVar11 + 0x20);
      if (*(uint *)(lVar10 + 0x28) <= *(uint *)(lVar11 + 0x20)) {
        uVar3 = *(uint *)(lVar10 + 0x28);
      }
      uVar9 = (ulong)uVar3;
      if (uVar3 != 0) {
        memcpy(*(void **)(lVar11 + 0x18),*(void **)(lVar10 + 0x20),uVar9);
        lVar1 = *(long *)(lVar10 + 0x20);
        lVar2 = *(long *)(lVar10 + 0x28);
        *(ulong *)(lVar11 + 0x18) = *(long *)(lVar11 + 0x18) + uVar9;
        lVar2 = lVar2 - uVar9;
        *(ulong *)(lVar11 + 0x28) = *(long *)(lVar11 + 0x28) + uVar9;
        *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) - uVar3;
        *(ulong *)(lVar10 + 0x20) = lVar1 + uVar9;
        *(long *)(lVar10 + 0x28) = lVar2;
        if (lVar2 == 0) {
          *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  *(undefined4 *)((long)param_1 + 0x172c) = 0;
  if (param_2 != 4) {
    if (*(int *)((long)param_1 + 0x170c) != 0) {
      uVar9 = param_1[0x13];
      if ((long)uVar9 < 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = param_1[0xc] + (uVar9 & 0xffffffff);
      }
      _tr_flush_block(param_1,lVar10,*(uint *)((long)param_1 + 0xac) - uVar9,0);
      lVar11 = *param_1;
      lVar10 = *(long *)(lVar11 + 0x38);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      _tr_flush_bits(lVar10);
      uVar3 = *(uint *)(lVar11 + 0x20);
      if (*(uint *)(lVar10 + 0x28) <= *(uint *)(lVar11 + 0x20)) {
        uVar3 = *(uint *)(lVar10 + 0x28);
      }
      uVar9 = (ulong)uVar3;
      if (uVar3 != 0) {
        memcpy(*(void **)(lVar11 + 0x18),*(void **)(lVar10 + 0x20),uVar9);
        lVar1 = *(long *)(lVar10 + 0x20);
        lVar2 = *(long *)(lVar10 + 0x28);
        *(ulong *)(lVar11 + 0x18) = *(long *)(lVar11 + 0x18) + uVar9;
        lVar2 = lVar2 - uVar9;
        *(ulong *)(lVar11 + 0x28) = *(long *)(lVar11 + 0x28) + uVar9;
        *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) - uVar3;
        *(ulong *)(lVar10 + 0x20) = lVar1 + uVar9;
        *(long *)(lVar10 + 0x28) = lVar2;
        if (lVar2 == 0) {
          *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
    return 1;
  }
  uVar9 = param_1[0x13];
  if ((long)uVar9 < 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1[0xc] + (uVar9 & 0xffffffff);
  }
  _tr_flush_block(param_1,lVar10,*(uint *)((long)param_1 + 0xac) - uVar9,1);
  lVar11 = *param_1;
  lVar10 = *(long *)(lVar11 + 0x38);
  param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
  _tr_flush_bits(lVar10);
  uVar3 = *(uint *)(lVar11 + 0x20);
  if (*(uint *)(lVar10 + 0x28) <= *(uint *)(lVar11 + 0x20)) {
    uVar3 = *(uint *)(lVar10 + 0x28);
  }
  uVar9 = (ulong)uVar3;
  if (uVar3 != 0) {
    memcpy(*(void **)(lVar11 + 0x18),*(void **)(lVar10 + 0x20),uVar9);
    lVar1 = *(long *)(lVar10 + 0x20);
    lVar2 = *(long *)(lVar10 + 0x28);
    *(ulong *)(lVar11 + 0x18) = *(long *)(lVar11 + 0x18) + uVar9;
    lVar2 = lVar2 - uVar9;
    *(ulong *)(lVar11 + 0x28) = *(long *)(lVar11 + 0x28) + uVar9;
    *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) - uVar3;
    *(ulong *)(lVar10 + 0x20) = lVar1 + uVar9;
    *(long *)(lVar10 + 0x28) = lVar2;
    if (lVar2 == 0) {
      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
    }
  }
  uVar8 = 2;
  if (*(int *)(*param_1 + 0x20) != 0) {
    uVar8 = 3;
  }
  return uVar8;
}


