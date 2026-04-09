// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingSavegameUploadReport
// Entry Point: 0079d110
// Size: 92 bytes
// Signature: undefined __thiscall ~ScriptingSavegameUploadReport(ScriptingSavegameUploadReport * this)


/* ScriptingSavegameUploadReport::~ScriptingSavegameUploadReport() */

void __thiscall
ScriptingSavegameUploadReport::~ScriptingSavegameUploadReport(ScriptingSavegameUploadReport *this)

{
  LuauScriptSystem *this_00;
  
  if (*(long *)(this + 0x18) != 0) {
                    /* try { // try from 0079d128 to 0079d137 has its CatchHandler @ 0079d16c */
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this_00,*(void **)(this + 0x18));
  }
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


