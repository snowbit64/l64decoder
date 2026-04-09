// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShapeCullingDirty
// Entry Point: 00a51bfc
// Size: 92 bytes
// Signature: undefined setShapeCullingDirty(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsShape::setShapeCullingDirty() */

void GsShape::setShapeCullingDirty(void)

{
  uint uVar1;
  GsShape *in_x0;
  
  uVar1 = *(uint *)(in_x0 + 0x40);
  *(uint *)(in_x0 + 0x40) = uVar1 | 0x4000;
  if (((uVar1 >> 0xf & 1) == 0) &&
     (((uVar1 & 0x82000) != 0 ||
      (((uint)((*(uint *)(in_x0 + 400) & 0x1001400) != 0x400) & uVar1 >> 1) != 0)))) {
    *(uint *)(in_x0 + 0x40) = uVar1 | 0xc000;
    CullingManager::addDirtyShape((CullingManager *)CullingManager::s_cullingManagerInstance,in_x0);
    return;
  }
  return;
}


