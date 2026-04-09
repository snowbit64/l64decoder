// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingTimerListener
// Entry Point: 00795d08
// Size: 92 bytes
// Signature: undefined __thiscall ~ScriptingTimerListener(ScriptingTimerListener * this)


/* ScriptingTimerListener::~ScriptingTimerListener() */

void __thiscall ScriptingTimerListener::~ScriptingTimerListener(ScriptingTimerListener *this)

{
  LuauScriptSystem *this_00;
  
  *(undefined ***)this = &PTR_timerCallback_00fdb878;
  if (*(long *)(this + 0x28) != 0) {
                    /* try { // try from 00795d30 to 00795d3f has its CatchHandler @ 00795d64 */
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this_00,*(void **)(this + 0x28));
  }
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


