// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079012c
// Entry Point: 0079012c
// Size: 36 bytes
// Signature: undefined FUN_0079012c(void)


void FUN_0079012c(void)

{
  ScenegraphPhysicsContextManager::getInstance();
  ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::flushSceneCaches();
  ScriptSystemManager::getInstance();
  ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::performCompleteGc();
  return;
}


