// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: baseInitializationGraphics
// Entry Point: 008e4ff0
// Size: 396 bytes
// Signature: undefined __thiscall baseInitializationGraphics(BaseTerrain * this, IRenderDevice * param_1)


/* BaseTerrain::baseInitializationGraphics(IRenderDevice*) */

undefined4 __thiscall
BaseTerrain::baseInitializationGraphics(BaseTerrain *this,IRenderDevice *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  Texture *this_00;
  ResourceManager *this_01;
  undefined4 uVar4;
  char acStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = buildTextureArray(this,param_1);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = TerrainLodTexture::createLodTexture
                        (*(IRenderDevice **)(this + 0xd8),(BaseTerrain *)param_1), (uVar2 & 1) != 0)
     ) {
    createLodNormalMap(this,param_1);
    createHeightMapTexture(this,param_1);
    uVar2 = createLayerParametersTexture(this,param_1);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(this + 0x58) == *(long *)(this + 0x50)) {
LAB_008e5074:
        lVar3 = ProceduralPlacementManager::getInstance();
        if ((int)((ulong)(*(long *)(lVar3 + 0x58) - *(long *)(lVar3 + 0x50)) >> 3) != 0) {
          EngineManager::getInstance();
          uVar2 = EngineManager::getAllowTerrainInfoLayerRendering();
          if ((uVar2 & 1) != 0) goto LAB_008e50b4;
        }
        lVar3 = ProceduralPlacementManager::getInstance();
        if ((int)((ulong)(*(long *)(lVar3 + 0x70) - *(long *)(lVar3 + 0x68)) >> 3) != 0) {
          EngineManager::getInstance();
          uVar2 = EngineManager::getAllowTerrainInfoLayerRendering();
          if ((uVar2 & 1) != 0) goto LAB_008e50b4;
        }
        uVar4 = 1;
      }
      else {
        EngineManager::getInstance();
        uVar2 = EngineManager::getAllowTerrainInfoLayerRendering();
        if ((uVar2 & 1) == 0) goto LAB_008e5074;
LAB_008e50b4:
        FUN_008e5d60(acStack_78);
        DAT_0107e094 = DAT_0107e094 + 1;
        this_00 = (Texture *)operator_new(0x78);
                    /* try { // try from 008e50dc to 008e50f3 has its CatchHandler @ 008e517c */
        Texture::Texture(this_00,acStack_78,2,5,true,0);
        *(Texture **)(this + 0xe8) = this_00;
        uVar4 = 1;
        FUN_00f276d0(1,this_00 + 8);
        this_01 = (ResourceManager *)ResourceManager::getInstance();
        ResourceManager::add(this_01,*(Resource **)(this + 0xe8),(ResourceDesc *)0x0,false);
        updateInfoLayerRenderData(this,0,1,true,0,0,0,0);
      }
      goto LAB_008e5148;
    }
  }
  uVar4 = 0;
LAB_008e5148:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


