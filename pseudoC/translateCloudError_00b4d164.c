// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: translateCloudError
// Entry Point: 00b4d164
// Size: 56 bytes
// Signature: undefined __cdecl translateCloudError(CLOUD_ERROR param_1, ErrorCode param_2)


/* GenericSaveGameUtil::translateCloudError(ICloudDevice::CLOUD_ERROR, SaveGameUtilBase::ErrorCode)
    */

ErrorCode GenericSaveGameUtil::translateCloudError(CLOUD_ERROR param_1,ErrorCode param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 != 3) {
    if (param_1 == 2) {
      return 0xc;
    }
    return param_2;
  }
  return 0xe;
}


