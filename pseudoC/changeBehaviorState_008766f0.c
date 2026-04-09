// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: changeBehaviorState
// Entry Point: 008766f0
// Size: 24 bytes
// Signature: undefined __thiscall changeBehaviorState(AnimalCompanionManager * this, uint param_1, BehaviorStateChangeParams * param_2)


/* AnimalCompanionManager::changeBehaviorState(unsigned int, BehaviorStateChangeParams const&) */

void __thiscall
AnimalCompanionManager::changeBehaviorState
          (AnimalCompanionManager *this,uint param_1,BehaviorStateChangeParams *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(this + 0x158) + (ulong)param_1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00876704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  return;
}


