// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onAssetLoaded
// Entry Point: 0071bab8
// Size: 28 bytes
// Signature: undefined __thiscall onAssetLoaded(TrafficSystem * this, TransformGroup * param_1, I3DAssetPtr * param_2)


/* non-virtual thunk to TrafficSystem::onAssetLoaded(TransformGroup*, I3DAssetPtr*) */

void __thiscall
TrafficSystem::onAssetLoaded(TrafficSystem *this,TransformGroup *param_1,I3DAssetPtr *param_2)

{
  if (this + 0x40 != (TrafficSystem *)param_2) {
    return;
  }
  this[0x80] = (TrafficSystem)0x1;
  return;
}


