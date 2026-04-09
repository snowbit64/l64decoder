// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8ecc
// Entry Point: 006e8ecc
// Size: 100 bytes
// Signature: undefined FUN_006e8ecc(void)


void FUN_006e8ecc(long param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  
  RenderDeviceManager::getInstance();
  plVar1 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  pcVar3 = "Unknown";
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x28))();
    if (*(char **)(lVar2 + 0x40) != (char *)0x0) {
      pcVar3 = *(char **)(lVar2 + 0x40);
    }
  }
  *(char **)(param_1 + 0x100) = pcVar3;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


