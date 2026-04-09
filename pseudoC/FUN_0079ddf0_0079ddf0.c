// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ddf0
// Entry Point: 0079ddf0
// Size: 108 bytes
// Signature: undefined FUN_0079ddf0(void)


void FUN_0079ddf0(char **param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  _func_void_ErrorCode_char_ptr *p_Var4;
  
  if (*(int *)(param_1 + 3) == 8) {
    pcVar3 = param_1[2];
  }
  else {
    pcVar3 = (char *)0x0;
  }
  if (*(int *)(param_1 + 1) == 6) {
    bVar1 = **param_1 != '\0';
    p_Var4 = (_func_void_ErrorCode_char_ptr *)0x0;
    if (bVar1) {
      p_Var4 = ScriptingSavegameReport::StaticCloudErrorCallback;
    }
    pcVar2 = (char *)0x0;
    if (bVar1) {
      pcVar2 = *param_1;
    }
  }
  else {
    p_Var4 = (_func_void_ErrorCode_char_ptr *)0x0;
    pcVar2 = (char *)0x0;
  }
  ScriptingSavegameReport::setCloudErrorReport(pcVar2,pcVar3);
  GenericSaveGameUtil::setCloudErrorCallback(p_Var4);
  return;
}


