// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_pcm_total
// Entry Point: 00e1e8ec
// Size: 212 bytes
// Signature: undefined ov_pcm_total(void)


long ov_pcm_total(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x80) < 2) {
    lVar3 = -0x83;
  }
  else {
    if ((*(int *)(param_1 + 8) == 0) || (iVar1 = *(int *)(param_1 + 0x40), iVar1 <= param_2)) {
      return -0x83;
    }
    if (-1 < param_2) {
      return *(long *)(*(long *)(param_1 + 0x60) + (long)(int)(param_2 << 1 | 1) * 8);
    }
    if (iVar1 < 1) {
      return 0;
    }
    iVar4 = 0;
    lVar3 = 0;
    do {
      lVar2 = ov_pcm_total(param_1,iVar4);
      iVar4 = iVar4 + 1;
      lVar3 = lVar2 + lVar3;
    } while (iVar1 != iVar4);
  }
  return lVar3;
}


