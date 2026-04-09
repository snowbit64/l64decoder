// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptSystemManager
// Entry Point: 00bb5dac
// Size: 56 bytes
// Signature: undefined __thiscall ~ScriptSystemManager(ScriptSystemManager * this)


/* ScriptSystemManager::~ScriptSystemManager() */

void __thiscall ScriptSystemManager::~ScriptSystemManager(ScriptSystemManager *this)

{
  LuauScriptSystem *this_00;
  
  this_00 = *(LuauScriptSystem **)this;
  if (this_00 != (LuauScriptSystem *)0x0) {
    LuauScriptSystem::~LuauScriptSystem(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


