// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: worldTransformationDirty
// Entry Point: 00a525a0
// Size: 104 bytes
// Signature: undefined __thiscall worldTransformationDirty(GsShape * this, ScenegraphNode * param_1, uint param_2)


/* non-virtual thunk to GsShape::worldTransformationDirty(ScenegraphNode*, unsigned int) */

void __thiscall
GsShape::worldTransformationDirty(GsShape *this,ScenegraphNode *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(this + -0x120);
  uVar1 = *puVar2;
  *puVar2 = uVar1 | 0x5000;
  if (((uVar1 >> 0xf & 1) == 0) &&
     (((uVar1 & 0x82000) != 0 ||
      (((uint)((*(uint *)(this + 0x30) & 0x1001400) != 0x400) & uVar1 >> 1) != 0)))) {
    *puVar2 = uVar1 | 0xd000;
    CullingManager::addDirtyShape
              ((CullingManager *)CullingManager::s_cullingManagerInstance,this + -0x160);
    return;
  }
  return;
}


