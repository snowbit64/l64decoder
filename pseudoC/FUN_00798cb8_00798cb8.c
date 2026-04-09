// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798cb8
// Entry Point: 00798cb8
// Size: 88 bytes
// Signature: undefined FUN_00798cb8(void)


void FUN_00798cb8(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = *param_1;
  if (3 < (int)uVar1) {
    uVar1 = 4;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (uVar1 < 4) {
    puVar2 = &DAT_00518de0 + *(int *)(&DAT_00518de0 + (ulong)uVar1 * 4);
  }
  else {
    puVar2 = &DAT_0050a39f;
  }
  *(undefined **)(param_1 + 0x40) = puVar2;
  param_1[0x42] = 6;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  return;
}


