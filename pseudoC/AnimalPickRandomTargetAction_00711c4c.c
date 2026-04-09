// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalPickRandomTargetAction
// Entry Point: 00711c4c
// Size: 76 bytes
// Signature: undefined __thiscall AnimalPickRandomTargetAction(AnimalPickRandomTargetAction * this, AnimalSharedContext * param_1, AnimalContext * param_2, uint param_3)


/* AnimalPickRandomTargetAction::AnimalPickRandomTargetAction(AnimalSharedContext*, AnimalContext*,
   unsigned int) */

void __thiscall
AnimalPickRandomTargetAction::AnimalPickRandomTargetAction
          (AnimalPickRandomTargetAction *this,AnimalSharedContext *param_1,AnimalContext *param_2,
          uint param_3)

{
  BTBehavior::BTBehavior((BTBehavior *)this);
  *(AnimalSharedContext **)(this + 0x28) = param_1;
  *(AnimalContext **)(this + 0x30) = param_2;
  *(uint *)(this + 0x38) = param_3;
  *(undefined ***)this = &PTR__BTBehavior_00fd9fc8;
  return;
}


