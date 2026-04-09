// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: boundingVolumeDirty
// Entry Point: 00a5266c
// Size: 104 bytes
// Signature: undefined __thiscall boundingVolumeDirty(GsShape * this)


/* non-virtual thunk to GsShape::boundingVolumeDirty() */

void __thiscall GsShape::boundingVolumeDirty(GsShape *this)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(this + -0x118);
  uVar1 = *puVar2;
  *puVar2 = uVar1 | 0x5000;
  if (((uVar1 >> 0xf & 1) == 0) &&
     (((uVar1 & 0x82000) != 0 ||
      (((uint)((*(uint *)(this + 0x38) & 0x1001400) != 0x400) & uVar1 >> 1) != 0)))) {
    *puVar2 = uVar1 | 0xd000;
    CullingManager::addDirtyShape
              ((CullingManager *)CullingManager::s_cullingManagerInstance,this + -0x158);
    return;
  }
  return;
}


