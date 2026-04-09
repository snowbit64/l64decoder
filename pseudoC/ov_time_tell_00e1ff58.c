// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_time_tell
// Entry Point: 00e1ff58
// Size: 280 bytes
// Signature: undefined ov_time_tell(void)


undefined  [16] ov_time_tell(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined auVar8 [16];
  
  if (*(int *)(param_1 + 0x80) < 2) {
    return ZEXT816(0xc060600000000000);
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar5 = 0;
    dVar6 = 0.0;
    lVar2 = 0;
  }
  else {
    lVar2 = ov_pcm_total(param_1,0xffffffff);
    dVar6 = (double)ov_time_total(param_1,0xffffffff);
    iVar5 = *(int *)(param_1 + 0x40);
    lVar3 = (long)iVar5;
    iVar4 = iVar5 * 2;
    if (-1 < iVar5) {
      iVar5 = 0;
    }
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + -1;
    do {
      lVar1 = lVar3 + -1;
      if (lVar3 < 1) goto LAB_00e20030;
      lVar2 = lVar2 - *(long *)(*(long *)(param_1 + 0x60) + (long)iVar4 * 8);
      dVar7 = (double)ov_time_total(param_1,(int)lVar3 + -1);
      dVar6 = dVar6 - dVar7;
      iVar4 = iVar4 + -2;
      lVar3 = lVar1;
    } while (*(long *)(param_1 + 0x78) < lVar2);
    iVar5 = (int)lVar1;
  }
LAB_00e20030:
  auVar8._0_8_ = dVar6 + (double)(*(long *)(param_1 + 0x78) - lVar2) /
                         (double)*(long *)(*(long *)(param_1 + 0x68) + (long)iVar5 * 0x38 + 8);
  auVar8._8_8_ = 0;
  return auVar8;
}


