// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_analysis_buffer
// Entry Point: 00e0512c
// Size: 312 bytes
// Signature: undefined vorbis_analysis_buffer(void)


undefined8 vorbis_analysis_buffer(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0x88);
  lVar5 = *(long *)(param_1 + 8);
  if (*(void **)(lVar6 + 0x78) != (void *)0x0) {
    free(*(void **)(lVar6 + 0x78));
  }
  *(undefined8 *)(lVar6 + 0x78) = 0;
  if (*(void **)(lVar6 + 0x80) != (void *)0x0) {
    free(*(void **)(lVar6 + 0x80));
  }
  *(undefined8 *)(lVar6 + 0x80) = 0;
  if (*(void **)(lVar6 + 0x88) != (void *)0x0) {
    free(*(void **)(lVar6 + 0x88));
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined8 *)(lVar6 + 0x88) = 0;
  if (iVar2 + param_2 < iVar1) {
    uVar4 = *(uint *)(lVar5 + 4);
  }
  else {
    iVar1 = *(int *)(lVar5 + 4);
    uVar4 = iVar2 + param_2 * 2;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (iVar1 < 1) {
      return *(undefined8 *)(param_1 + 0x18);
    }
    pvVar3 = realloc(**(void ***)(param_1 + 0x10),
                     -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
    uVar4 = *(uint *)(lVar5 + 4);
    **(void ***)(param_1 + 0x10) = pvVar3;
    if (1 < (int)uVar4) {
      lVar6 = 1;
      do {
        lVar7 = lVar6 * 8;
        pvVar3 = realloc(*(void **)(*(long *)(param_1 + 0x10) + lVar7),
                         (long)*(int *)(param_1 + 0x20) << 2);
        uVar4 = *(uint *)(lVar5 + 4);
        lVar6 = lVar6 + 1;
        *(void **)(*(long *)(param_1 + 0x10) + lVar7) = pvVar3;
      } while (lVar6 < (int)uVar4);
    }
  }
  if (0 < (int)uVar4) {
    lVar5 = 0;
    iVar1 = *(int *)(param_1 + 0x24);
    do {
      *(long *)(*(long *)(param_1 + 0x18) + lVar5) =
           *(long *)(*(long *)(param_1 + 0x10) + lVar5) + (long)iVar1 * 4;
      lVar5 = lVar5 + 8;
    } while ((ulong)uVar4 * 8 - lVar5 != 0);
  }
  return *(undefined8 *)(param_1 + 0x18);
}


