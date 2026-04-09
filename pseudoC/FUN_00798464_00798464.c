// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798464
// Entry Point: 00798464
// Size: 52 bytes
// Signature: undefined FUN_00798464(void)


void FUN_00798464(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  param_1[0x42] = 1;
  param_1[0x40] = *(uint *)(HardwareScalability::s_mobileClassSettings + (ulong)uVar1 * 200 + 0x88);
  return;
}


