// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pair<char_const*&,TerrainLayerTransformGroupDesc&,false>
// Entry Point: 0093debc
// Size: 124 bytes
// Signature: undefined __thiscall pair<char_const*&,TerrainLayerTransformGroupDesc&,false>(pair<char_const*,TerrainLayerTransformGroupDesc> * this, char * * param_1, TerrainLayerTransformGroupDesc * param_2)


/* std::__ndk1::pair<char const*, TerrainLayerTransformGroupDesc>::pair<char const*&,
   TerrainLayerTransformGroupDesc&, false>(char const*&, TerrainLayerTransformGroupDesc&) */

void __thiscall
std::__ndk1::pair<char_const*,TerrainLayerTransformGroupDesc>::
pair<char_const*&,TerrainLayerTransformGroupDesc&,false>
          (pair<char_const*,TerrainLayerTransformGroupDesc> *this,char **param_1,
          TerrainLayerTransformGroupDesc *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(char **)this = *param_1;
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar1;
  memcpy(this + 0x30,param_2 + 0x28,0x268);
  vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>>
  ::vector((vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>>
            *)(this + 0x298),(vector *)(param_2 + 0x290));
                    /* try { // try from 0093df20 to 0093df23 has its CatchHandler @ 0093df38 */
  vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>>
  ::vector((vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>>
            *)(this + 0x2b0),(vector *)(param_2 + 0x2a8));
  return;
}


