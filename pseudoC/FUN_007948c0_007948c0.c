// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007948c0
// Entry Point: 007948c0
// Size: 68 bytes
// Signature: undefined FUN_007948c0(void)


void FUN_007948c0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 1;
  EngineManager::getInstance();
  lVar2 = Renderer::getCamera();
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x18);
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_1 + 0x100) = uVar1;
  }
  return;
}


