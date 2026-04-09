// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTerrainDetailTransformGroupDesc
// Entry Point: 00a64f34
// Size: 44 bytes
// Signature: undefined __thiscall createTerrainDetailTransformGroupDesc(Layer * this, DensityMap * param_1, float param_2, uint param_3, uint param_4, TerrainDetailTransformGroupDesc * param_5)


/* FoliageSystemDesc::Layer::createTerrainDetailTransformGroupDesc(DensityMap*, float, unsigned int,
   unsigned int, TerrainDetailTransformGroupDesc&) const */

undefined8 __thiscall
FoliageSystemDesc::Layer::createTerrainDetailTransformGroupDesc
          (Layer *this,DensityMap *param_1,float param_2,uint param_3,uint param_4,
          TerrainDetailTransformGroupDesc *param_5)

{
  undefined8 uVar1;
  
  *(uint *)(param_5 + 4) = param_3;
  *(float *)param_5 = param_2;
  *(DensityMap **)(param_5 + 0x10) = param_1;
  uVar1 = *(undefined8 *)(this + 0x4c);
  *(uint *)(param_5 + 8) = param_4;
  *(undefined8 *)(param_5 + 0x18) = uVar1;
  *(undefined4 *)(param_5 + 0x20) = *(undefined4 *)(this + 0x48);
  return 1;
}


