// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeoMipMappingTerrain
// Entry Point: 008ef00c
// Size: 208 bytes
// Signature: undefined __thiscall GeoMipMappingTerrain(GeoMipMappingTerrain * this)


/* GeoMipMappingTerrain::GeoMipMappingTerrain() */

void __thiscall GeoMipMappingTerrain::GeoMipMappingTerrain(GeoMipMappingTerrain *this)

{
  BaseTerrain::BaseTerrain((BaseTerrain *)this);
                    /* try { // try from 008ef028 to 008ef02f has its CatchHandler @ 008ef100 */
  Streamable::Streamable((Streamable *)(this + 0x178));
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR__GeoMipMappingTerrain_00fde710;
  *(undefined ***)(this + 0x178) = &PTR__GeoMipMappingTerrain_00fde740;
                    /* try { // try from 008ef058 to 008ef05b has its CatchHandler @ 008ef0dc */
  TerrainPatchOccluderManager::Parameters::Parameters((Parameters *)(this + 0x274));
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x26c) = 0x144400000;
  return;
}


