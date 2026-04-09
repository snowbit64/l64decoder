// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _tr_stored_block
// Entry Point: 00e2e07c
// Size: 388 bytes
// Signature: undefined _tr_stored_block(void)


void _tr_stored_block(long param_1,void *param_2,size_t param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x1734);
  if ((int)uVar1 < 0xe) {
    iVar2 = uVar1 + 3;
    uVar1 = (uint)*(ushort *)(param_1 + 0x1730) | param_4 << (ulong)(uVar1 & 0x1f);
    *(short *)(param_1 + 0x1730) = (short)uVar1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    uVar1 = (uint)*(ushort *)(param_1 + 0x1730) | param_4 << (ulong)(uVar1 & 0x1f);
    *(short *)(param_1 + 0x1730) = (short)uVar1;
    *(long *)(param_1 + 0x28) = lVar3 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar3) = (char)uVar1;
    lVar3 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar3 + 1;
    *(undefined *)(*(long *)(param_1 + 0x10) + lVar3) = *(undefined *)(param_1 + 0x1731);
    iVar2 = *(int *)(param_1 + 0x1734) + -0xd;
    uVar1 = (param_4 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
    *(short *)(param_1 + 0x1730) = (short)uVar1;
  }
  if (iVar2 < 9) {
    if (0 < iVar2) {
      lVar3 = *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar3 + 1;
      *(char *)(*(long *)(param_1 + 0x10) + lVar3) = (char)uVar1;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar3 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar3) = (char)uVar1;
    lVar3 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar3 + 1;
    *(undefined *)(*(long *)(param_1 + 0x10) + lVar3) = *(undefined *)(param_1 + 0x1731);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x1730) = 0;
  *(undefined4 *)(param_1 + 0x1734) = 0;
  *(long *)(param_1 + 0x28) = lVar3 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar3) = (char)param_3;
  lVar3 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar3 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar3) = (char)(param_3 >> 8);
  lVar3 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar3 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar3) = (char)~(uint)param_3;
  lVar3 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar3 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar3) = (char)(~(uint)param_3 >> 8);
  memcpy((void *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28)),param_2,param_3);
  *(size_t *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
  return;
}


