// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNameFromType
// Entry Point: 00aa7ad0
// Size: 16 bytes
// Signature: undefined __cdecl getNameFromType(RENDERDEVICE_TYPE param_1)


/* RenderDeviceManager::getNameFromType(RenderDeviceManager::RENDERDEVICE_TYPE) */

undefined8 RenderDeviceManager::getNameFromType(RENDERDEVICE_TYPE param_1)

{
  return *(undefined8 *)(s_renderDeviceTypeNames + (ulong)param_1 * 8);
}


