// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapHeightUpdaterApplyUpdateFinishedCallback
// Entry Point: 007b2714
// Size: 92 bytes
// Signature: undefined __thiscall ~DensityMapHeightUpdaterApplyUpdateFinishedCallback(DensityMapHeightUpdaterApplyUpdateFinishedCallback * this)


/* DensityMapHeightUpdaterApplyUpdateFinishedCallback::~DensityMapHeightUpdaterApplyUpdateFinishedCallback()
    */

void __thiscall
DensityMapHeightUpdaterApplyUpdateFinishedCallback::
~DensityMapHeightUpdaterApplyUpdateFinishedCallback
          (DensityMapHeightUpdaterApplyUpdateFinishedCallback *this)

{
  LuauScriptSystem *this_00;
  
  *(undefined ***)this = &PTR__DensityMapHeightUpdaterApplyUpdateFinishedCallback_00fdb9f0;
  if (*(long *)(this + 0x20) != 0) {
                    /* try { // try from 007b273c to 007b274b has its CatchHandler @ 007b2770 */
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


