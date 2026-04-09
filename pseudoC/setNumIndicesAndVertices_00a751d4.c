// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNumIndicesAndVertices
// Entry Point: 00a751d4
// Size: 8 bytes
// Signature: undefined __thiscall setNumIndicesAndVertices(TerrainDetailGeometry * this, uint param_1, uint param_2)


/* TerrainDetailGeometry::setNumIndicesAndVertices(unsigned int, unsigned int) */

void __thiscall
TerrainDetailGeometry::setNumIndicesAndVertices
          (TerrainDetailGeometry *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x70) = param_1;
  *(uint *)(this + 0x74) = param_2;
  return;
}


