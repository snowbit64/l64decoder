// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapSyncerCallback
// Entry Point: 007b1d8c
// Size: 92 bytes
// Signature: undefined __thiscall ~DensityMapSyncerCallback(DensityMapSyncerCallback * this)


/* DensityMapSyncerCallback::~DensityMapSyncerCallback() */

void __thiscall DensityMapSyncerCallback::~DensityMapSyncerCallback(DensityMapSyncerCallback *this)

{
  LuauScriptSystem *this_00;
  
  *(undefined ***)this = &PTR__DensityMapSyncerCallback_00fdb9a0;
  if (*(long *)(this + 0x20) != 0) {
                    /* try { // try from 007b1db4 to 007b1dc3 has its CatchHandler @ 007b1de8 */
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


