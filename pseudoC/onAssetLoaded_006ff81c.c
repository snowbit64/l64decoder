// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onAssetLoaded
// Entry Point: 006ff81c
// Size: 40 bytes
// Signature: undefined __thiscall onAssetLoaded(AnimalSource * this, TransformGroup * param_1, I3DAssetPtr * param_2)


/* Animal::AnimalSource::onAssetLoaded(TransformGroup*, I3DAssetPtr*) */

void __thiscall
Animal::AnimalSource::onAssetLoaded(AnimalSource *this,TransformGroup *param_1,I3DAssetPtr *param_2)

{
  if ((this + 0x18 != (AnimalSource *)param_2) && (this + 0x38 != (AnimalSource *)param_2)) {
    return;
  }
  ScenegraphNode::setVisibility((ScenegraphNode *)param_1,false);
  return;
}


