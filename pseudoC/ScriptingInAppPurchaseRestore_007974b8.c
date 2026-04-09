// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingInAppPurchaseRestore
// Entry Point: 007974b8
// Size: 76 bytes
// Signature: undefined __thiscall ~ScriptingInAppPurchaseRestore(ScriptingInAppPurchaseRestore * this)


/* ScriptingInAppPurchaseRestore::~ScriptingInAppPurchaseRestore() */

void __thiscall
ScriptingInAppPurchaseRestore::~ScriptingInAppPurchaseRestore(ScriptingInAppPurchaseRestore *this)

{
  LuauScriptSystem *this_00;
  
  if (*(long *)(this + 0x18) != 0) {
                    /* try { // try from 007974d0 to 007974df has its CatchHandler @ 00797504 */
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


