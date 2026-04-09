// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8e04
// Entry Point: 006e8e04
// Size: 92 bytes
// Signature: undefined FUN_006e8e04(void)


void FUN_006e8e04(long param_1)

{
  ulong uVar1;
  
  uVar1 = EnvUtil::getProcessorFreq();
  *(undefined4 *)(param_1 + 0x108) = 5;
  *(double *)(param_1 + 0x100) = (double)(unkuint9)(uVar1 / 1000) / 1000000.0;
  return;
}


