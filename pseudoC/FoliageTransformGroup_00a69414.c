// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FoliageTransformGroup
// Entry Point: 00a69414
// Size: 188 bytes
// Signature: undefined __thiscall FoliageTransformGroup(FoliageTransformGroup * this, char * param_1, TerrainDetailTransformGroupDesc * param_2, TerrainTransformGroup * param_3, TerrainDataPlane * param_4, FoliageLayerGraphics * param_5, uint param_6)


/* FoliageTransformGroup::FoliageTransformGroup(char const*, TerrainDetailTransformGroupDesc const&,
   TerrainTransformGroup*, TerrainDataPlane*, FoliageLayerGraphics*, unsigned int) */

void __thiscall
FoliageTransformGroup::FoliageTransformGroup
          (FoliageTransformGroup *this,char *param_1,TerrainDetailTransformGroupDesc *param_2,
          TerrainTransformGroup *param_3,TerrainDataPlane *param_4,FoliageLayerGraphics *param_5,
          uint param_6)

{
  uint uVar1;
  void *pvVar2;
  float fVar3;
  
  TerrainDetailTransformGroup::TerrainDetailTransformGroup
            ((TerrainDetailTransformGroup *)this,param_1,param_2,param_3,param_4,false);
  *(FoliageLayerGraphics **)(this + 0x230) = param_5;
  *(uint *)(this + 0x238) = param_6;
  fVar3 = *(float *)(param_5 + 0x9c);
  *(undefined ***)this = &PTR__FoliageTransformGroup_00fe3ad8;
  *(undefined ***)(this + 0x158) = &PTR__FoliageTransformGroup_00fe3b88;
  *(undefined ***)(this + 0x1e0) = &PTR__FoliageTransformGroup_00fe3bb0;
  *(undefined ***)(this + 0x1f0) = &PTR__FoliageTransformGroup_00fe3be0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x400;
                    /* try { // try from 00a69478 to 00a694a7 has its CatchHandler @ 00a694d0 */
  LocalGeometryTransformGroup::setClippingHalfCellSize((LocalGeometryTransformGroup *)this,fVar3);
  LocalGeometryTransformGroup::configureFarDistance
            ((LocalGeometryTransformGroup *)this,*(float *)(*(long *)(this + 0x230) + 0xa8));
  uVar1 = *(uint *)(*(long *)(this + 0x230) + 0xa0);
  *(uint *)(this + 0x23c) = uVar1;
  pvVar2 = operator_new__((ulong)uVar1 * 0x14);
  *(void **)(this + 0x240) = pvVar2;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  return;
}


