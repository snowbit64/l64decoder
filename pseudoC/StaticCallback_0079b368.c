// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticCallback
// Entry Point: 0079b368
// Size: 44 bytes
// Signature: undefined __cdecl StaticCallback(void * param_1, bool param_2)


/* ScriptingGenericReport::StaticCallback(void*, bool) */

void ScriptingGenericReport::StaticCallback(void *param_1,bool param_2)

{
  onCallComplete((ScriptingGenericReport *)param_1,param_2);
  ~ScriptingGenericReport((ScriptingGenericReport *)param_1);
  operator_delete(param_1);
  return;
}


