// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8224
// Entry Point: 006e8224
// Size: 104 bytes
// Signature: undefined FUN_006e8224(void)


void FUN_006e8224(uint *param_1)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  
  EngineManager::getInstance();
  lVar2 = EngineManager::getInputDevice();
  if ((lVar2 == 0) || (0x13 < *param_1)) {
    bVar3 = 0;
  }
  else {
    uVar1 = *param_1 - 6;
    if (uVar1 < 10) {
      bVar3 = (byte)(0x3c >> (ulong)(uVar1 & 0x1f)) & 1;
    }
    else {
      bVar3 = 1;
    }
  }
  *(byte *)(param_1 + 0x40) = bVar3;
  param_1[0x42] = 3;
  return;
}


