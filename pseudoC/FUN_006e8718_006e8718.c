// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8718
// Entry Point: 006e8718
// Size: 92 bytes
// Signature: undefined FUN_006e8718(void)


void FUN_006e8718(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  EngineManager::getInstance();
  lVar1 = EngineManager::getInputDevice();
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x20);
    uVar3 = *(undefined4 *)(lVar1 + 0x24);
    uVar4 = *(undefined4 *)(lVar1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x110) = uVar3;
  *(undefined4 *)(param_1 + 0x120) = uVar4;
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x128) = 4;
  return;
}


