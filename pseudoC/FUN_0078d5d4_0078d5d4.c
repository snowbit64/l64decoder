// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078d5d4
// Entry Point: 0078d5d4
// Size: 60 bytes
// Signature: undefined FUN_0078d5d4(void)


void FUN_0078d5d4(long param_1)

{
  double dVar1;
  
  GlobalTimeManager::getInstance();
  dVar1 = (double)GlobalTimeManager::getCurrentTime();
  *(undefined4 *)(param_1 + 0x108) = 5;
  *(double *)(param_1 + 0x100) = dVar1 * 0.001;
  return;
}


