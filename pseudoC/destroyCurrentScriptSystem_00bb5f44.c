// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyCurrentScriptSystem
// Entry Point: 00bb5f44
// Size: 56 bytes
// Signature: undefined destroyCurrentScriptSystem(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScriptSystemManager::destroyCurrentScriptSystem() */

void ScriptSystemManager::destroyCurrentScriptSystem(void)

{
  LuauScriptSystem **in_x0;
  LuauScriptSystem *this;
  
  this = *in_x0;
  if (this != (LuauScriptSystem *)0x0) {
    LuauScriptSystem::~LuauScriptSystem(this);
    operator_delete(this);
  }
  *in_x0 = (LuauScriptSystem *)0x0;
  return;
}


