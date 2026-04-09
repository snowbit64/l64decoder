// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHit
// Entry Point: 009da960
// Size: 136 bytes
// Signature: undefined __cdecl onHit(TransformGroup * param_1, Vector3 * param_2, float param_3, Vector3 * param_4, int param_5, TransformGroup * param_6, bool param_7)


/* ProceduralPlacementProjectObjectsMask::ProceduralPlacementRaycastReport::onHit(TransformGroup*,
   Vector3 const&, float, Vector3 const&, int, TransformGroup*, bool) */

undefined8
ProceduralPlacementProjectObjectsMask::ProceduralPlacementRaycastReport::onHit
          (TransformGroup *param_1,Vector3 *param_2,float param_3,Vector3 *param_4,int param_5,
          TransformGroup *param_6,bool param_7)

{
  TransformGroup *pTVar1;
  long lVar2;
  float fVar3;
  
  EngineManager::getInstance();
  pTVar1 = (TransformGroup *)Renderer::getRootNode();
  lVar2 = ProceduralPlacementManager::getTerrainNode(pTVar1);
  fVar3 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                           ((BaseTerrain *)(lVar2 + 0x170),
                            *(float *)param_4 / *(float *)(lVar2 + 0x218) +
                            *(float *)(lVar2 + 0x204),
                            *(float *)(param_4 + 8) / *(float *)(lVar2 + 0x218) +
                            *(float *)(lVar2 + 0x204));
  if (param_3 < 1000.0 - fVar3) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return 1;
}


