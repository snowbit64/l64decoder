// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00a4dae4
// Size: 188 bytes
// Signature: undefined __thiscall stop(AudioSourceSample * this, float param_1, float param_2)


/* AudioSourceSample::stop(float, float) */

undefined8 __thiscall AudioSourceSample::stop(AudioSourceSample *this,float param_1,float param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(this + 0x78);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(uint *)(*(long *)(this + 0x70) + 0x40);
    if ((uVar2 >> 0x10 & 1) != 0) {
      *(uint *)(*(long *)(this + 0x70) + 0x40) = uVar2 & 0xfffeffff;
      AudioSource::setAudioSourceCullingDirty();
      uVar3 = *(uint *)(this + 0x78);
    }
  }
  *(undefined8 *)(this + 0xa0) = 0;
  *(uint *)(this + 0x78) = uVar3 & 0xfffffff7;
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)*(uint *)(this + 0xac) * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)*(uint *)(this + 0xac) * 0x38);
  }
  lVar4 = *(long *)(puVar1 + 10);
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  if (lVar4 != 0) {
    LoopSynthesisGenerator::setStop();
  }
  if (*(long **)(puVar1 + 0xc) != (long *)0x0) {
    (**(code **)(**(long **)(puVar1 + 0xc) + 0x40))(param_1,param_2);
  }
  return 1;
}


