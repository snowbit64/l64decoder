// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingPhysicsEntityReport
// Entry Point: 007910a0
// Size: 92 bytes
// Signature: undefined __thiscall ~ScriptingPhysicsEntityReport(ScriptingPhysicsEntityReport * this)


/* ScriptingPhysicsEntityReport::~ScriptingPhysicsEntityReport() */

void __thiscall
ScriptingPhysicsEntityReport::~ScriptingPhysicsEntityReport(ScriptingPhysicsEntityReport *this)

{
  LuauScriptSystem *this_00;
  
  *(undefined ***)this = &PTR__ScriptingPhysicsEntityReport_00fdb798;
  if (*(long *)(this + 0x20) != 0) {
                    /* try { // try from 007910c8 to 007910d7 has its CatchHandler @ 007910fc */
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


