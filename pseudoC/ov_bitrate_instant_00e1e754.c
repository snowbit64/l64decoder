// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_bitrate_instant
// Entry Point: 00e1e754
// Size: 120 bytes
// Signature: undefined ov_bitrate_instant(void)


long ov_bitrate_instant(long param_1)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x80);
  }
  else {
    lVar2 = (long)*(int *)(param_1 + 0x90);
    iVar1 = *(int *)(param_1 + 0x80);
  }
  if (iVar1 < 2) {
    return -0x83;
  }
  dVar3 = *(double *)(param_1 + 0xa0);
  if (dVar3 != 0.0) {
    dVar4 = *(double *)(param_1 + 0x98);
    lVar2 = *(long *)(*(long *)(param_1 + 0x68) + lVar2 * 0x38 + 8);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    dVar3 = (double)NEON_fmadd(dVar4 / dVar3,(double)lVar2,0x3fe0000000000000);
    return (long)dVar3;
  }
  return -1;
}


