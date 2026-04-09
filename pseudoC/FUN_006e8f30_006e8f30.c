// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8f30
// Entry Point: 006e8f30
// Size: 96 bytes
// Signature: undefined FUN_006e8f30(void)


void FUN_006e8f30(long param_1)

{
  long *plVar1;
  char *pcVar2;
  
  RenderDeviceManager::getInstance();
  plVar1 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  if (plVar1 == (long *)0x0) {
    pcVar2 = "Unknown";
  }
  else {
    (**(code **)(*plVar1 + 0x28))();
    pcVar2 = (char *)RenderDeviceInformation::getVendorString();
  }
  *(char **)(param_1 + 0x100) = pcVar2;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


