// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeUpdateStream
// Entry Point: 008ec5e4
// Size: 8 bytes
// Signature: undefined __thiscall writeUpdateStream(BaseTerrain * this, GsBitStream * param_1, uint param_2, Vector3 * param_3, uint param_4)


/* BaseTerrain::writeUpdateStream(GsBitStream*, unsigned int, Vector3 const&, unsigned int) */

void __thiscall
BaseTerrain::writeUpdateStream
          (BaseTerrain *this,GsBitStream *param_1,uint param_2,Vector3 *param_3,uint param_4)

{
  BaseTerrainSyncer::writeServerUpdateToStream
            (*(BaseTerrainSyncer **)(this + 0x170),param_1,param_2,param_3,param_4);
  return;
}


