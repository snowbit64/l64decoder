// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAnimationDuration
// Entry Point: 00705d60
// Size: 68 bytes
// Signature: undefined __thiscall getAnimationDuration(AnimalAnimationSystem * this, uint param_1)


/* AnimalAnimationSystem::getAnimationDuration(unsigned int) */

undefined  [16] __thiscall
AnimalAnimationSystem::getAnimationDuration(AnimalAnimationSystem *this,uint param_1)

{
  undefined auVar1 [16];
  
  if ((param_1 != 0xffffffff) && (*(CharacterSet **)(this + 0x298) != (CharacterSet *)0x0)) {
    CharacterSet::getClip
              (*(CharacterSet **)(this + 0x298),
               *(uint *)(*(long *)(this + 0x288) + (ulong)param_1 * 0x70 + 0x34c));
    auVar1 = Clip::getDuration();
    return auVar1;
  }
  return ZEXT816(0);
}


