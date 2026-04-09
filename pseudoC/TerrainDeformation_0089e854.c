// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TerrainDeformation
// Entry Point: 0089e854
// Size: 132 bytes
// Signature: undefined __thiscall TerrainDeformation(TerrainDeformation * this, BaseTerrain * param_1)


/* TerrainDeformation::TerrainDeformation(BaseTerrain*) */

void __thiscall
TerrainDeformation::TerrainDeformation(TerrainDeformation *this,BaseTerrain *param_1)

{
  Entity::Entity((Entity *)this,"TerrainDeformation",true);
  this[0x28] = (TerrainDeformation)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined ***)this = &PTR__TerrainDeformation_00fdd340;
  *(undefined ***)(this + 0x20) = &PTR__TerrainDeformation_00fdd368;
                    /* try { // try from 0089e8ac to 0089e8af has its CatchHandler @ 0089e920 */
  Plane::Plane((Plane *)(this + 0xc4));
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(BaseTerrain **)(this + 0x38) = param_1;
                    /* try { // try from 0089e8c0 to 0089e8c7 has its CatchHandler @ 0089e8d8 */
  init();
  return;
}


