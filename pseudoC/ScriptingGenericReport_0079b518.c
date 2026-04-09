// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingGenericReport
// Entry Point: 0079b518
// Size: 76 bytes
// Signature: undefined __thiscall ~ScriptingGenericReport(ScriptingGenericReport * this)


/* ScriptingGenericReport::~ScriptingGenericReport() */

void __thiscall ScriptingGenericReport::~ScriptingGenericReport(ScriptingGenericReport *this)

{
  LuauScriptSystem *this_00;
  
  if (*(long *)(this + 0x18) != 0) {
                    /* try { // try from 0079b530 to 0079b53f has its CatchHandler @ 0079b564 */
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this_00,*(void **)(this + 0x18));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


