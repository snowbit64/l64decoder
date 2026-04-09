// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEvents
// Entry Point: 00706094
// Size: 28 bytes
// Signature: undefined __thiscall getEvents(AnimalAnimationSystem * this, vector * param_1)


/* AnimalAnimationSystem::getEvents(std::__ndk1::vector<AnimalAnimationSystem::AnimationEvent,
   std::__ndk1::allocator<AnimalAnimationSystem::AnimationEvent> >&) */

type __thiscall AnimalAnimationSystem::getEvents(AnimalAnimationSystem *this,vector *param_1)

{
  type tVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 0x308);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_1;
  tVar1 = std::__ndk1::
          vector<AnimalAnimationSystem::AnimationEvent,std::__ndk1::allocator<AnimalAnimationSystem::AnimationEvent>>
          ::insert<std::__ndk1::__wrap_iter<AnimalAnimationSystem::AnimationEvent*>>
                    ((vector<AnimalAnimationSystem::AnimationEvent,std::__ndk1::allocator<AnimalAnimationSystem::AnimationEvent>>
                      *)param_1,(__wrap_iter)*(undefined8 *)param_1,(__wrap_iter)uVar2,
                     (__wrap_iter)*(undefined8 *)(this + 0x310));
  return tVar1;
}


