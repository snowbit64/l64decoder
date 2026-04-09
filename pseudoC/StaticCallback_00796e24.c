// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticCallback
// Entry Point: 00796e24
// Size: 56 bytes
// Signature: undefined __cdecl StaticCallback(ErrorCode param_1, uint param_2, void * param_3)


/* ScriptingInAppPurchaseReport::StaticCallback(InAppPurchaseBase::ErrorCode, unsigned int, void*)
    */

void ScriptingInAppPurchaseReport::StaticCallback(ErrorCode param_1,uint param_2,void *param_3)

{
  onCallComplete((ScriptingInAppPurchaseReport *)param_3,param_1,param_2);
  ~ScriptingInAppPurchaseReport((ScriptingInAppPurchaseReport *)param_3);
  operator_delete(param_3);
  return;
}


