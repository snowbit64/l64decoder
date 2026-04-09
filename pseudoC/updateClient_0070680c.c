// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateClient
// Entry Point: 0070680c
// Size: 420 bytes
// Signature: undefined __thiscall updateClient(AnimalAnimationSystem * this, float param_1, bool param_2)


/* AnimalAnimationSystem::updateClient(float, bool) */

void __thiscall
AnimalAnimationSystem::updateClient(AnimalAnimationSystem *this,float param_1,bool param_2)

{
  vector *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  pvVar1 = (vector *)(this + 0x308);
  *(undefined8 *)(this + 0x310) = *(undefined8 *)(this + 0x308);
  if (this[0x59] != (AnimalAnimationSystem)0x0) {
    AnimationTrack::update((AnimationTrack *)(this + 0x18),param_1);
    AnimationTrack::getEvents((AnimationTrack *)(this + 0x18),pvVar1);
  }
  if (this[0xc1] != (AnimalAnimationSystem)0x0) {
    AnimationTrack::update((AnimationTrack *)(this + 0x80),param_1);
    AnimationTrack::getEvents((AnimationTrack *)(this + 0x80),pvVar1);
  }
  if (this[0x129] != (AnimalAnimationSystem)0x0) {
    AnimationTrack::update((AnimationTrack *)(this + 0xe8),param_1);
    AnimationTrack::getEvents((AnimationTrack *)(this + 0xe8),pvVar1);
  }
  if (this[0x191] != (AnimalAnimationSystem)0x0) {
    AnimationTrack::update((AnimationTrack *)(this + 0x150),param_1);
    AnimationTrack::getEvents((AnimationTrack *)(this + 0x150),pvVar1);
  }
  if (this[0x1f9] != (AnimalAnimationSystem)0x0) {
    AnimationTrack::update((AnimationTrack *)(this + 0x1b8),param_1);
    AnimationTrack::getEvents((AnimationTrack *)(this + 0x1b8),pvVar1);
  }
  if (this[0x261] != (AnimalAnimationSystem)0x0) {
    AnimationTrack::update((AnimationTrack *)(this + 0x220),param_1);
    AnimationTrack::getEvents((AnimationTrack *)(this + 0x220),pvVar1);
  }
  if (*(long *)(this + 0x2a0) != 0) {
    lVar2 = *(long *)(this + 0x310);
    lVar3 = *(long *)(this + 0x308);
    if (lVar2 != lVar3) {
      uVar4 = 0;
      do {
        if (*(int *)(lVar3 + uVar4 * 8) == 0) {
          AnimalSoundSystem::playSound
                    (*(AnimalSoundSystem **)(this + 0x2a0),*(uint *)(lVar3 + uVar4 * 8 + 4),
                     (Vector3 *)(this + 0x2dc),false);
          lVar2 = *(long *)(this + 0x310);
          lVar3 = *(long *)(this + 0x308);
        }
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (uVar4 < (ulong)(lVar2 - lVar3 >> 3));
    }
  }
  if (param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007069ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x298) + 0x10))(param_1);
  return;
}


