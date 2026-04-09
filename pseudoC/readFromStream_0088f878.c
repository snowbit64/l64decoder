// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readFromStream
// Entry Point: 0088f878
// Size: 8 bytes
// Signature: undefined __thiscall readFromStream(DensityMapEntity * this, GsBitStream * param_1)


/* DensityMapEntity::readFromStream(GsBitStream*) */

void __thiscall DensityMapEntity::readFromStream(DensityMapEntity *this,GsBitStream *param_1)

{
  DensityMap::readFromStream(*(DensityMap **)(this + 0x20),param_1);
  return;
}


