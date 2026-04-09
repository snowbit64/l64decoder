// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea864
// Entry Point: 006ea864
// Size: 64 bytes
// Signature: undefined FUN_006ea864(void)


void FUN_006ea864(long param_1)

{
  long *plVar1;
  byte bVar2;
  
  RenderDeviceManager::getInstance();
  plVar1 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  bVar2 = (**(code **)(*plVar1 + 0xb0))();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar2 & 1;
  return;
}


