// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onAssetLoaded
// Entry Point: 0071ba9c
// Size: 28 bytes
// Signature: undefined __thiscall onAssetLoaded(TrafficSystem * this, TransformGroup * param_1, I3DAssetPtr * param_2)


/* TrafficSystem::onAssetLoaded(TransformGroup*, I3DAssetPtr*) */

void __thiscall
TrafficSystem::onAssetLoaded(TrafficSystem *this,TransformGroup *param_1,I3DAssetPtr *param_2)

{
  if (this + 0x70 != (TrafficSystem *)param_2) {
    return;
  }
  this[0xb0] = (TrafficSystem)0x1;
  return;
}


