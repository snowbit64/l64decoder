// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingRaycastReport
// Entry Point: 00790574
// Size: 92 bytes
// Signature: undefined __thiscall ~ScriptingRaycastReport(ScriptingRaycastReport * this)


/* ScriptingRaycastReport::~ScriptingRaycastReport() */

void __thiscall ScriptingRaycastReport::~ScriptingRaycastReport(ScriptingRaycastReport *this)

{
  LuauScriptSystem *this_00;
  
  *(undefined ***)this = &PTR__ScriptingRaycastReport_00fdb748;
  if (*(long *)(this + 0x20) != 0) {
                    /* try { // try from 0079059c to 007905ab has its CatchHandler @ 007905d0 */
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this_00,*(void **)(this + 0x20));
  }
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


