// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflateReset
// Entry Point: 00e263e8
// Size: 180 bytes
// Signature: undefined deflateReset(void)


int deflateReset(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  void *__s;
  size_t __n;
  long lVar5;
  
  iVar4 = deflateResetKeep();
  if (iVar4 != 0) {
    return iVar4;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  __s = *(void **)(lVar5 + 0x78);
  __n = (ulong)(*(int *)(lVar5 + 0x84) - 1) * 2;
  *(ulong *)(lVar5 + 0x68) = (ulong)*(uint *)(lVar5 + 0x50) << 1;
  *(undefined2 *)((long)__s + __n) = 0;
  memset(__s,0,__n);
  *(undefined8 *)(lVar5 + 0x98) = 0;
  lVar1 = (long)*(int *)(lVar5 + 0xc4) * 0x10;
  *(undefined4 *)(lVar5 + 0x172c) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  uVar2 = *(ushort *)(&DAT_01013b90 + lVar1);
  *(undefined4 *)(lVar5 + 0xa0) = 2;
  uVar3 = *(ushort *)(&DAT_01013b94 + lVar1);
  *(undefined8 *)(lVar5 + 0xb4) = 0x200000000;
  *(undefined4 *)(lVar5 + 0x80) = 0;
  *(uint *)(lVar5 + 0xcc) = (uint)uVar2;
  *(uint *)(lVar5 + 0xd0) = (uint)uVar3;
  uVar2 = *(ushort *)(&DAT_01013b92 + lVar1);
  *(uint *)(lVar5 + 0xbc) = (uint)*(ushort *)(&DAT_01013b96 + lVar1);
  *(uint *)(lVar5 + 0xc0) = (uint)uVar2;
  return 0;
}


