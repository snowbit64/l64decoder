// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8e8c
// Entry Point: 006e8e8c
// Size: 64 bytes
// Signature: undefined FUN_006e8e8c(void)


void FUN_006e8e8c(long param_1)

{
  undefined8 uVar1;
  
  RenderDeviceManager::getInstance();
  uVar1 = RenderDeviceManager::getCurrentRenderDeviceTypeName();
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


