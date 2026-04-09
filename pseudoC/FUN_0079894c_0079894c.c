// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079894c
// Entry Point: 0079894c
// Size: 84 bytes
// Signature: undefined FUN_0079894c(void)


void FUN_0079894c(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = *param_1;
  if (5 < (int)uVar1) {
    uVar1 = 6;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (uVar1 < 6) {
    puVar2 = &DAT_00518d8c + *(int *)(&DAT_00518d8c + (ulong)uVar1 * 4);
  }
  else {
    puVar2 = &DAT_0050a39f;
  }
  *(undefined **)(param_1 + 0x40) = puVar2;
  param_1[0x42] = 6;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  return;
}


