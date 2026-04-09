// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalDrinkAction
// Entry Point: 00711530
// Size: 76 bytes
// Signature: undefined __thiscall AnimalDrinkAction(AnimalDrinkAction * this, AnimalSharedContext * param_1, AnimalContext * param_2, AnimalLocomotionSystem * param_3)


/* AnimalDrinkAction::AnimalDrinkAction(AnimalSharedContext*, AnimalContext*,
   AnimalLocomotionSystem*) */

void __thiscall
AnimalDrinkAction::AnimalDrinkAction
          (AnimalDrinkAction *this,AnimalSharedContext *param_1,AnimalContext *param_2,
          AnimalLocomotionSystem *param_3)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(AnimalSharedContext **)(this + 0x28) = param_1;
  *(AnimalContext **)(this + 0x30) = param_2;
  *(AnimalLocomotionSystem **)(this + 0x38) = param_3;
  *(undefined ***)this = &PTR__BTBehavior_00fd9de8;
  return;
}


