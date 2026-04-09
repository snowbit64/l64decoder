// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalSleepingAction
// Entry Point: 00711fac
// Size: 68 bytes
// Signature: undefined __thiscall AnimalSleepingAction(AnimalSleepingAction * this, AnimalSharedContext * param_1, AnimalLocomotionSystem * param_2)


/* AnimalSleepingAction::AnimalSleepingAction(AnimalSharedContext*, AnimalLocomotionSystem*) */

void __thiscall
AnimalSleepingAction::AnimalSleepingAction
          (AnimalSleepingAction *this,AnimalSharedContext *param_1,AnimalLocomotionSystem *param_2)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(AnimalSharedContext **)(this + 0x28) = param_1;
  *(AnimalLocomotionSystem **)(this + 0x30) = param_2;
  *(undefined ***)this = &PTR__BTBehavior_00fda068;
  return;
}


