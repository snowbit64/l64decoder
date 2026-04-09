// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reInitialization
// Entry Point: 008e4ef8
// Size: 140 bytes
// Signature: undefined __thiscall reInitialization(BaseTerrain * this, bool param_1, bool param_2)


/* BaseTerrain::reInitialization(bool, bool) */

undefined8 __thiscall BaseTerrain::reInitialization(BaseTerrain *this,bool param_1,bool param_2)

{
  ulong uVar1;
  IRenderDevice *pIVar2;
  undefined8 uVar3;
  
  *(float *)(this + 0x94) = (float)(ulong)(*(int *)(this + 0x90) - 1) * 0.5;
  if (param_1) {
    if (param_2) goto LAB_008e4f58;
  }
  else {
    uVar1 = TerrainLodTexture::createLodTextureTypeMapSys
                      (*(TerrainLodTexture **)(this + 0xd8),this,
                       *(BaseTerrainSyncer **)(this + 0x170));
    if (((uVar1 & 1) == 0) || (param_2)) {
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      goto LAB_008e4f58;
    }
  }
  createLodNormalMapSys();
LAB_008e4f58:
  RenderDeviceManager::getInstance();
  pIVar2 = (IRenderDevice *)RenderDeviceManager::getCurrentRenderDevice();
  uVar3 = baseInitializationGraphics(this,pIVar2);
  return uVar3;
}


