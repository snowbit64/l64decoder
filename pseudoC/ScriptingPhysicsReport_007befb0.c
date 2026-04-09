// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingPhysicsReport
// Entry Point: 007befb0
// Size: 132 bytes
// Signature: undefined __thiscall ~ScriptingPhysicsReport(ScriptingPhysicsReport * this)


/* ScriptingPhysicsReport::~ScriptingPhysicsReport() */

void __thiscall ScriptingPhysicsReport::~ScriptingPhysicsReport(ScriptingPhysicsReport *this)

{
  LuauScriptSystem *pLVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__ScriptingPhysicsReport_00fdbb18;
  if (*(long *)(this + 0x100) != 0) {
                    /* try { // try from 007befd8 to 007befff has its CatchHandler @ 007bf034 */
    ScriptSystemManager::getInstance();
    pLVar1 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(pLVar1,*(void **)(this + 0x100));
  }
  if (*(long *)(this + 0x108) != 0) {
    ScriptSystemManager::getInstance();
    pLVar1 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(pLVar1,*(void **)(this + 0x108));
  }
  pvVar2 = *(void **)(this + 0x110);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x118) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0xe8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0xf8));
  return;
}


