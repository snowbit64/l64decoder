// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAutoPlay
// Entry Point: 00a4ecf8
// Size: 156 bytes
// Signature: undefined __thiscall setAutoPlay(AudioSourceSample * this, bool param_1)


/* AudioSourceSample::setAutoPlay(bool) */

void __thiscall AudioSourceSample::setAutoPlay(AudioSourceSample *this,bool param_1)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  if (param_1) {
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 1;
    puVar2 = (uint *)(*(long *)(this + 0x70) + 0x40);
    if ((*puVar2 >> 0x10 & 1) != 0) {
      return;
    }
    uVar3 = *puVar2 & 0xfffeffff;
  }
  else {
    lVar5 = *(long *)(this + 0x70);
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) & 0xfffffffe;
    bVar1 = (**(code **)(*(long *)this + 0x38))();
    puVar2 = (uint *)(lVar5 + 0x40);
    if (((bVar1 ^ (*puVar2 & 0x10000) == 0) & 1) != 0) {
      return;
    }
    uVar3 = *puVar2 & 0xfffeffff;
    if ((bVar1 & 1) == 0) {
      uVar4 = 0;
      goto LAB_00a4ed7c;
    }
  }
  uVar4 = 0x10000;
LAB_00a4ed7c:
  *puVar2 = uVar4 | uVar3;
  AudioSource::setAudioSourceCullingDirty();
  return;
}


