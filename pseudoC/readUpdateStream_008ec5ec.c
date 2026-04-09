// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readUpdateStream
// Entry Point: 008ec5ec
// Size: 8 bytes
// Signature: undefined __thiscall readUpdateStream(BaseTerrain * this, GsBitStream * param_1)


/* BaseTerrain::readUpdateStream(GsBitStream*) */

void __thiscall BaseTerrain::readUpdateStream(BaseTerrain *this,GsBitStream *param_1)

{
  BaseTerrainSyncer::readServerUpdateFromStream(*(BaseTerrainSyncer **)(this + 0x170),param_1);
  return;
}


