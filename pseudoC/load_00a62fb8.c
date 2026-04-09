// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00a62fb8
// Size: 44 bytes
// Signature: undefined __thiscall load(FoliageSystem * this, STREAM_QUEUE param_1)


/* FoliageSystem::load(StreamManager::STREAM_QUEUE) */

void __thiscall FoliageSystem::load(FoliageSystem *this,STREAM_QUEUE param_1)

{
  createFoliageTransformGroups(this,param_1);
  applyDistanceTextures(this,*(TerrainLodTexture **)(*(long *)(this + 8) + 0x248));
  return;
}


