// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStream
// Entry Point: 0088f880
// Size: 8 bytes
// Signature: undefined __thiscall writeToStream(DensityMapEntity * this, GsBitStream * param_1)


/* DensityMapEntity::writeToStream(GsBitStream*) */

void __thiscall DensityMapEntity::writeToStream(DensityMapEntity *this,GsBitStream *param_1)

{
  DensityMap::writeToStream(*(DensityMap **)(this + 0x20),param_1);
  return;
}


