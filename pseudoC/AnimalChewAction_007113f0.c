// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalChewAction
// Entry Point: 007113f0
// Size: 76 bytes
// Signature: undefined __thiscall AnimalChewAction(AnimalChewAction * this, AnimalSharedContext * param_1, AnimalContext * param_2, AnimalLocomotionSystem * param_3)


/* AnimalChewAction::AnimalChewAction(AnimalSharedContext*, AnimalContext*, AnimalLocomotionSystem*)
    */

void __thiscall
AnimalChewAction::AnimalChewAction
          (AnimalChewAction *this,AnimalSharedContext *param_1,AnimalContext *param_2,
          AnimalLocomotionSystem *param_3)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(AnimalSharedContext **)(this + 0x28) = param_1;
  *(AnimalContext **)(this + 0x30) = param_2;
  *(AnimalLocomotionSystem **)(this + 0x38) = param_3;
  *(undefined ***)this = &PTR__BTBehavior_00fd9d98;
  return;
}


