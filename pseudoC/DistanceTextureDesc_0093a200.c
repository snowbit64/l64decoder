// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DistanceTextureDesc
// Entry Point: 0093a200
// Size: 68 bytes
// Signature: undefined __thiscall ~DistanceTextureDesc(DistanceTextureDesc * this)


/* TerrainLayerTransformGroupDesc::DistanceTextureDesc::~DistanceTextureDesc() */

void __thiscall
TerrainLayerTransformGroupDesc::DistanceTextureDesc::~DistanceTextureDesc(DistanceTextureDesc *this)

{
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


