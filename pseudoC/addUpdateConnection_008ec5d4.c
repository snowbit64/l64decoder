// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addUpdateConnection
// Entry Point: 008ec5d4
// Size: 8 bytes
// Signature: undefined __thiscall addUpdateConnection(BaseTerrain * this, uint param_1)


/* BaseTerrain::addUpdateConnection(unsigned int) */

void __thiscall BaseTerrain::addUpdateConnection(BaseTerrain *this,uint param_1)

{
  BaseTerrainSyncer::addConnection(*(BaseTerrainSyncer **)(this + 0x170),param_1);
  return;
}


