// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ff7c
// Entry Point: 0078ff7c
// Size: 36 bytes
// Signature: undefined FUN_0078ff7c(void)


void FUN_0078ff7c(void)

{
  LuauScriptSystem *this;
  
  ScriptSystemManager::getInstance();
  this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::printCallstack(this,"printCallstack",1);
  return;
}


