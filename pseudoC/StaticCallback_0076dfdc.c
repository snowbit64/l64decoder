// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticCallback
// Entry Point: 0076dfdc
// Size: 44 bytes
// Signature: undefined __cdecl StaticCallback(void * param_1, ErrorCode param_2, char * param_3)


/* ScriptingSavegameReport::StaticCallback(void*, SaveGameUtilBase::ErrorCode, char const*) */

void ScriptingSavegameReport::StaticCallback(void *param_1,ErrorCode param_2,char *param_3)

{
  onCallComplete((ScriptingSavegameReport *)param_1,param_2,param_3);
  ~ScriptingSavegameReport((ScriptingSavegameReport *)param_1);
  operator_delete(param_1);
  return;
}


