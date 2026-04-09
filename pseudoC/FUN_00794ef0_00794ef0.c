// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794ef0
// Entry Point: 00794ef0
// Size: 52 bytes
// Signature: undefined FUN_00794ef0(void)


void FUN_00794ef0(uint *param_1)

{
  EngineManager *this;
  Bt2ScenegraphPhysicsContext *this_00;
  
  this = (EngineManager *)EngineManager::getInstance();
  EngineManager::removeScriptJointBreakCallback(this,*param_1);
  ScenegraphPhysicsContextManager::getInstance();
  this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueRemoveLightJoint(this_00,*param_1);
  return;
}


