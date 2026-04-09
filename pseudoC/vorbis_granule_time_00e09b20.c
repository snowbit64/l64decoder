// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_granule_time
// Entry Point: 00e09b20
// Size: 72 bytes
// Signature: undefined vorbis_granule_time(void)


undefined  [16] vorbis_granule_time(long param_1,long param_2)

{
  double dVar1;
  undefined auVar2 [16];
  
  if (param_2 != -1) {
    dVar1 = (double)param_2;
    if (param_2 < 0) {
      dVar1 = (double)param_2 + 2.0 + 9.223372036854776e+18 + 9.223372036854776e+18;
    }
    auVar2._0_8_ = dVar1 / (double)*(long *)(*(long *)(param_1 + 8) + 8);
    auVar2._8_8_ = 0;
    return auVar2;
  }
  return ZEXT816(0xbff0000000000000);
}


