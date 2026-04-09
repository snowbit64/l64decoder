// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingSavegameReport
// Entry Point: 00789ce4
// Size: 76 bytes
// Signature: undefined __thiscall ~ScriptingSavegameReport(ScriptingSavegameReport * this)


/* ScriptingSavegameReport::~ScriptingSavegameReport() */

void __thiscall ScriptingSavegameReport::~ScriptingSavegameReport(ScriptingSavegameReport *this)

{
  LuauScriptSystem *this_00;
  
  if (*(long *)(this + 0x18) != 0) {
                    /* try { // try from 00789cfc to 00789d0b has its CatchHandler @ 00789d30 */
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


