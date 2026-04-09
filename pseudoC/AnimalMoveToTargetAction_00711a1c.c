// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalMoveToTargetAction
// Entry Point: 00711a1c
// Size: 68 bytes
// Signature: undefined __thiscall AnimalMoveToTargetAction(AnimalMoveToTargetAction * this, AnimalContext * param_1, AnimalLocomotionSystem * param_2)


/* AnimalMoveToTargetAction::AnimalMoveToTargetAction(AnimalContext*, AnimalLocomotionSystem*) */

void __thiscall
AnimalMoveToTargetAction::AnimalMoveToTargetAction
          (AnimalMoveToTargetAction *this,AnimalContext *param_1,AnimalLocomotionSystem *param_2)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(AnimalContext **)(this + 0x28) = param_1;
  *(AnimalLocomotionSystem **)(this + 0x30) = param_2;
  *(undefined ***)this = &PTR__BTBehavior_00fd9f28;
  return;
}


