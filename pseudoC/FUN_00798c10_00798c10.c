// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798c10
// Entry Point: 00798c10
// Size: 56 bytes
// Signature: undefined FUN_00798c10(void)


void FUN_00798c10(long param_1)

{
  IRenderDevice *pIVar1;
  byte bVar2;
  
  RenderDeviceManager::getInstance();
  pIVar1 = (IRenderDevice *)RenderDeviceManager::getCurrentRenderDevice();
  bVar2 = ValarShadingRateController::getIsSupported(pIVar1);
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar2 & 1;
  return;
}


