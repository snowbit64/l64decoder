// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalGrazingAction
// Entry Point: 00711798
// Size: 76 bytes
// Signature: undefined __thiscall AnimalGrazingAction(AnimalGrazingAction * this, AnimalSharedContext * param_1, AnimalContext * param_2, AnimalLocomotionSystem * param_3)


/* AnimalGrazingAction::AnimalGrazingAction(AnimalSharedContext*, AnimalContext*,
   AnimalLocomotionSystem*) */

void __thiscall
AnimalGrazingAction::AnimalGrazingAction
          (AnimalGrazingAction *this,AnimalSharedContext *param_1,AnimalContext *param_2,
          AnimalLocomotionSystem *param_3)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(AnimalSharedContext **)(this + 0x28) = param_1;
  *(AnimalContext **)(this + 0x30) = param_2;
  *(AnimalLocomotionSystem **)(this + 0x38) = param_3;
  *(undefined ***)this = &PTR__BTBehavior_00fd9e88;
  return;
}


