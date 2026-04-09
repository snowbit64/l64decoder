// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vorbis_block_ripcord
// Entry Point: 00e04720
// Size: 120 bytes
// Signature: undefined _vorbis_block_ripcord(void)


void _vorbis_block_ripcord(long param_1)

{
  void **ppvVar1;
  void **__ptr;
  void *pvVar2;
  
  __ptr = *(void ***)(param_1 + 0x90);
  while (__ptr != (void **)0x0) {
    ppvVar1 = (void **)__ptr[1];
    free(*__ptr);
    *__ptr = (void *)0x0;
    __ptr[1] = (void *)0x0;
    free(__ptr);
    __ptr = ppvVar1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    pvVar2 = realloc(*(void **)(param_1 + 0x70),
                     *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x88));
    *(void **)(param_1 + 0x70) = pvVar2;
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}


