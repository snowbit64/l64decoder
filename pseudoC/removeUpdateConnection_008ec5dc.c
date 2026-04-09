// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeUpdateConnection
// Entry Point: 008ec5dc
// Size: 8 bytes
// Signature: undefined __thiscall removeUpdateConnection(BaseTerrain * this, uint param_1)


/* BaseTerrain::removeUpdateConnection(unsigned int) */

void __thiscall BaseTerrain::removeUpdateConnection(BaseTerrain *this,uint param_1)

{
  BaseTerrainSyncer::removeConnection(*(BaseTerrainSyncer **)(this + 0x170),param_1);
  return;
}


