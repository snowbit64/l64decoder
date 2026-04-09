// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f02d28
// Entry Point: 00f02d28
// Size: 128 bytes
// Signature: undefined FUN_00f02d28(void)


undefined * FUN_00f02d28(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined **)(param_1 + 8) <= puVar1) {
      puVar1 = &DAT_0056fdf8;
    }
    puVar2 = (undefined *)0x0;
    if (puVar1 != &DAT_0056fdf8) {
      puVar2 = puVar1;
    }
    return puVar2;
  }
  if (-10000 < param_2) {
    puVar1 = (undefined *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    puVar2 = (undefined *)0x0;
    if (puVar1 != &DAT_0056fdf8) {
      puVar2 = puVar1;
    }
    return puVar2;
  }
  puVar2 = (undefined *)FUN_00f068dc();
  puVar1 = (undefined *)0x0;
  if (puVar2 != &DAT_0056fdf8) {
    puVar1 = puVar2;
  }
  return puVar1;
}


