// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCloudErrorCallback
// Entry Point: 00b4ea0c
// Size: 52 bytes
// Signature: undefined __cdecl setCloudErrorCallback(_func_void_ErrorCode_char_ptr * param_1)


/* GenericSaveGameUtil::setCloudErrorCallback(void (*)(SaveGameUtilBase::ErrorCode, char const*)) */

void GenericSaveGameUtil::setCloudErrorCallback(_func_void_ErrorCode_char_ptr *param_1)

{
  long lVar1;
  
  CloudDeviceManager::getInstance();
  lVar1 = CloudDeviceManager::getCloudDevice();
  if (lVar1 != 0) {
    s_cloudErrorPTData._24_8_ = param_1;
  }
  return;
}


