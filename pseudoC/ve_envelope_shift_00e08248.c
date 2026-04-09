// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _ve_envelope_shift
// Entry Point: 00e08248
// Size: 112 bytes
// Signature: undefined _ve_envelope_shift(void)


void _ve_envelope_shift(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)*(int *)(param_1 + 8);
  iVar2 = 0;
  if (lVar4 != 0) {
    iVar2 = (int)(*(long *)(param_1 + 0x100) / lVar4);
  }
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar3 = param_2 / lVar4;
  }
  uVar1 = (iVar2 - (int)lVar3) + 2;
  memmove(*(void **)(param_1 + 0xf0),
          (void *)((long)*(void **)(param_1 + 0xf0) + ((lVar3 << 0x20) >> 0x1e)),
          -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) - param_2;
  if (-1 < *(long *)(param_1 + 0x108)) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) - param_2;
  }
  *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) - param_2;
  return;
}


