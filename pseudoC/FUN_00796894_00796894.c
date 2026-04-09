// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796894
// Entry Point: 00796894
// Size: 88 bytes
// Signature: undefined FUN_00796894(void)


void FUN_00796894(uint *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  *(undefined *)(param_1 + 0x40) = 1;
  param_1[0x42] = 3;
  EngineManager::getInstance();
  lVar2 = EngineManager::getCopyProtection();
  if (lVar2 != 0) {
    uVar1 = *param_1;
    uVar3 = CopyProtection::getLanguagesMask();
    param_1[0x42] = 3;
    *(byte *)(param_1 + 0x40) = (byte)(uVar3 >> (ulong)(uVar1 & 0x1f)) & 1;
  }
  return;
}


