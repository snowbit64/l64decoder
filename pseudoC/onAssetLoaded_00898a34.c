// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onAssetLoaded
// Entry Point: 00898a34
// Size: 28 bytes
// Signature: undefined __thiscall onAssetLoaded(PedestrianData * this, TransformGroup * param_1, I3DAssetPtr * param_2)


/* PedestrianData::onAssetLoaded(TransformGroup*, I3DAssetPtr*) */

void __thiscall
PedestrianData::onAssetLoaded(PedestrianData *this,TransformGroup *param_1,I3DAssetPtr *param_2)

{
  if (this + 0x348 != (PedestrianData *)param_2) {
    return;
  }
  ScenegraphNode::setVisibility((ScenegraphNode *)param_1,false);
  return;
}


