// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTerrainTransformGroup
// Entry Point: 0098af58
// Size: 8 bytes
// Signature: undefined __thiscall setTerrainTransformGroup(PlayerCenteredCollisionSystem * this, TerrainTransformGroup * param_1)


/* PlayerCenteredCollisionSystem::setTerrainTransformGroup(TerrainTransformGroup*) */

void __thiscall
PlayerCenteredCollisionSystem::setTerrainTransformGroup
          (PlayerCenteredCollisionSystem *this,TerrainTransformGroup *param_1)

{
  *(TerrainTransformGroup **)(this + 8) = param_1;
  return;
}


