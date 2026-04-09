// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalIdleAction
// Entry Point: 0071191c
// Size: 76 bytes
// Signature: undefined __thiscall AnimalIdleAction(AnimalIdleAction * this, AnimalContext * param_1, AnimalSharedContext * param_2, AnimalLocomotionSystem * param_3)


/* AnimalIdleAction::AnimalIdleAction(AnimalContext*, AnimalSharedContext*, AnimalLocomotionSystem*)
    */

void __thiscall
AnimalIdleAction::AnimalIdleAction
          (AnimalIdleAction *this,AnimalContext *param_1,AnimalSharedContext *param_2,
          AnimalLocomotionSystem *param_3)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(AnimalContext **)(this + 0x28) = param_1;
  *(AnimalSharedContext **)(this + 0x30) = param_2;
  *(AnimalLocomotionSystem **)(this + 0x38) = param_3;
  *(undefined ***)this = &PTR__BTBehavior_00fd9ed8;
  return;
}


