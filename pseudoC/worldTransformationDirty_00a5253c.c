// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: worldTransformationDirty
// Entry Point: 00a5253c
// Size: 100 bytes
// Signature: undefined __cdecl worldTransformationDirty(ScenegraphNode * param_1, uint param_2)


/* GsShape::worldTransformationDirty(ScenegraphNode*, unsigned int) */

void GsShape::worldTransformationDirty(ScenegraphNode *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = uVar1 | 0x5000;
  if (((uVar1 >> 0xf & 1) == 0) &&
     (((uVar1 & 0x82000) != 0 ||
      (((uint)((*(uint *)(param_1 + 400) & 0x1001400) != 0x400) & uVar1 >> 1) != 0)))) {
    *(uint *)(param_1 + 0x40) = uVar1 | 0xd000;
    CullingManager::addDirtyShape
              ((CullingManager *)CullingManager::s_cullingManagerInstance,(GsShape *)param_1);
    return;
  }
  return;
}


