// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticCallback
// Entry Point: 00797300
// Size: 52 bytes
// Signature: undefined __cdecl StaticCallback(ErrorCode param_1, void * param_2)


/* ScriptingInAppPurchaseRestore::StaticCallback(InAppPurchaseBase::ErrorCode, void*) */

void ScriptingInAppPurchaseRestore::StaticCallback(ErrorCode param_1,void *param_2)

{
  onCallComplete((ScriptingInAppPurchaseRestore *)param_2,param_1);
  ~ScriptingInAppPurchaseRestore((ScriptingInAppPurchaseRestore *)param_2);
  operator_delete(param_2);
  return;
}


