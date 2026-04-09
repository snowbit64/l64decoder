// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingStreamingCallback
// Entry Point: 0079245c
// Size: 116 bytes
// Signature: undefined __thiscall ~ScriptingStreamingCallback(ScriptingStreamingCallback * this)


/* ScriptingStreamingCallback::~ScriptingStreamingCallback() */

void __thiscall
ScriptingStreamingCallback::~ScriptingStreamingCallback(ScriptingStreamingCallback *this)

{
  LuauScriptSystem *pLVar1;
  
  *(undefined ***)this = &PTR__ScriptingStreamingCallback_00fdb7e8;
  if (*(long *)(this + 0x20) != 0) {
                    /* try { // try from 00792484 to 007924ab has its CatchHandler @ 007924d0 */
    ScriptSystemManager::getInstance();
    pLVar1 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(pLVar1,*(void **)(this + 0x20));
  }
  if (*(long *)(this + 0x28) != 0) {
    ScriptSystemManager::getInstance();
    pLVar1 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(pLVar1,*(void **)(this + 0x28));
  }
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


