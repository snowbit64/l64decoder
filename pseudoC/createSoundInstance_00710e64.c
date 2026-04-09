// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSoundInstance
// Entry Point: 00710e64
// Size: 296 bytes
// Signature: undefined __thiscall createSoundInstance(AnimalSoundSystem * this, uint param_1)


/* AnimalSoundSystem::createSoundInstance(unsigned int) */

ScenegraphNode * __thiscall
AnimalSoundSystem::createSoundInstance(AnimalSoundSystem *this,uint param_1)

{
  long lVar1;
  long lVar2;
  ScenegraphNode *this_00;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_1 != 0xffffffff) {
    lVar1 = *(long *)(this + 0x18);
    if (*(long *)(this + 0x20) - lVar1 != 0) {
      uVar5 = 0;
      uVar3 = (*(long *)(this + 0x20) - lVar1 >> 3) * 0x2e8ba2e8ba2e8ba3;
      do {
        if (*(uint *)(lVar1 + uVar5 * 0x58) == param_1) {
          lVar4 = lVar1 + uVar5 * 0x58;
          lVar2 = *(long *)(lVar4 + 0x20);
          lVar4 = *(long *)(lVar4 + 0x28);
          if (lVar2 != lVar4) {
            MathUtil::getRandomMinMax(0,(int)((ulong)(lVar4 - lVar2) >> 2) + -1);
            this_00 = (ScenegraphNode *)AudioSource::clone();
            *(undefined4 *)(this_00 + 0x1dc) = 0;
            ScenegraphNode::setVisibility(this_00,false);
            lVar1 = *(long *)(this + 0x18) + uVar5 * 0x58;
            fVar8 = *(float *)(lVar1 + 0x38);
            fVar6 = (float)MathUtil::getRandomMinMax
                                     (*(float *)(lVar1 + 0x48),*(float *)(lVar1 + 0x4c));
            lVar1 = *(long *)(this + 0x18) + uVar5 * 0x58;
            fVar9 = *(float *)(lVar1 + 0x50);
            fVar7 = (float)MathUtil::getRandomMinMax
                                     (*(float *)(lVar1 + 0x40),*(float *)(lVar1 + 0x44));
            AudioSource::setVolume((AudioSource *)this_00,fVar8 + fVar6);
            Sample::setPitch((Sample *)(this_00 + 0x158),fVar9 + fVar7);
            return this_00;
          }
        }
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 <= uVar3 && uVar3 - uVar5 != 0);
    }
  }
  return (ScenegraphNode *)0x0;
}


