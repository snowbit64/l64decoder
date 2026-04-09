// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00881ba0
// Size: 12 bytes
// Signature: undefined __thiscall init(BehaviorContext * this, BehaviorDataSource * param_1, AnimalAnimationSystem * param_2, AnimalSoundSystem * param_3, AnimalSteering * param_4)


/* BehaviorContext::init(BehaviorDataSource*, AnimalAnimationSystem*, AnimalSoundSystem*,
   AnimalSteering*) */

void __thiscall
BehaviorContext::init
          (BehaviorContext *this,BehaviorDataSource *param_1,AnimalAnimationSystem *param_2,
          AnimalSoundSystem *param_3,AnimalSteering *param_4)

{
  *(BehaviorDataSource **)(this + 0x98) = param_1;
  *(AnimalAnimationSystem **)(this + 0xa0) = param_2;
  *(AnimalSoundSystem **)(this + 0xa8) = param_3;
  *(AnimalSteering **)(this + 0xb0) = param_4;
  return;
}


