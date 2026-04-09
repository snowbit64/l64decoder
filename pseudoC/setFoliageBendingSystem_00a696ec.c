// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFoliageBendingSystem
// Entry Point: 00a696ec
// Size: 88 bytes
// Signature: undefined __thiscall setFoliageBendingSystem(FoliageTransformGroup * this, FoliageBendingSystem * param_1)


/* FoliageTransformGroup::setFoliageBendingSystem(FoliageBendingSystem*) */

void __thiscall
FoliageTransformGroup::setFoliageBendingSystem
          (FoliageTransformGroup *this,FoliageBendingSystem *param_1)

{
  if (param_1 != (FoliageBendingSystem *)0x0) {
    *(FoliageBendingSystem **)(this + 0x270) = param_1;
    FoliageBendingSystem::configureDensityMap
              (param_1,*(DensityMap **)(this + 0x218),*(DensityMapModifier **)(this + 0x220),
               *(TerrainTransformGroup **)(this + 0x1f8));
    FoliageLayerGraphics::configureFoliageBendingSystem
              (*(FoliageLayerGraphics **)(this + 0x230),param_1,*(DensityMap **)(this + 0x218));
    return;
  }
  *(undefined8 *)(this + 0x270) = 0;
  return;
}


