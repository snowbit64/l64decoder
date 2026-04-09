// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXMLIdFromType
// Entry Point: 00aa7ae0
// Size: 16 bytes
// Signature: undefined __cdecl getXMLIdFromType(RENDERDEVICE_TYPE param_1)


/* RenderDeviceManager::getXMLIdFromType(RenderDeviceManager::RENDERDEVICE_TYPE) */

undefined8 RenderDeviceManager::getXMLIdFromType(RENDERDEVICE_TYPE param_1)

{
  return *(undefined8 *)(s_renderDeviceTypeXMLId + (ulong)param_1 * 8);
}


