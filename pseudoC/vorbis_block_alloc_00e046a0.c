// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vorbis_block_alloc
// Entry Point: 00e046a0
// Size: 128 bytes
// Signature: undefined _vorbis_block_alloc(void)


long _vorbis_block_alloc(long param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  void **ppvVar3;
  ulong __size;
  void *pvVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x78);
  __size = param_2 + 7U & 0xfffffffffffffff8;
  pvVar4 = *(void **)(param_1 + 0x70);
  if (*(long *)(param_1 + 0x80) < (long)(lVar5 + __size)) {
    if (pvVar4 != (void *)0x0) {
      ppvVar3 = (void **)malloc(0x10);
      lVar1 = *(long *)(param_1 + 0x88);
      pvVar2 = *(void **)(param_1 + 0x90);
      *ppvVar3 = pvVar4;
      ppvVar3[1] = pvVar2;
      *(long *)(param_1 + 0x88) = lVar1 + lVar5;
      *(void ***)(param_1 + 0x90) = ppvVar3;
    }
    *(ulong *)(param_1 + 0x80) = __size;
    pvVar4 = malloc(__size);
    lVar5 = 0;
    *(void **)(param_1 + 0x70) = pvVar4;
  }
  *(ulong *)(param_1 + 0x78) = lVar5 + __size;
  return (long)pvVar4 + lVar5;
}


