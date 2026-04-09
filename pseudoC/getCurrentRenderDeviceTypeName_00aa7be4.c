// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurrentRenderDeviceTypeName
// Entry Point: 00aa7be4
// Size: 28 bytes
// Signature: undefined getCurrentRenderDeviceTypeName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderDeviceManager::getCurrentRenderDeviceTypeName() const */

undefined8 RenderDeviceManager::getCurrentRenderDeviceTypeName(void)

{
  return *(undefined8 *)(s_renderDeviceTypeNames + (ulong)DAT_02113550 * 8);
}


