// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupCustomShaderVariation
// Entry Point: 00a74504
// Size: 464 bytes
// Signature: undefined __thiscall setupCustomShaderVariation(TerrainLayerTransformGroup * this, GsMaterial * param_1, uint param_2)


/* TerrainLayerTransformGroup::setupCustomShaderVariation(GsMaterial*, unsigned int) */

void __thiscall
TerrainLayerTransformGroup::setupCustomShaderVariation
          (TerrainLayerTransformGroup *this,GsMaterial *param_1,uint param_2)

{
  TerrainLayerTransformGroup *pTVar1;
  long lVar2;
  CustomShader *this_00;
  CustomShader *pCVar3;
  ulong uVar4;
  Texture *pTVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (CustomShader *)GsMaterial::getCustomShader();
  if (this_00 != (CustomShader *)0x0) {
    GsMaterial::setCustomShaderVariation(param_1,param_2,true);
    pTVar5 = *(Texture **)(this + 0x6c0);
    if (pTVar5 != (Texture *)0x0) {
      pCVar3 = (CustomShader *)GsMaterial::getCustomShader();
      pTVar1 = this + 0x661;
      if (((byte)this[0x660] & 1) != 0) {
        pTVar1 = *(TerrainLayerTransformGroup **)(this + 0x670);
      }
      uVar4 = CustomShader::getTextureIndex
                        (pCVar3,*(uint *)(param_1 + 0x88),(char *)pTVar1,(uint *)&local_58);
      if ((uVar4 & 1) != 0) {
        GsMaterial::setCustomTexture(param_1,(uint)local_58,pTVar5);
      }
    }
    pTVar5 = *(Texture **)(this + 0x6c8);
    if (pTVar5 != (Texture *)0x0) {
      pCVar3 = (CustomShader *)GsMaterial::getCustomShader();
      pTVar1 = this + 0x679;
      if (((byte)this[0x678] & 1) != 0) {
        pTVar1 = *(TerrainLayerTransformGroup **)(this + 0x688);
      }
      uVar4 = CustomShader::getTextureIndex
                        (pCVar3,*(uint *)(param_1 + 0x88),(char *)pTVar1,(uint *)&local_58);
      if ((uVar4 & 1) != 0) {
        GsMaterial::setCustomTexture(param_1,(uint)local_58,pTVar5);
      }
    }
    lVar6 = *(long *)(this + 0x1f8);
    uVar4 = CustomShader::getParameterIndex
                      (this_00,*(uint *)(param_1 + 0x88),"terrainSizeInvSizeScaleXZScaleY",&local_5c
                      );
    if ((uVar4 & 1) != 0) {
      local_58 = CONCAT44(1.0 / (float)(ulong)(uint)(*(int *)(this + 0x210) * *(int *)(this + 0x20c)
                                                    ),
                          (float)(ulong)(uint)(*(int *)(this + 0x210) * *(int *)(this + 0x20c)));
      fVar7 = (float)BaseTerrain::getUnitsPerPixel();
      fVar8 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x208));
      local_50 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20c));
      fStack_4c = *(float *)(lVar6 + 0x214);
      local_50 = (fVar7 * fVar8) / local_50;
      GsMaterial::setCustomParameter(param_1,local_5c,(float *)&local_58);
    }
    uVar4 = CustomShader::getParameterIndex
                      (this_00,*(uint *)(param_1 + 0x88),"alphaBlendStartEnd_densityUVScale",
                       &local_60);
    if ((uVar4 & 1) != 0) {
      lVar6 = EngineManager::getInstance();
      local_50 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x6a8));
      fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x6ac));
      local_50 = local_50 / fVar7;
      local_58 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x640) >> 0x20) *
                          *(float *)(lVar6 + 0x1cc),
                          (float)*(undefined8 *)(this + 0x640) * *(float *)(lVar6 + 0x1cc));
      fStack_4c = local_50;
      GsMaterial::setCustomParameter(param_1,local_60,(float *)&local_58);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


