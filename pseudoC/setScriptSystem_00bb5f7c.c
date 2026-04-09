// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setScriptSystem
// Entry Point: 00bb5f7c
// Size: 68 bytes
// Signature: undefined __thiscall setScriptSystem(ScriptSystemManager * this, LuauScriptSystem * param_1)


/* ScriptSystemManager::setScriptSystem(LuauScriptSystem*) */

void __thiscall
ScriptSystemManager::setScriptSystem(ScriptSystemManager *this,LuauScriptSystem *param_1)

{
  LuauScriptSystem *this_00;
  
  this_00 = *(LuauScriptSystem **)this;
  if (this_00 != (LuauScriptSystem *)0x0) {
    LuauScriptSystem::~LuauScriptSystem(this_00);
    operator_delete(this_00);
  }
  *(LuauScriptSystem **)this = param_1;
  return;
}


