// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797df4
// Entry Point: 00797df4
// Size: 52 bytes
// Signature: undefined FUN_00797df4(void)


void FUN_00797df4(long param_1)

{
  undefined4 uVar1;
  
  EngineManager::getInstance();
  uVar1 = HardwareScalability::getMSAA();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


