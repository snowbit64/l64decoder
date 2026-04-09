// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea8a4
// Entry Point: 006ea8a4
// Size: 40 bytes
// Signature: undefined FUN_006ea8a4(void)


void FUN_006ea8a4(void)

{
  long *plVar1;
  uint uVar2;
  
  do {
    RenderDeviceManager::getInstance();
    plVar1 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    uVar2 = (**(code **)(*plVar1 + 0xb0))();
  } while ((uVar2 & 1) == 0);
  return;
}


