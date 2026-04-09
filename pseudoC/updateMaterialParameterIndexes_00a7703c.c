// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateMaterialParameterIndexes
// Entry Point: 00a7703c
// Size: 376 bytes
// Signature: undefined __thiscall updateMaterialParameterIndexes(TerrainTransformGroup * this, CustomShader * param_1, uint param_2)


/* TerrainTransformGroup::updateMaterialParameterIndexes(CustomShader*, unsigned int) */

void __thiscall
TerrainTransformGroup::updateMaterialParameterIndexes
          (TerrainTransformGroup *this,CustomShader *param_1,uint param_2)

{
  CustomShader::getParameterIndex(param_1,param_2,"terrainLodBlendInfos",(uint *)(this + 0x500));
  CustomShader::getParameterIndex(param_1,param_2,"terrainLodBlendInfos2",(uint *)(this + 0x504));
  CustomShader::getParameterIndex
            (param_1,param_2,"terrainSizeInvSizeScaleXZScaleY",(uint *)(this + 0x508));
  CustomShader::getParameterIndex(param_1,param_2,"terrainPatchOffset",(uint *)(this + 0x50c));
  CustomShader::getParameterIndex
            (param_1,param_2,"terrainDetailMapVirtualSize",(uint *)(this + 0x518));
  CustomShader::getParameterIndex(param_1,param_2,"terrainDetailShifts",(uint *)(this + 0x51c));
  CustomShader::getTextureIndex(param_1,param_2,"terrainHeightMap",(uint *)(this + 0x524));
  CustomShader::getTextureIndex(param_1,param_2,"lodDiffuseMap",(uint *)(this + 0x520));
  CustomShader::getTextureIndex(param_1,param_2,"lodTypeMap",(uint *)(this + 0x528));
  CustomShader::getTextureIndex(param_1,param_2,"lodNormalMap",(uint *)(this + 0x52c));
  CustomShader::getTextureIndex(param_1,param_2,"layerParameters",(uint *)(this + 0x530));
  CustomShader::getTextureIndex(param_1,param_2,"infoLayerMap",(uint *)(this + 0x538));
  CustomShader::getTextureIndex(param_1,param_2,"terrainDetailMap",(uint *)(this + 0x534));
  CustomShader::getTextureIndex(param_1,param_2,"heightMap",(uint *)(this + 0x53c));
  return;
}


