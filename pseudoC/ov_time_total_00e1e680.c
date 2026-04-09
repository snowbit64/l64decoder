// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_time_total
// Entry Point: 00e1e680
// Size: 212 bytes
// Signature: undefined ov_time_total(void)


undefined  [16] ov_time_total(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined auVar4 [16];
  double dVar5;
  
  if (((1 < *(int *)(param_1 + 0x80)) && (*(int *)(param_1 + 8) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x40), (int)param_2 < iVar1)) {
    if ((int)param_2 < 0) {
      dVar5 = 0.0;
      if (0 < iVar1) {
        iVar2 = 0;
        do {
          dVar3 = (double)ov_time_total(param_1,iVar2);
          dVar5 = dVar5 + dVar3;
          iVar2 = iVar2 + 1;
        } while (iVar1 != iVar2);
      }
    }
    else {
      dVar5 = (double)*(long *)(*(long *)(param_1 + 0x60) + (long)(int)(param_2 << 1 | 1) * 8) /
              (double)*(long *)(*(long *)(param_1 + 0x68) + (ulong)param_2 * 0x38 + 8);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar5;
    return auVar4;
  }
  return ZEXT816(0xc060600000000000);
}


