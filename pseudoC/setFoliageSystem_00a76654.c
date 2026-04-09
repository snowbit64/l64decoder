// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFoliageSystem
// Entry Point: 00a76654
// Size: 68 bytes
// Signature: undefined __thiscall setFoliageSystem(TerrainTransformGroup * this, FoliageSystem * param_1)


/* TerrainTransformGroup::setFoliageSystem(FoliageSystem*) */

void __thiscall
TerrainTransformGroup::setFoliageSystem(TerrainTransformGroup *this,FoliageSystem *param_1)

{
  FoliageSystem *this_00;
  
  this_00 = *(FoliageSystem **)(this + 0x558);
  if (this_00 != (FoliageSystem *)0x0) {
    FoliageSystem::~FoliageSystem(this_00);
    operator_delete(this_00);
  }
  *(FoliageSystem **)(this + 0x558) = param_1;
  return;
}


