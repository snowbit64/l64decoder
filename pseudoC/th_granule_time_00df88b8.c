// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_granule_time
// Entry Point: 00df88b8
// Size: 128 bytes
// Signature: undefined th_granule_time(void)


undefined  [16] th_granule_time(byte *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  undefined auVar4 [16];
  double dVar5;
  
  if ((long)param_2 < 0) {
    return ZEXT816(0xbff0000000000000);
  }
  uVar1 = param_2 >> ((ulong)*(uint *)(param_1 + 0x3c) & 0x3f);
  if (*param_1 < 4) {
    if (*param_1 == 3) {
      if (2 < param_1[1]) goto LAB_00df88d4;
      if (param_1[1] == 2) {
        lVar2 = -(ulong)(param_1[2] != 0);
        goto LAB_00df890c;
      }
    }
    lVar2 = 0;
  }
  else {
LAB_00df88d4:
    lVar2 = -1;
  }
LAB_00df890c:
  dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x20));
  dVar5 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x1c));
  auVar4._0_8_ = (dVar3 / dVar5) *
                 (double)(((param_2 + uVar1) - (uVar1 << ((ulong)*(uint *)(param_1 + 0x3c) & 0x3f)))
                          + lVar2 + 1);
  auVar4._8_8_ = 0;
  return auVar4;
}


