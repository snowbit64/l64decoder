// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingInAppPurchaseReport
// Entry Point: 00796fe8
// Size: 76 bytes
// Signature: undefined __thiscall ~ScriptingInAppPurchaseReport(ScriptingInAppPurchaseReport * this)


/* ScriptingInAppPurchaseReport::~ScriptingInAppPurchaseReport() */

void __thiscall
ScriptingInAppPurchaseReport::~ScriptingInAppPurchaseReport(ScriptingInAppPurchaseReport *this)

{
  LuauScriptSystem *this_00;
  
  if (*(long *)(this + 0x18) != 0) {
                    /* try { // try from 00797000 to 0079700f has its CatchHandler @ 00797034 */
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


