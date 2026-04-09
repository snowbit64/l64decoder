// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e28254
// Entry Point: 00e28254
// Size: 164 bytes
// Signature: undefined FUN_00e28254(void)


void FUN_00e28254(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong __n;
  
  lVar4 = *(long *)(param_1 + 0x38);
  _tr_flush_bits(lVar4);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(uint *)(lVar4 + 0x28) <= *(uint *)(param_1 + 0x20)) {
    uVar1 = *(uint *)(lVar4 + 0x28);
  }
  __n = (ulong)uVar1;
  if (uVar1 != 0) {
    memcpy(*(void **)(param_1 + 0x18),*(void **)(lVar4 + 0x20),__n);
    lVar2 = *(long *)(lVar4 + 0x20);
    lVar3 = *(long *)(lVar4 + 0x28);
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n;
    lVar3 = lVar3 - __n;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + __n;
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - uVar1;
    *(ulong *)(lVar4 + 0x20) = lVar2 + __n;
    *(long *)(lVar4 + 0x28) = lVar3;
    if (lVar3 == 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
      return;
    }
  }
  return;
}


