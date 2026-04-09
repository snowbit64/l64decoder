// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAudioSourceCullingDirty
// Entry Point: 00a4a584
// Size: 72 bytes
// Signature: undefined setAudioSourceCullingDirty(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSource::setAudioSourceCullingDirty() */

void AudioSource::setAudioSourceCullingDirty(void)

{
  uint uVar1;
  AudioSource *in_x0;
  
  uVar1 = *(uint *)(in_x0 + 0x40);
  *(uint *)(in_x0 + 0x40) = uVar1 | 0x4000;
  if (((uVar1 >> 0xf & 1) == 0) && (((uVar1 ^ 0xffffffff) & 0x10002) == 0 || (uVar1 & 0x2000) != 0))
  {
    *(uint *)(in_x0 + 0x40) = uVar1 | 0xc000;
    CullingManager::addDirtyAudioSource
              ((CullingManager *)CullingManager::s_cullingManagerInstance,in_x0);
    return;
  }
  return;
}


