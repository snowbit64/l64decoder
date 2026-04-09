// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopSound
// Entry Point: 007105a8
// Size: 368 bytes
// Signature: undefined __thiscall stopSound(AnimalSoundSystem * this, uint param_1)


/* AnimalSoundSystem::stopSound(unsigned int) */

void __thiscall AnimalSoundSystem::stopSound(AnimalSoundSystem *this,uint param_1)

{
  void *__dest;
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  this[0x50] = (AnimalSoundSystem)0x1;
  if (param_1 == 0xffffffff) {
    lVar3 = *(long *)(this + 0x38);
    if (lVar3 != *(long *)(this + 0x30)) {
      uVar1 = 0;
      do {
        AudioSource::stop();
        ScenegraphNode::setVisibility
                  (*(ScenegraphNode **)
                    (*(long *)this + (ulong)*(uint *)(*(long *)(this + 0x30) + uVar1 * 0x1c + 4) * 8
                    ),false);
        lVar3 = *(long *)(this + 0x30);
        uVar1 = (ulong)((int)uVar1 + 1);
        uVar2 = (*(long *)(this + 0x38) - lVar3 >> 2) * 0x6db6db6db6db6db7;
      } while (uVar1 <= uVar2 && uVar2 - uVar1 != 0);
    }
    *(long *)(this + 0x38) = lVar3;
  }
  else {
    lVar3 = *(long *)(this + 0x30);
    uVar1 = (*(long *)(this + 0x38) - lVar3 >> 2) * 0xb6db6db7;
    if (0 < (int)uVar1) {
      uVar1 = uVar1 & 0xffffffff;
      while( true ) {
        uVar2 = (ulong)((int)uVar1 - 1);
        if (*(uint *)(lVar3 + uVar2 * 0x1c) == param_1) {
          lVar3 = uVar2 * 0x1c;
          AudioSource::stop();
          ScenegraphNode::setVisibility
                    (*(ScenegraphNode **)
                      (*(long *)this + (ulong)*(uint *)(*(long *)(this + 0x30) + lVar3 + 4) * 8),
                     false);
          __dest = (void *)(*(long *)(this + 0x30) + lVar3);
          __n = *(long *)(this + 0x38) - (long)(void *)((long)__dest + 0x1c);
          if (__n != 0) {
            memmove(__dest,(void *)((long)__dest + 0x1c),__n);
          }
          *(size_t *)(this + 0x38) = (long)__dest + __n;
        }
        if (uVar1 < 2) break;
        lVar3 = *(long *)(this + 0x30);
        uVar1 = uVar1 - 1;
      }
    }
  }
  return;
}


