// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticCloudErrorCallback
// Entry Point: 0079de5c
// Size: 36 bytes
// Signature: undefined __cdecl StaticCloudErrorCallback(ErrorCode param_1, char * param_2)


/* ScriptingSavegameReport::StaticCloudErrorCallback(SaveGameUtilBase::ErrorCode, char const*) */

void ScriptingSavegameReport::StaticCloudErrorCallback(ErrorCode param_1,char *param_2)

{
  if (s_cloudErrorReport != (ScriptingSavegameReport *)0x0) {
    onCallComplete(s_cloudErrorReport,param_1,param_2);
    return;
  }
  return;
}


