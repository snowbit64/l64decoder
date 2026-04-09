// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapUpdaterApplyUpdateFinishedCallback
// Entry Point: 007af98c
// Size: 92 bytes
// Signature: undefined __thiscall ~DensityMapUpdaterApplyUpdateFinishedCallback(DensityMapUpdaterApplyUpdateFinishedCallback * this)


/* DensityMapUpdaterApplyUpdateFinishedCallback::~DensityMapUpdaterApplyUpdateFinishedCallback() */

void __thiscall
DensityMapUpdaterApplyUpdateFinishedCallback::~DensityMapUpdaterApplyUpdateFinishedCallback
          (DensityMapUpdaterApplyUpdateFinishedCallback *this)

{
  LuauScriptSystem *this_00;
  
  *(undefined ***)this = &PTR__DensityMapUpdaterApplyUpdateFinishedCallback_00fdb900;
  if (*(long *)(this + 0x20) != 0) {
                    /* try { // try from 007af9b4 to 007af9c3 has its CatchHandler @ 007af9e8 */
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


