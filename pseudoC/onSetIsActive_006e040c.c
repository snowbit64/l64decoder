// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSetIsActive
// Entry Point: 006e040c
// Size: 52 bytes
// Signature: undefined __thiscall onSetIsActive(LuaProfilerStats * this, bool param_1)


/* LuaProfilerStats::onSetIsActive(bool) */

void __thiscall LuaProfilerStats::onSetIsActive(LuaProfilerStats *this,bool param_1)

{
  ScriptSystemManager::getInstance();
  ScriptSystemManager::getCurrentScriptSystem();
  if (param_1) {
    LuauScriptSystem::startProfiling();
    return;
  }
  LuauScriptSystem::stopProfiling();
  return;
}


