// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markNetworkUpdateRegionDirty
// Entry Point: 008ec5cc
// Size: 8 bytes
// Signature: undefined __thiscall markNetworkUpdateRegionDirty(BaseTerrain * this, int param_1, int param_2, uint param_3, uint param_4)


/* BaseTerrain::markNetworkUpdateRegionDirty(int, int, unsigned int, unsigned int) */

void __thiscall
BaseTerrain::markNetworkUpdateRegionDirty
          (BaseTerrain *this,int param_1,int param_2,uint param_3,uint param_4)

{
  BaseTerrainSyncer::markVertexRegionDirty
            (*(BaseTerrainSyncer **)(this + 0x170),param_1,param_2,param_3,param_4);
  return;
}


