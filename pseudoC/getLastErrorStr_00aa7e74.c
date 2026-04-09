// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLastErrorStr
// Entry Point: 00aa7e74
// Size: 20 bytes
// Signature: undefined __cdecl getLastErrorStr(ERROR_CODE param_1)


/* RenderDeviceUtil::getLastErrorStr(IRenderDevice::ERROR_CODE) */

undefined * RenderDeviceUtil::getLastErrorStr(ERROR_CODE param_1)

{
  return &DAT_00522f04 + *(int *)(&DAT_00522f04 + (ulong)param_1 * 4);
}


