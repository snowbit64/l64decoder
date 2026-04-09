// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalPickFeedingTargetAction
// Entry Point: 00711b10
// Size: 76 bytes
// Signature: undefined __thiscall AnimalPickFeedingTargetAction(AnimalPickFeedingTargetAction * this, AnimalSharedContext * param_1, AnimalContext * param_2, uint param_3)


/* AnimalPickFeedingTargetAction::AnimalPickFeedingTargetAction(AnimalSharedContext*,
   AnimalContext*, unsigned int) */

void __thiscall
AnimalPickFeedingTargetAction::AnimalPickFeedingTargetAction
          (AnimalPickFeedingTargetAction *this,AnimalSharedContext *param_1,AnimalContext *param_2,
          uint param_3)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(AnimalSharedContext **)(this + 0x28) = param_1;
  *(AnimalContext **)(this + 0x30) = param_2;
  *(uint *)(this + 0x38) = param_3;
  *(undefined ***)this = &PTR__BTBehavior_00fd9f78;
  return;
}


