// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007beaac
// Entry Point: 007beaac
// Size: 92 bytes
// Signature: undefined FUN_007beaac(void)


void FUN_007beaac(char **param_1)

{
  byte bVar1;
  
  bVar1 = HeatmapUtil::saveHeatmap
                    (*param_1,*(uint *)(param_1 + 2),*(uint *)(param_1 + 4),*(uint *)(param_1 + 6),
                     (float *)param_1[8],param_1[10]);
  *(byte *)(param_1 + 0x20) = bVar1 & 1;
  *(undefined4 *)(param_1 + 0x21) = 3;
  if (param_1[8] != (char *)0x0) {
    operator_delete__(param_1[8]);
    return;
  }
  return;
}


