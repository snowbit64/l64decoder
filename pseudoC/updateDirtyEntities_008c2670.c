// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDirtyEntities
// Entry Point: 008c2670
// Size: 276 bytes
// Signature: undefined updateDirtyEntities(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CullingManager::updateDirtyEntities() */

void CullingManager::updateDirtyEntities(void)

{
  long in_x0;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(long *)(in_x0 + 0x118) - *(long *)(in_x0 + 0x110);
  if ((int)(uVar1 >> 3) != 0) {
    uVar1 = uVar1 >> 3 & 0xffffffff;
    GsShape::updateShapeCulling();
    if (uVar1 != 1) {
      uVar2 = 1;
      do {
        GsShape::updateShapeCulling();
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  uVar1 = *(long *)(in_x0 + 0x130) - *(long *)(in_x0 + 0x128);
  if ((int)(uVar1 >> 3) != 0) {
    uVar1 = uVar1 >> 3 & 0xffffffff;
    LightSource::updateLightSourceCulling();
    if (uVar1 != 1) {
      uVar2 = 1;
      do {
        LightSource::updateLightSourceCulling();
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  uVar1 = *(long *)(in_x0 + 0x148) - *(long *)(in_x0 + 0x140);
  if ((int)(uVar1 >> 3) != 0) {
    uVar1 = uVar1 >> 3 & 0xffffffff;
    AudioSource::updateAudioSourceCulling();
    if (uVar1 != 1) {
      uVar2 = 1;
      do {
        AudioSource::updateAudioSourceCulling();
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  if (*(long *)(in_x0 + 0x118) != *(long *)(in_x0 + 0x110)) {
    *(long *)(in_x0 + 0x118) = *(long *)(in_x0 + 0x110);
  }
  if (*(long *)(in_x0 + 0x130) != *(long *)(in_x0 + 0x128)) {
    *(long *)(in_x0 + 0x130) = *(long *)(in_x0 + 0x128);
  }
  if (*(long *)(in_x0 + 0x148) != *(long *)(in_x0 + 0x140)) {
    *(long *)(in_x0 + 0x148) = *(long *)(in_x0 + 0x140);
  }
  return;
}


