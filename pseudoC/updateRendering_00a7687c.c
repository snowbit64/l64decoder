// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 00a7687c
// Size: 476 bytes
// Signature: undefined __cdecl updateRendering(float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* TerrainTransformGroup::updateRendering(float, SharedRenderArgs const*, RenderStats&) */

void TerrainTransformGroup::updateRendering
               (float param_1,SharedRenderArgs *param_2,RenderStats *param_3)

{
  BaseTerrain *this;
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  GsShape *this_00;
  MaterialManager *this_01;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_88;
  float fStack_84;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  this = (BaseTerrain *)(param_2 + 0x170);
  local_68 = *(long *)(lVar3 + 0x28);
  BaseTerrain::updateLodTexture(this,*(IRenderDevice **)param_3,false);
  BaseTerrain::updateHeightMapTexture(this,*(IRenderDevice **)param_3);
  GeoMipMappingTerrain::updateGeometryLod
            ((GeoMipMappingTerrain *)this,(Vector3 *)(param_3 + 0x60),*(float *)(param_3 + 0x74),
             (bool)param_3[0x26]);
  iVar2 = *(int *)(param_2 + 0x448);
  lVar4 = EngineManager::getInstance();
  if (iVar2 != *(int *)(lVar4 + 0x210)) {
    lVar5 = EngineManager::getInstance();
    lVar4 = *(long *)(param_2 + 0x28);
    uVar6 = *(long *)(param_2 + 0x30) - lVar4;
    *(undefined4 *)(param_2 + 0x448) = *(undefined4 *)(lVar5 + 0x210);
    if ((int)(uVar6 >> 3) != 0) {
      lVar5 = 0;
      while( true ) {
        this_00 = *(GsShape **)(lVar4 + lVar5);
        if (((byte)this_00[0x11] >> 4 & 1) != 0) {
          plVar1 = (long *)(this_00 + 0x178);
          if (*(short *)(this_00 + 0x196) != 1) {
            plVar1 = *(long **)(this_00 + 0x178);
          }
          if (*plVar1 == *(long *)(param_2 + 0x4d0)) {
            GsShape::removeMaterial(this_00,0);
          }
        }
        if ((uVar6 >> 3 & 0xffffffff) * 8 + -8 == lVar5) break;
        lVar4 = *(long *)(param_2 + 0x28);
        lVar5 = lVar5 + 8;
      }
    }
    this_01 = (MaterialManager *)MaterialManager::getInstance();
    MaterialManager::releaseMaterial(this_01,*(GsMaterial **)(param_2 + 0x4d0));
    *(undefined8 *)(param_2 + 0x4d0) = 0;
    createMaterials((TerrainTransformGroup *)param_2,*(IRenderDevice **)param_3);
  }
  fVar7 = (float)BaseTerrain::getLodBlendStartDynamic();
  fVar8 = (float)BaseTerrain::getLodBlendEndDynamic();
  fVar9 = *(float *)(param_2 + 0x2c0);
  local_88 = (float)BaseTerrain::getDetailLodBlendDelta();
  local_88 = fVar9 - local_88;
  fStack_6c = 1.0 / (fVar8 - fVar7);
  fStack_84 = 1.0 / (*(float *)(param_2 + 0x2c0) - local_88);
  uStack_98 = 0x3d92492541900000;
  local_a0 = 0x3c23d70a42c80000;
  uStack_80 = 0x42c8000000000000;
  local_78 = local_88;
  fStack_74 = fStack_84;
  local_70 = fVar7;
  GsMaterial::setCustomParameter
            (*(GsMaterial **)(param_2 + 0x4d0),*(uint *)(param_2 + 0x500),&local_78);
  GsMaterial::setCustomParameter
            (*(GsMaterial **)(param_2 + 0x4d0),*(uint *)(param_2 + 0x504),(float *)&local_a0);
  *(undefined4 *)(param_2 + 0x4e8) = *(undefined4 *)(param_2 + 0x500);
  *(undefined8 *)(param_2 + 0x4f4) = uStack_80;
  *(ulong *)(param_2 + 0x4ec) = CONCAT44(fStack_84,local_88);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


