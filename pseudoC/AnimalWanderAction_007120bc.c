// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalWanderAction
// Entry Point: 007120bc
// Size: 76 bytes
// Signature: undefined __thiscall AnimalWanderAction(AnimalWanderAction * this, AnimalSharedContext * param_1, AnimalContext * param_2, AnimalLocomotionSystem * param_3)


/* AnimalWanderAction::AnimalWanderAction(AnimalSharedContext*, AnimalContext*,
   AnimalLocomotionSystem*) */

void __thiscall
AnimalWanderAction::AnimalWanderAction
          (AnimalWanderAction *this,AnimalSharedContext *param_1,AnimalContext *param_2,
          AnimalLocomotionSystem *param_3)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(AnimalSharedContext **)(this + 0x28) = param_1;
  *(AnimalContext **)(this + 0x30) = param_2;
  *(AnimalLocomotionSystem **)(this + 0x38) = param_3;
  *(undefined ***)this = &PTR__BTBehavior_00fda0b8;
  return;
}


