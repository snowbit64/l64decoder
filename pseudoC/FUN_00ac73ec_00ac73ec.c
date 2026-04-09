// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ac73ec
// Entry Point: 00ac73ec
// Size: 444 bytes
// Signature: undefined FUN_00ac73ec(void)


int FUN_00ac73ec(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = FUN_00ac72cc();
  lVar4 = *param_4;
  lVar5 = *param_3;
  bVar1 = *(uint *)(lVar5 + 0x18) <= *(uint *)(lVar4 + 0x18);
  if (*(uint *)(lVar4 + 0x18) == *(uint *)(lVar5 + 0x18)) {
    bVar1 = *(uint *)(lVar5 + 0x10) <= *(uint *)(lVar4 + 0x10);
  }
  iVar3 = iVar2;
  if (!bVar1) {
    *param_3 = lVar4;
    iVar3 = iVar2 + 1;
    *param_4 = lVar5;
    lVar4 = *param_3;
    lVar5 = *param_2;
    bVar1 = *(uint *)(lVar5 + 0x18) <= *(uint *)(lVar4 + 0x18);
    if (*(uint *)(lVar4 + 0x18) == *(uint *)(lVar5 + 0x18)) {
      bVar1 = *(uint *)(lVar5 + 0x10) <= *(uint *)(lVar4 + 0x10);
    }
    if (!bVar1) {
      *param_2 = lVar4;
      iVar3 = iVar2 + 2;
      *param_3 = lVar5;
      lVar4 = *param_2;
      lVar5 = *param_1;
      bVar1 = *(uint *)(lVar5 + 0x18) <= *(uint *)(lVar4 + 0x18);
      if (*(uint *)(lVar4 + 0x18) == *(uint *)(lVar5 + 0x18)) {
        bVar1 = *(uint *)(lVar5 + 0x10) <= *(uint *)(lVar4 + 0x10);
      }
      if (!bVar1) {
        iVar3 = iVar2 + 3;
        *param_1 = lVar4;
        *param_2 = lVar5;
      }
    }
  }
  lVar4 = *param_5;
  lVar5 = *param_4;
  if (*(uint *)(lVar4 + 0x18) == *(uint *)(lVar5 + 0x18)) {
    if (*(uint *)(lVar5 + 0x10) <= *(uint *)(lVar4 + 0x10)) {
      return iVar3;
    }
  }
  else if (*(uint *)(lVar5 + 0x18) <= *(uint *)(lVar4 + 0x18)) {
    return iVar3;
  }
  *param_4 = lVar4;
  iVar2 = iVar3 + 1;
  *param_5 = lVar5;
  lVar4 = *param_4;
  lVar5 = *param_3;
  bVar1 = *(uint *)(lVar5 + 0x18) <= *(uint *)(lVar4 + 0x18);
  if (*(uint *)(lVar4 + 0x18) == *(uint *)(lVar5 + 0x18)) {
    bVar1 = *(uint *)(lVar5 + 0x10) <= *(uint *)(lVar4 + 0x10);
  }
  if (!bVar1) {
    *param_3 = lVar4;
    iVar2 = iVar3 + 2;
    *param_4 = lVar5;
    lVar4 = *param_3;
    lVar5 = *param_2;
    bVar1 = *(uint *)(lVar5 + 0x18) <= *(uint *)(lVar4 + 0x18);
    if (*(uint *)(lVar4 + 0x18) == *(uint *)(lVar5 + 0x18)) {
      bVar1 = *(uint *)(lVar5 + 0x10) <= *(uint *)(lVar4 + 0x10);
    }
    if (!bVar1) {
      *param_2 = lVar4;
      iVar2 = iVar3 + 3;
      *param_3 = lVar5;
      lVar4 = *param_2;
      lVar5 = *param_1;
      bVar1 = *(uint *)(lVar5 + 0x18) <= *(uint *)(lVar4 + 0x18);
      if (*(uint *)(lVar4 + 0x18) == *(uint *)(lVar5 + 0x18)) {
        bVar1 = *(uint *)(lVar5 + 0x10) <= *(uint *)(lVar4 + 0x10);
      }
      if (!bVar1) {
        iVar2 = iVar3 + 4;
        *param_1 = lVar4;
        *param_2 = lVar5;
      }
    }
  }
  return iVar2;
}


