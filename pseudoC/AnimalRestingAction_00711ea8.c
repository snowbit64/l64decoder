// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalRestingAction
// Entry Point: 00711ea8
// Size: 76 bytes
// Signature: undefined __thiscall AnimalRestingAction(AnimalRestingAction * this, AnimalContext * param_1, AnimalSharedContext * param_2, AnimalLocomotionSystem * param_3)


/* AnimalRestingAction::AnimalRestingAction(AnimalContext*, AnimalSharedContext*,
   AnimalLocomotionSystem*) */

void __thiscall
AnimalRestingAction::AnimalRestingAction
          (AnimalRestingAction *this,AnimalContext *param_1,AnimalSharedContext *param_2,
          AnimalLocomotionSystem *param_3)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(AnimalContext **)(this + 0x28) = param_1;
  *(AnimalSharedContext **)(this + 0x30) = param_2;
  *(AnimalLocomotionSystem **)(this + 0x38) = param_3;
  *(undefined ***)this = &PTR__BTBehavior_00fda018;
  return;
}


