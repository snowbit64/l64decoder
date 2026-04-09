// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007967e0
// Entry Point: 007967e0
// Size: 80 bytes
// Signature: undefined FUN_007967e0(void)


void FUN_007967e0(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  if (0x16 < (int)uVar1) {
    uVar1 = 0x17;
  }
  uVar2 = LanguageUtil::getNativeName(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  param_1[0x42] = 6;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  return;
}


