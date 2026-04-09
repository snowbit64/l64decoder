// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: boundingVolumeDirty
// Entry Point: 00a52608
// Size: 100 bytes
// Signature: undefined boundingVolumeDirty(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsShape::boundingVolumeDirty() */

void GsShape::boundingVolumeDirty(void)

{
  uint uVar1;
  GsShape *in_x0;
  
  uVar1 = *(uint *)(in_x0 + 0x40);
  *(uint *)(in_x0 + 0x40) = uVar1 | 0x5000;
  if (((uVar1 >> 0xf & 1) == 0) &&
     (((uVar1 & 0x82000) != 0 ||
      (((uint)((*(uint *)(in_x0 + 400) & 0x1001400) != 0x400) & uVar1 >> 1) != 0)))) {
    *(uint *)(in_x0 + 0x40) = uVar1 | 0xd000;
    CullingManager::addDirtyShape((CullingManager *)CullingManager::s_cullingManagerInstance,in_x0);
    return;
  }
  return;
}


