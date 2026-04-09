// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLightSourceCullingDirty
// Entry Point: 00a5475c
// Size: 56 bytes
// Signature: undefined setLightSourceCullingDirty(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::setLightSourceCullingDirty() */

void LightSource::setLightSourceCullingDirty(void)

{
  uint uVar1;
  LightSource *in_x0;
  
  uVar1 = *(uint *)(in_x0 + 0x40);
  *(uint *)(in_x0 + 0x40) = uVar1 | 0x4000;
  if (((uVar1 >> 0xf & 1) == 0) && ((uVar1 & 0x2002) != 0)) {
    *(uint *)(in_x0 + 0x40) = uVar1 | 0xc000;
    CullingManager::addDirtyLightSource
              ((CullingManager *)CullingManager::s_cullingManagerInstance,in_x0);
    return;
  }
  return;
}


