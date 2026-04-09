// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FieldCropsUpdaterApplyGrowthFinishedCallback
// Entry Point: 007b1384
// Size: 92 bytes
// Signature: undefined __thiscall ~FieldCropsUpdaterApplyGrowthFinishedCallback(FieldCropsUpdaterApplyGrowthFinishedCallback * this)


/* FieldCropsUpdaterApplyGrowthFinishedCallback::~FieldCropsUpdaterApplyGrowthFinishedCallback() */

void __thiscall
FieldCropsUpdaterApplyGrowthFinishedCallback::~FieldCropsUpdaterApplyGrowthFinishedCallback
          (FieldCropsUpdaterApplyGrowthFinishedCallback *this)

{
  LuauScriptSystem *this_00;
  
  *(undefined ***)this = &PTR__FieldCropsUpdaterApplyGrowthFinishedCallback_00fdb950;
  if (*(long *)(this + 0x20) != 0) {
                    /* try { // try from 007b13ac to 007b13bb has its CatchHandler @ 007b13e0 */
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


