// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078c81c
// Entry Point: 0078c81c
// Size: 68 bytes
// Signature: undefined FUN_0078c81c(void)


void FUN_0078c81c(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 | *param_1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = *(uint *)(MathUtil::s_multiplyDeBruijnBitPosition +
                   (ulong)((uVar1 | uVar1 >> 0x10) * 0x7c4acdd >> 0x1b) * 4);
  param_1[0x42] = 1;
  param_1[0x40] = uVar1;
  return;
}


